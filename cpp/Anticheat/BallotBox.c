// Type: Anticheat.BallotBox
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Anticheat/BallotBox.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Anticheat/AnticheatManager.cs  [prior source available (delta unverified)]
// --------------------------------

// Anticheat.BallotBox.Result$$.ctor
// il2cpp: void Anticheat_BallotBox_Result___ctor (Anticheat_BallotBox_Result_o __this, int32_t type, System_ValueTuple_int__int__o progress, Photon_Realtime_Player_o* target, System_TimeSpan_o cooldown, const MethodInfo* method);
// 0x41b4760

/* WARNING: Type propagation algorithm not settling */

void Anticheat_BallotBox_Result___ctor
               (Anticheat_BallotBox_Result_o __this,int32_t type,
               System_ValueTuple_int__int__o progress,Photon_Realtime_Player_o *target,
               System_TimeSpan_o cooldown,MethodInfo *method)

{
  undefined4 in_register_0000003c;
  int32_t *piVar1;
  
  piVar1 = (int32_t *)CONCAT44(in_register_0000003c,type);
  *piVar1 = progress.fields.Item1;
  *(Photon_Realtime_Player_o **)(piVar1 + 1) = target;
  ((System_TimeSpan_Fields *)(piVar1 + 4))->_ticks = (int64_t)cooldown.fields._ticks;
  il2cpp_runtime_glue(piVar1 + 4,cooldown.fields._ticks);
  *(MethodInfo **)(piVar1 + 6) = method;
  return;
}


// Anticheat.BallotBox.Result$$Success
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__Success (int32_t required, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x41b4580

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__Success
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,int32_t required,
          Photon_Realtime_Player_o *target,MethodInfo *method)

{
  System_ValueTuple_int__int__Fields SStack_20;
  
  if (DAT_05704d42 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ValueTuple_2_Int32_Int32);
    DAT_05704d42 = '\x01';
  }
  SStack_20.Item1 = 0;
  SStack_20.Item2 = 0;
  System_ValueTuple<int__int>___ctor
            ((System_ValueTuple_int__int__o)&SStack_20,required,required,MethodInfo_ValueTuple_2_Int32_Int32);
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).type = 0;
  (__return_storage_ptr__->fields).progress.fields.Item1 = 0;
  *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = 0;
  (__return_storage_ptr__->fields).type = 0;
  (__return_storage_ptr__->fields).progress.fields = SStack_20;
  (__return_storage_ptr__->fields).target = target;
  il2cpp_runtime_glue(&(__return_storage_ptr__->fields).target,target);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$InsufficientVotes
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__InsufficientVotes (System_ValueTuple_int__int__o progress, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x41b4610

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__InsufficientVotes
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,
          System_ValueTuple_int__int__o progress,Photon_Realtime_Player_o *target,MethodInfo *method
          )

{
  (__return_storage_ptr__->fields).type = 0;
  (__return_storage_ptr__->fields).progress.fields.Item1 = 0;
  *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = 0;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).type = 1;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  (__return_storage_ptr__->fields).target = target;
  il2cpp_runtime_glue(&(__return_storage_ptr__->fields).target,target);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$ExceededConcurrentVotesLimit
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__ExceededConcurrentVotesLimit (System_ValueTuple_int__int__o progress, const MethodInfo* method);
// 0x41b44d0

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__ExceededConcurrentVotesLimit
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,
          System_ValueTuple_int__int__o progress,MethodInfo *method)

{
  (__return_storage_ptr__->fields).type = 0;
  (__return_storage_ptr__->fields).progress.fields.Item1 = 0;
  *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = 0;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).type = 2;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  il2cpp_runtime_glue(&(__return_storage_ptr__->fields).target,0);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$UnderCooldown
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__UnderCooldown (System_ValueTuple_int__int__o progress, System_TimeSpan_o cooldown, const MethodInfo* method);
// 0x41b4280

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__UnderCooldown
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,
          System_ValueTuple_int__int__o progress,System_TimeSpan_o cooldown,MethodInfo *method)

{
  (__return_storage_ptr__->fields).type = 0;
  (__return_storage_ptr__->fields).progress.fields.Item1 = 0;
  *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = 0;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).type = 3;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  il2cpp_runtime_glue(&(__return_storage_ptr__->fields).target,0);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = (int64_t)cooldown.fields._ticks;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$MissingAuthority
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__MissingAuthority (System_ValueTuple_int__int__o progress, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x41b4110

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__MissingAuthority
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,
          System_ValueTuple_int__int__o progress,Photon_Realtime_Player_o *target,MethodInfo *method
          )

