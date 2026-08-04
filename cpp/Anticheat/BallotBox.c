// Type: Anticheat.BallotBox
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Anticheat/BallotBox.cs
// Prior real C# source (older reference): Assets/Scripts/Anticheat/AnticheatManager.cs
// --------------------------------

// Anticheat.BallotBox.Result$$.ctor
// il2cpp: void Anticheat_BallotBox_Result___ctor (Anticheat_BallotBox_Result_o __this, int32_t type, System_ValueTuple_int__int__o progress, Photon_Realtime_Player_o* target, System_TimeSpan_o cooldown, const MethodInfo* method);
// 0x44d20e0

void Anticheat_BallotBox_Result___ctor
               (Anticheat_BallotBox_Result_o __this,int32_t type,System_ValueTuple_int__int__o progress,
               Photon_Realtime_Player_o *target,System_TimeSpan_o cooldown,MethodInfo *method)

{
  undefined4 in_register_0000003c;
  int32_t *piVar1;
  
  piVar1 = (int32_t *)CONCAT44(in_register_0000003c,type);
  *piVar1 = progress.fields.Item1;
  *(Photon_Realtime_Player_o **)(piVar1 + 1) = target;
  ((System_TimeSpan_Fields *)(piVar1 + 4))->_ticks = (int64_t)cooldown.fields._ticks;
  il2cpp_runtime_helper_022b4080(piVar1 + 4,cooldown.fields._ticks);
  *(MethodInfo **)(piVar1 + 6) = method;
  return;
}


// Anticheat.BallotBox.Result$$Success
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__Success (int32_t required, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x44d1f00

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__Success
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,int32_t required,
          Photon_Realtime_Player_o *target,MethodInfo *method)

{
  System_ValueTuple_int__int__Fields SStack_20;
  
  if (g_data_057aeb31 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_2_Int32_Int32);
    g_data_057aeb31 = '\x01';
  }
  SStack_20.Item1 = 0;
  SStack_20.Item2 = 0;
  System_ValueTuple_int__int____ctor((System_ValueTuple_int__int__o)&SStack_20,required,required,MethodInfo_ValueTuple_2_Int32_Int32)
  ;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).type = 0;
  (__return_storage_ptr__->fields).progress.fields.Item1 = 0;
  *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = 0;
  (__return_storage_ptr__->fields).type = 0;
  (__return_storage_ptr__->fields).progress.fields = SStack_20;
  (__return_storage_ptr__->fields).target = target;
  il2cpp_runtime_helper_022b4080(&(__return_storage_ptr__->fields).target,target);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$InsufficientVotes
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__InsufficientVotes (System_ValueTuple_int__int__o progress, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x44d1f90

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__InsufficientVotes
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,System_ValueTuple_int__int__o progress,
          Photon_Realtime_Player_o *target,MethodInfo *method)

{
  (__return_storage_ptr__->fields).type = 0;
  (__return_storage_ptr__->fields).progress.fields.Item1 = 0;
  *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = 0;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).type = 1;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  (__return_storage_ptr__->fields).target = target;
  il2cpp_runtime_helper_022b4080(&(__return_storage_ptr__->fields).target,target);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$ExceededConcurrentVotesLimit
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__ExceededConcurrentVotesLimit (System_ValueTuple_int__int__o progress, const MethodInfo* method);
// 0x44d1e50

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__ExceededConcurrentVotesLimit
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,System_ValueTuple_int__int__o progress,
          MethodInfo *method)

{
  (__return_storage_ptr__->fields).type = 0;
  (__return_storage_ptr__->fields).progress.fields.Item1 = 0;
  *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = 0;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).type = 2;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__return_storage_ptr__->fields).target,0);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$UnderCooldown
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__UnderCooldown (System_ValueTuple_int__int__o progress, System_TimeSpan_o cooldown, const MethodInfo* method);
// 0x44d1c00

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__UnderCooldown
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,System_ValueTuple_int__int__o progress,
          System_TimeSpan_o cooldown,MethodInfo *method)

{
  (__return_storage_ptr__->fields).type = 0;
  (__return_storage_ptr__->fields).progress.fields.Item1 = 0;
  *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = 0;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).type = 3;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__return_storage_ptr__->fields).target,0);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = (int64_t)cooldown.fields._ticks;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$MissingAuthority
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__MissingAuthority (System_ValueTuple_int__int__o progress, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x44d1a90

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__MissingAuthority
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,System_ValueTuple_int__int__o progress,
          Photon_Realtime_Player_o *target,MethodInfo *method)

{
  (__return_storage_ptr__->fields).type = 0;
  (__return_storage_ptr__->fields).progress.fields.Item1 = 0;
  *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = 0;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).type = 4;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  (__return_storage_ptr__->fields).target = target;
  il2cpp_runtime_helper_022b4080(&(__return_storage_ptr__->fields).target,target);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$InvalidTarget
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__InvalidTarget (System_ValueTuple_int__int__o progress, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x44d1ad0

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__InvalidTarget
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,System_ValueTuple_int__int__o progress,
          Photon_Realtime_Player_o *target,MethodInfo *method)

{
  (__return_storage_ptr__->fields).type = 0;
  (__return_storage_ptr__->fields).progress.fields.Item1 = 0;
  *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = 0;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).type = 5;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  (__return_storage_ptr__->fields).target = target;
  il2cpp_runtime_helper_022b4080(&(__return_storage_ptr__->fields).target,target);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$get_IsSuccess
// il2cpp: bool Anticheat_BallotBox_Result__get_IsSuccess (Anticheat_BallotBox_Result_o __this, const MethodInfo* method);
// 0x44d11c0

