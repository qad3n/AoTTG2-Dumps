// Type: Anticheat.BallotBox
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Anticheat/BallotBox.cs
// Prior real C# source (older reference): Assets/Scripts/Anticheat/AnticheatManager.cs
// --------------------------------

// Anticheat.BallotBox.Result$$.ctor
// il2cpp: void Anticheat_BallotBox_Result___ctor (Anticheat_BallotBox_Result_o __this, int32_t type, System_ValueTuple_int__int__o progress, Photon_Realtime_Player_o* target, System_TimeSpan_o cooldown, const MethodInfo* method);
// 0x5e2dd90

void Anticheat_BallotBox_Result___ctor
               (Anticheat_BallotBox_Result_o *__this,int32_t type,System_ValueTuple_int__int__o progress,
               Photon_Realtime_Player_o *target,System_TimeSpan_o cooldown,MethodInfo *method)

{
  (__this->fields).type = type;
  (__this->fields).progress.fields = progress.fields;
  (__this->fields).target = target;
  Il2CppCodeGenWriteBarrier(&(__this->fields).target);
  (__this->fields).cooldown.fields._ticks = (int64_t)cooldown.fields._ticks;
  return;
}


// Anticheat.BallotBox.Result$$Success
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__Success (int32_t required, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x5e2dbb0

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__Success
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,int32_t required,
          Photon_Realtime_Player_o *target,MethodInfo *method)

{
  System_ValueTuple_int__int__Fields SStack_20;
  
  if (Il2CppMethodInitialized_0754852c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_int_int_ctor);
    Il2CppMethodInitialized_0754852c = '\x01';
  }
  SStack_20.Item1 = 0;
  SStack_20.Item2 = 0;
  System_ValueTuple_int__int____ctor
            ((System_ValueTuple_int__int__o *)&SStack_20,required,required,
             (MethodInfo_452D1B0 *)MethodInfo_System_ValueTuple_int_int_ctor);
  *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = 0;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).type = 0;
  (__return_storage_ptr__->fields).progress.fields = SStack_20;
  (__return_storage_ptr__->fields).target = target;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).target);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$InsufficientVotes
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__InsufficientVotes (System_ValueTuple_int__int__o progress, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x5e2dc40

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__InsufficientVotes
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,System_ValueTuple_int__int__o progress,
          Photon_Realtime_Player_o *target,MethodInfo *method)

{
  *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = 0;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).type = 1;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  (__return_storage_ptr__->fields).target = target;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).target);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$ExceededConcurrentVotesLimit
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__ExceededConcurrentVotesLimit (System_ValueTuple_int__int__o progress, const MethodInfo* method);
// 0x5e2db00

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__ExceededConcurrentVotesLimit
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,System_ValueTuple_int__int__o progress,
          MethodInfo *method)

{
  *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = 0;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).type = 2;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).target);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$UnderCooldown
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__UnderCooldown (System_ValueTuple_int__int__o progress, System_TimeSpan_o cooldown, const MethodInfo* method);
// 0x5e2d8c0

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__UnderCooldown
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,System_ValueTuple_int__int__o progress,
          System_TimeSpan_o cooldown,MethodInfo *method)

{
  *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = 0;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).type = 3;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).target);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = (int64_t)cooldown.fields._ticks;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$MissingAuthority
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__MissingAuthority (System_ValueTuple_int__int__o progress, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x5e2d750

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__MissingAuthority
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,System_ValueTuple_int__int__o progress,
          Photon_Realtime_Player_o *target,MethodInfo *method)

{
  *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = 0;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).type = 4;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  (__return_storage_ptr__->fields).target = target;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).target);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$InvalidTarget
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__InvalidTarget (System_ValueTuple_int__int__o progress, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x5e2d790

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__InvalidTarget
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,System_ValueTuple_int__int__o progress,
          Photon_Realtime_Player_o *target,MethodInfo *method)

{
  *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = 0;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).type = 5;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  (__return_storage_ptr__->fields).target = target;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).target);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$get_IsSuccess
// il2cpp: bool Anticheat_BallotBox_Result__get_IsSuccess (Anticheat_BallotBox_Result_o __this, const MethodInfo* method);
// 0x5e2cf30

bool Anticheat_BallotBox_Result__get_IsSuccess(Anticheat_BallotBox_Result_o *__this,MethodInfo *method)

{
  return (__this->fields).type == 0;
}


// Anticheat.BallotBox.Result$$ToString
// il2cpp: System_String_o* Anticheat_BallotBox_Result__ToString (Anticheat_BallotBox_Result_o __this, const MethodInfo* method);
// 0x5e2ddc0