{
  (__return_storage_ptr__->fields).type = 0;
  (__return_storage_ptr__->fields).progress.fields.Item1 = 0;
  *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = 0;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).type = 4;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  (__return_storage_ptr__->fields).target = target;
  il2cpp_runtime_glue(&(__return_storage_ptr__->fields).target,target);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$InvalidTarget
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__InvalidTarget (System_ValueTuple_int__int__o progress, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x41b4150

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__InvalidTarget
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,
          System_ValueTuple_int__int__o progress,Photon_Realtime_Player_o *target,MethodInfo *method
          )

{
  (__return_storage_ptr__->fields).type = 0;
  (__return_storage_ptr__->fields).progress.fields.Item1 = 0;
  *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = 0;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).type = 5;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  (__return_storage_ptr__->fields).target = target;
  il2cpp_runtime_glue(&(__return_storage_ptr__->fields).target,target);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$get_IsSuccess
// il2cpp: bool Anticheat_BallotBox_Result__get_IsSuccess (Anticheat_BallotBox_Result_o __this, const MethodInfo* method);
// 0x41b3840

bool_conflict
Anticheat_BallotBox_Result__get_IsSuccess(Anticheat_BallotBox_Result_o __this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(int *)&method->methodPointer == 0);
}


// Anticheat.BallotBox.Result$$ToString
// il2cpp: System_String_o* Anticheat_BallotBox_Result__ToString (Anticheat_BallotBox_Result_o __this, const MethodInfo* method);
// 0x41b4790

System_String_o *
Anticheat_BallotBox_Result__ToString(Anticheat_BallotBox_Result_o __this,MethodInfo *method)

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
  
  if (DAT_05704d43 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    il2cpp_init_method_metadata(&"Cannot vote for more than {0} players at a time ({1}/{2}).");
    il2cpp_init_method_metadata(&"Voting is limited to once every {0:N1} minutes ({1}/{2}).");
    il2cpp_init_method_metadata(&"Voted to kick {0} ({1}/{2}).");
    il2cpp_init_method_metadata(&"Unknown error.");
    il2cpp_init_method_metadata(&": invalid target.");
    il2cpp_init_method_metadata(&"Cannot kick ");
    il2cpp_init_method_metadata(&"Cannot ");
    il2cpp_init_method_metadata(&": missing authority.");
    il2cpp_init_method_metadata(&"");
    DAT_05704d43 = '\x01';
  }
  switch(*(undefined4 *)&method->methodPointer) {
  case 0:
  case 1:
    pPVar1 = (Photon_Realtime_Player_o *)method->invoker_method;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                        "",(MethodInfo *)0x0);
    local_30 = (double)CONCAT44(local_30._4_4_,*(undefined4 *)((long)&method->methodPointer + 4));
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_30);
    local_34 = *(undefined4 *)&method->virtualMethodPointer;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
    pSVar4 = System_String__Format
                       ("Voted to kick {0} ({1}/{2}).",(Il2CppObject *)pSVar4,pIVar2,pIVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    color = 3;
    goto LAB_041b4a4c;
  case 2:
    local_30 = (double)CONCAT44(local_30._4_4_,1);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_30);
    local_34 = *(undefined4 *)((long)&method->methodPointer + 4);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
    local_24 = *(undefined4 *)&method->virtualMethodPointer;
    arg2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_24);
    puVar5 = &"Cannot vote for more than {0} players at a time ({1}/{2}).";
    break;
  case 3:
    if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_30 = System_TimeSpan__get_TotalMinutes((System_TimeSpan_o)&method->name,(MethodInfo *)0x0)
    ;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_057110a0,&local_30);
    local_34 = *(undefined4 *)((long)&method->methodPointer + 4);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
    local_24 = *(undefined4 *)&method->virtualMethodPointer;
    arg2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_24);
    puVar5 = &"Voting is limited to once every {0:N1} minutes ({1}/{2}).";
    break;
  case 4:
    pPVar1 = (Photon_Realtime_Player_o *)method->invoker_method;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    str1 = PhotonExtensions__GetStringProperty
                     (pPVar1,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                      (MethodInfo *)0x0);
    puVar5 = &": missing authority.";
    pSVar4 = "Cannot ";
    goto LAB_041b4aff;
  case 5:
    pPVar1 = (Photon_Realtime_Player_o *)method->invoker_method;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    str1 = PhotonExtensions__GetStringProperty
                     (pPVar1,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                      (MethodInfo *)0x0);
    puVar5 = &": invalid target.";
    pSVar4 = "Cannot kick ";
LAB_041b4aff:
    pSVar4 = System_String__Concat(pSVar4,str1,(System_String_o *)*puVar5,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
LAB_041b4b2a:
    pSVar4 = GameManagers_ChatManager__GetColorString(pSVar4,4,0,(MethodInfo *)0x0);
    return pSVar4;
  default:
    pSVar4 = "Unknown error.";
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
      pSVar4 = "Unknown error.";
    }
    goto LAB_041b4b2a;
  }
  pSVar4 = System_String__Format((System_String_o *)*puVar5,pIVar2,pIVar3,arg2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  color = 4;
LAB_041b4a4c:
  pSVar4 = GameManagers_ChatManager__GetColorString(pSVar4,color,0,(MethodInfo *)0x0);
  return pSVar4;
}