bool_conflict
Anticheat_BallotBox_Result__get_IsSuccess(Anticheat_BallotBox_Result_o __this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(int *)&method->methodPointer == 0);
}


// Anticheat.BallotBox.Result$$ToString
// il2cpp: System_String_o* Anticheat_BallotBox_Result__ToString (Anticheat_BallotBox_Result_o __this, const MethodInfo* method);
// 0x44d2110

System_String_o * Anticheat_BallotBox_Result__ToString(Anticheat_BallotBox_Result_o __this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *arg2;
  System_String_o *str1;
  System_String_o *pSVar4;
  undefined8 *puVar5;
  int32_t color;
  undefined4 local_34;
  double local_30;
  undefined4 local_24;
  
  if (g_data_057aeb32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    il2cpp_runtime_helper_023445d0(&"Cannot vote for more than {0} players at a time ({1}/{2}).");
    il2cpp_runtime_helper_023445d0(&"Voting is limited to once every {0:N1} minutes ({1}/{2}).");
    il2cpp_runtime_helper_023445d0(&"Voted to kick {0} ({1}/{2}).");
    il2cpp_runtime_helper_023445d0(&"Unknown error.");
    il2cpp_runtime_helper_023445d0(&": invalid target.");
    il2cpp_runtime_helper_023445d0(&"Cannot kick ");
    il2cpp_runtime_helper_023445d0(&"Cannot ");
    il2cpp_runtime_helper_023445d0(&": missing authority.");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aeb32 = '\x01';
  }
  switch(*(undefined4 *)&method->methodPointer) {
  case 0:
  case 1:
    pPVar1 = (Photon_Realtime_Player_o *)method->invoker_method;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                        (MethodInfo *)0x0);
    local_30 = (double)CONCAT44(local_30._4_4_,*(undefined4 *)((long)&method->methodPointer + 4));
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_30);
    local_34 = *(undefined4 *)&method->virtualMethodPointer;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_34);
    pSVar4 = System_String__Format_3af7930
                       ("Voted to kick {0} ({1}/{2}).",(Il2CppObject *)pSVar4,pIVar2,pIVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    color = 3;
    goto label_044d23cc;
  case 2:
    local_30 = (double)CONCAT44(local_30._4_4_,1);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_30);
    local_34 = *(undefined4 *)((long)&method->methodPointer + 4);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_34);
    local_24 = *(undefined4 *)&method->virtualMethodPointer;
    arg2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_24);
    puVar5 = &"Cannot vote for more than {0} players at a time ({1}/{2}).";
    break;
  case 3:
    if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    local_30 = System_TimeSpan__get_TotalMinutes((System_TimeSpan_o)&method->name,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0,&local_30);
    local_34 = *(undefined4 *)((long)&method->methodPointer + 4);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_34);
    local_24 = *(undefined4 *)&method->virtualMethodPointer;
    arg2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_24);
    puVar5 = &"Voting is limited to once every {0:N1} minutes ({1}/{2}).";
    break;
  case 4:
    pPVar1 = (Photon_Realtime_Player_o *)method->invoker_method;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    str1 = PhotonExtensions__GetStringProperty
                     (pPVar1,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                      (MethodInfo *)0x0);
    puVar5 = &": missing authority.";
    pSVar4 = "Cannot ";
    goto label_044d247f;
  case 5:
    pPVar1 = (Photon_Realtime_Player_o *)method->invoker_method;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    str1 = PhotonExtensions__GetStringProperty
                     (pPVar1,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                      (MethodInfo *)0x0);
    puVar5 = &": invalid target.";
    pSVar4 = "Cannot kick ";
label_044d247f:
    pSVar4 = System_String__Concat_3af7150(pSVar4,str1,(System_String_o *)*puVar5,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
label_044d24aa:
    pSVar4 = GameManagers_ChatManager__GetColorString(pSVar4,4,0,(MethodInfo *)0x0);
    return pSVar4;
  default:
    pSVar4 = "Unknown error.";
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar4 = "Unknown error.";
    }
    goto label_044d24aa;
  }
  pSVar4 = System_String__Format_3af7930((System_String_o *)*puVar5,pIVar2,pIVar3,arg2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  color = 4;
label_044d23cc:
  pSVar4 = GameManagers_ChatManager__GetColorString(pSVar4,color,0,(MethodInfo *)0x0);
  return pSVar4;
}


// Anticheat.BallotBox.Ballot$$.ctor
// il2cpp: void Anticheat_BallotBox_Ballot___ctor (Anticheat_BallotBox_Ballot_o __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x44d24d0

void Anticheat_BallotBox_Ballot___ctor
               (Anticheat_BallotBox_Ballot_o __this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_DateTime_o SVar1;
  Photon_Realtime_Player_o *extraout_RDX;
  Photon_Realtime_Player_o *pPVar2;
  
  pPVar2 = __this.fields.Voter;
  if (g_data_057aeb33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    g_data_057aeb33 = '\x01';
    player = extraout_RDX;
  }
  pPVar2->klass = (Photon_Realtime_Player_c *)__this.fields.Timestamp.fields._dateData.fields;
  il2cpp_runtime_helper_022b4080(pPVar2,__this.fields.Timestamp.fields._dateData.fields,player);
  if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  pPVar2->monitor = (void *)SVar1.fields._dateData;
  return;
}


// Anticheat.BallotBox.Ballot$$GetHashCode
// il2cpp: int32_t Anticheat_BallotBox_Ballot__GetHashCode (Anticheat_BallotBox_Ballot_o __this, const MethodInfo* method);
// 0x44d2530