System_String_o *
Anticheat_BallotBox_Result__ToString(Anticheat_BallotBox_Result_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *arg2;
  System_String_o *str1;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  int32_t color;
  int32_t local_34;
  double local_30;
  int32_t local_24;
  
  if (Il2CppMethodInitialized_0754852d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    il2cpp_codegen_initialize_runtime_metadata(&"Cannot vote for more than {0} players at a time ({1}/{2}).");
    il2cpp_codegen_initialize_runtime_metadata(&"Voting is limited to once every {0:N1} minutes ({1}/{2}).");
    il2cpp_codegen_initialize_runtime_metadata(&"Voted to kick {0} ({1}/{2}).");
    il2cpp_codegen_initialize_runtime_metadata(&"Unknown error.");
    il2cpp_codegen_initialize_runtime_metadata(&": invalid target.");
    il2cpp_codegen_initialize_runtime_metadata(&"Cannot kick ");
    il2cpp_codegen_initialize_runtime_metadata(&"Cannot ");
    il2cpp_codegen_initialize_runtime_metadata(&": missing authority.");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754852d = '\x01';
  }
  switch((__this->fields).type) {
  case 0:
  case 1:
    pPVar1 = (__this->fields).target;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,""
                        ,(MethodInfo *)0x0);
    local_30 = (double)CONCAT44(local_30._4_4_,(__this->fields).progress.fields.Item1);
    pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&local_30);
    local_34 = (__this->fields).progress.fields.Item2;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_34);
    pSVar4 = System_String__Format_5302ca0
                       ("Voted to kick {0} ({1}/{2}).",(Il2CppObject *)pSVar4,pIVar2,pIVar3,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    color = 3;
    goto label_05e2e07c;
  case 2:
    local_30 = (double)CONCAT44(local_30._4_4_,1);
    pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&local_30);
    local_34 = (__this->fields).progress.fields.Item1;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_34);
    local_24 = (__this->fields).progress.fields.Item2;
    arg2 = il2cpp_vm_Object_Box(g_data_07556710,&local_24);
    ppSVar5 = &"Cannot vote for more than {0} players at a time ({1}/{2}).";
    break;
  case 3:
    if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
    }
    local_30 = System_TimeSpan__get_TotalMinutes(&(__this->fields).cooldown,(MethodInfo *)0x0);
    pIVar2 = il2cpp_vm_Object_Box(g_data_07556748,&local_30);
    local_34 = (__this->fields).progress.fields.Item1;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_34);
    local_24 = (__this->fields).progress.fields.Item2;
    arg2 = il2cpp_vm_Object_Box(g_data_07556710,&local_24);
    ppSVar5 = &"Voting is limited to once every {0:N1} minutes ({1}/{2}).";
    break;
  case 4:
    pPVar1 = (__this->fields).target;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    str1 = PhotonExtensions__GetStringProperty
                     (pPVar1,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,"",
                      (MethodInfo *)0x0);
    ppSVar5 = &": missing authority.";
    pSVar4 = "Cannot ";
    goto label_05e2e12f;
  case 5:
    pPVar1 = (__this->fields).target;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    str1 = PhotonExtensions__GetStringProperty
                     (pPVar1,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,"",
                      (MethodInfo *)0x0);
    ppSVar5 = &": invalid target.";
    pSVar4 = "Cannot kick ";
label_05e2e12f:
    pSVar4 = System_String__Concat_5301f10(pSVar4,str1,*ppSVar5,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
label_05e2e15a:
    pSVar4 = GameManagers_ChatManager__GetColorString(pSVar4,4,false,(MethodInfo *)0x0);
    return pSVar4;
  default:
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar4 = "Unknown error.";
    goto label_05e2e15a;
  }
  pSVar4 = System_String__Format_5302ca0(*ppSVar5,pIVar2,pIVar3,arg2,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  color = 4;
label_05e2e07c:
  pSVar4 = GameManagers_ChatManager__GetColorString(pSVar4,color,false,(MethodInfo *)0x0);
  return pSVar4;
}


// Anticheat.BallotBox.Ballot$$.ctor
// il2cpp: void Anticheat_BallotBox_Ballot___ctor (Anticheat_BallotBox_Ballot_o __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5e2e180

void Anticheat_BallotBox_Ballot___ctor
               (Anticheat_BallotBox_Ballot_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_DateTime_o SVar1;
  
  if (Il2CppMethodInitialized_07548530 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    Il2CppMethodInitialized_07548530 = '\x01';
  }
  (__this->fields).Voter = player;
  Il2CppCodeGenWriteBarrier((void **)__this);
  if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
  }
  SVar1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  (__this->fields).Timestamp.fields._dateData = (uint64_t)SVar1.fields._dateData;
  return;
}


// Anticheat.BallotBox.Ballot$$GetHashCode
// il2cpp: int32_t Anticheat_BallotBox_Ballot__GetHashCode (Anticheat_BallotBox_Ballot_o __this, const MethodInfo* method);
// 0x5e2e1e0

int32_t Anticheat_BallotBox_Ballot__GetHashCode(Anticheat_BallotBox_Ballot_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  
  pPVar1 = (__this->fields).Voter;
  if (pPVar1 == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (*(pPVar1->klass->vtable)._2_GetHashCode.methodPtr)
                    (pPVar1,(pPVar1->klass->vtable)._2_GetHashCode.method);
  return iVar2;
}


// Anticheat.BallotBox.Ballot$$Equals
// il2cpp: bool Anticheat_BallotBox_Ballot__Equals (Anticheat_BallotBox_Ballot_o __this, Il2CppObject* obj, const MethodInfo* method);
// 0x5e2e210

bool Anticheat_BallotBox_Ballot__Equals
               (Anticheat_BallotBox_Ballot_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (Il2CppMethodInitialized_07548531 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_BallotBox_Ballot);
    Il2CppMethodInitialized_07548531 = '\x01';
  }
  if ((obj == (Il2CppObject *)0x0) || (obj->klass != (Il2CppClass *)TypeInfo_Anticheat_BallotBox_Ballot)) {
    return false;
  }
  puVar3 = il2cpp_vm_Object_Unbox(obj);
  pPVar1 = (__this->fields).Voter;
  if (pPVar1 == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = (*(pPVar1->klass->vtable)._0_Equals.methodPtr)
                    (pPVar1,(Il2CppObject *)*puVar3,(pPVar1->klass->vtable)._0_Equals.method);
  return bVar2;
}


// Anticheat.BallotBox.Ballot$$ToString
// il2cpp: System_String_o* Anticheat_BallotBox_Ballot__ToString (Anticheat_BallotBox_Ballot_o __this, const MethodInfo* method);
// 0x5e2e290

System_String_o *
Anticheat_BallotBox_Ballot__ToString(Anticheat_BallotBox_Ballot_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *arg0;
  Il2CppObject *arg1;
  System_String_o *pSVar1;
  System_DateTime_Fields SStack_18;
  
  if (Il2CppMethodInitialized_07548532 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&"{0} ({1})");
    Il2CppMethodInitialized_07548532 = '\x01';
  }
  arg0 = (__this->fields).Voter;
  SStack_18._dateData = (__this->fields).Timestamp.fields._dateData;
  arg1 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_System_DateTime,&SStack_18);
  pSVar1 = System_String__Format_5302c50("{0} ({1})",(Il2CppObject *)arg0,arg1,(MethodInfo *)0x0);
  return pSVar1;
}