// Anticheat.BallotBox.Ballot$$.ctor
// il2cpp: void Anticheat_BallotBox_Ballot___ctor (Anticheat_BallotBox_Ballot_o __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x41b4b50

void Anticheat_BallotBox_Ballot___ctor
               (Anticheat_BallotBox_Ballot_o __this,Photon_Realtime_Player_o *player,
               MethodInfo *method)

{
  System_DateTime_o SVar1;
  Photon_Realtime_Player_o *extraout_RDX;
  Photon_Realtime_Player_o *pPVar2;
  
  pPVar2 = __this.fields.Voter;
  if (DAT_05704d44 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    DAT_05704d44 = '\x01';
    player = extraout_RDX;
  }
  pPVar2->klass = (Photon_Realtime_Player_c *)__this.fields.Timestamp.fields._dateData.fields;
  il2cpp_runtime_glue(pPVar2,__this.fields.Timestamp.fields._dateData.fields,player);
  if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
    il2cpp_init_class();
  }
  SVar1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  pPVar2->monitor = (void *)SVar1.fields._dateData;
  return;
}


// Anticheat.BallotBox.Ballot$$GetHashCode
// il2cpp: int32_t Anticheat_BallotBox_Ballot__GetHashCode (Anticheat_BallotBox_Ballot_o __this, const MethodInfo* method);
// 0x41b4bb0

int32_t Anticheat_BallotBox_Ballot__GetHashCode
                  (Anticheat_BallotBox_Ballot_o __this,MethodInfo *method)

{
  Photon_Realtime_Player_c *pPVar1;
  void *pvVar2;
  code *vtable_dispatch;
  int32_t iVar3;
  
  pPVar1 = (__this.fields.Voter)->klass;
  if (pPVar1 != (Photon_Realtime_Player_c *)0x0) {
    pvVar2 = (pPVar1->_1).image;
    vtable_dispatch = *(code **)((long)pvVar2 + 0x158);
    iVar3 = (*vtable_dispatch)
                      (pPVar1,*(undefined8 *)((long)pvVar2 + 0x160),method,vtable_dispatch);
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(0,__this.fields.Timestamp.fields._dateData.fields);
}


// Anticheat.BallotBox.Ballot$$Equals
// il2cpp: bool Anticheat_BallotBox_Ballot__Equals (Anticheat_BallotBox_Ballot_o __this, Il2CppObject* obj, const MethodInfo* method);
// 0x41b4be0

bool_conflict
Anticheat_BallotBox_Ballot__Equals
          (Anticheat_BallotBox_Ballot_o __this,Il2CppObject *obj,MethodInfo *method)

{
  Photon_Realtime_Player_c *pPVar1;
  void *pvVar2;
  code *vtable_dispatch;
  bool_conflict bVar3;
  undefined8 *puVar4;
  System_DateTime_o SVar5;
  
  SVar5 = __this.fields.Timestamp.fields._dateData;
  if (DAT_05704d45 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Ballot);
    DAT_05704d45 = '\x01';
  }
  if ((SVar5.fields._dateData != 0) && (*(long *)SVar5.fields._dateData == TypeInfo_Ballot)) {
    puVar4 = (undefined8 *)il2cpp_glue_022c7330(SVar5.fields._dateData);
    pPVar1 = (__this.fields.Voter)->klass;
    if (pPVar1 != (Photon_Realtime_Player_c *)0x0) {
      pvVar2 = (pPVar1->_1).image;
      vtable_dispatch = *(code **)((long)pvVar2 + 0x138);
      bVar3 = (*vtable_dispatch)
                        (pPVar1,*puVar4,*(undefined8 *)((long)pvVar2 + 0x140),vtable_dispatch)
      ;
      return bVar3;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0;
}


// Anticheat.BallotBox.Ballot$$ToString
// il2cpp: System_String_o* Anticheat_BallotBox_Ballot__ToString (Anticheat_BallotBox_Ballot_o __this, const MethodInfo* method);
// 0x41b4c60

System_String_o *
Anticheat_BallotBox_Ballot__ToString(Anticheat_BallotBox_Ballot_o __this,MethodInfo *method)

{
  Photon_Realtime_Player_c *arg0;
  Il2CppObject *arg1;
  System_String_o *pSVar1;
  MethodInfo *extraout_RDX;
  void *pvStack_18;
  
  if (DAT_05704d46 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTime,__this.fields.Timestamp.fields._dateData.fields);
    il2cpp_init_method_metadata(&"{0} ({1})");
    DAT_05704d46 = '\x01';
    method = extraout_RDX;
  }
  arg0 = (__this.fields.Voter)->klass;
  pvStack_18 = (__this.fields.Voter)->monitor;
  arg1 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_DateTime,&pvStack_18,method);
  pSVar1 = System_String__Format("{0} ({1})",(Il2CppObject *)arg0,arg1,(MethodInfo *)0x0);
  return pSVar1;
}