int32_t Anticheat_BallotBox_Ballot__GetHashCode(Anticheat_BallotBox_Ballot_o __this,MethodInfo *method)

{
  void *pvVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  Il2CppObject *arg0;
  int32_t iVar2;
  undefined8 *puVar3;
  Il2CppObject *arg1;
  System_String_o *pSVar4;
  System_DateTime_Fields SVar5;
  Photon_Realtime_Player_c *pPVar6;
  long *plVar7;
  long lStack_38;
  long *plStack_30;
  Photon_Realtime_Player_c *pPStack_28;
  undefined8 uStack_20;
  
  SVar5._dateData = (uint64_t)__this.fields.Timestamp.fields._dateData;
  pPVar6 = (__this.fields.Voter)->klass;
  if (pPVar6 != (Photon_Realtime_Player_c *)0x0) {
    pvVar1 = (pPVar6->_1).image;
    UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar1 + 0x158);
    iVar2 = (*UNRECOVERED_JUMPTABLE_00)
                      (pPVar6,*(undefined8 *)((long)pvVar1 + 0x160),method,UNRECOVERED_JUMPTABLE_00);
    return iVar2;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeb34 == '\0') {
    pPStack_28 = (Photon_Realtime_Player_c *)0x44d257f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Ballot);
    g_data_057aeb34 = '\x01';
  }
  if (((long *)SVar5._dateData != (long *)0x0) && (*(long *)SVar5._dateData == TypeInfo_Ballot)) {
    pPStack_28 = (Photon_Realtime_Player_c *)0x44d25ac;
    puVar3 = (undefined8 *)il2cpp_runtime_helper_02305440(SVar5._dateData);
    plVar7 = (pPVar6->_1).image;
    if (plVar7 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar7 + 0x138);
      iVar2 = (*UNRECOVERED_JUMPTABLE_00)
                        (plVar7,*puVar3,*(undefined8 *)(*plVar7 + 0x140),UNRECOVERED_JUMPTABLE_00);
      return iVar2;
    }
    pPStack_28 = (Photon_Realtime_Player_c *)0x44d25d6;
    lStack_38 = il2cpp_runtime_helper_022b2c90();
    plStack_30 = (long *)SVar5._dateData;
    pPStack_28 = pPVar6;
    if (g_data_057aeb35 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
      il2cpp_runtime_helper_023445d0(&"{0} ({1})");
      g_data_057aeb35 = '\x01';
    }
    arg0 = (Il2CppObject *)*plVar7;
    lStack_38 = plVar7[1];
    arg1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_DateTime,&lStack_38);
    pSVar4 = System_String__Format_3af78e0("{0} ({1})",arg0,arg1,(MethodInfo *)0x0);
    return (int32_t)pSVar4;
  }
  return 0;
}


// Anticheat.BallotBox.Ballot$$Equals
// il2cpp: bool Anticheat_BallotBox_Ballot__Equals (Anticheat_BallotBox_Ballot_o __this, Il2CppObject* obj, const MethodInfo* method);
// 0x44d2560

bool_conflict
Anticheat_BallotBox_Ballot__Equals(Anticheat_BallotBox_Ballot_o __this,Il2CppObject *obj,MethodInfo *method)

{
  void *pvVar1;
  code *vtableDispatch;
  Il2CppObject *arg0;
  bool_conflict bVar2;
  undefined8 *puVar3;
  Il2CppObject *arg1;
  System_String_o *pSVar4;
  System_DateTime_o SVar5;
  Photon_Realtime_Player_o *pPVar6;
  Photon_Realtime_Player_c *pPVar7;
  void *local_30;
  System_DateTime_Fields SStack_28;
  Photon_Realtime_Player_o *pPStack_20;
  
  SVar5 = __this.fields.Timestamp.fields._dateData;
  pPVar6 = __this.fields.Voter;
  if (g_data_057aeb34 == '\0') {
    pPStack_20 = (Photon_Realtime_Player_o *)0x44d257f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Ballot);
    g_data_057aeb34 = '\x01';
  }
  if ((SVar5.fields._dateData != 0) && (*(long *)SVar5.fields._dateData == TypeInfo_Ballot)) {
    pPStack_20 = (Photon_Realtime_Player_o *)0x44d25ac;
    puVar3 = (undefined8 *)il2cpp_runtime_helper_02305440(SVar5.fields._dateData);
    pPVar7 = pPVar6->klass;
    if (pPVar7 != (Photon_Realtime_Player_c *)0x0) {
      pvVar1 = (pPVar7->_1).image;
      vtableDispatch = *(code **)((long)pvVar1 + 0x138);
      bVar2 = (*vtableDispatch)
                        (pPVar7,*puVar3,*(undefined8 *)((long)pvVar1 + 0x140),vtableDispatch);
      return bVar2;
    }
    pPStack_20 = (Photon_Realtime_Player_o *)0x44d25d6;
    local_30 = (void *)il2cpp_runtime_helper_022b2c90();
    SStack_28 = SVar5.fields._dateData;
    pPStack_20 = pPVar6;
    if (g_data_057aeb35 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
      il2cpp_runtime_helper_023445d0(&"{0} ({1})");
      g_data_057aeb35 = '\x01';
    }
    arg0 = (pPVar7->_1).image;
    local_30 = (pPVar7->_1).gc_desc;
    arg1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_DateTime,&local_30);
    pSVar4 = System_String__Format_3af78e0("{0} ({1})",arg0,arg1,(MethodInfo *)0x0);
    return (bool_conflict)pSVar4;
  }
  return 0;
}