// Anticheat.BallotBox.Ballot$$op_Implicit
// il2cpp: Anticheat_BallotBox_Ballot_o Anticheat_BallotBox_Ballot__op_Implicit (Photon_Realtime_Player_o* voter, const MethodInfo* method);
// 0x5e2db40

Anticheat_BallotBox_Ballot_o
Anticheat_BallotBox_Ballot__op_Implicit(Photon_Realtime_Player_o *voter,MethodInfo *method)

{
  System_DateTime_o SVar1;
  Anticheat_BallotBox_Ballot_o AVar2;
  Photon_Realtime_Player_o *local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (Il2CppMethodInitialized_07548530 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    Il2CppMethodInitialized_07548530 = '\x01';
  }
  local_18 = voter;
  Il2CppCodeGenWriteBarrier(&local_18);
  if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
  }
  SVar1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  AVar2.fields.Timestamp.fields._dateData = SVar1.fields._dateData;
  AVar2.fields.Voter = local_18;
  return (Anticheat_BallotBox_Ballot_o)AVar2.fields;
}


// Anticheat.BallotBox$$TryCastBallot
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox__TryCastBallot (Anticheat_BallotBox_o* __this, Photon_Realtime_Player_o* voter, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x5e2c8f0
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e2ce57: mov qword ptr [rsp + 8], 0
// asm:   0x5e2ce60: lea rax, [rip + 0x1472ee9]  ; MethodInfo_System_ValueTuple_int_int_ctor
// asm:   0x5e2ce67: mov rcx, qword ptr [rax]
// asm:   0x5e2ce6a: lea rdi, [rsp + 8]
// asm:   0x5e2ce6f: mov esi, r14d
// asm:   0x5e2ce72: mov edx, r14d
// asm:   0x5e2ce75: call 0x462d1b0  ; System_ValueTuple_int__int____ctor()
// asm:   0x5e2ce7a: xorps xmm0, xmm0
// asm:   0x5e2ce7d: movups xmmword ptr [rsp + 0x18], xmm0
// asm:   0x5e2ce82: mov qword ptr [rsp + 0x28], 0
// asm:   0x5e2ce8b: mov rax, qword ptr [rsp + 8]
// asm:   0x5e2ce90: mov dword ptr [rsp + 0x10], 0
// asm:   0x5e2ce98: mov qword ptr [rsp + 0x14], rax
// asm:   0x5e2ce9d: lea rdi, [rsp + 0x20]
// asm:   0x5e2cea2: mov qword ptr [rsp + 0x20], r15
// asm:   0x5e2cea7: mov rsi, r15
// asm:   0x5e2ceaa: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5e2ceaf: mov qword ptr [rsp + 0x28], 0
// asm:   0x5e2ceb8: mov rax, qword ptr [rsp + 0x20]
// asm:   0x5e2cebd: mov qword ptr [rbp + 0x10], rax
// asm:   0x5e2cec1: mov rax, qword ptr [rsp + 0x28]
// asm:   0x5e2cec6: mov qword ptr [rbp + 0x18], rax
// asm:   0x5e2ceca: movups xmm0, xmmword ptr [rsp + 0x10]
// asm:   0x5e2cecf: movups xmmword ptr [rbp], xmm0
// asm:   0x5e2ced3: jmp 0x5e2cc45

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox__TryCastBallot
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,Anticheat_BallotBox_o *__this,
          Photon_Realtime_Player_o *voter,Photon_Realtime_Player_o *target,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  int64_t iVar3;
  System_Collections_Generic_Dictionary_Player__DateTime__o *__this_00;
  Anticheat_BallotBox_Result_o *pAVar4;
  Photon_Realtime_Player_o *player;
  bool bVar5;
  bool bVar6;
  int32_t iVar7;
  int32_t iVar8;
  Photon_Realtime_Room_o *__this_01;
  Photon_Realtime_Player_o *pPVar9;
  System_DateTime_o SVar10;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int32_t iVar12;
  Photon_Realtime_Player_o *key;
  Anticheat_BallotBox_Ballot_o item;
  Anticheat_BallotBox_Ballot_o item_00;
  System_ValueTuple_int__int__Fields local_80;
  undefined4 local_78;
  int32_t iStack_74;
  int32_t iStack_70;
  undefined4 uStack_6c;
  Photon_Realtime_Player_o *pPStack_68;
  int64_t local_60;
  int local_54;
  Anticheat_BallotBox_Result_o *local_50;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *local_48;
  Photon_Realtime_Player_o *local_40;
  Photon_Realtime_Player_o *local_38;
  
  method_02 = (MethodInfo *)__this;
  local_38 = voter;
  if (Il2CppMethodInitialized_07548522 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Player_DateTime_TryAdd);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_BallotBox_Ballot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_int_int_ctor);
    Il2CppMethodInitialized_07548522 = '\x01';
  }
  local_48 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0;
  Anticheat_BallotBox__RemoveOldBallots(__this,method_02);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  __this_01 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (__this_01 == (Photon_Realtime_Room_o *)0x0) {
label_05e2cf1c:
    ThrowNullReferenceException();
  }
  iVar12 = 0;
  local_50 = __return_storage_ptr__;
  iVar7 = Photon_Realtime_Room__get_PlayerCount(__this_01,(MethodInfo *)0x0);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).BallotsByTargetPlayer;
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05e2cf1c;
  local_40 = target;
  bVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (pSVar2,(Il2CppObject *)target,(Il2CppObject **)&local_48,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_TryGetValue
                    );
  if (local_48 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
    iVar12 = (local_48->fields)._count;
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  iVar1 = iVar7 / 2 + 1;
  bVar6 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar6) {
    local_54 = iVar1;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar9 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    player = local_38;
    key = local_40;
    if ((local_40 == local_38) || (pPVar9 == local_40)) {
      local_80.Item1 = 0;
      local_80.Item2 = 0;
      System_ValueTuple_int__int____ctor
                ((System_ValueTuple_int__int__o *)&local_80,iVar12,local_54,
                 (MethodInfo_452D1B0 *)MethodInfo_System_ValueTuple_int_int_ctor);
      local_78 = 5;
    }
    else {
      bVar6 = Anticheat_BallotBox__HasCooldown(__this,local_38,method_00);
      if (bVar6) {
        local_80.Item1 = 0;
        local_80.Item2 = 0;
        System_ValueTuple_int__int____ctor
                  ((System_ValueTuple_int__int__o *)&local_80,iVar12,local_54,
                   (MethodInfo_452D1B0 *)MethodInfo_System_ValueTuple_int_int_ctor);
        iVar3 = (__this->fields).BallotCooldown.fields._ticks;
        uStack_6c = 0;
        pPStack_68 = (Photon_Realtime_Player_o *)0x0;
        local_60 = 0;
        local_78 = 3;
        iStack_74 = local_80.Item1;
        iStack_70 = local_80.Item2;
        Il2CppCodeGenWriteBarrier(&pPStack_68);
        local_60 = iVar3;
        goto label_05e2cc25;
      }
      iVar8 = Anticheat_BallotBox__CountBallotsCast(__this,player,method_01);
      pSVar11 = local_48;
      if (0 < iVar8) {
        local_80.Item1 = 0;
        local_80.Item2 = 0;
        System_ValueTuple_int__int____ctor
                  ((System_ValueTuple_int__int__o *)&local_80,iVar12,local_54,
                   (MethodInfo_452D1B0 *)MethodInfo_System_ValueTuple_int_int_ctor);
        pPStack_68 = (Photon_Realtime_Player_o *)0x0;
        local_78 = 2;
        iStack_74 = local_80.Item1;
        iStack_70 = local_80.Item2;
        goto label_05e2cc17;
      }
      local_78 = SUB84(player,0);
      iStack_74 = (int32_t)((ulong)player >> 0x20);
      if (bVar5) {
        iStack_70 = 0;
        uStack_6c = 0;
        if (Il2CppMethodInitialized_07548530 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
          Il2CppMethodInitialized_07548530 = '\x01';
        }
        Il2CppCodeGenWriteBarrier((void **)&local_78);
        key = local_40;
        if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
        }
        SVar10 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if (pSVar11 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) goto label_05e2cf1c;
        item.fields.Voter._4_4_ = iStack_74;
        item.fields.Voter._0_4_ = local_78;
        item.fields.Timestamp.fields._dateData = SVar10.fields._dateData;
        System_Collections_Generic_HashSet_BallotBox_Ballot___Add
                  (pSVar11,item,
                   (MethodInfo_4FD3BC0 *)MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_Add);
      }
      else {
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).BallotsByTargetPlayer;
        pSVar11 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BallotBox_Ballot);
        System_Collections_Generic_HashSet_BallotBox_Ballot____ctor
                  (pSVar11,(MethodInfo_4FD25F0 *)
                           MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_ctor);
        iStack_70 = 0;
        uStack_6c = 0;
        if (Il2CppMethodInitialized_07548530 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
          Il2CppMethodInitialized_07548530 = '\x01';
        }
        Il2CppCodeGenWriteBarrier((void **)&local_78);
        if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
        }
        SVar10 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if ((pSVar11 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) ||
           (item_00.fields.Voter._4_4_ = iStack_74, item_00.fields.Voter._0_4_ = local_78,
           item_00.fields.Timestamp.fields._dateData = SVar10.fields._dateData,
           System_Collections_Generic_HashSet_BallotBox_Ballot___Add
                     (pSVar11,item_00,
                      (MethodInfo_4FD3BC0 *)MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_Add
                     ), key = local_40, local_48 = pSVar11,
           pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_05e2cf1c;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar2,(Il2CppObject *)local_40,(Il2CppObject *)pSVar11,
                   (MethodInfo_4AAD4E0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_Add);
      }
      __this_00 = (__this->fields).LastBallotCastTimestampByPlayer;
      if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
      }
      SVar10 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
      if ((__this_00 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) ||
         (System_Collections_Generic_Dictionary_object__DateTime___TryAdd
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)player
                     ,SVar10,(MethodInfo_4A9B7B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Player_DateTime_TryAdd),
         pAVar4 = local_50, local_48 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0))
      goto label_05e2cf1c;
      iVar12 = (local_48->fields)._count;
      if (iVar7 / 2 < iVar12) {
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).BallotsByTargetPlayer;
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Remove
                    (pSVar2,(Il2CppObject *)key,
                     (MethodInfo_4AAED10 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_Remove);
          iVar1 = local_54;
          if (Il2CppMethodInitialized_0754852c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_int_int_ctor);
            Il2CppMethodInitialized_0754852c = '\x01';
          }
          local_80.Item1 = 0;
          local_80.Item2 = 0;
          System_ValueTuple_int__int____ctor
                    ((System_ValueTuple_int__int__o *)&local_80,iVar1,iVar1,
                     (MethodInfo_452D1B0 *)MethodInfo_System_ValueTuple_int_int_ctor);
          uStack_6c = 0;
          local_60 = 0;
          local_78 = 0;
          iStack_74 = local_80.Item1;
          iStack_70 = local_80.Item2;
          pPStack_68 = key;
          Il2CppCodeGenWriteBarrier(&pPStack_68);
          (pAVar4->fields).target = pPStack_68;
          (pAVar4->fields).cooldown.fields._ticks = 0;
          (pAVar4->fields).type = local_78;
          (pAVar4->fields).progress.fields.Item1 = iStack_74;
          *(ulong *)&(pAVar4->fields).progress.fields.Item2 = CONCAT44(uStack_6c,iStack_70);
          return pAVar4;
        }
        goto label_05e2cf1c;
      }
      local_80.Item1 = 0;
      local_80.Item2 = 0;
      System_ValueTuple_int__int____ctor
                ((System_ValueTuple_int__int__o *)&local_80,iVar12,local_54,
                 (MethodInfo_452D1B0 *)MethodInfo_System_ValueTuple_int_int_ctor);
      local_78 = 1;
    }
    iStack_74 = local_80.Item1;
    iStack_70 = local_80.Item2;
    pPStack_68 = key;
  }
  else {
    local_80.Item1 = 0;
    local_80.Item2 = 0;
    System_ValueTuple_int__int____ctor
              ((System_ValueTuple_int__int__o *)&local_80,iVar12,iVar1,
               (MethodInfo_452D1B0 *)MethodInfo_System_ValueTuple_int_int_ctor);
    local_78 = 4;
    iStack_74 = local_80.Item1;
    iStack_70 = local_80.Item2;
    pPStack_68 = local_40;
  }