// Anticheat.BallotBox.Ballot$$op_Implicit
// il2cpp: Anticheat_BallotBox_Ballot_o Anticheat_BallotBox_Ballot__op_Implicit (Photon_Realtime_Player_o* voter, const MethodInfo* method);
// 0x41b4510

Anticheat_BallotBox_Ballot_o
Anticheat_BallotBox_Ballot__op_Implicit(Photon_Realtime_Player_o *voter,MethodInfo *method)

{
  System_DateTime_o SVar1;
  Anticheat_BallotBox_Ballot_o AVar2;
  Photon_Realtime_Player_o *local_18;
  undefined8 uStack_10;
  
  local_18 = (Photon_Realtime_Player_o *)0x0;
  uStack_10 = 0;
  if (DAT_05704d44 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    DAT_05704d44 = '\x01';
  }
  local_18 = voter;
  il2cpp_runtime_glue(&local_18,voter);
  if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
    il2cpp_init_class();
  }
  SVar1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  AVar2.fields.Timestamp.fields._dateData = SVar1.fields._dateData;
  AVar2.fields.Voter = local_18;
  return (Anticheat_BallotBox_Ballot_o)AVar2.fields;
}


// Anticheat.BallotBox$$TryCastBallot
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox__TryCastBallot (Anticheat_BallotBox_o* __this, Photon_Realtime_Player_o* voter, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x41b3210

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox__TryCastBallot
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,Anticheat_BallotBox_o *__this,
          Photon_Realtime_Player_o *voter,Photon_Realtime_Player_o *target,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  int64_t iVar3;
  System_Collections_Generic_Dictionary_Player__DateTime__o *__this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  Anticheat_BallotBox_Result_o *pAVar6;
  Photon_Realtime_Player_o *player;
  int32_t iVar7;
  bool_conflict bVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  Photon_Realtime_Room_o *__this_01;
  Photon_Realtime_Player_o *pPVar11;
  System_DateTime_o SVar12;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar13;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int32_t iVar14;
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
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *local_48;
  Photon_Realtime_Player_o *local_40;
  Photon_Realtime_Player_o *local_38;
  
  method_02 = (MethodInfo *)__this;
  local_38 = voter;
  if (DAT_05704d3a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryAdd);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_Ballot);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&MethodInfo_ValueTuple_2_Int32_Int32);
    DAT_05704d3a = '\x01';
  }
  local_48 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0;
  Anticheat_BallotBox__RemoveOldBallots(__this,method_02);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_01 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (__this_01 == (Photon_Realtime_Room_o *)0x0) {
LAB_041b3839:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar14 = 0;
  local_50 = __return_storage_ptr__;
  iVar7 = Photon_Realtime_Room__get_PlayerCount(__this_01,(MethodInfo *)0x0);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           (__this->fields).BallotsByTargetPlayer;
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_041b3839;
  local_40 = target;
  bVar8 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                    (pSVar2,(Il2CppObject *)target,(Il2CppObject **)&local_48,MethodInfo_Boolean_TryGetValue);
  if (local_48 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
    iVar14 = (local_48->fields)._count;
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = iVar7 / 2 + 1;
  bVar9 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    local_80 = 0;
    System_ValueTuple<int__int>___ctor
              ((System_ValueTuple_int__int__o)&local_80,iVar14,iVar1,MethodInfo_ValueTuple_2_Int32_Int32);
    local_78 = 4;
    uStack_74 = (undefined4)local_80;
    uStack_70 = (undefined4)((ulong)local_80 >> 0x20);
    local_68 = local_40;
  }
  else {
    local_54 = iVar1;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pPVar11 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    player = local_38;
    key = local_40;
    if ((local_40 == local_38) || (pPVar11 == local_40)) {
      local_80 = 0;
      System_ValueTuple<int__int>___ctor
                ((System_ValueTuple_int__int__o)&local_80,iVar14,local_54,MethodInfo_ValueTuple_2_Int32_Int32);
      local_78 = 5;
    }
    else {
      bVar9 = Anticheat_BallotBox__HasCooldown(__this,local_38,method_00);
      if ((char)bVar9 != '\0') {
        local_80 = 0;
        System_ValueTuple<int__int>___ctor
                  ((System_ValueTuple_int__int__o)&local_80,iVar14,local_54,MethodInfo_ValueTuple_2_Int32_Int32);
        iVar3 = (__this->fields).BallotCooldown.fields._ticks;
        uStack_6c = 0;
        iStack_60 = 0;
        local_78 = 3;
        uStack_74 = (undefined4)local_80;
        uStack_70 = (undefined4)((ulong)local_80 >> 0x20);
        local_68 = (Photon_Realtime_Player_o *)0x0;
        il2cpp_runtime_glue(&local_68,0);
        iStack_60 = iVar3;
        goto LAB_041b3547;
      }
      iVar10 = Anticheat_BallotBox__CountBallotsCast(__this,player,method_01);
      pSVar13 = local_48;
      if (0 < iVar10) {
        local_80 = 0;
        System_ValueTuple<int__int>___ctor
                  ((System_ValueTuple_int__int__o)&local_80,iVar14,local_54,MethodInfo_ValueTuple_2_Int32_Int32);
        local_78 = 2;
        uStack_74 = (undefined4)local_80;
        uStack_70 = (undefined4)((ulong)local_80 >> 0x20);
        local_68 = (Photon_Realtime_Player_o *)0x0;
        goto LAB_041b3539;
      }
      local_78 = SUB84(player,0);
      uVar4 = local_78;
      uStack_74 = (undefined4)((ulong)player >> 0x20);
      uVar5 = uStack_74;
      if ((char)bVar8 == '\0') {
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).BallotsByTargetPlayer;
        pSVar13 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                  il2cpp_runtime_glue(TypeInfo_HashSet_Ballot);
        System_Collections_Generic_HashSet<BallotBox_Ballot>___ctor(pSVar13,MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot);
        local_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        if (DAT_05704d44 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_DateTime);
          DAT_05704d44 = '\x01';
        }
        local_78 = uVar4;
        uStack_74 = uVar5;
        il2cpp_runtime_glue(&local_78,player);
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_init_class();
        }
        SVar12 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if ((pSVar13 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) ||
           (item_00.fields.Voter._4_4_ = uStack_74, item_00.fields.Voter._0_4_ = local_78,
           item_00.fields.Timestamp.fields._dateData = SVar12.fields._dateData,
           System_Collections_Generic_HashSet<BallotBox_Ballot>__Add(pSVar13,item_00,MethodInfo_Boolean_Add),
           key = local_40, local_48 = pSVar13,
           pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
        goto LAB_041b3839;
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar2,(Il2CppObject *)local_40,(Il2CppObject *)pSVar13,MethodInfo_Void_Add);
      }
      else {
        local_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        if (DAT_05704d44 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_DateTime);
          DAT_05704d44 = '\x01';
        }
        local_78 = uVar4;
        uStack_74 = uVar5;
        il2cpp_runtime_glue(&local_78,player);
        key = local_40;
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_init_class();
        }
        SVar12 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if (pSVar13 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0)
        goto LAB_041b3839;
        item.fields.Voter._4_4_ = uStack_74;
        item.fields.Voter._0_4_ = local_78;
        item.fields.Timestamp.fields._dateData = SVar12.fields._dateData;
        System_Collections_Generic_HashSet<BallotBox_Ballot>__Add(pSVar13,item,MethodInfo_Boolean_Add);
      }
      __this_00 = (__this->fields).LastBallotCastTimestampByPlayer;
      if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
        il2cpp_init_class();
      }
      SVar12 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
      if ((__this_00 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) ||
         (System_Collections_Generic_Dictionary<object__DateTime>__TryAdd
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                     (Il2CppObject *)player,SVar12,MethodInfo_Boolean_TryAdd), pAVar6 = local_50,
         local_48 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0))
      goto LAB_041b3839;
      iVar14 = (local_48->fields)._count;
      if (iVar7 / 2 < iVar14) {
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).BallotsByTargetPlayer;
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__Remove
                    (pSVar2,(Il2CppObject *)key,MethodInfo_Boolean_Remove);
          iVar1 = local_54;
          if (DAT_05704d42 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_ValueTuple_2_Int32_Int32);
            DAT_05704d42 = '\x01';
          }
          local_80 = 0;
          System_ValueTuple<int__int>___ctor
                    ((System_ValueTuple_int__int__o)&local_80,iVar1,iVar1,MethodInfo_ValueTuple_2_Int32_Int32);
          uStack_6c = 0;
          iStack_60 = 0;
          local_78 = 0;
          uStack_74 = (undefined4)local_80;
          uStack_70 = (undefined4)((ulong)local_80 >> 0x20);
          local_68 = key;
          il2cpp_runtime_glue(&local_68,key);
          (pAVar6->fields).target = local_68;
          (pAVar6->fields).cooldown.fields._ticks = 0;
          (pAVar6->fields).type = local_78;
          (pAVar6->fields).progress.fields.Item1 = uStack_74;
          *(ulong *)&(pAVar6->fields).progress.fields.Item2 = CONCAT44(uStack_6c,uStack_70);
          return pAVar6;
        }
        goto LAB_041b3839;
      }
      local_80 = 0;
      System_ValueTuple<int__int>___ctor
                ((System_ValueTuple_int__int__o)&local_80,iVar14,local_54,MethodInfo_ValueTuple_2_Int32_Int32);
      local_78 = 1;
    }
    uStack_74 = (undefined4)local_80;
    uStack_70 = (undefined4)((ulong)local_80 >> 0x20);
    local_68 = key;
  }