// Anticheat.BallotBox.Ballot$$ToString
// il2cpp: System_String_o* Anticheat_BallotBox_Ballot__ToString (Anticheat_BallotBox_Ballot_o __this, const MethodInfo* method);
// 0x44d25e0

System_String_o * Anticheat_BallotBox_Ballot__ToString(Anticheat_BallotBox_Ballot_o __this,MethodInfo *method)

{
  Photon_Realtime_Player_c *arg0;
  Il2CppObject *arg1;
  System_String_o *pSVar1;
  MethodInfo *extraout_RDX;
  void *pvStack_18;
  
  if (g_data_057aeb35 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime,__this.fields.Timestamp.fields._dateData.fields);
    il2cpp_runtime_helper_023445d0(&"{0} ({1})");
    g_data_057aeb35 = '\x01';
    method = extraout_RDX;
  }
  arg0 = (__this.fields.Voter)->klass;
  pvStack_18 = (__this.fields.Voter)->monitor;
  arg1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_DateTime,&pvStack_18,method);
  pSVar1 = System_String__Format_3af78e0("{0} ({1})",(Il2CppObject *)arg0,arg1,(MethodInfo *)0x0);
  return pSVar1;
}


// Anticheat.BallotBox.Ballot$$op_Implicit
// il2cpp: Anticheat_BallotBox_Ballot_o Anticheat_BallotBox_Ballot__op_Implicit (Photon_Realtime_Player_o* voter, const MethodInfo* method);
// 0x44d1e90

Anticheat_BallotBox_Ballot_o
Anticheat_BallotBox_Ballot__op_Implicit(Photon_Realtime_Player_o *voter,MethodInfo *method)

{
  System_DateTime_o SVar1;
  Anticheat_BallotBox_Ballot_o AVar2;
  Photon_Realtime_Player_o *local_18;
  undefined8 uStack_10;
  
  local_18 = (Photon_Realtime_Player_o *)0x0;
  uStack_10 = 0;
  if (g_data_057aeb33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    g_data_057aeb33 = '\x01';
  }
  local_18 = voter;
  il2cpp_runtime_helper_022b4080(&local_18,voter);
  if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  AVar2.fields.Timestamp.fields._dateData = SVar1.fields._dateData;
  AVar2.fields.Voter = local_18;
  return (Anticheat_BallotBox_Ballot_o)AVar2.fields;
}


