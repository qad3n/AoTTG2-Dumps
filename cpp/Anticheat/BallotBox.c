// Type: Anticheat.BallotBox
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Anticheat/BallotBox.cs
// Prior real C# source (older reference): Assets/Scripts/Anticheat/AnticheatManager.cs
// --------------------------------

// Anticheat.BallotBox.Result$$.ctor
// il2cpp: void Anticheat_BallotBox_Result___ctor (Anticheat_BallotBox_Result_o __this, int32_t type, System_ValueTuple_int__int__o progress, Photon_Realtime_Player_o* target, System_TimeSpan_o cooldown, const MethodInfo* method);
// 0x182372120

void Anticheat_BallotBox_Result___ctor
               (Anticheat_BallotBox_Result_o *__this,int32_t type,System_ValueTuple_int__int__o progress,
               Photon_Realtime_Player_o *target,System_TimeSpan_o cooldown,MethodInfo *method)

{
  (__this->fields).type = type;
  (__this->fields).progress.fields = progress.fields;
  (__this->fields).target = target;
  Il2CppCodeGenWriteBarrier(&(__this->fields).target,target);
  (__this->fields).cooldown.fields._ticks = (int64_t)cooldown.fields._ticks;
  return;
}


// Anticheat.BallotBox.Result$$Success
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__Success (int32_t required, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x182371ca0

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__Success
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,int32_t required,
          Photon_Realtime_Player_o *target,MethodInfo *method)

{
  System_ValueTuple_int__int__Fields local_res8 [4];
  
  if (Il2CppMethodInitialized_184347a73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_int_int_ctor);
    Il2CppMethodInitialized_184347a73 = '\x01';
  }
  local_res8[0].Item1 = 0;
  local_res8[0].Item2 = 0;
  System_ValueTuple_int__int____ctor
            ((UnityEngine_TerrainUtils_TerrainTileCoord_o *)local_res8,required,required,
             MethodInfo_System_ValueTuple_int_int_ctor);
  *(undefined4 *)&(__return_storage_ptr__->fields).field_0xc = 0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).progress.fields = local_res8[0];
  (__return_storage_ptr__->fields).type = 0;
  (__return_storage_ptr__->fields).target = target;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).target,target);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$InsufficientVotes
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__InsufficientVotes (System_ValueTuple_int__int__o progress, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x182371bb0

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__InsufficientVotes
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,System_ValueTuple_int__int__o progress,
          Photon_Realtime_Player_o *target,MethodInfo *method)

{
  *(undefined4 *)&(__return_storage_ptr__->fields).field_0xc = 0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  (__return_storage_ptr__->fields).type = 1;
  (__return_storage_ptr__->fields).target = target;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).target,target);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$ExceededConcurrentVotesLimit
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__ExceededConcurrentVotesLimit (System_ValueTuple_int__int__o progress, const MethodInfo* method);
// 0x182371b60

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__ExceededConcurrentVotesLimit
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,System_ValueTuple_int__int__o progress,
          MethodInfo *method)

{
  *(undefined4 *)&(__return_storage_ptr__->fields).field_0xc = 0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  (__return_storage_ptr__->fields).type = 2;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).target,(void *)0x0);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$UnderCooldown
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__UnderCooldown (System_ValueTuple_int__int__o progress, System_TimeSpan_o cooldown, const MethodInfo* method);
// 0x1823720d0

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__UnderCooldown
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,System_ValueTuple_int__int__o progress,
          System_TimeSpan_o cooldown,MethodInfo *method)

{
  *(undefined4 *)&(__return_storage_ptr__->fields).field_0xc = 0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  (__return_storage_ptr__->fields).type = 3;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).target,(void *)0x0);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = (int64_t)cooldown.fields._ticks;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$MissingAuthority
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__MissingAuthority (System_ValueTuple_int__int__o progress, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x182371c50

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__MissingAuthority
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,System_ValueTuple_int__int__o progress,
          Photon_Realtime_Player_o *target,MethodInfo *method)

{
  *(undefined4 *)&(__return_storage_ptr__->fields).field_0xc = 0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  (__return_storage_ptr__->fields).type = 4;
  (__return_storage_ptr__->fields).target = target;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).target,target);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$InvalidTarget
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox_Result__InvalidTarget (System_ValueTuple_int__int__o progress, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x182371c00

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox_Result__InvalidTarget
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,System_ValueTuple_int__int__o progress,
          Photon_Realtime_Player_o *target,MethodInfo *method)