LAB_041b3539:
  uStack_6c = 0;
  iStack_60 = 0;
  il2cpp_runtime_glue(&local_68,local_68);
  iStack_60 = 0;
LAB_041b3547:
  (local_50->fields).type = local_78;
  (local_50->fields).progress.fields.Item1 = uStack_74;
  *(ulong *)&(local_50->fields).progress.fields.Item2 = CONCAT44(uStack_6c,uStack_70);
  (local_50->fields).target = local_68;
  (local_50->fields).cooldown.fields._ticks = iStack_60;
  return local_50;
}


// Anticheat.BallotBox$$ResetBallots
// il2cpp: void Anticheat_BallotBox__ResetBallots (Anticheat_BallotBox_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x41b38e0

void Anticheat_BallotBox__ResetBallots
               (Anticheat_BallotBox_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  bool_conflict bVar1;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  System_DateTime_o SVar2;
  Anticheat_BallotBox_Ballot_o item;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_04;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar5;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSStack_48;
  Il2CppType *pIStack_40;
  
  if (DAT_05704d3b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_Photon);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot__get_Curren);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_05704d3b = '\x01';
  }
  pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  __this_04 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).BallotsByTargetPlayer;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_03 = System_Collections_Generic_Dictionary<object__object>__get_Values
                          (__this_00,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_Photon);
    if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                 )&stack0xffffffffffffff98,__this_03,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
      while( true ) {
        __this_01.fields._8_8_ = pIVar4;
        __this_01.fields._dictionary = pSVar3;
        __this_01.fields._currentValue = (Il2CppObject *)__this_04;
        bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                          (__this_01,(MethodInfo_31D09E0 *)&stack0xffffffffffffff98);
        if ((char)bVar1 == '\0') {
          __this_02.fields._8_8_ = pIVar4;
          __this_02.fields._dictionary = pSVar3;
          __this_02.fields._currentValue = (Il2CppObject *)__this_04;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                    (__this_02,(MethodInfo_31D09D0 *)&stack0xffffffffffffff98);
          return;
        }
        pSStack_48 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c
                      *)0x0;
        pIStack_40 = (Il2CppType *)0x0;
        pSVar5 = __this_04;
        if (DAT_05704d44 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_DateTime);
          DAT_05704d44 = '\x01';
        }
        pSStack_48 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c
                      *)player;
        il2cpp_runtime_glue(&pSStack_48,player);
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_init_class();
        }
        SVar2 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if (__this_04 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) break;
        item.fields.Timestamp.fields._dateData = SVar2.fields._dateData;
        item.fields.Voter = (Photon_Realtime_Player_o *)pSStack_48;
        System_Collections_Generic_HashSet<BallotBox_Ballot>__Remove(__this_04,item,MethodInfo_Boolean_Remove);
        __this_04 = pSVar5;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.BallotBox$$RemoveOldBallots