label_05e2cc17:
  uStack_6c = 0;
  local_60 = 0;
  Il2CppCodeGenWriteBarrier(&pPStack_68);
  local_60 = 0;
label_05e2cc25:
  (local_50->fields).type = local_78;
  (local_50->fields).progress.fields.Item1 = iStack_74;
  *(ulong *)&(local_50->fields).progress.fields.Item2 = CONCAT44(uStack_6c,iStack_70);
  (local_50->fields).target = pPStack_68;
  (local_50->fields).cooldown.fields._ticks = local_60;
  return local_50;
}


// Anticheat.BallotBox$$ResetBallots
// il2cpp: void Anticheat_BallotBox__ResetBallots (Anticheat_BallotBox_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5e2cfd0
// eh: try 0x5e2d0b4..0x5e2d151 -> pad 0x5e2d15a (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e2d174..0x5e2d179 -> pad 0x5e2d198 cleanup
// eh: try 0x5e2d19b..0x5e2d1a5 -> pad 0x5e2d1ad catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e2d0ac: nop dword ptr [rax]
// asm:   0x5e2d156: jmp 0x5e2d15c
// asm:   0x5e2d158: jmp 0x5e2d15c
// asm:   0x5e2d15a: jmp 0x5e2d15c
// asm:   0x5e2d15c: mov rbx, rax
// asm:   0x5e2d15f: cmp edx, 1
// asm:   0x5e2d162: jne 0x5e2d19b
// asm:   0x5e2d164: mov rdi, rbx
// asm:   0x5e2d167: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e2d16c: mov rbx, qword ptr [rax]
// asm:   0x5e2d16f: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5e2d174: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e2d179: lea rax, [rip + 0x1462ad0]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot
// asm:   0x5e2d180: mov rsi, qword ptr [rax]
// asm:   0x5e2d183: mov rdi, rsp
// asm:   0x5e2d186: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5e2d18b: test rbx, rbx
// asm:   0x5e2d18e: je 0x5e2d13d
// asm:   0x5e2d190: mov rdi, rbx
// asm:   0x5e2d193: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e2d198: mov rbx, rax
// asm:   0x5e2d19b: lea rdi, [rsp + 0x18]
// asm:   0x5e2d1a0: call 0x2fe0aa0  ; il2cpp_runtime_helper_02fe0aa0()
// asm:   0x5e2d1a5: mov rdi, rbx
// asm:   0x5e2d1a8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e2d1ad: mov rdi, rax
// asm:   0x5e2d1b0: call 0x2ab61e0  ; __clang_call_terminate()