{
  *(undefined4 *)&(__return_storage_ptr__->fields).field_0xc = 0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  (__return_storage_ptr__->fields).progress.fields = progress.fields;
  (__return_storage_ptr__->fields).type = 5;
  (__return_storage_ptr__->fields).target = target;
  Il2CppCodeGenWriteBarrier(&(__return_storage_ptr__->fields).target,target);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox.Result$$get_IsSuccess
// il2cpp: bool Anticheat_BallotBox_Result__get_IsSuccess (Anticheat_BallotBox_Result_o __this, const MethodInfo* method);
// 0x182372150

bool
Anticheat_BallotBox_Result__get_IsSuccess(Anticheat_BallotBox_Result_o __this, MethodInfo* method)

{
  return (__this->fields)._sign == 0;
}


// Anticheat.BallotBox.Result$$ToString
// il2cpp: System_String_o* Anticheat_BallotBox_Result__ToString (Anticheat_BallotBox_Result_o __this, const MethodInfo* method);
// 0x182371d20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182372083: mov rcx, qword ptr [rip + 0x1d2e82e]  ; "Unknown error."

System_String_o *
Anticheat_BallotBox_Result__ToString(Anticheat_BallotBox_Result_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *arg1;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  int32_t color;
  int32_t local_res8 [4];
  int32_t local_res18 [2];
  double local_res20;
  
  if (Il2CppMethodInitialized_184347a74 == '\0') {
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
    Il2CppMethodInitialized_184347a74 = '\x01';
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
    local_res8[0] = (__this->fields).progress.fields.Item1;
    pIVar3 = il2cpp_value_box(g_data_184354e08,local_res8);
    local_res18[0] = (__this->fields).progress.fields.Item2;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res18);
    pSVar4 = System_String__Format_196d050
                       ("Voted to kick {0} ({1}/{2}).",(Il2CppObject *)pSVar4,pIVar3,pIVar2,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    color = 3;
    goto label_18237208f;
  case 2:
    local_res8[0] = 1;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    local_res18[0] = (__this->fields).progress.fields.Item1;
    arg1 = il2cpp_value_box(g_data_184354e08,local_res18);
    local_res20 = (double)CONCAT44(local_res20._4_4_,(__this->fields).progress.fields.Item2);
    pIVar3 = il2cpp_value_box(g_data_184354e08,&local_res20);
    pSVar4 = "Cannot vote for more than {0} players at a time ({1}/{2}).";
    goto label_182371f04;
  case 3:
    if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
    }
    local_res20 = System_TimeSpan__get_TotalMinutes(&(__this->fields).cooldown,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354e40,&local_res20);
    local_res8[0] = (__this->fields).progress.fields.Item1;
    arg1 = il2cpp_value_box(g_data_184354e08,local_res8);
    local_res18[0] = (__this->fields).progress.fields.Item2;
    pIVar3 = il2cpp_value_box(g_data_184354e08,local_res18);
    pSVar4 = "Voting is limited to once every {0:N1} minutes ({1}/{2}).";
label_182371f04:
    pSVar4 = System_String__Format_196d050(pSVar4,pIVar2,arg1,pIVar3,(MethodInfo *)0x0);
    break;
  case 4:
    pPVar1 = (__this->fields).target;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,""
                        ,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_1969b70
                       ("Cannot ",pSVar4,": missing authority.",(MethodInfo *)0x0);
    break;
  case 5:
    pPVar1 = (__this->fields).target;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar1,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,""
                        ,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_1969b70
                       ("Cannot kick ",pSVar4,": invalid target.",(MethodInfo *)0x0);
    break;
  default:
    pSVar4 = "Unknown error.";
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      pSVar4 = "Unknown error.";
    }
    goto label_18237208a;
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
label_18237208a:
  color = 4;
label_18237208f:
  pSVar4 = GameManagers_ChatManager__GetColorString(pSVar4,color,false,(MethodInfo *)0x0);
  return pSVar4;
}


// Anticheat.BallotBox.Ballot$$.ctor
// il2cpp: void Anticheat_BallotBox_Ballot___ctor (Anticheat_BallotBox_Ballot_o __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x18236a0a0

void Anticheat_BallotBox_Ballot___ctor
               (Anticheat_BallotBox_Ballot_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_DateTime_o SVar1;
  
  if (Il2CppMethodInitialized_184347a77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    Il2CppMethodInitialized_184347a77 = '\x01';
  }
  (__this->fields).Voter = player;
  Il2CppCodeGenWriteBarrier((void **)__this,player);
  if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
  }
  SVar1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  (__this->fields).Timestamp.fields._dateData = (uint64_t)SVar1.fields._dateData;
  return;
}


// Anticheat.BallotBox.Ballot$$GetHashCode
// il2cpp: int32_t Anticheat_BallotBox_Ballot__GetHashCode (Anticheat_BallotBox_Ballot_o __this, const MethodInfo* method);
// 0x182369ff0

int32_t
Anticheat_BallotBox_Ballot__GetHashCode(Anticheat_BallotBox_Ballot_o __this, MethodInfo* method)

{
  System_UInt32_array *pSVar1;
  Il2CppClass *pIVar2;
  int32_t iVar3;
  
  pSVar1 = (__this->fields).m_ComponentGlyphIDs;
  if (pSVar1 != (System_UInt32_array *)0x0) {
    pIVar2 = (pSVar1->obj).klass;
    iVar3 = (*pIVar2->vtable[2].methodPtr)(pSVar1,pIVar2->vtable[2].method);
    return iVar3;
  }
  ThrowNullReferenceException();
}


// Anticheat.BallotBox.Ballot$$Equals
// il2cpp: bool Anticheat_BallotBox_Ballot__Equals (Anticheat_BallotBox_Ballot_o __this, Il2CppObject* obj, const MethodInfo* method);
// 0x182369f50