// il2cpp: void Anticheat_BallotBox__RemoveOldBallots (Anticheat_BallotBox_o* __this, const MethodInfo* method);
// 0x41b3c10

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
  bool_conflict bVar6;
  Il2CppObject *item;
  System_Predicate_T__o *match;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_05;
  undefined1 auVar7 [16];
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  Il2CppObject *key;
  char *in_stack_ffffffffffffff70;
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;
  
  if (DAT_05704d3c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean__RemoveOldBallots_b__8_0);
    il2cpp_init_method_metadata(&TypeInfo_BallotBox);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_Photon_Real);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Player_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_Photon_Realtime_Player_HashSet_1);
    il2cpp_init_method_metadata(&MethodInfo_Int32_RemoveWhere);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Player_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot__get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Photon_Realtime_Player__Get);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_Ballot);
    DAT_05704d3c = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  key = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_BallotBox + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar3 = **(long **)(TypeInfo_BallotBox + 0xb8);
  if (lVar3 != 0) {
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    length = *(int32_t *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    if (0 < length) {
      System_Array__Clear(*(System_Array_o **)(lVar3 + 0x10),0,length,(MethodInfo *)0x0);
    }
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields).BallotsByTargetPlayer;
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__GetEnumerator
                (&local_58,pSVar4,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_Photon_Real);
      pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)local_58.fields._dictionary;
      while( true ) {
        __this_03.fields._8_8_ = pIVar9;
        __this_03.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
        __this_03.fields._current.fields.key = key;
        __this_03.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff70;
        __this_03.fields._32_8_ = pSVar10;
        bVar6 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                          (__this_03,(MethodInfo_31CFE90 *)&stack0xffffffffffffff78);
        if ((char)bVar6 == '\0') break;
        auVar7 = il2cpp_glue_032bf890((MethodInfo_31CFE90 *)&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_Photon_Realtime_Player_HashSet_1);
        __this_05 = auVar7._8_8_;
        item = auVar7._0_8_;
        match = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_Ballot);
        System_Predicate<BallotBox_Ballot>___ctor();
        if (__this_05 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_HashSet<BallotBox_Ballot>__RemoveWhere
                  (__this_05,match,MethodInfo_Int32_RemoveWhere);
        if ((__this_05->fields)._count == 0) {
          if (*(int *)(TypeInfo_BallotBox + 0xe4) == 0) {
            il2cpp_init_class();
          }
          lVar3 = MethodInfo_Void_Add;
          __this_00 = (System_Collections_Generic_List_object__o *)
                      **(undefined8 **)(TypeInfo_BallotBox + 0xb8);
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_00->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = item;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_04.fields._8_8_ = pIVar9;
      __this_04.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8
      ;
      __this_04.fields._current.fields.key = key;
      __this_04.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff70;
      __this_04.fields._32_8_ = pSVar10;
      System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
                (__this_04,(MethodInfo_31CFFB0 *)&stack0xffffffffffffff78);
      if (*(int *)(TypeInfo_BallotBox + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_BallotBox + 0xb8) !=
          (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff58,
                   (System_Collections_Generic_List_object__o *)
                   **(undefined8 **)(TypeInfo_BallotBox + 0xb8),MethodInfo_List_1_T__Enumerator_Photon_Realtime_Player__Get);
        while( true ) {
          __this_01.fields._8_8_ = pIVar9;
          __this_01.fields._list = pSVar8;
          __this_01.fields._current = key;
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff58);
          if ((char)bVar6 == '\0') {
            __this_02.fields._8_8_ = pIVar9;
            __this_02.fields._list = pSVar8;
            __this_02.fields._current = key;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff58);
            return;
          }
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields).BallotsByTargetPlayer;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          System_Collections_Generic_Dictionary<object__object>__Remove(pSVar4,key,MethodInfo_Boolean_Remove);
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.BallotBox$$CountBallotsCast
// il2cpp: int32_t Anticheat_BallotBox__CountBallotsCast (Anticheat_BallotBox_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x41b42c0

int32_t Anticheat_BallotBox__CountBallotsCast
                  (Anticheat_BallotBox_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method
                  )

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  bool_conflict bVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  System_DateTime_o SVar3;
  int iVar4;
  Anticheat_BallotBox_Ballot_o item;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_04;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar7;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *local_48;
  Il2CppType *pIStack_40;
  
  if (DAT_05704d3d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_Photon);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot__get_Curren);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_05704d3d = '\x01';
  }
  pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  __this_04 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).BallotsByTargetPlayer;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_03 = System_Collections_Generic_Dictionary<object__object>__get_Values
                          (__this_00,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_Photon);
    if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                 )&stack0xffffffffffffff98,__this_03,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
      iVar4 = 0;
      while( true ) {
        __this_01.fields._8_8_ = pIVar6;
        __this_01.fields._dictionary = pSVar5;
        __this_01.fields._currentValue = (Il2CppObject *)__this_04;
        bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                          (__this_01,(MethodInfo_31D09E0 *)&stack0xffffffffffffff98);
        if ((char)bVar1 == '\0') {
          __this_02.fields._8_8_ = pIVar6;
          __this_02.fields._dictionary = pSVar5;
          __this_02.fields._currentValue = (Il2CppObject *)__this_04;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                    (__this_02,(MethodInfo_31D09D0 *)&stack0xffffffffffffff98);
          return iVar4;
        }
        local_48 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c
                    *)0x0;
        pIStack_40 = (Il2CppType *)0x0;
        pSVar7 = __this_04;
        if (DAT_05704d44 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_DateTime);
          DAT_05704d44 = '\x01';
        }
        local_48 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c
                    *)player;
        il2cpp_runtime_glue(&local_48,player);
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_init_class();
        }
        SVar3 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if (__this_04 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) break;
        item.fields.Timestamp.fields._dateData = SVar3.fields._dateData;
        item.fields.Voter = (Photon_Realtime_Player_o *)local_48;
        uVar2 = System_Collections_Generic_HashSet<BallotBox_Ballot>__Contains
                          (__this_04,item,MethodInfo_Boolean_Contains);
        iVar4 = iVar4 + (uVar2 & 0xff);
        __this_04 = pSVar7;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.BallotBox$$HasCooldown