// Anticheat.BallotBox$$TryCastBallot
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox__TryCastBallot (Anticheat_BallotBox_o* __this, Photon_Realtime_Player_o* voter, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x44d0b90

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox__TryCastBallot
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,Anticheat_BallotBox_o *__this,
          Photon_Realtime_Player_o *voter,Photon_Realtime_Player_o *target,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  int64_t iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Anticheat_BallotBox_Result_o *pAVar6;
  Photon_Realtime_Player_o *player;
  int32_t iVar7;
  bool_conflict bVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  Photon_Realtime_Room_o *__this_00;
  Photon_Realtime_Player_o *pPVar11;
  System_DateTime_o SVar12;
  System_Collections_Generic_Dictionary_Player__DateTime__o *pSVar13;
  undefined8 uVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Collections_Generic_Dictionary_Player__DateTime__o *pSVar15;
  int32_t iVar16;
  Photon_Realtime_Player_o *key;
  Anticheat_BallotBox_Ballot_o item;
  Anticheat_BallotBox_Ballot_o item_00;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  Photon_Realtime_Player_o *local_68;
  int64_t iStack_60;
  int local_54;
  Anticheat_BallotBox_Result_o *local_50;
  System_Collections_Generic_Dictionary_Player__DateTime__o *local_48;
  Photon_Realtime_Player_o *local_40;
  Photon_Realtime_Player_o *local_38;
  
  method_02 = (MethodInfo *)__this;
  local_38 = voter;
  if (g_data_057aeb29 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryAdd);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Ballot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_2_Int32_Int32);
    g_data_057aeb29 = '\x01';
  }
  local_48 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
  Anticheat_BallotBox__RemoveOldBallots(__this,method_02);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
  __this_00 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (__this_00 == (Photon_Realtime_Room_o *)0x0) {
label_044d11b9:
    uVar14 = il2cpp_runtime_helper_022b2c90();
    return (Anticheat_BallotBox_Result_o *)CONCAT71((int7)((ulong)uVar14 >> 8),*(int *)&pSVar15->klass == 0);
  }
  iVar16 = 0;
  local_50 = __return_storage_ptr__;
  iVar7 = Photon_Realtime_Room__get_PlayerCount(__this_00,(MethodInfo *)0x0);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).BallotsByTargetPlayer;
  pSVar15 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044d11b9;
  local_40 = target;
  bVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (pSVar2,(Il2CppObject *)target,(Il2CppObject **)&local_48,MethodInfo_Boolean_TryGetValue);
  if (local_48 != (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) {
    iVar16 = ((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&local_48->fields)->_count;
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = iVar7 / 2 + 1;
  bVar9 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    local_80 = 0;
    System_ValueTuple_int__int____ctor((System_ValueTuple_int__int__o)&local_80,iVar16,iVar1,MethodInfo_ValueTuple_2_Int32_Int32);
    local_78 = 4;
    uStack_74 = (undefined4)local_80;
    uStack_70 = (undefined4)((ulong)local_80 >> 0x20);
    local_68 = local_40;
  }
  else {
    local_54 = iVar1;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pPVar11 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    player = local_38;
    key = local_40;
    if ((local_40 == local_38) || (pPVar11 == local_40)) {
      local_80 = 0;
      System_ValueTuple_int__int____ctor
                ((System_ValueTuple_int__int__o)&local_80,iVar16,local_54,MethodInfo_ValueTuple_2_Int32_Int32);
      local_78 = 5;
    }
    else {
      bVar9 = Anticheat_BallotBox__HasCooldown(__this,local_38,method_00);
      if ((char)bVar9 != '\0') {
        local_80 = 0;
        System_ValueTuple_int__int____ctor
                  ((System_ValueTuple_int__int__o)&local_80,iVar16,local_54,MethodInfo_ValueTuple_2_Int32_Int32);
        iVar3 = (__this->fields).BallotCooldown.fields._ticks;
        uStack_6c = 0;
        iStack_60 = 0;
        local_78 = 3;
        uStack_74 = (undefined4)local_80;
        uStack_70 = (undefined4)((ulong)local_80 >> 0x20);
        local_68 = (Photon_Realtime_Player_o *)0x0;
        il2cpp_runtime_helper_022b4080(&local_68,0);
        iStack_60 = iVar3;
        goto label_044d0ec7;
      }
      iVar10 = Anticheat_BallotBox__CountBallotsCast(__this,player,method_01);
      pSVar13 = local_48;
      if (0 < iVar10) {
        local_80 = 0;
        System_ValueTuple_int__int____ctor
                  ((System_ValueTuple_int__int__o)&local_80,iVar16,local_54,MethodInfo_ValueTuple_2_Int32_Int32);
        local_78 = 2;
        uStack_74 = (undefined4)local_80;
        uStack_70 = (undefined4)((ulong)local_80 >> 0x20);
        local_68 = (Photon_Realtime_Player_o *)0x0;
        goto label_044d0eb9;
      }
      local_78 = SUB84(player,0);
      uVar4 = local_78;
      uStack_74 = (undefined4)((ulong)player >> 0x20);
      uVar5 = uStack_74;
      if ((char)bVar8 == '\0') {
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).BallotsByTargetPlayer;
        pSVar13 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Ballot);
        System_Collections_Generic_HashSet_BallotBox_Ballot____ctor
                  ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)pSVar13,MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot);
        local_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        if (g_data_057aeb33 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
          g_data_057aeb33 = '\x01';
        }
        local_78 = uVar4;
        uStack_74 = uVar5;
        il2cpp_runtime_helper_022b4080(&local_78,player);
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar15 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
        SVar12 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if ((pSVar13 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) ||
           (item_00.fields.Voter._4_4_ = uStack_74, item_00.fields.Voter._0_4_ = local_78,
           item_00.fields.Timestamp.fields._dateData = SVar12.fields._dateData, pSVar15 = pSVar13,
           System_Collections_Generic_HashSet_BallotBox_Ballot___Add
                     ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)pSVar13,item_00,MethodInfo_Boolean_Add),
           key = local_40, local_48 = pSVar13,
           pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_044d11b9;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar2,(Il2CppObject *)local_40,(Il2CppObject *)pSVar13,MethodInfo_Void_Add);
      }
      else {
        local_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        if (g_data_057aeb33 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
          g_data_057aeb33 = '\x01';
        }
        local_78 = uVar4;
        uStack_74 = uVar5;
        il2cpp_runtime_helper_022b4080(&local_78,player);
        key = local_40;
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar15 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
        SVar12 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if (pSVar13 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) goto label_044d11b9;
        item.fields.Voter._4_4_ = uStack_74;
        item.fields.Voter._0_4_ = local_78;
        item.fields.Timestamp.fields._dateData = SVar12.fields._dateData;
        System_Collections_Generic_HashSet_BallotBox_Ballot___Add
                  ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)pSVar13,item,MethodInfo_Boolean_Add);
      }
      pSVar13 = (__this->fields).LastBallotCastTimestampByPlayer;
      if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
      SVar12 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
      if ((pSVar13 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) ||
         (System_Collections_Generic_Dictionary_object__DateTime___TryAdd
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13,(Il2CppObject *)player,
                     SVar12,MethodInfo_Boolean_TryAdd), pAVar6 = local_50, pSVar15 = pSVar13,
         local_48 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0)) goto label_044d11b9;
      iVar16 = ((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&local_48->fields)->_count;
      if (iVar7 / 2 < iVar16) {
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).BallotsByTargetPlayer;
        pSVar15 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0;
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Remove
                    (pSVar2,(Il2CppObject *)key,MethodInfo_Boolean_Remove);
          iVar1 = local_54;
          if (g_data_057aeb31 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_ValueTuple_2_Int32_Int32);
            g_data_057aeb31 = '\x01';
          }
          local_80 = 0;
          System_ValueTuple_int__int____ctor
                    ((System_ValueTuple_int__int__o)&local_80,iVar1,iVar1,MethodInfo_ValueTuple_2_Int32_Int32);
          uStack_6c = 0;
          iStack_60 = 0;
          local_78 = 0;
          uStack_74 = (undefined4)local_80;
          uStack_70 = (undefined4)((ulong)local_80 >> 0x20);
          local_68 = key;
          il2cpp_runtime_helper_022b4080(&local_68,key);
          (pAVar6->fields).target = local_68;
          (pAVar6->fields).cooldown.fields._ticks = 0;
          (pAVar6->fields).type = local_78;
          (pAVar6->fields).progress.fields.Item1 = uStack_74;
          *(ulong *)&(pAVar6->fields).progress.fields.Item2 = CONCAT44(uStack_6c,uStack_70);
          return pAVar6;
        }
        goto label_044d11b9;
      }
      local_80 = 0;
      System_ValueTuple_int__int____ctor
                ((System_ValueTuple_int__int__o)&local_80,iVar16,local_54,MethodInfo_ValueTuple_2_Int32_Int32);
      local_78 = 1;
    }
    uStack_74 = (undefined4)local_80;
    uStack_70 = (undefined4)((ulong)local_80 >> 0x20);
    local_68 = key;
  }