bool Anticheat_BallotBox_Ballot__Equals
               (Anticheat_BallotBox_Ballot_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  undefined8 *puVar4;
  
  if (Il2CppMethodInitialized_184347a78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_BallotBox_Ballot);
    Il2CppMethodInitialized_184347a78 = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    pIVar3 = (Il2CppObject *)0x0;
    if (obj->klass == (Il2CppClass *)TypeInfo_Anticheat_BallotBox_Ballot) {
      pIVar3 = obj;
    }
    if (pIVar3 != (Il2CppObject *)0x0) {
      if ((obj->klass->_1).element_class != (TypeInfo_Anticheat_BallotBox_Ballot->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      puVar4 = il2cpp_object_unbox(obj);
      pPVar1 = (__this->fields).Voter;
      if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
        bVar2 = (*(pPVar1->klass->vtable)._0_Equals.methodPtr)
                          (pPVar1,(Il2CppObject *)*puVar4,(pPVar1->klass->vtable)._0_Equals.method);
        return bVar2;
      }
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Anticheat.BallotBox.Ballot$$ToString
// il2cpp: System_String_o* Anticheat_BallotBox_Ballot__ToString (Anticheat_BallotBox_Ballot_o __this, const MethodInfo* method);
// 0x18236a020

System_String_o *
Anticheat_BallotBox_Ballot__ToString(Anticheat_BallotBox_Ballot_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *arg0;
  Il2CppObject *arg1;
  System_String_o *pSVar1;
  System_DateTime_Fields local_res8;
  
  if (Il2CppMethodInitialized_184347a79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&"{0} ({1})");
    Il2CppMethodInitialized_184347a79 = '\x01';
  }
  local_res8._dateData = (__this->fields).Timestamp.fields._dateData;
  arg0 = (__this->fields).Voter;
  arg1 = il2cpp_value_box((Il2CppClass *)TypeInfo_System_DateTime,&local_res8);
  pSVar1 = System_String__Format_196d440("{0} ({1})",(Il2CppObject *)arg0,arg1,(MethodInfo *)0x0);
  return pSVar1;
}


// Anticheat.BallotBox.Ballot$$op_Implicit
// il2cpp: Anticheat_BallotBox_Ballot_o Anticheat_BallotBox_Ballot__op_Implicit (Photon_Realtime_Player_o* voter, const MethodInfo* method);
// 0x18236a110

Anticheat_BallotBox_Ballot_o *
Anticheat_BallotBox_Ballot__op_Implicit
          (Anticheat_BallotBox_Ballot_o *__return_storage_ptr__,Photon_Realtime_Player_o *voter,
          MethodInfo *method)

{
  System_DateTime_o SVar1;
  bool bVar2;
  
  bVar2 = Il2CppMethodInitialized_184347a77 == '\0';
  (__return_storage_ptr__->fields).Voter = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).Timestamp.fields._dateData = 0;
  if (bVar2) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    Il2CppMethodInitialized_184347a77 = '\x01';
  }
  (__return_storage_ptr__->fields).Voter = voter;
  Il2CppCodeGenWriteBarrier((void **)__return_storage_ptr__,voter);
  if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
  }
  SVar1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  (__return_storage_ptr__->fields).Timestamp.fields._dateData = (uint64_t)SVar1.fields._dateData;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox$$TryCastBallot
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_BallotBox__TryCastBallot (Anticheat_BallotBox_o* __this, Photon_Realtime_Player_o* voter, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x182369730
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823699da: xor ebx, ebx

Anticheat_BallotBox_Result_o *
Anticheat_BallotBox__TryCastBallot
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,Anticheat_BallotBox_o *__this,
          Photon_Realtime_Player_o *voter,Photon_Realtime_Player_o *target,MethodInfo *method)