// il2cpp: bool Anticheat_BallotBox__HasCooldown (Anticheat_BallotBox_o* __this, Photon_Realtime_Player_o* voter, const MethodInfo* method);
// 0x41b4190

bool_conflict
Anticheat_BallotBox__HasCooldown
          (Anticheat_BallotBox_o *__this,Photon_Realtime_Player_o *voter,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Player__DateTime__o *__this_00;
  System_TimeSpan_o t2;
  bool_conflict bVar1;
  System_DateTime_o d1;
  System_TimeSpan_o t1;
  System_DateTime_o local_20;
  
  if (DAT_05704d3e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    DAT_05704d3e = '\x01';
  }
  local_20.fields._dateData = (System_DateTime_Fields)0;
  __this_00 = (__this->fields).LastBallotCastTimestampByPlayer;
  if (__this_00 != (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object__DateTime>__TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)voter,&local_20,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 == '\0') {
      bVar1 = 0;
    }
    else {
      if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
        il2cpp_init_class();
      }
      d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
      t1 = System_DateTime__op_Subtraction(d1,local_20,(MethodInfo *)0x0);
      t2.fields._ticks = (System_TimeSpan_Fields)(__this->fields).BallotCooldown.fields._ticks;
      if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = System_TimeSpan__op_LessThan(t1,t2,(MethodInfo *)0x0);
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.BallotBox$$.ctor
// il2cpp: void Anticheat_BallotBox___ctor (Anticheat_BallotBox_o* __this, const MethodInfo* method);
// 0x41b2930

void Anticheat_BallotBox___ctor(Anticheat_BallotBox_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_Player__DateTime__o *__this_01;
  System_TimeSpan_o SVar1;
  
  if (DAT_05704d3f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_Photon_Realtime_Player_System_DateT);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_Photon_Realtime_Player_HashSet_1_An);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_Player__HashSet_Ballot);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_Player__DateTime);
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    DAT_05704d3f = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_Player__HashSet_Ballot);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_Photon_Realtime_Player_HashSet_1_An);
  (__this->fields).BallotsByTargetPlayer =
       (System_Collections_Generic_Dictionary_Player__HashSet_BallotBox_Ballot___o *)__this_00;
  il2cpp_runtime_glue(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_Player__DateTime__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_Player__DateTime);
  System_Collections_Generic_Dictionary<object__DateTime>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,MethodInfo_Dictionary_2_Photon_Realtime_Player_System_DateT);
  (__this->fields).LastBallotCastTimestampByPlayer = __this_01;
  il2cpp_runtime_glue(&(__this->fields).LastBallotCastTimestampByPlayer);
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_init_class();
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
// 0x41b4650

