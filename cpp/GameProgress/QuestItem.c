// Type: GameProgress.QuestItem
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/QuestItem.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/QuestItem.cs
// --------------------------------

// GameProgress.QuestItem$$GetQuestName
// il2cpp: System_String_o* GameProgress_QuestItem__GetQuestName (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x181e39cd0

System_String_o * GameProgress_QuestItem__GetQuestName(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  System_String_o *str1;
  System_String_o *str2;
  System_String_o *pSVar3;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184344de1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344de1 = '\x01';
  }
  pSVar1 = (__this->fields).Category;
  local_res8[0] = 0;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    pSVar3 = (pSVar1->fields)._value;
    str1 = GameProgress_QuestItem__GetConditionsHash(__this,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).Amount;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      local_res8[0] = (pSVar2->fields)._value;
      str2 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_1969b70(pSVar3,str1,str2,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestItem$$GetConditionsHash
// il2cpp: System_String_o* GameProgress_QuestItem__GetConditionsHash (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x181e39b60
// eh: try 0x181e39c40..0x181e39cc3 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e39c89: mov rdx, qword ptr [rip + 0x225e1c8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose
// asm:   0x181e39c90: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e39c95: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e39c9a: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e39c9f: test rcx, rcx
// asm:   0x181e39ca2: jne 0x181e39cc3
// asm:   0x181e39ca4: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x181e39cc3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_String_o *
GameProgress_QuestItem__GetConditionsHash(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  System_Collections_Generic_List_T__o *__this_00;
  bool bVar2;
  System_String_o *str0;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184344de2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344de2 = '\x01';
  }
  str0 = "";
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  pSVar1 = (__this->fields).Conditions;
  if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
     (__this_00 = (pSVar1->fields)._value, __this_00 != (System_Collections_Generic_List_T__o *)0x0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
        return str0;
      }
      if (local_28.fields._current == (Il2CppObject *)0x0) break;
      str0 = System_String__Concat_1969e50
                       (str0,(System_String_o *)local_28.fields._current[2].klass,(MethodInfo *)0x0);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestItem$$Finished
// il2cpp: bool GameProgress_QuestItem__Finished (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x181e39b10

bool GameProgress_QuestItem__Finished(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344de3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344de3 = '\x01';
  }
  pSVar1 = (__this->fields).Progress;
  if ((pSVar1 != (Settings_IntSetting_o *)0x0) &&
     (pSVar2 = (__this->fields).Amount, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    return (pSVar2->fields)._value <= (pSVar1->fields)._value;
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestItem$$AddProgress
// il2cpp: void GameProgress_QuestItem__AddProgress (GameProgress_QuestItem_o* __this, int32_t count, const MethodInfo* method);
// 0x181e398d0

void GameProgress_QuestItem__AddProgress(GameProgress_QuestItem_o *__this,int32_t count,MethodInfo *method)

{
  int32_t val2;
  Settings_IntSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_184344de4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184344de4 = '\x01';
  }
  pSVar1 = (__this->fields).Progress;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar1,(pSVar1->fields)._value + count,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pSVar1 = (__this->fields).Progress;
    if ((pSVar1 != (Settings_IntSetting_o *)0x0) &&
       (pSVar2 = (__this->fields).Amount, pSVar2 != (Settings_IntSetting_o *)0x0)) {
      iVar3 = (pSVar1->fields)._value;
      val2 = (pSVar2->fields)._value;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      iVar3 = System_Math__Min_1b2c2d0(iVar3,val2,(MethodInfo *)0x0);
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar1,iVar3,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestItem$$CollectReward
// il2cpp: void GameProgress_QuestItem__CollectReward (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x181e399a0

void GameProgress_QuestItem__CollectReward(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  GameProgress_GameStatHandler_o *__this_00;
  bool bVar5;
  int32_t exp;
  
  if (Il2CppMethodInitialized_184344de5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Exp");
    Il2CppMethodInitialized_184344de5 = '\x01';
  }
  pSVar1 = (__this->fields).Collected;
  if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
    if ((pSVar1->fields)._value != false) {
      return;
    }
    pSVar2 = (__this->fields).Progress;
    if ((pSVar2 != (Settings_IntSetting_o *)0x0) &&
       (pSVar3 = (__this->fields).Amount, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar2->fields)._value < (pSVar3->fields)._value) {
        return;
      }
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)(__this->fields).Collected,true,
                 (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pSVar4 = (__this->fields).RewardType;
      if (pSVar4 != (Settings_StringSetting_o *)0x0) {
        bVar5 = System_String__op_Equality((pSVar4->fields)._value,"Exp",(MethodInfo *)0x0);
        if (!bVar5) {
          return;
        }
        pSVar4 = (__this->fields).RewardValue;
        if (pSVar4 != (Settings_StringSetting_o *)0x0) {
          exp = System_Int32__Parse((pSVar4->fields)._value,(MethodInfo *)0x0);
          if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
          }
          if (Il2CppMethodInitialized_184344db8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
            Il2CppMethodInitialized_184344db8 = '\x01';
          }
          if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
          }
          __this_00 = TypeInfo_GameProgress_GameProgressManager->static_fields->_gameStatHandler;
          if (__this_00 != (GameProgress_GameStatHandler_o *)0x0) {
            GameProgress_GameStatHandler__AddExp(__this_00,exp,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestItem$$.ctor
// il2cpp: void GameProgress_QuestItem___ctor (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x181e39d70

void GameProgress_QuestItem___ctor(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ListSetting_StringSetting__o *__this_00;
  Settings_IntSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  
  if (Il2CppMethodInitialized_184344de6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184344de6 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Category = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Category,pSVar2);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_182b940
            ((Settings_ListSetting_T__o *)__this_00,
             (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).Conditions = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Conditions,__this_00);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar3,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Amount = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Amount,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).RewardType = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RewardType,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).RewardValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RewardValue,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Icon = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Icon,pSVar2);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar3,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Progress = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Progress,pSVar3);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(pSVar4,true,(MethodInfo *)0x0);
  (__this->fields).Daily = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Daily,pSVar4);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar3,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).DayCreated = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DayCreated,pSVar3);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(pSVar4,false,(MethodInfo *)0x0);
  (__this->fields).Collected = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Collected,pSVar4);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