{
  int tileZ;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_Player__DateTime__o *pSVar2;
  System_TimeSpan_o t2;
  bool bVar3;
  int32_t iVar4;
  Photon_Realtime_Room_o *__this_00;
  Photon_Realtime_Player_o *pPVar5;
  System_DateTime_o d1;
  System_TimeSpan_o t1;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar6;
  System_DateTime_o SVar7;
  int32_t tileX;
  int64_t iVar8;
  UnityEngine_TerrainUtils_TerrainTileCoord_Fields local_res8;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *local_50;
  Anticheat_BallotBox_Ballot_o local_48;
  Photon_Realtime_Player_o *local_38;
  int64_t iStack_30;
  
  if (Il2CppMethodInitialized_184347a69 == '\0') {
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
    Il2CppMethodInitialized_184347a69 = '\x01';
  }
  local_50 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0;
  Anticheat_BallotBox__RemoveOldBallots(__this,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  __this_00 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (__this_00 == (Photon_Realtime_Room_o *)0x0) goto label_182369cf8;
  iVar4 = Photon_Realtime_Room__get_PlayerCount(__this_00,(MethodInfo *)0x0);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).BallotsByTargetPlayer;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182369cf8;
  bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (pSVar1,(Il2CppObject *)target,(Il2CppObject **)&local_50,
                     (MethodInfo_14769C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_TryGetValue
                    );
  local_res8.tileX._0_1_ = bVar3;
  if (local_50 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
    tileX = 0;
  }
  else {
    tileX = (local_50->fields)._count;
  }
  tileZ = iVar4 / 2 + 1;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  local_38 = target;
  if (bVar3) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if ((target != pPVar5) && (target != voter)) {
      if (Il2CppMethodInitialized_184347a6d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_Player_DateTime_TryGetValue);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
        Il2CppMethodInitialized_184347a6d = '\x01';
      }
      pSVar2 = (__this->fields).LastBallotCastTimestampByPlayer;
      local_48.fields.Voter._0_4_ = 0;
      local_48.fields.Voter._4_4_ = 0;
      if (pSVar2 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)voter
                         ,(UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_o *)&local_48,
                         (MethodInfo_14767F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Player_DateTime_TryGetValue);
      if (bVar3) {
        if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
        }
        d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        SVar7.fields._dateData._4_4_ = local_48.fields.Voter._4_4_;
        SVar7.fields._dateData._0_4_ = local_48.fields.Voter._0_4_;
        t1 = System_DateTime__op_Subtraction_1b21970(d1,SVar7,(MethodInfo *)0x0);
        t2.fields._ticks = (System_TimeSpan_Fields)(__this->fields).BallotCooldown.fields._ticks;
        if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
        }
        bVar3 = System_TimeSpan__op_LessThan(t1,t2,(MethodInfo *)0x0);
        if (!bVar3) goto label_1823699dc;
        local_res8.tileX = 0;
        local_res8.tileZ = 0;
        System_ValueTuple_int__int____ctor
                  ((UnityEngine_TerrainUtils_TerrainTileCoord_o *)&local_res8,tileX,tileZ,
                   MethodInfo_System_ValueTuple_int_int_ctor);
        iVar8 = (__this->fields).BallotCooldown.fields._ticks;
        local_48.fields.Voter._0_4_ = 3;
label_1823699be:
        local_38 = (Photon_Realtime_Player_o *)0x0;
      }
      else {
label_1823699dc:
        iVar8 = 0;
        iVar4 = Anticheat_BallotBox__CountBallotsCast(__this,voter,(MethodInfo *)0x0);
        pSVar6 = local_50;
        if (0 < iVar4) {
          local_res8.tileX = 0;
          local_res8.tileZ = 0;
          System_ValueTuple_int__int____ctor
                    ((UnityEngine_TerrainUtils_TerrainTileCoord_o *)&local_res8,tileX,tileZ,
                     MethodInfo_System_ValueTuple_int_int_ctor);
          local_48.fields.Voter._0_4_ = 2;
          goto label_1823699be;
        }
        local_48.fields.Voter = voter;
        if ((char)local_res8.tileX == '\0') {
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields).BallotsByTargetPlayer;
          pSVar6 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BallotBox_Ballot);
          System_Collections_Generic_HashSet_BallotBox_Ballot____ctor
                    (pSVar6,(MethodInfo_17943C0 *)
                            MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_ctor);
          local_48.fields.Voter._0_4_ = 0;
          local_48.fields.Voter._4_4_ = 0;
          local_48.fields.Timestamp.fields._dateData._0_4_ = 0;
          local_48.fields.Timestamp.fields._dateData._4_4_ = 0;
          if (Il2CppMethodInitialized_184347a77 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
            Il2CppMethodInitialized_184347a77 = '\x01';
          }
          Il2CppCodeGenWriteBarrier((void **)&local_48,voter);
          if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
          }
          SVar7 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
          local_48.fields.Timestamp.fields._dateData._0_4_ = (int32_t)SVar7.fields._dateData;
          local_48.fields.Timestamp.fields._dateData._4_4_ = SVar7.fields._dateData._4_4_;
          if (pSVar6 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) goto label_182369cf8;
          System_Collections_Generic_HashSet_BallotBox_Ballot___Add
                    (pSVar6,&local_48,
                     (MethodInfo_177B730 *)MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_Add)
          ;
          local_50 = pSVar6;
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182369cf8;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar1,(Il2CppObject *)target,(Il2CppObject *)pSVar6,
                     (MethodInfo_146B4B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_Add);
        }
        else {
          local_48.fields.Voter._0_4_ = 0;
          local_48.fields.Voter._4_4_ = 0;
          local_48.fields.Timestamp.fields._dateData._0_4_ = 0;
          local_48.fields.Timestamp.fields._dateData._4_4_ = 0;
          if (Il2CppMethodInitialized_184347a77 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
            Il2CppMethodInitialized_184347a77 = '\x01';
          }
          Il2CppCodeGenWriteBarrier((void **)&local_48,voter);
          if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
          }
          SVar7 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
          local_48.fields.Timestamp.fields._dateData._0_4_ = (int32_t)SVar7.fields._dateData;
          local_48.fields.Timestamp.fields._dateData._4_4_ = SVar7.fields._dateData._4_4_;
          if (pSVar6 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) goto label_182369cf8;
          System_Collections_Generic_HashSet_BallotBox_Ballot___Add
                    (pSVar6,&local_48,
                     (MethodInfo_177B730 *)MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_Add)
          ;
        }
        pSVar2 = (__this->fields).LastBallotCastTimestampByPlayer;
        if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
        }
        SVar7 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if (pSVar2 == (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) {
label_182369cf8:
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_object__DateTime___TryAdd
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)voter,SVar7
                   ,(MethodInfo_14766F0 *)
                    MethodInfo_System_Collections_Generic_Dictionary_Player_DateTime_TryAdd);
        if (local_50 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) goto label_182369cf8;
        iVar4 = (local_50->fields)._count;
        if (iVar4 < tileZ) {
          iVar8 = 0;
          local_res8.tileX = 0;
          local_res8.tileZ = 0;
          System_ValueTuple_int__int____ctor
                    ((UnityEngine_TerrainUtils_TerrainTileCoord_o *)&local_res8,iVar4,tileZ,
                     MethodInfo_System_ValueTuple_int_int_ctor);
          local_48.fields.Voter._0_4_ = 1;
        }
        else {
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields).BallotsByTargetPlayer;
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182369cf8;
          System_Collections_Generic_Dictionary_object__object___Remove
                    (pSVar1,(Il2CppObject *)target,
                     (MethodInfo_1470BF0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_Remove);
          if (Il2CppMethodInitialized_184347a73 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_int_int_ctor);
            Il2CppMethodInitialized_184347a73 = '\x01';
          }
          iVar8 = 0;
          local_res8.tileX = 0;
          local_res8.tileZ = 0;
          System_ValueTuple_int__int____ctor
                    ((UnityEngine_TerrainUtils_TerrainTileCoord_o *)&local_res8,tileZ,tileZ,
                     MethodInfo_System_ValueTuple_int_int_ctor);
          local_48.fields.Voter._0_4_ = 0;
        }
      }
      iStack_30 = 0;
      local_48.fields.Timestamp.fields._dateData._4_4_ = 0;
      local_48.fields.Voter._4_4_ = local_res8.tileX;
      local_48.fields.Timestamp.fields._dateData._0_4_ = local_res8.tileZ;
      Il2CppCodeGenWriteBarrier(&local_38,local_38);
      iStack_30 = iVar8;
      goto label_182369cc1;
    }
    local_res8.tileX = 0;
    local_res8.tileZ = 0;
    System_ValueTuple_int__int____ctor
              ((UnityEngine_TerrainUtils_TerrainTileCoord_o *)&local_res8,tileX,tileZ,
               MethodInfo_System_ValueTuple_int_int_ctor);
    local_48.fields.Voter._0_4_ = 5;
  }
  else {
    local_res8.tileX = 0;
    local_res8.tileZ = 0;
    System_ValueTuple_int__int____ctor
              ((UnityEngine_TerrainUtils_TerrainTileCoord_o *)&local_res8,tileX,tileZ,
               MethodInfo_System_ValueTuple_int_int_ctor);
    local_48.fields.Voter._0_4_ = 4;
  }
  local_48.fields.Voter._4_4_ = local_res8.tileX;
  local_48.fields.Timestamp.fields._dateData._0_4_ = local_res8.tileZ;
  iStack_30 = 0;
  local_48.fields.Timestamp.fields._dateData._4_4_ = 0;
  Il2CppCodeGenWriteBarrier(&local_38,target);
  iStack_30 = 0;