void Anticheat_BallotBox___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  
  if (DAT_05704d40 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BallotBox);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Photon_Realtime_Player);
    il2cpp_init_method_metadata(&TypeInfo_List_Player);
    DAT_05704d40 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Player);
  System_Collections_Generic_List<object>___ctor(__this,MethodInfo_List_1_Photon_Realtime_Player);
  **(undefined8 **)(TypeInfo_BallotBox + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_BallotBox + 0xb8),__this);
  return;
}


// Anticheat.BallotBox$$<RemoveOldBallots>b__8_0
// il2cpp: bool Anticheat_BallotBox___RemoveOldBallots_b__8_0 (Anticheat_BallotBox_o* __this, Anticheat_BallotBox_Ballot_o ballot, const MethodInfo* method);
// 0x41b46d0

bool_conflict
Anticheat_BallotBox__<RemoveOldBallots>b__8_0
          (Anticheat_BallotBox_o *__this,Anticheat_BallotBox_Ballot_o ballot,MethodInfo *method)

{
  System_TimeSpan_o t2;
  bool_conflict bVar1;
  System_DateTime_o d1;
  System_TimeSpan_o t1;
  
  if (DAT_05704d41 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTime,ballot.fields.Voter);
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    DAT_05704d41 = '\x01';
  }
  if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
    il2cpp_init_class();
  }
  d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  t1 = System_DateTime__op_Subtraction
                 (d1,ballot.fields.Timestamp.fields._dateData,(MethodInfo *)0x0);
  t2.fields._ticks = (System_TimeSpan_Fields)(__this->fields).BallotTimeout.fields._ticks;
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_TimeSpan__op_GreaterThan(t1,t2,(MethodInfo *)0x0);
  return bVar1;
}