label_044d0eb9:
  uStack_6c = 0;
  iStack_60 = 0;
  il2cpp_runtime_helper_022b4080(&local_68,local_68);
  iStack_60 = 0;
label_044d0ec7:
  (local_50->fields).type = local_78;
  (local_50->fields).progress.fields.Item1 = uStack_74;
  *(ulong *)&(local_50->fields).progress.fields.Item2 = CONCAT44(uStack_6c,uStack_70);
  (local_50->fields).target = local_68;
  (local_50->fields).cooldown.fields._ticks = iStack_60;
  return local_50;
}


// Anticheat.BallotBox$$ResetBallots
// il2cpp: void Anticheat_BallotBox__ResetBallots (Anticheat_BallotBox_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x44d1260

void Anticheat_BallotBox__ResetBallots
               (Anticheat_BallotBox_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long lVar1;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_05;
  System_DateTime_o SVar3;
  long *plVar4;
  undefined1 auVar5 [12];
  Anticheat_BallotBox_Ballot_o item;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar8;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_06;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSStack_48;
  Il2CppType *pIStack_40;
  
  if (g_data_057aeb2a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_Photon_Realtime);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    g_data_057aeb2a = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  pSVar8 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).BallotsByTargetPlayer;
  if ((__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_05 = System_Collections_Generic_Dictionary_object__object___get_Values(__this_00,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_Photon_Realtime),
     __this_05 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffff98,__this_05,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    __this_06 = pSVar8;
    while( true ) {
      __this_01.fields._8_8_ = pIVar7;
      __this_01.fields._dictionary = pSVar6;
      __this_01.fields._currentValue = (Il2CppObject *)__this_06;
      bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251CB0 *)&stack0xffffffffffffff98);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar7;
        __this_02.fields._dictionary = pSVar6;
        __this_02.fields._currentValue = (Il2CppObject *)__this_06;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_02,(MethodInfo_3251CA0 *)&stack0xffffffffffffff98);
        return;
      }
      pSStack_48 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
      pIStack_40 = (Il2CppType *)0x0;
      pSVar8 = __this_06;
      if (g_data_057aeb33 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
        g_data_057aeb33 = '\x01';
      }
      pSStack_48 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)player;
      il2cpp_runtime_helper_022b4080(&pSStack_48,player);
      if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      SVar3 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
      if (__this_06 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) break;
      item.fields.Timestamp.fields._dateData = SVar3.fields._dateData;
      item.fields.Voter = (Photon_Realtime_Player_o *)pSStack_48;
      System_Collections_Generic_HashSet_BallotBox_Ballot___Remove(__this_06,item,MethodInfo_Boolean_Remove);
      __this_06 = pSVar8;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar7;
    __this_03.fields._dictionary = pSVar6;
    __this_03.fields._currentValue = (Il2CppObject *)pSVar8;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251CA0 *)&stack0xffffffffffffff98);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar7;
  __this_04.fields._dictionary = pSVar6;
  __this_04.fields._currentValue = (Il2CppObject *)pSVar8;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            (__this_04,(MethodInfo_3251CA0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar5._0_8_);
}


// Anticheat.BallotBox$$RemoveOldBallots
// il2cpp: void Anticheat_BallotBox__RemoveOldBallots (Anticheat_BallotBox_o* __this, const MethodInfo* method);
// 0x44d1590