label_182369cc1:
  (__return_storage_ptr__->fields).type = local_48.fields.Voter._0_4_;
  (__return_storage_ptr__->fields).progress.fields.Item1 = local_48.fields.Voter._4_4_;
  *(ulonglong *)&(__return_storage_ptr__->fields).progress.fields.Item2 =
       CONCAT44(local_48.fields.Timestamp.fields._dateData._4_4_,
                (int32_t)local_48.fields.Timestamp.fields._dateData);
  (__return_storage_ptr__->fields).target = local_38;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = iStack_30;
  return __return_storage_ptr__;
}


// Anticheat.BallotBox$$ResetBallots
// il2cpp: void Anticheat_BallotBox__ResetBallots (Anticheat_BallotBox_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x182369560
// eh: try 0x182369640..0x182369722 -> pad 0x183317870 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823696ef: mov rdx, qword ptr [rip + 0x1d4c08a]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot
// asm:   0x1823696f6: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1823696fb: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182369700: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x182369705: test rcx, rcx
// asm:   0x182369708: jne 0x182369722
// asm:   0x182369722: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317870: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317875: push rbp
// asm:   0x183317876: sub rsp, 0x20
// asm:   0x18331787a: mov rbp, rdx
// asm:   0x18331787d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317881: mov rcx, qword ptr [rax]
// asm:   0x183317884: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317888: movabs rax, 0
// asm:   0x183317892: add rsp, 0x20
// asm:   0x183317896: pop rbp
// asm:   0x183317897: ret 

