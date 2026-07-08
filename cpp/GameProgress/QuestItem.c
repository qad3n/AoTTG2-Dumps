// Type: GameProgress.QuestItem
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameProgress/QuestItem.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameProgress/QuestItem.cs  [CHANGED since prior version]
// --------------------------------

// GameProgress.QuestItem$$GetQuestName
// il2cpp: System_String_o* GameProgress_QuestItem__GetQuestName (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x420fd60

System_String_o *
GameProgress_QuestItem__GetQuestName(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  System_String_o *str1;
  System_String_o *str2;
  System_String_o *pSVar3;
  int32_t local_1c;
  
  if (DAT_05705061 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05705061 = '\x01';
  }
  local_1c = 0;
  pSVar1 = (__this->fields).Category;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    pSVar3 = (pSVar1->fields)._value;
    str1 = GameProgress_QuestItem__GetConditionsHash(__this,method);
    pSVar2 = (__this->fields).Amount;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      local_1c = (pSVar2->fields)._value;
      str2 = System_Int32__ToString((int32_t)&local_1c,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat(pSVar3,str1,str2,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.QuestItem$$GetConditionsHash
// il2cpp: System_String_o* GameProgress_QuestItem__GetConditionsHash (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x420fdf0

System_String_o *
GameProgress_QuestItem__GetConditionsHash(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar2;
  System_String_o *str0;
  System_Collections_Generic_List_T__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  Il2CppObject *pIVar5;
  
  if (DAT_05705062 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_StringSetting_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    il2cpp_init_method_metadata(&"");
    DAT_05705062 = '\x01';
  }
  str0 = "";
  pSVar3 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  pIVar5 = (Il2CppObject *)0x0;
  pSVar1 = (__this->fields).Conditions;
  if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,__this_00
               ,MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
    while( true ) {
      __this_01.fields._8_8_ = pIVar4;
      __this_01.fields._list = pSVar3;
      __this_01.fields._current = pIVar5;
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar4;
        __this_02.fields._list = pSVar3;
        __this_02.fields._current = pIVar5;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
        return str0;
      }
      if (pIVar5 == (Il2CppObject *)0x0) break;
      str0 = System_String__Concat(str0,pIVar5[1].monitor,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.QuestItem$$Finished
// il2cpp: bool GameProgress_QuestItem__Finished (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x420ffa0

bool_conflict GameProgress_QuestItem__Finished(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  
  if (DAT_05705063 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05705063 = '\x01';
  }
  pSVar2 = (__this->fields).Progress;
  if ((pSVar2 != (Settings_IntSetting_o *)0x0) &&
     (pSVar3 = (__this->fields).Amount, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    iVar1 = (pSVar2->fields)._value;
    return CONCAT31((int3)((uint)iVar1 >> 8),(pSVar3->fields)._value <= iVar1);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.QuestItem$$AddProgress
// il2cpp: void GameProgress_QuestItem__AddProgress (GameProgress_QuestItem_o* __this, int32_t count, const MethodInfo* method);
// 0x420fff0

void GameProgress_QuestItem__AddProgress
               (GameProgress_QuestItem_o *__this,int32_t count,MethodInfo *method)

{
  int32_t val2;
  Settings_IntSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  int32_t iVar3;
  
  if (DAT_05705064 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05705064 = '\x01';
  }
  pSVar1 = (__this->fields).Progress;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting<int>__set_Value
              ((Settings_TypedSetting_int__o *)pSVar1,count + (pSVar1->fields)._value,MethodInfo_Void_set_Value);
    pSVar1 = (__this->fields).Progress;
    if ((pSVar1 != (Settings_IntSetting_o *)0x0) &&
       (pSVar2 = (__this->fields).Amount, pSVar2 != (Settings_IntSetting_o *)0x0)) {
      iVar3 = (pSVar1->fields)._value;
      val2 = (pSVar2->fields)._value;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar3 = System_Math__Min(iVar3,val2,(MethodInfo *)0x0);
      Settings_TypedSetting<int>__set_Value
                ((Settings_TypedSetting_int__o *)pSVar1,iVar3,MethodInfo_Void_set_Value);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.QuestItem$$CollectReward
// il2cpp: void GameProgress_QuestItem__CollectReward (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x42100b0

void GameProgress_QuestItem__CollectReward(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *__this_00;
  Settings_IntSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  bool_conflict bVar4;
  int32_t exp;
  
  if (DAT_05705065 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"Exp");
    DAT_05705065 = '\x01';
  }
  __this_00 = (__this->fields).Collected;
  if (__this_00 != (Settings_BoolSetting_o *)0x0) {
    if (*(char *)((long)&((Settings_TypedSetting_bool__Fields *)&__this_00->fields)->DefaultValue +
                 1) != '\0') {
      return;
    }
    pSVar1 = (__this->fields).Progress;
    if ((pSVar1 != (Settings_IntSetting_o *)0x0) &&
       (pSVar2 = (__this->fields).Amount, pSVar2 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar1->fields)._value < (pSVar2->fields)._value) {
        return;
      }
      Settings_TypedSetting<bool>__set_Value
                ((Settings_TypedSetting_bool__o *)__this_00,1,MethodInfo_Void_set_Value);
      pSVar3 = (__this->fields).RewardType;
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        bVar4 = System_String__op_Equality((pSVar3->fields)._value,"Exp",(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          return;
        }
        pSVar3 = (__this->fields).RewardValue;
        if (pSVar3 != (Settings_StringSetting_o *)0x0) {
          exp = System_Int32__Parse((pSVar3->fields)._value,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
            il2cpp_init_class();
            GameProgress_GameProgressManager__AddExp(exp,(MethodInfo *)0x0);
            return;
          }
          GameProgress_GameProgressManager__AddExp(exp,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.QuestItem$$.ctor
// il2cpp: void GameProgress_QuestItem___ctor (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x42101d0

void GameProgress_QuestItem___ctor(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ListSetting_StringSetting__o *__this_00;
  Settings_IntSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  
  if (DAT_05705066 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_ListSetting_1_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_ListSetting_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_05705066 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Category = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Category,pSVar2);
  __this_00 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_glue(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting<object>___ctor((Settings_ListSetting_T__o *)__this_00,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).Conditions = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Conditions);
  pSVar3 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar3,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Amount = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).Amount,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).RewardType = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).RewardType,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).RewardValue = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).RewardValue,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Icon = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Icon);
  pSVar3 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar3,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Progress = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).Progress,pSVar3);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar4,1,(MethodInfo *)0x0);
  (__this->fields).Daily = pSVar4;
  il2cpp_runtime_glue(&(__this->fields).Daily);
  pSVar3 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar3,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).DayCreated = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).DayCreated);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar4,0,(MethodInfo *)0x0);
  (__this->fields).Collected = pSVar4;
  il2cpp_runtime_glue(&(__this->fields).Collected);
  Settings_BaseSettingsContainer___ctor
            ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