void Anticheat_BallotBox__RemoveOldBallots(Anticheat_BallotBox_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_05;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_06;
  bool_conflict bVar6;
  Il2CppObject *item;
  System_Predicate_T__o *match;
  long *plVar7;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_07;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  System_Collections_Generic_List_T__o *pSVar10;
  Il2CppMethodPointer pIVar11;
  Il2CppObject *key;
  char *in_stack_ffffffffffffff70;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;
  
  if (g_data_057aeb2b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RemoveOldBallots_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BallotBox);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_Photon_Realtime_Play);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Player_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_Photon_Realtime_Player_HashSet_1_Antichea);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Player_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Photon_Realtime_Player_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_Ballot);
    g_data_057aeb2b = '\x01';
  }
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pSVar10 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar11 = (Il2CppMethodPointer)0x0;
  key = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_BallotBox + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar3 = **(long **)(TypeInfo_BallotBox + 0xb8);
  if (lVar3 == 0) goto label_044d192d;
  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
  length = *(int32_t *)(lVar3 + 0x18);
  *(undefined4 *)(lVar3 + 0x18) = 0;
  if (0 < length) {
    System_Array__Clear(*(System_Array_o **)(lVar3 + 0x10),0,length,(MethodInfo *)0x0);
  }
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).BallotsByTargetPlayer;
  if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044d192d;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(&local_58,pSVar4,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_Photon_Realtime_Play);
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_58.fields._dictionary;
  while( true ) {
    do {
      __this_03.fields._8_8_ = pIVar11;
      __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
      __this_03.fields._current.fields.key = key;
      __this_03.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff70;
      __this_03.fields._32_8_ = pSVar12;
      bVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (__this_03,(MethodInfo_3251160 *)&stack0xffffffffffffff78);
      if ((char)bVar6 == '\0') {
        __this_04.fields._8_8_ = pIVar11;
        __this_04.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
        __this_04.fields._current.fields.key = key;
        __this_04.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff70;
        __this_04.fields._32_8_ = pSVar12;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_04,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
        goto label_044d1879;
      }
      auVar8 = il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_Photon_Realtime_Player_HashSet_1_Antichea);
      __this_07 = auVar8._8_8_;
      item = auVar8._0_8_;
      match = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_Ballot);
      System_Predicate_BallotBox_Ballot____ctor();
      if (__this_07 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) goto label_044d191e;
      System_Collections_Generic_HashSet_BallotBox_Ballot___RemoveWhere(__this_07,match,MethodInfo_Int32_RemoveWhere);
    } while ((__this_07->fields)._count != 0);
    if (*(int *)(TypeInfo_BallotBox + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = MethodInfo_Void_Add;
    __this_00 = (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_BallotBox + 0xb8);
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_044d1923;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_00->fields)._items;
    if (pSVar5 == (System_Object_array *)0x0) break;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar5->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      pSVar5->m_Items[(int)uVar2] = item;
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2,item);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_00,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_044d192d:
    do {
      auVar9 = il2cpp_runtime_helper_022b2c90();
      if (auVar9._8_4_ != 1) {
label_044d1a57:
        __this_06.fields._8_8_ = pIVar11;
        __this_06.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
        __this_06.fields._current.fields.key = key;
        __this_06.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff70;
        __this_06.fields._32_8_ = pSVar12;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_06,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
        _Unwind_Resume(auVar9._0_8_);
      }
      plVar7 = (long *)__cxa_begin_catch(auVar9._0_8_);
      lVar3 = *plVar7;
      __cxa_end_catch();
      __this_05.fields._8_8_ = pIVar11;
      __this_05.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
      __this_05.fields._current.fields.key = key;
      __this_05.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff70;
      __this_05.fields._32_8_ = pSVar12;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_05,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
      if (lVar3 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar3);
        goto label_044d1a57;
      }
label_044d1879:
      if (*(int *)(TypeInfo_BallotBox + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
    } while ((System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_BallotBox + 0xb8) ==
             (System_Collections_Generic_List_object__o *)0x0);
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff58,
               (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_BallotBox + 0xb8),
               MethodInfo_List_1_T_Enumerator_Photon_Realtime_Player_GetEnumerator);
    while( true ) {
      __this_01.fields._8_8_ = pIVar11;
      __this_01.fields._list = pSVar10;
      __this_01.fields._current = key;
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff58);
      if ((char)bVar6 == '\0') {
        __this_02.fields._8_8_ = pIVar11;
        __this_02.fields._list = pSVar10;
        __this_02.fields._current = key;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
        return;
      }
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).BallotsByTargetPlayer;
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__object___Remove(pSVar4,key,MethodInfo_Boolean_Remove);
    }
    il2cpp_runtime_helper_022b2c90();
label_044d191e:
    il2cpp_runtime_helper_022b2c90();
label_044d1923:
    il2cpp_runtime_helper_022b2c90();
  } while( true );
}


// Anticheat.BallotBox$$CountBallotsCast
// il2cpp: int32_t Anticheat_BallotBox__CountBallotsCast (Anticheat_BallotBox_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x44d1c40