void Anticheat_BallotBox__ResetBallots
               (Anticheat_BallotBox_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Player__HashSet_BallotBox_Ballot___o *__this_00;
  Il2CppObject *__this_01;
  bool bVar1;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  Anticheat_BallotBox_Ballot_o local_48;
  undefined1 local_38 [16];
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *local_28;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_20;
  
  if (Il2CppMethodInitialized_184347a6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot_40b5860
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot_40b5940
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Player_HashSet_BallotBox_Ballot_GetEnumera
              );
    Il2CppMethodInitialized_184347a6a = '\x01';
  }
  local_20.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_20.fields._index = 0;
  local_20.fields._version = 0;
  local_20.fields._currentValue = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).BallotsByTargetPlayer;
  if (__this_00 != (System_Collections_Generic_Dictionary_Player__HashSet_BallotBox_Ballot___o *)0x0) {
    __this_02 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_get_Values
                          );
    if (__this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_38,
                 __this_02,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Player_HashSet_BallotBox_Ballot_GetEnumera
                );
      local_20.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_38._0_8_;
      local_20.fields._index = local_38._8_4_;
      local_20.fields._version = local_38._12_4_;
      local_20.fields._currentValue = (Il2CppObject *)local_28;
      local_38._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_38._8_8_ = &local_20;
      while( true ) {
        bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                          (&local_20,
                           (MethodInfo_155CFB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot_40b5860
                          );
        __this_01 = local_20.fields._currentValue;
        if (!bVar1) {
          System_Configuration_ConfigurationCollectionAttribute___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_20,
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot
                    );
          return;
        }
        local_48.fields.Voter = (Photon_Realtime_Player_o *)0x0;
        local_48.fields.Timestamp.fields._dateData = (System_DateTime_Fields)0;
        if (Il2CppMethodInitialized_184347a77 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
          Il2CppMethodInitialized_184347a77 = '\x01';
        }
        local_48.fields.Voter = player;
        Il2CppCodeGenWriteBarrier((void **)&local_48,player);
        if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
        }
        local_48.fields.Timestamp = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)__this_01 ==
            (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) break;
        System_Collections_Generic_HashSet_BallotBox_Ballot___Remove
                  ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)__this_01,&local_48,
                   (MethodInfo_178C6D0 *)MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_Remove
                  );
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.BallotBox$$RemoveOldBallots
// il2cpp: void Anticheat_BallotBox__RemoveOldBallots (Anticheat_BallotBox_o* __this, const MethodInfo* method);
// 0x1823691a0
// eh: try 0x182369372..0x182369552 -> pad 0x183320de0 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182369431: mov rdx, qword ptr [rip + 0x1d4c0a8]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_Player_HashSet_BallotBox_Ballot_Dispose
// asm:   0x182369438: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18236943d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182369442: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x182369447: test rcx, rcx
// asm:   0x18236944a: jne 0x182369546
// asm:   0x182369450: mov r14, qword ptr [rsp + 0xc0]
// asm:   0x182369506: mov rdx, qword ptr [rip + 0x1d27643]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Player_Dispose
// asm:   0x18236950d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182369512: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182369517: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x18236951c: test rcx, rcx
// asm:   0x18236951f: jne 0x182369552
// asm:   0x182369546: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182369552: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183320de0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320de5: push rbp
// asm:   0x183320de6: sub rsp, 0x20
// asm:   0x183320dea: mov rbp, rdx
// asm:   0x183320ded: mov rax, qword ptr [rbp + 0x88]
// asm:   0x183320df4: mov rcx, qword ptr [rax]
// asm:   0x183320df7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183320dfb: movabs rax, 0
// asm:   0x183320e05: add rsp, 0x20
// asm:   0x183320e09: pop rbp
// asm:   0x183320e0a: ret 
// asm:   0x183324460: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324465: push rbp
// asm:   0x183324466: sub rsp, 0x20
// asm:   0x18332446a: mov rbp, rdx
// asm:   0x18332446d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x183324474: mov rcx, qword ptr [rax]
// asm:   0x183324477: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18332447b: movabs rax, 0
// asm:   0x183324485: add rsp, 0x20
// asm:   0x183324489: pop rbp
// asm:   0x18332448a: ret 

