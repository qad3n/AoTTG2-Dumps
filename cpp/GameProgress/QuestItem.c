// Type: GameProgress.QuestItem
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/GameProgress/QuestItem.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/QuestItem.cs
// --------------------------------

// GameProgress.QuestItem$$GetQuestName
// il2cpp: System_String_o* GameProgress_QuestItem__GetQuestName (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x5925050

System_String_o * GameProgress_QuestItem__GetQuestName(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  System_String_o *str1;
  System_String_o *str2;
  System_String_o *pSVar3;
  int32_t local_1c;
  
  if (Il2CppMethodInitialized_07545775 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07545775 = '\x01';
  }
  pSVar1 = (__this->fields).Category;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    pSVar3 = (pSVar1->fields)._value;
    str1 = GameProgress_QuestItem__GetConditionsHash(__this,method);
    pSVar2 = (__this->fields).Amount;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      local_1c = (pSVar2->fields)._value;
      str2 = System_Int32__ToString(&local_1c,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_5301f10(pSVar3,str1,str2,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestItem$$GetConditionsHash
// il2cpp: System_String_o* GameProgress_QuestItem__GetConditionsHash (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x591bdd0
// eh: try 0x591bea7..0x591bef6 -> pad 0x591beff (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x591bf17..0x591bf1c -> pad 0x591bf3b cleanup
// eh: try 0x591bf3e..0x591bf48 -> pad 0x591bf50 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x591befb: jmp 0x591beff
// asm:   0x591befd: jmp 0x591beff
// asm:   0x591beff: mov r14, rax
// asm:   0x591bf02: cmp edx, 1
// asm:   0x591bf05: jne 0x591bf3e
// asm:   0x591bf07: mov rdi, r14
// asm:   0x591bf0a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x591bf0f: mov rbx, qword ptr [rax]
// asm:   0x591bf12: mov qword ptr [rsp + 0x18], rbx
// asm:   0x591bf17: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x591bf1c: lea rax, [rip + 0x1972c05]  ; MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose
// asm:   0x591bf23: mov rsi, qword ptr [rax]
// asm:   0x591bf26: mov rdi, rsp
// asm:   0x591bf29: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x591bf2e: test rbx, rbx
// asm:   0x591bf31: je 0x591bee2
// asm:   0x591bf33: mov rdi, rbx
// asm:   0x591bf36: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x591bf3b: mov r14, rax
// asm:   0x591bf3e: lea rdi, [rsp + 0x18]
// asm:   0x591bf43: call 0x2fd2ad0  ; il2cpp_runtime_helper_02fd2ad0()
// asm:   0x591bf48: mov rdi, r14
// asm:   0x591bf4b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x591bf50: mov rdi, rax
// asm:   0x591bf53: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
GameProgress_QuestItem__GetConditionsHash(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  bool bVar2;
  System_String_o *str0;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_30;
  undefined1 *local_28;
  
  if (Il2CppMethodInitialized_07545776 == '\0') {
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
    Il2CppMethodInitialized_07545776 = '\x01';
  }
  str0 = "";
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar1 = (__this->fields).Conditions;
  if ((pSVar1 == (Settings_ListSetting_StringSetting__o *)0x0) ||
     (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
     __this_00 == (System_Collections_Generic_List_object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_48,__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
  local_30 = 0;
  local_28 = (undefined1 *)&local_48;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
      return str0;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) break;
    str0 = System_String__Concat_52f0320
                     (str0,(System_String_o *)local_48.fields._current[2].klass,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestItem$$Finished
// il2cpp: bool GameProgress_QuestItem__Finished (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x591aa80

bool GameProgress_QuestItem__Finished(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545777 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07545777 = '\x01';
  }
  pSVar1 = (__this->fields).Progress;
  if ((pSVar1 == (Settings_IntSetting_o *)0x0) ||
     (pSVar2 = (__this->fields).Amount, pSVar2 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pSVar2->fields)._value <= (pSVar1->fields)._value;
}


// GameProgress.QuestItem$$AddProgress
// il2cpp: void GameProgress_QuestItem__AddProgress (GameProgress_QuestItem_o* __this, int32_t count, const MethodInfo* method);
// 0x5924030

void GameProgress_QuestItem__AddProgress(GameProgress_QuestItem_o *__this,int32_t count,MethodInfo *method)

{
  int32_t val2;
  Settings_IntSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_07545778 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07545778 = '\x01';
  }
  pSVar1 = (__this->fields).Progress;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar1,count + (pSVar1->fields)._value,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pSVar1 = (__this->fields).Progress;
    if ((pSVar1 != (Settings_IntSetting_o *)0x0) &&
       (pSVar2 = (__this->fields).Amount, pSVar2 != (Settings_IntSetting_o *)0x0)) {
      iVar3 = (pSVar1->fields)._value;
      val2 = (pSVar2->fields)._value;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      iVar3 = System_Math__Min_54baeb0(iVar3,val2,(MethodInfo *)0x0);
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar1,iVar3,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestItem$$CollectReward
// il2cpp: void GameProgress_QuestItem__CollectReward (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x5921fa0

void GameProgress_QuestItem__CollectReward(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *__this_00;
  Settings_IntSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  bool bVar4;
  int32_t exp;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545779 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Exp");
    Il2CppMethodInitialized_07545779 = '\x01';
  }
  __this_00 = (__this->fields).Collected;
  if (__this_00 != (Settings_BoolSetting_o *)0x0) {
    if (((Settings_TypedSetting_bool__Fields *)&__this_00->fields)->_value != false) {
      return;
    }
    pSVar1 = (__this->fields).Progress;
    if ((pSVar1 != (Settings_IntSetting_o *)0x0) &&
       (pSVar2 = (__this->fields).Amount, pSVar2 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar1->fields)._value < (pSVar2->fields)._value) {
        return;
      }
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this_00,true,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pSVar3 = (__this->fields).RewardType;
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        bVar4 = System_String__op_Equality((pSVar3->fields)._value,"Exp",(MethodInfo *)0x0);
        if (!bVar4) {
          return;
        }
        pSVar3 = (__this->fields).RewardValue;
        if (pSVar3 != (Settings_StringSetting_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          exp = System_Int32__Parse((pSVar3->fields)._value,(MethodInfo *)0x0);
          if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
            GameProgress_GameProgressManager__AddExp(exp,method_00);
            return;
          }
          GameProgress_GameProgressManager__AddExp(exp,method_00);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestItem$$.ctor
// il2cpp: void GameProgress_QuestItem___ctor (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x591c3e0

void GameProgress_QuestItem___ctor(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ListSetting_StringSetting__o *__this_00;
  Settings_IntSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  
  if (Il2CppMethodInitialized_0754577a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_0754577a = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Category = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Category);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_515d6d0
            ((Settings_ListSetting_T__o *)__this_00,
             (MethodInfo_515D6D0 *)MethodInfo_Settings_ListSetting_StringSetting_ctor);
  (__this->fields).Conditions = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Conditions);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar3,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Amount = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Amount);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).RewardType = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RewardType);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).RewardValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RewardValue);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Icon = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Icon);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar3,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Progress = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Progress);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar4,true,(MethodInfo *)0x0);
  (__this->fields).Daily = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Daily);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar3,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).DayCreated = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DayCreated);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar4,false,(MethodInfo *)0x0);
  (__this->fields).Collected = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Collected);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