int32_t Anticheat_BallotBox__CountBallotsCast
                  (Anticheat_BallotBox_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long lVar1;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  bool_conflict bVar2;
  uint uVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_05;
  System_DateTime_o SVar4;
  long *plVar5;
  int32_t unaff_R14D;
  undefined1 auVar6 [12];
  Anticheat_BallotBox_Ballot_o item;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar9;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_06;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *local_48;
  Il2CppType *pIStack_40;
  
  if (g_data_057aeb2c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_Photon_Realtime);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    g_data_057aeb2c = '\x01';
  }
  pSVar7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  pSVar9 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).BallotsByTargetPlayer;
  if ((__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_05 = System_Collections_Generic_Dictionary_object__object___get_Values(__this_00,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_Photon_Realtime),
     __this_05 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffff98,__this_05,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    unaff_R14D = 0;
    __this_06 = pSVar9;
    while( true ) {
      __this_01.fields._8_8_ = pIVar8;
      __this_01.fields._dictionary = pSVar7;
      __this_01.fields._currentValue = (Il2CppObject *)__this_06;
      bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251CB0 *)&stack0xffffffffffffff98);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar8;
        __this_02.fields._dictionary = pSVar7;
        __this_02.fields._currentValue = (Il2CppObject *)__this_06;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_02,(MethodInfo_3251CA0 *)&stack0xffffffffffffff98);
        return unaff_R14D;
      }
      local_48 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
      pIStack_40 = (Il2CppType *)0x0;
      pSVar9 = __this_06;
      if (g_data_057aeb33 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
        g_data_057aeb33 = '\x01';
      }
      local_48 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)player;
      il2cpp_runtime_helper_022b4080(&local_48,player);
      if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      SVar4 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
      if (__this_06 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) break;
      item.fields.Timestamp.fields._dateData = SVar4.fields._dateData;
      item.fields.Voter = (Photon_Realtime_Player_o *)local_48;
      uVar3 = System_Collections_Generic_HashSet_BallotBox_Ballot___Contains(__this_06,item,MethodInfo_Boolean_Contains);
      unaff_R14D = unaff_R14D + (uVar3 & 0xff);
      __this_06 = pSVar9;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar1 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar8;
    __this_03.fields._dictionary = pSVar7;
    __this_03.fields._currentValue = (Il2CppObject *)pSVar9;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251CA0 *)&stack0xffffffffffffff98);
    if (lVar1 == 0) {
      return unaff_R14D;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar8;
  __this_04.fields._dictionary = pSVar7;
  __this_04.fields._currentValue = (Il2CppObject *)pSVar9;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            (__this_04,(MethodInfo_3251CA0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar6._0_8_);
}


// Anticheat.BallotBox$$HasCooldown
// il2cpp: bool Anticheat_BallotBox__HasCooldown (Anticheat_BallotBox_o* __this, Photon_Realtime_Player_o* voter, const MethodInfo* method);
// 0x44d1b10

bool_conflict
Anticheat_BallotBox__HasCooldown
          (Anticheat_BallotBox_o *__this,Photon_Realtime_Player_o *voter,MethodInfo *method)

{
  System_TimeSpan_o t2;
  bool_conflict bVar1;
  System_DateTime_o d1;
  System_TimeSpan_o t1;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *extraout_RDX;
  Photon_Realtime_Player_o *pPVar2;
  System_Collections_Generic_Dictionary_Player__DateTime__o *__this_00;
  System_DateTime_o local_20;
  
  pPVar2 = voter;
  if (g_data_057aeb2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    g_data_057aeb2d = '\x01';
  }
  local_20.fields._dateData = (System_DateTime_Fields)0;
  __this_00 = (__this->fields).LastBallotCastTimestampByPlayer;
  if (__this_00 != (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__DateTime___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)voter,&local_20,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 == '\0') {
      bVar1 = 0;
    }
    else {
      if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
      t1 = System_DateTime__op_Subtraction_3c94570(d1,local_20,(MethodInfo *)0x0);
      t2.fields._ticks = (System_TimeSpan_Fields)(__this->fields).BallotCooldown.fields._ticks;
      if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = System_TimeSpan__op_LessThan(t1,t2,(MethodInfo *)0x0);
    }
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00->klass = (System_Collections_Generic_Dictionary_Player__DateTime__c *)0x0;
  __this_00->monitor = (void *)0x0;
  ((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&__this_00->fields)->_buckets =
       (System_Int32_array *)0x0;
  ((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&__this_00->fields)->_entries =
       (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  *(undefined4 *)&__this_00->klass = 3;
  *(Photon_Realtime_Player_o **)((long)&__this_00->klass + 4) = pPVar2;
  ((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&__this_00->fields)->_buckets =
       (System_Int32_array *)0x0;
  il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&__this_00->fields,0);
  ((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&__this_00->fields)->_entries = extraout_RDX;
  return (bool_conflict)__this_00;
}


// Anticheat.BallotBox$$.ctor
// il2cpp: void Anticheat_BallotBox___ctor (Anticheat_BallotBox_o* __this, const MethodInfo* method);
// 0x44d02b0

void Anticheat_BallotBox___ctor(Anticheat_BallotBox_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_Player__DateTime__o *__this_01;
  System_TimeSpan_o SVar1;
  
  if (g_data_057aeb2e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Photon_Realtime_Player_System_DateTime);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Photon_Realtime_Player_HashSet_1_Anticheat);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Player_HashSet_Ballot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Player_DateTime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    g_data_057aeb2e = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Player_HashSet_Ballot);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_Photon_Realtime_Player_HashSet_1_Anticheat);
  (__this->fields).BallotsByTargetPlayer =
       (System_Collections_Generic_Dictionary_Player__HashSet_BallotBox_Ballot___o *)__this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Player_DateTime);
  System_Collections_Generic_Dictionary_object__DateTime____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,MethodInfo_Dictionary_2_Photon_Realtime_Player_System_DateTime);
  (__this->fields).LastBallotCastTimestampByPlayer = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).LastBallotCastTimestampByPlayer);
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
// 0x44d1fd0

void Anticheat_BallotBox___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  
  if (g_data_057aeb2f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BallotBox);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Photon_Realtime_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Player);
    g_data_057aeb2f = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Player);
  System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_Photon_Realtime_Player);
  **(undefined8 **)(TypeInfo_BallotBox + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_BallotBox + 0xb8),__this);
  return;
}


// Anticheat.BallotBox$$<RemoveOldBallots>b__8_0
// il2cpp: bool Anticheat_BallotBox___RemoveOldBallots_b__8_0 (Anticheat_BallotBox_o* __this, Anticheat_BallotBox_Ballot_o ballot, const MethodInfo* method);
// 0x44d2050

bool_conflict
Anticheat_BallotBox___RemoveOldBallots_b__8_0
          (Anticheat_BallotBox_o *__this,Anticheat_BallotBox_Ballot_o ballot,MethodInfo *method)

{
  System_TimeSpan_o t2;
  bool_conflict bVar1;
  System_DateTime_o d1;
  System_TimeSpan_o t1;
  
  if (g_data_057aeb30 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime,ballot.fields.Voter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    g_data_057aeb30 = '\x01';
  }
  if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  t1 = System_DateTime__op_Subtraction_3c94570(d1,ballot.fields.Timestamp.fields._dateData,(MethodInfo *)0x0);
  t2.fields._ticks = (System_TimeSpan_Fields)(__this->fields).BallotTimeout.fields._ticks;
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_TimeSpan__op_GreaterThan(t1,t2,(MethodInfo *)0x0);
  return bVar1;
}


