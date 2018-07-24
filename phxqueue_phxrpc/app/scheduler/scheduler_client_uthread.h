/*
Tencent is pleased to support the open source community by making PhxQueue available.
Copyright (C) 2017 THL A29 Limited, a Tencent company. All rights reserved.
Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

<https://opensource.org/licenses/BSD-3-Clause>

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/



/* scheduler_client.h

 Generated by phxrpc_pb2client from scheduler.proto

*/

#pragma once

#include "phxrpc/network.h"
#include "phxrpc/rpc.h"

#include "scheduler.pb.h"


class SchedulerClientUThread {
  public:
    static bool Init(const char *config_file);

    static const char *GetPackageName();

    SchedulerClientUThread(phxrpc::UThreadEpollScheduler *uthread_scheduler);
    virtual ~SchedulerClientUThread();

    int PHXEcho(const google::protobuf::StringValue &req,
                google::protobuf::StringValue *resp);

    int PHXBatchEcho(const google::protobuf::StringValue &req,
                     google::protobuf::StringValue *resp);

    int GetAddrScale(const phxqueue::comm::proto::GetAddrScaleRequest &req,
                     phxqueue::comm::proto::GetAddrScaleResponse *resp);

  private:
    phxrpc::UThreadEpollScheduler *uthread_scheduler_;
};