void Anticheat_BallotBox__RemoveOldBallots(Anticheat_BallotBox_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_Player__o *pSVar2;
  System_Collections_Generic_Dictionary_Player__HashSet_BallotBox_Ballot___o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Il2CppObject *pIVar3;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_02;
  bool bVar4;
  System_Predicate_T__o *__this_03;
  undefined1 local_98 [16];
  Il2CppObject *local_88;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSStack_80;
  int32_t local_78;
  undefined4 uStack_74;
  undefined1 local_70 [8];
  uint64_t uStack_68;
  Il2CppObject *local_60;
  undefined1 local_58 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_50;
  Il2CppObject *local_48;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSStack_40;
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_184347a6b == '\0') {
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
    Il2CppMethodInitialized_184347a6b = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_48 = (Il2CppObject *)0x0;
  pSStack_40 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0;
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  local_70 = (undefined1  [8])0x0;
  uStack_68 = 0;
  local_60 = (Il2CppObject *)0x0;
  if ((TypeInfo_Anticheat_BallotBox->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_BallotBox);
  }
  pSVar2 = TypeInfo_Anticheat_BallotBox->static_fields->removals;
  if (pSVar2 != (System_Collections_Generic_List_Player__o *)0x0) {
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).BallotsByTargetPlayer;
    if (__this_00 != (System_Collections_Generic_Dictionary_Player__HashSet_BallotBox_Ballot___o *)0x0) {
      System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_98,
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_13C1150 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_GetEnumerator
                );
      local_58 = (undefined1  [8])local_98._0_8_;
      pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98._8_8_;
      local_48 = local_88;
      pSStack_40 = pSStack_80;
      local_38._0_4_ = local_78;
      local_38._4_4_ = uStack_74;
      local_98._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_98._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58;
      while( true ) {
        bVar4 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                          ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_58,
                           (MethodInfo_1585360 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Enumerator_Player_HashSet_BallotBox_Ballot_MoveNext
                          );
        __this_02 = pSStack_40;
        pIVar3 = local_48;
        if (!bVar4) break;
        __this_03 = (System_Predicate_T__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_BallotBox_Ballot);
        System_Predicate_BallotBox_Ballot____ctor
                  (__this_03,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_Anticheat_BallotBox_RemoveOldBallots_b__8_0,(MethodInfo_B61280 *)0x0);
        if (__this_02 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_BallotBox_Ballot___RemoveWhere
                  (__this_02,__this_03,
                   (MethodInfo_178C380 *)
                   MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_RemoveWhere);
        if ((__this_02->fields)._count == 0) {
          if ((TypeInfo_Anticheat_BallotBox->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_BallotBox);
          }
          pSVar2 = TypeInfo_Anticheat_BallotBox->static_fields->removals;
          if (pSVar2 == (System_Collections_Generic_List_Player__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(pSVar2,pIVar3,MethodInfo_System_Collections_Generic_List_Player_Add);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58,
                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_Player_HashSet_BallotBox_Ballot_Dispose
                );
      if ((TypeInfo_Anticheat_BallotBox->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_BallotBox);
      }
      pSVar2 = TypeInfo_Anticheat_BallotBox->static_fields->removals;
      if (pSVar2 != (System_Collections_Generic_List_Player__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_98,
                   (System_Collections_Generic_List_T__o *)pSVar2,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Player_GetEnumerator);
        local_70 = (undefined1  [8])local_98._0_8_;
        uStack_68 = local_98._8_8_;
        local_60 = local_88;
        local_98._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_98._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70;
        while( true ) {
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_70,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_Player_MoveNext);
          if (!bVar4) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70,
                       MethodInfo_System_Collections_Generic_List_Enumerator_Player_Dispose);
            return;
          }
          __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (__this->fields).BallotsByTargetPlayer;
          if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          System_Collections_Generic_Dictionary_object__object___Remove
                    (__this_01,local_60,
                     (MethodInfo_1470BF0 *)
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
// 0x182368ec0
// eh: try 0x182368f96..0x1823690a3 -> pad 0x183317870 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182369069: mov rdx, qword ptr [rip + 0x1d4c710]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot
// asm:   0x182369070: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x182369075: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18236907a: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18236907f: test rcx, rcx
// asm:   0x182369082: jne 0x1823690a3
// asm:   0x182369084: mov edi, dword ptr [rsp + 0xa0]
// asm:   0x1823690a3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317870: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317875: push rbp
// asm:   0x183317876: sub rsp, 0x20
// asm:   0x18331787a: mov rbp, rdx
// asm:   0x18331787d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317881: mov rcx, qword ptr [rax]
// asm:   0x183317884: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317888: movabs rax, 0
// asm:   0x183317892: add rsp, 0x20
// asm:   0x183317896: pop rbp
// asm:   0x183317897: ret 

int32_t Anticheat_BallotBox__CountBallotsCast
                  (Anticheat_BallotBox_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Player__HashSet_BallotBox_Ballot___o *__this_00;
  Il2CppObject *__this_01;
  bool bVar1;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  int iVar2;
  Anticheat_BallotBox_Ballot_o local_68;
  undefined1 local_58 [16];
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *local_48;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_40;
  
  if (Il2CppMethodInitialized_184347a6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot_40b5860
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot_40b5940
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Player_HashSet_BallotBox_Ballot_GetEnumera
              );
    Il2CppMethodInitialized_184347a6c = '\x01';
  }
  local_40.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._currentValue = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).BallotsByTargetPlayer;
  if (__this_00 != (System_Collections_Generic_Dictionary_Player__HashSet_BallotBox_Ballot___o *)0x0) {
    __this_02 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_get_Values
                          );
    if (__this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_58,
                 __this_02,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Player_HashSet_BallotBox_Ballot_GetEnumera
                );
      local_40.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_58._0_8_;
      local_40.fields._index = local_58._8_4_;
      local_40.fields._version = local_58._12_4_;
      local_40.fields._currentValue = (Il2CppObject *)local_48;
      local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      iVar2 = 0;
      local_58._8_8_ = &local_40;
      while( true ) {
        bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                          (&local_40,
                           (MethodInfo_155CFB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot_40b5860
                          );
        __this_01 = local_40.fields._currentValue;
        if (!bVar1) {
          System_Configuration_ConfigurationCollectionAttribute___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_40,
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Player_HashSet_BallotBox_Ballot
                    );
          return iVar2;
        }
        local_68.fields.Voter = (Photon_Realtime_Player_o *)0x0;
        local_68.fields.Timestamp.fields._dateData = (System_DateTime_Fields)0;
        if (Il2CppMethodInitialized_184347a77 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
          Il2CppMethodInitialized_184347a77 = '\x01';
        }
        local_68.fields.Voter = player;
        Il2CppCodeGenWriteBarrier((void **)&local_68,player);
        if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
        }
        local_68.fields.Timestamp = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)__this_01 ==
            (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) break;
        bVar1 = System_Collections_Generic_HashSet_BallotBox_Ballot___Contains
                          ((System_Collections_Generic_HashSet_BallotBox_Ballot__o *)__this_01,&local_68,
                           (MethodInfo_177E2E0 *)
                           MethodInfo_System_Collections_Generic_HashSet_BallotBox_Ballot_Contains);
        if (bVar1) {
          iVar2 = iVar2 + 1;
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.BallotBox$$HasCooldown
// il2cpp: bool Anticheat_BallotBox__HasCooldown (Anticheat_BallotBox_o* __this, Photon_Realtime_Player_o* voter, const MethodInfo* method);
// 0x1823690b0

bool Anticheat_BallotBox__HasCooldown
               (Anticheat_BallotBox_o *__this,Photon_Realtime_Player_o *voter,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Player__DateTime__o *__this_00;
  System_TimeSpan_o t2;
  bool bVar1;
  System_DateTime_o d1;
  System_TimeSpan_o t1;
  UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_Fields local_res8;
  
  if (Il2CppMethodInitialized_184347a6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Player_DateTime_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_184347a6d = '\x01';
  }
  __this_00 = (__this->fields).LastBallotCastTimestampByPlayer;
  local_res8.state = 0;
  local_res8.negate = false;
  local_res8._5_3_ = 0;
  if (__this_00 != (System_Collections_Generic_Dictionary_Player__DateTime__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)voter,
                       (UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_o *)&local_res8,
                       (MethodInfo_14767F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Player_DateTime_TryGetValue);
    if (!bVar1) {
      return false;
    }
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
    t1 = System_DateTime__op_Subtraction_1b21970(d1,(System_DateTime_o)local_res8,(MethodInfo *)0x0);
    t2.fields._ticks = (System_TimeSpan_Fields)(__this->fields).BallotCooldown.fields._ticks;
    if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
    }
    bVar1 = System_TimeSpan__op_LessThan(t1,t2,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Anticheat.BallotBox$$.ctor
// il2cpp: void Anticheat_BallotBox___ctor (Anticheat_BallotBox_o* __this, const MethodInfo* method);
// 0x182369e40

void Anticheat_BallotBox___ctor(Anticheat_BallotBox_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Player__HashSet_BallotBox_Ballot___o *__this_00;
  System_Collections_Generic_Dictionary_Player__DateTime__o *__this_01;
  System_TimeSpan_o SVar1;
  
  if (Il2CppMethodInitialized_184347a6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Player_DateTime_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Player_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_184347a6e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_Player_HashSet_BallotBox_Ballot_ctor);
  (__this->fields).BallotsByTargetPlayer = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BallotsByTargetPlayer,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Player_DateTime);
  System_Collections_Generic_Dictionary_object__DateTime____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_Player_DateTime_ctor);
  (__this->fields).LastBallotCastTimestampByPlayer = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LastBallotCastTimestampByPlayer,__this_01);
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  SVar1 = System_TimeSpan__FromMinutes(5.0,(MethodInfo *)0x0);
  (__this->fields).BallotTimeout.fields._ticks = (int64_t)SVar1.fields._ticks;
  SVar1 = System_TimeSpan__FromMinutes(1.0,(MethodInfo *)0x0);
  (__this->fields).BallotCooldown.fields._ticks = (int64_t)SVar1.fields._ticks;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.BallotBox$$.cctor
// il2cpp: void Anticheat_BallotBox___cctor (const MethodInfo* method);
// 0x182369db0

void Anticheat_BallotBox___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_Player__o *__this;
  
  if (Il2CppMethodInitialized_184347a6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_BallotBox);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Player_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Player);
    Il2CppMethodInitialized_184347a6f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Player);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Player_ctor);
  TypeInfo_Anticheat_BallotBox->static_fields->removals = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Anticheat_BallotBox->static_fields->removals,__this);
  return;
}


// Anticheat.BallotBox$$<RemoveOldBallots>b__8_0
// il2cpp: bool Anticheat_BallotBox___RemoveOldBallots_b__8_0 (Anticheat_BallotBox_o* __this, Anticheat_BallotBox_Ballot_o ballot, const MethodInfo* method);
// 0x182369d10

bool Anticheat_BallotBox___RemoveOldBallots_b__8_0
               (Anticheat_BallotBox_o *__this,Anticheat_BallotBox_Ballot_o *ballot,MethodInfo *method)

{
  System_TimeSpan_o t2;
  bool bVar1;
  System_DateTime_o d1;
  System_TimeSpan_o t1;
  
  if (Il2CppMethodInitialized_184347a70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_184347a70 = '\x01';
  }
  if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
  }
  d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  t1 = System_DateTime__op_Subtraction_1b21970
                 (d1,(System_DateTime_o)(ballot->fields).Timestamp.fields._dateData,(MethodInfo *)0x0);
  t2.fields._ticks = (System_TimeSpan_Fields)(__this->fields).BallotTimeout.fields._ticks;
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  bVar1 = System_TimeSpan__op_GreaterThan(t1,t2,(MethodInfo *)0x0);
  return bVar1;
}