void Anticheat_BallotBox__ResetBallots
               (Anticheat_BallotBox_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *__this_01;
  bool bVar1;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  System_DateTime_o SVar2;
  Anticheat_BallotBox_Ballot_o item;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_68;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  Photon_Realtime_Player_o *pPStack_40;
  undefined8 uStack_38;
  
  if (Il2CppMethodInitialized_07548523 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot_718fc58
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot_718fc60
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Player_HashSet_BallotBox_Ballot_GetEnumera
              );
    Il2CppMethodInitialized_07548523 = '\x01';
  }
  SStack_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_68.fields._index = 0;
  SStack_68.fields._version = 0;
  SStack_68.fields._currentValue = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).BallotsByTargetPlayer;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_02 = System_Collections_Generic_Dictionary_object__object___get_Values
                          (__this_00,
                           (MethodInfo_4AAD2A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_get_Values
                          );
    if (__this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                (&SStack_68,__this_02,
                 (MethodInfo_43F93D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Player_HashSet_BallotBox_Ballot_GetEnumera
                );
      uStack_50 = 0;
      puStack_48 = (undefined1 *)&SStack_68;
      while( true ) {
        bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (&SStack_68,
                           (MethodInfo_4CE7200 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot_718fc58
                          );
        __this_01 = SStack_68.fields._currentValue;
        if (!bVar1) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                    (&SStack_68,
                     (MethodInfo_4CE71F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot
                    );
          return;
        }
        uStack_38 = 0;
        if (Il2CppMethodInitialized_07548530 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
          Il2CppMethodInitialized_07548530 = '\x01';
        }
        pPStack_40 = player;
        Il2CppCodeGenWriteBarrier(&pPStack_40);
        if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
        }
        SVar2 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)__this_01 ==
            (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) break;
        item.fields.Timestamp.fields._dateData = SVar2.fields._dateData;
        item.fields.Voter = pPStack_40;
        System_Collections_Generic_HashSet_BallotBox_Ballot___Remove
                  ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)__this_01,item,
                   (MethodInfo_4FD3140 *)MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_Remove
                  );
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.BallotBox$$RemoveOldBallots
// il2cpp: void Anticheat_BallotBox__RemoveOldBallots (Anticheat_BallotBox_o* __this, const MethodInfo* method);
// 0x5e2d2f0
// eh: try 0x5e2d4c7..0x5e2d68a -> pad 0x5e2d691 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e2d6b7..0x5e2d6bc -> pad 0x5e2d6d7 cleanup
// eh: try 0x5e2d6da..0x5e2d6e4 -> pad 0x5e2d744 catch (...) [compiler noexcept guard]
// eh: try 0x5e2d6fe..0x5e2d703 -> pad 0x5e2d72f cleanup
// eh: try 0x5e2d732..0x5e2d73c -> pad 0x5e2d744 catch (...) [compiler noexcept guard]
// asm: 53 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e2d4cf: nop 
// asm:   0x5e2d62f: nop 
// asm:   0x5e2d68f: jmp 0x5e2d6e6
// asm:   0x5e2d691: jmp 0x5e2d6e6
// asm:   0x5e2d693: jmp 0x5e2d6e6
// asm:   0x5e2d695: jmp 0x5e2d6e6
// asm:   0x5e2d697: jmp 0x5e2d6e6
// asm:   0x5e2d699: jmp 0x5e2d69f
// asm:   0x5e2d69b: jmp 0x5e2d69f
// asm:   0x5e2d69d: jmp 0x5e2d6e6
// asm:   0x5e2d69f: mov r14, rax
// asm:   0x5e2d6a2: cmp edx, 1
// asm:   0x5e2d6a5: jne 0x5e2d6da
// asm:   0x5e2d6a7: mov rdi, r14
// asm:   0x5e2d6aa: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e2d6af: mov rbx, qword ptr [rax]
// asm:   0x5e2d6b2: mov qword ptr [rsp + 8], rbx
// asm:   0x5e2d6b7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e2d6bc: lea rax, [rip + 0x146105d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Player_Dispose
// asm:   0x5e2d6c3: mov rsi, qword ptr [rax]
// asm:   0x5e2d6c6: lea rdi, [rsp + 0x60]
// asm:   0x5e2d6cb: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5e2d6d0: test rbx, rbx
// asm:   0x5e2d6d3: je 0x5e2d66c
// asm:   0x5e2d6d5: jmp 0x5e2d727
// asm:   0x5e2d6d7: mov r14, rax
// asm:   0x5e2d6da: lea rdi, [rsp + 8]
// asm:   0x5e2d6df: call 0x2fe0b00  ; il2cpp_runtime_helper_02fe0b00()
// asm:   0x5e2d6e4: jmp 0x5e2d73c
// asm:   0x5e2d6e6: mov r14, rax
// asm:   0x5e2d6e9: cmp edx, 1
// asm:   0x5e2d6ec: jne 0x5e2d732
// asm:   0x5e2d6ee: mov rdi, r14
// asm:   0x5e2d6f1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e2d6f6: mov rbx, qword ptr [rax]
// asm:   0x5e2d6f9: mov qword ptr [rsp + 8], rbx
// asm:   0x5e2d6fe: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e2d703: lea rax, [rip + 0x146252e]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_Player_HashSet_BallotBox_Ballot_Dispose
// asm:   0x5e2d70a: mov rsi, qword ptr [rax]
// asm:   0x5e2d70d: lea rdi, [rsp + 0x30]
// asm:   0x5e2d712: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5e2d717: test rbx, rbx
// asm:   0x5e2d71a: lea rbp, [rip + 0x1448507]  ; TypeInfo_Anticheat_BallotBox
// asm:   0x5e2d721: je 0x5e2d5d3
// asm:   0x5e2d727: mov rdi, rbx
// asm:   0x5e2d72a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e2d72f: mov r14, rax
// asm:   0x5e2d732: lea rdi, [rsp + 8]
// asm:   0x5e2d737: call 0x2fe0ad0  ; il2cpp_runtime_helper_02fe0ad0()
// asm:   0x5e2d73c: mov rdi, r14
// asm:   0x5e2d73f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e2d744: mov rdi, rax
// asm:   0x5e2d747: call 0x2ab61e0  ; __clang_call_terminate()

void Anticheat_BallotBox__RemoveOldBallots(Anticheat_BallotBox_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_List_Player__o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  Photon_Realtime_Player_array *pPVar5;
  MethodInfo *pMVar6;
  Photon_Realtime_Player_o *item;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_00;
  bool bVar7;
  System_Predicate_T__o *match;
  undefined1 local_a0 [16];
  Photon_Realtime_Player_o *local_90;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSStack_88;
  int32_t local_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  System_Collections_Generic_Dictionary_Enumerator_object__object__o *pSStack_70;
  Photon_Realtime_Player_o *local_68;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSStack_60;
  undefined8 local_58;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_07548524 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Anticheat_BallotBox_RemoveOldBallots_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_BallotBox);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Player_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_Player_HashSet_BallotBox_Ballot_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_Player_HashSet_BallotBox_Ballot_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Player_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Player_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_Player_HashSet_BallotBox_Ballot_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_RemoveWhere);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_Player_HashSet_BallotBox_Ballot_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_Player_HashSet_BallotBox_Ballot_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Player_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_BallotBox_Ballot);
    Il2CppMethodInitialized_07548524 = '\x01';
  }
  local_68 = (Photon_Realtime_Player_o *)0x0;
  pSStack_60 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0;
  local_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)0x0;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Anticheat_BallotBox->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_BallotBox);
  }
  pSVar3 = TypeInfo_Anticheat_BallotBox->static_fields->removals;
  if (pSVar3 != (System_Collections_Generic_List_Player__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).BallotsByTargetPlayer
    ;
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_a0,pSVar4,
                 (MethodInfo_4AAD970 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_GetEnumerator
                );
      local_58._0_4_ = local_80;
      local_58._4_4_ = uStack_7c;
      local_68 = local_90;
      pSStack_60 = pSStack_88;
      local_78 = (undefined1  [8])local_a0._0_8_;
      pSStack_70 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_a0._8_8_;
      local_a0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_a0._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_78;
label_05e2d4d0:
      bVar7 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_78,
                         (MethodInfo_4CE66D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_Player_HashSet_BallotBox_Ballot_MoveNext
                        );
      __this_00 = pSStack_60;
      item = local_68;
      if (bVar7) {
        match = (System_Predicate_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_BallotBox_Ballot);
        System_Predicate_BallotBox_Ballot____ctor
                  ((System_Predicate_BallotBox_Ballot__o *)match,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_Anticheat_BallotBox_RemoveOldBallots_b__8_0,(MethodInfo_3DCC730 *)0x0)
        ;
        if (__this_00 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_BallotBox_Ballot___RemoveWhere
                  (__this_00,match,
                   (MethodInfo_4FD58E0 *)
                   MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_RemoveWhere);
        if ((__this_00->fields)._count == 0) {
          if ((TypeInfo_Anticheat_BallotBox->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_BallotBox);
          }
          pMVar6 = MethodInfo_System_Collections_Generic_List_Player_Add;
          pSVar3 = TypeInfo_Anticheat_BallotBox->static_fields->removals;
          if (pSVar3 != (System_Collections_Generic_List_Player__o *)0x0) {
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pPVar5 = (pSVar3->fields)._items;
            if (pPVar5 != (Photon_Realtime_Player_array *)0x0) {
              uVar2 = (pSVar3->fields)._size;
              if (uVar2 < (uint)pPVar5->max_length) {
                (pSVar3->fields)._size = uVar2 + 1;
                pPVar5->m_Items[(int)uVar2] = item;
                Il2CppCodeGenWriteBarrier(pPVar5->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                           (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
              }
              goto label_05e2d4d0;
            }
          }
          ThrowNullReferenceException();
        }
        goto label_05e2d4d0;
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_78,
                 (MethodInfo_4CE67F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_Player_HashSet_BallotBox_Ballot_Dispose
                );
      if ((TypeInfo_Anticheat_BallotBox->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_BallotBox);
      }
      pSVar3 = TypeInfo_Anticheat_BallotBox->static_fields->removals;
      if (pSVar3 != (System_Collections_Generic_List_Player__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  (&local_48,(System_Collections_Generic_List_object__o *)pSVar3,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Player_GetEnumerator);
        local_a0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_a0._8_8_ = &local_48;
        while( true ) {
          bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_Player_MoveNext);
          if (!bVar7) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_Player_Dispose);
            return;
          }
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields).BallotsByTargetPlayer;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          System_Collections_Generic_Dictionary_object__object___Remove
                    (pSVar4,local_48.fields._current,
                     (MethodInfo_4AAED10 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_Remove);
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.BallotBox$$CountBallotsCast
// il2cpp: int32_t Anticheat_BallotBox__CountBallotsCast (Anticheat_BallotBox_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5e2d900
// eh: try 0x5e2d9e4..0x5e2da94 -> pad 0x5e2da9d (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e2dab7..0x5e2dabc -> pad 0x5e2dadb cleanup
// eh: try 0x5e2dade..0x5e2dae8 -> pad 0x5e2daf0 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e2da99: jmp 0x5e2da9f
// asm:   0x5e2da9b: jmp 0x5e2da9f
// asm:   0x5e2da9d: jmp 0x5e2da9f
// asm:   0x5e2da9f: mov rbx, rax
// asm:   0x5e2daa2: cmp edx, 1
// asm:   0x5e2daa5: jne 0x5e2dade
// asm:   0x5e2daa7: mov rdi, rbx
// asm:   0x5e2daaa: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e2daaf: mov rbx, qword ptr [rax]
// asm:   0x5e2dab2: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5e2dab7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e2dabc: lea rax, [rip + 0x146218d]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot
// asm:   0x5e2dac3: mov rsi, qword ptr [rax]
// asm:   0x5e2dac6: mov rdi, rsp
// asm:   0x5e2dac9: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5e2dace: test rbx, rbx
// asm:   0x5e2dad1: je 0x5e2da7d
// asm:   0x5e2dad3: mov rdi, rbx
// asm:   0x5e2dad6: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e2dadb: mov rbx, rax
// asm:   0x5e2dade: lea rdi, [rsp + 0x18]
// asm:   0x5e2dae3: call 0x2fe0b30  ; il2cpp_runtime_helper_02fe0b30()
// asm:   0x5e2dae8: mov rdi, rbx
// asm:   0x5e2daeb: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e2daf0: mov rdi, rax
// asm:   0x5e2daf3: call 0x2ab61e0  ; __clang_call_terminate()

int32_t Anticheat_BallotBox__CountBallotsCast
                  (Anticheat_BallotBox_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *__this_01;
  bool bVar1;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  System_DateTime_o SVar2;
  int iVar3;
  Anticheat_BallotBox_Ballot_o item;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_68;
  undefined8 local_50;
  undefined1 *local_48;
  Photon_Realtime_Player_o *local_40;
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_07548525 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot_718fc58
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot_718fc60
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Player_HashSet_BallotBox_Ballot_GetEnumera
              );
    Il2CppMethodInitialized_07548525 = '\x01';
  }
  local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._currentValue = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).BallotsByTargetPlayer;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_02 = System_Collections_Generic_Dictionary_object__object___get_Values
                          (__this_00,
                           (MethodInfo_4AAD2A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_get_Values
                          );
    if (__this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                (&local_68,__this_02,
                 (MethodInfo_43F93D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Player_HashSet_BallotBox_Ballot_GetEnumera
                );
      local_50 = 0;
      iVar3 = 0;
      local_48 = (undefined1 *)&local_68;
      while( true ) {
        bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (&local_68,
                           (MethodInfo_4CE7200 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot_718fc58
                          );
        __this_01 = local_68.fields._currentValue;
        if (!bVar1) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                    (&local_68,
                     (MethodInfo_4CE71F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot
                    );
          return iVar3;
        }
        local_38 = 0;
        if (Il2CppMethodInitialized_07548530 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
          Il2CppMethodInitialized_07548530 = '\x01';
        }
        local_40 = player;
        Il2CppCodeGenWriteBarrier(&local_40);
        if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
        }
        SVar2 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)__this_01 ==
            (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) break;
        item.fields.Timestamp.fields._dateData = SVar2.fields._dateData;
        item.fields.Voter = local_40;
        bVar1 = System_Collections_Generic_HashSet_BallotBox_Ballot___Contains
                          ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)__this_01,item,
                           (MethodInfo_4FD2E70 *)
                           MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_Contains);
        iVar3 = iVar3 + (uint)bVar1;
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.BallotBox$$HasCooldown
// il2cpp: bool Anticheat_BallotBox__HasCooldown (Anticheat_BallotBox_o* __this, Photon_Realtime_Player_o* voter, const MethodInfo* method);
// 0x5e2d7d0

bool Anticheat_BallotBox__HasCooldown
               (Anticheat_BallotBox_o *__this,Photon_Realtime_Player_o *voter,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Player__DateTime__o *__this_00;
  System_TimeSpan_o t2;
  bool bVar1;
  System_DateTime_o d1;
  System_TimeSpan_o t1;
  System_DateTime_o local_20;
  
  if (Il2CppMethodInitialized_07548526 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Player_DateTime_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_07548526 = '\x01';
  }
  local_20.fields._dateData = (System_DateTime_Fields)0;
  __this_00 = (__this->fields).LastBallotCastTimestampByPlayer;
  if (__this_00 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__DateTime___TryGetValue
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)voter,
                     &local_20,
                     (MethodInfo_4A9B740 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Player_DateTime_TryGetValue);
  if (bVar1) {
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
    t1 = System_DateTime__op_Subtraction_5498240(d1,local_20,(MethodInfo *)0x0);
    t2.fields._ticks = (System_TimeSpan_Fields)(__this->fields).BallotCooldown.fields._ticks;
    if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
    }
    bVar1 = System_TimeSpan__op_LessThan(t1,t2,(MethodInfo *)0x0);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// Anticheat.BallotBox$$.ctor
// il2cpp: void Anticheat_BallotBox___ctor (Anticheat_BallotBox_o* __this, const MethodInfo* method);
// 0x5e2bfd0

void Anticheat_BallotBox___ctor(Anticheat_BallotBox_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Player__HashSet_BallotBox_Ballot___o *__this_00;
  System_Collections_Generic_Dictionary_Player__DateTime__o *__this_01;
  System_TimeSpan_o SVar1;
  
  if (Il2CppMethodInitialized_07548527 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Player_DateTime_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Player_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_07548527 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_ctor);
  (__this->fields).BallotsByTargetPlayer = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BallotsByTargetPlayer);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Player_DateTime);
  System_Collections_Generic_Dictionary_object__DateTime____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_4A98C60 *)MethodInfo_System_Collections_Generic_Dictionary_Player_DateTime_ctor);
  (__this->fields).LastBallotCastTimestampByPlayer = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LastBallotCastTimestampByPlayer);
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  SVar1 = System_TimeSpan__FromMinutes(5.0,(MethodInfo *)0x0);
  (__this->fields).BallotTimeout.fields._ticks = (int64_t)SVar1.fields._ticks;
  SVar1 = System_TimeSpan__FromMinutes(1.0,(MethodInfo *)0x0);
  (__this->fields).BallotCooldown.fields._ticks = (int64_t)SVar1.fields._ticks;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.BallotBox$$.cctor
// il2cpp: void Anticheat_BallotBox___cctor (const MethodInfo* method);
// 0x5e2dc80

void Anticheat_BallotBox___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_Player__o *__this;
  
  if (Il2CppMethodInitialized_07548528 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_BallotBox);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Player);
    Il2CppMethodInitialized_07548528 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Player);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Player_ctor);
  TypeInfo_Anticheat_BallotBox->static_fields->removals = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Anticheat_BallotBox->static_fields->removals);
  return;
}


// Anticheat.BallotBox$$<RemoveOldBallots>b__8_0
// il2cpp: bool Anticheat_BallotBox___RemoveOldBallots_b__8_0 (Anticheat_BallotBox_o* __this, Anticheat_BallotBox_Ballot_o ballot, const MethodInfo* method);
// 0x5e2dd00

bool Anticheat_BallotBox___RemoveOldBallots_b__8_0
               (Anticheat_BallotBox_o *__this,Anticheat_BallotBox_Ballot_o ballot,MethodInfo *method)

{
  System_TimeSpan_o t2;
  bool bVar1;
  System_DateTime_o d1;
  System_TimeSpan_o t1;
  
  if (Il2CppMethodInitialized_07548529 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_07548529 = '\x01';
  }
  if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
  }
  d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  t1 = System_DateTime__op_Subtraction_5498240(d1,ballot.fields.Timestamp.fields._dateData,(MethodInfo *)0x0);
  t2.fields._ticks = (System_TimeSpan_Fields)(__this->fields).BallotTimeout.fields._ticks;
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  bVar1 = System_TimeSpan__op_GreaterThan(t1,t2,(MethodInfo *)0x0);
  return bVar1;
}


