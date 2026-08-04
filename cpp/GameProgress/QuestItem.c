// Type: GameProgress.QuestItem
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/QuestItem.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/QuestItem.cs
// --------------------------------

// GameProgress.QuestItem$$GetQuestName
// il2cpp: System_String_o* GameProgress_QuestItem__GetQuestName (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x4542620

System_String_o * GameProgress_QuestItem__GetQuestName(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  System_String_o *str1;
  System_String_o *str2;
  System_String_o *pSVar3;
  int32_t iStack_1c;
  
  if (cRam00000000057aef3c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    cRam00000000057aef3c = '\x01';
  }
  iStack_1c = 0;
  pSVar1 = (__this->fields).Category;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    pSVar3 = (pSVar1->fields)._value;
    str1 = GameProgress_QuestItem__GetConditionsHash(__this,method);
    pSVar2 = (__this->fields).Amount;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      iStack_1c = (pSVar2->fields)._value;
      str2 = System_Int32__ToString((int32_t)&iStack_1c,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_3af7150(pSVar3,str1,str2,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  return pSVar3;
}


// GameProgress.QuestItem$$GetConditionsHash
// il2cpp: System_String_o* GameProgress_QuestItem__GetConditionsHash (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x453a020

System_String_o *
GameProgress_QuestItem__GetConditionsHash(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  System_String_o *str0;
  long *plVar4;
  System_String_o *unaff_R12;
  undefined1 auVar5 [12];
  System_Collections_Generic_List_T__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  Il2CppObject *pIVar8;
  
  if (g_data_057aef3d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aef3d = '\x01';
  }
  str0 = "";
  pSVar6 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  pIVar8 = (Il2CppObject *)0x0;
  pSVar1 = (__this->fields).Conditions;
  if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,__this_00,
               MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    while( true ) {
      __this_01.fields._8_8_ = pIVar7;
      __this_01.fields._list = pSVar6;
      __this_01.fields._current = pIVar8;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
      if ((char)bVar3 == '\0') {
        __this_02.fields._8_8_ = pIVar7;
        __this_02.fields._list = pSVar6;
        __this_02.fields._current = pIVar8;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
        return str0;
      }
      if (pIVar8 == (Il2CppObject *)0x0) break;
      str0 = System_String__Concat_3ae5ba0(str0,pIVar8[1].monitor,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
    unaff_R12 = str0;
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar7;
    __this_03.fields._list = pSVar6;
    __this_03.fields._current = pIVar8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar2 == 0) {
      return unaff_R12;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar7;
  __this_04.fields._list = pSVar6;
  __this_04.fields._current = pIVar8;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar5._0_8_);
}


// GameProgress.QuestItem$$Finished
// il2cpp: bool GameProgress_QuestItem__Finished (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x4538ad0

bool_conflict GameProgress_QuestItem__Finished(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  bool_conflict extraout_EAX;
  Settings_StringSetting_o *__this_00;
  GameProgress_QuestItem_o *__this_01;
  
  __this_01 = __this;
  if (g_data_057aef3e == '\0') {
    __this_01 = (GameProgress_QuestItem_o *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aef3e = '\x01';
  }
  pSVar2 = (__this->fields).Progress;
  if ((pSVar2 != (Settings_IntSetting_o *)0x0) &&
     (pSVar3 = (__this->fields).Amount, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    iVar1 = (pSVar2->fields)._value;
    return CONCAT31((int3)((uint)iVar1 >> 8),(pSVar3->fields)._value <= iVar1);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeef6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_GameProgress_AchievementItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_AchievementItem);
    g_data_057aeef6 = '\x01';
  }
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_AchievementItem);
  Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)__this_00,MethodInfo_ListSetting_1_GameProgress_AchievementItem);
  (__this_01->fields).Category = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).Category);
  Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this_01,(MethodInfo *)0x0);
  return extraout_EAX;
}


// GameProgress.QuestItem$$AddProgress
// il2cpp: void GameProgress_QuestItem__AddProgress (GameProgress_QuestItem_o* __this, int32_t count, const MethodInfo* method);
// 0x4541920

void GameProgress_QuestItem__AddProgress(GameProgress_QuestItem_o *__this,int32_t count,MethodInfo *method)

{
  int32_t val2;
  Settings_IntSetting_o *__this_00;
  Settings_IntSetting_o *pSVar1;
  Settings_TypedSetting_int__Fields SVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Settings_ListSetting_StringSetting__o *pSVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  char cVar5;
  int32_t iVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_object__o *__this_04;
  ulong extraout_RDX;
  MethodInfo *method_00;
  Settings_IntSetting_o *__this_05;
  System_String_o *unaff_R13;
  ulong uVar8;
  System_Collections_Generic_List_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  GameProgress_QuestItem_o *__this_06;
  GameProgress_QuestItem_o *pGVar11;
  undefined1 local_70 [16];
  GameProgress_QuestItem_o *local_60;
  Il2CppRGCTXData *pIStack_58;
  
  if (g_data_057aef3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057aef3f = '\x01';
  }
  __this_05 = (__this->fields).Progress;
  if (__this_05 != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)__this_05,count + (__this_05->fields)._value,MethodInfo_Void_set_Value);
    __this_00 = (__this->fields).Progress;
    if ((__this_00 != (Settings_IntSetting_o *)0x0) &&
       (pSVar1 = (__this->fields).Amount, pSVar1 != (Settings_IntSetting_o *)0x0)) {
      iVar6 = (__this_00->fields)._value;
      val2 = (pSVar1->fields)._value;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar6 = System_Math__Min_3cb7d70(iVar6,val2,(MethodInfo *)0x0);
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_00,iVar6,MethodInfo_Void_set_Value);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_58 = (Il2CppRGCTXData *)__this;
  if (g_data_057aef37 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&"KillHuman");
    g_data_057aef37 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar10 = (Il2CppType *)0x0;
  __this_06 = (GameProgress_QuestItem_o *)0x0;
  SVar2 = *(Settings_TypedSetting_int__Fields *)&__this_05[1].monitor;
  if (SVar2 == (Settings_TypedSetting_int__Fields)0x0) {
label_04541c5f:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)*(ulong *)((long)SVar2 + 0x18) < 1) {
      return;
    }
    uVar8 = 0;
    if ((*(ulong *)((long)SVar2 + 0x18) & 0xffffffff) != 0) {
      do {
        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)&(__this_05->fields).MinValue;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04541c5f;
        unaff_R13 = *(System_String_o **)((long)SVar2 + 0x20 + uVar8 * 8);
        bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar3,(Il2CppObject *)unaff_R13,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar7 != '\0') {
          pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)&(__this_05->fields).MinValue;
          if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
             (__this_04 = (System_Collections_Generic_List_object__o *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar3,(Il2CppObject *)unaff_R13,MethodInfo_List_1_GameProgress_QuestItem_get_Item),
             __this_04 == (System_Collections_Generic_List_object__o *)0x0)) goto label_04541c5f;
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_70,__this_04,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
          pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)local_70._0_8_;
          pIVar10 = (Il2CppType *)local_70._8_8_;
          pGVar11 = local_60;
          while (__this_06 = pGVar11, __this_02.fields._8_8_ = pIVar10,
                __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar9,
                __this_02.fields._current = (Il2CppObject *)__this_06,
                bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70),
                (char)bVar7 != '\0') {
            if (__this_06 == (GameProgress_QuestItem_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04541c5f;
            }
            pSVar4 = (__this_06->fields).Conditions;
            if (pSVar4 == (Settings_ListSetting_StringSetting__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04541c5f;
            }
            pGVar11 = __this_06;
            cVar5 = (*(__this_05->klass->vtable)._9_Copy.methodPtr)
                              (__this_05,(pSVar4->fields)._value,extraout_RDX & 0xffffffff,
                               (__this_05->klass->vtable)._9_Copy.method);
            if ((cVar5 != '\0') &&
               (bVar7 = System_String__op_Equality(unaff_R13,"KillHuman",(MethodInfo *)0x0),
               (char)bVar7 != '\0')) {
              GameProgress_QuestItem__AddProgress(__this_06,1,method_00);
            }
          }
          __this_01.fields._8_8_ = pIVar10;
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
          __this_01.fields._current = (Il2CppObject *)__this_06;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
        }
        uVar8 = uVar8 + 1;
        if ((long)(int)*(uint *)((long)SVar2 + 0x18) <= (long)uVar8) {
          return;
        }
      } while (uVar8 < *(uint *)((long)SVar2 + 0x18));
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  __this_03.fields._8_8_ = pIVar10;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
  __this_03.fields._current = (Il2CppObject *)__this_06;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
  _Unwind_Resume(unaff_R13);
}


// GameProgress.QuestItem$$CollectReward
// il2cpp: void GameProgress_QuestItem__CollectReward (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x453f700

void GameProgress_QuestItem__CollectReward(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  GameProgress_GameStatHandler_o *__this_00;
  GameProgress_GameStatContainer_o *pGVar3;
  char *pcVar4;
  Settings_TypedSetting_int__o *__this_01;
  System_Collections_Generic_List_object__o *pSVar5;
  long lVar6;
  Settings_IntSetting_o *pSVar7;
  Settings_IntSetting_o *pSVar8;
  Settings_StringSetting_o *pSVar9;
  Il2CppClass *pIVar10;
  Settings_TypedSetting_bool__Fields SVar11;
  System_Object_array *pSVar12;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_Enumerator_object__o __this_10;
  System_Collections_Generic_List_Enumerator_object__o __this_11;
  System_Collections_Generic_List_Enumerator_object__o __this_12;
  System_Collections_Generic_List_Enumerator_object__o __this_13;
  System_Collections_Generic_List_Enumerator_object__o __this_14;
  bool_conflict bVar13;
  int32_t iVar14;
  int iVar15;
  long *plVar16;
  System_DateTime_o d1;
  System_String_array *pSVar17;
  UnityEngine_Object_o *__this_15;
  System_String_o *pSVar18;
  System_String_array *__this_16;
  System_Collections_Generic_List_QuestItem__o *pSVar19;
  System_String_array *pSVar20;
  undefined8 extraout_RDX;
  uint uVar21;
  uint uVar22;
  MethodInfo *pMVar23;
  MethodInfo_2A23FA0 **__this_17;
  MethodInfo_2A23FA0 **ppMVar24;
  System_Collections_Generic_List_Enumerator_T__c *pSVar25;
  GameProgress_QuestHandler_o *__this_18;
  GameProgress_QuestHandler_o *__this_19;
  MethodInfo *in_R9;
  int iVar26;
  undefined1 auVar27 [12];
  GameProgress_QuestHandler_c *pGVar28;
  Il2CppType **ppIVar29;
  System_String_array *pSStack_80;
  System_String_array *in_stack_ffffffffffffff88;
  System_String_array *in_stack_ffffffffffffff90;
  Il2CppRGCTXData *pIVar30;
  System_DateTime_Fields d2;
  _union_249689 _Stack_60;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_58;
  GameProgress_QuestHandler_c *in_stack_ffffffffffffffb0;
  Il2CppType **in_stack_ffffffffffffffb8;
  Il2CppRGCTXData *in_stack_ffffffffffffffc0;
  
  if (g_data_057aef40 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Exp");
    g_data_057aef40 = '\x01';
  }
  pSVar25 = (System_Collections_Generic_List_Enumerator_T__c *)(__this->fields).Collected;
  if (pSVar25 != (System_Collections_Generic_List_Enumerator_T__c *)0x0) {
    if (*(char *)((long)&((Settings_TypedSetting_bool__Fields *)&(pSVar25->_1).name)->DefaultValue + 1) !=
        '\0') {
      return;
    }
    pSVar7 = (__this->fields).Progress;
    if ((pSVar7 != (Settings_IntSetting_o *)0x0) &&
       (pSVar8 = (__this->fields).Amount, pSVar8 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar7->fields)._value < (pSVar8->fields)._value) {
        return;
      }
      Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)pSVar25,1,MethodInfo_Void_set_Value);
      pSVar9 = (__this->fields).RewardType;
      if (pSVar9 != (Settings_StringSetting_o *)0x0) {
        pSVar25 = (System_Collections_Generic_List_Enumerator_T__c *)(pSVar9->fields)._value;
        bVar13 = System_String__op_Equality((System_String_o *)pSVar25,"Exp",(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          return;
        }
        pSVar9 = (__this->fields).RewardValue;
        if (pSVar9 != (Settings_StringSetting_o *)0x0) {
          uVar21 = 0;
          iVar14 = System_Int32__Parse((pSVar9->fields)._value,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo_GameProgressManager->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057aef16 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
            g_data_057aef16 = '\x01';
            iVar26 = *(int *)&(TypeInfo_GameProgressManager->_2).field_0x1c;
          }
          else {
            iVar26 = *(int *)&(TypeInfo_GameProgressManager->_2).field_0x1c;
          }
          if (iVar26 == 0) {
            il2cpp_runtime_helper_02337ed0();
            __this_00 = *(GameProgress_GameStatHandler_o **)((long)TypeInfo_GameProgressManager->static_fields + 0x10);
            __this_17 = (MethodInfo_2A23FA0 **)TypeInfo_GameProgressManager;
          }
          else {
            __this_00 = *(GameProgress_GameStatHandler_o **)((long)TypeInfo_GameProgressManager->static_fields + 0x10);
            __this_17 = (MethodInfo_2A23FA0 **)TypeInfo_GameProgressManager;
          }
          TypeInfo_GameProgressManager = (System_Collections_Generic_List_Enumerator_T__c *)__this_17;
          if (__this_00 != (GameProgress_GameStatHandler_o *)0x0) {
            if (g_data_057aef26 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
              __this_17 = &MethodInfo_Void_set_Value;
              il2cpp_runtime_helper_023445d0();
              g_data_057aef26 = '\x01';
            }
            pGVar3 = (__this_00->fields)._gameStat;
            if (pGVar3 != (GameProgress_GameStatContainer_o *)0x0) {
              pSVar7 = (pGVar3->fields).Exp;
              __this_17 = (MethodInfo_2A23FA0 **)0x0;
              if (pSVar7 != (Settings_IntSetting_o *)0x0) {
                uVar21 = iVar14 + (pSVar7->fields)._value;
                pMVar23 = (MethodInfo *)(ulong)uVar21;
                Settings_TypedSetting_int___set_Value
                          ((Settings_TypedSetting_int__o *)pSVar7,uVar21,MethodInfo_Void_set_Value);
                GameProgress_GameStatHandler__CheckLevelUp(__this_00,pMVar23);
                return;
              }
            }
          }
          il2cpp_runtime_helper_022b2c90();
          ppMVar24 = __this_17;
          uVar22 = uVar21;
          if (g_data_057aef26 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
            ppMVar24 = &MethodInfo_Void_set_Value;
            il2cpp_runtime_helper_023445d0();
            g_data_057aef26 = '\x01';
          }
          pcVar4 = (((System_Collections_Generic_List_Enumerator_T__c *)__this_17)->_1).namespaze;
          if (pcVar4 != (char *)0x0) {
            __this_01 = *(Settings_TypedSetting_int__o **)(pcVar4 + 0x28);
            ppMVar24 = (MethodInfo_2A23FA0 **)0x0;
            if (__this_01 != (Settings_TypedSetting_int__o *)0x0) {
              uVar21 = uVar21 + (__this_01->fields)._value;
              pMVar23 = (MethodInfo *)(ulong)uVar21;
              Settings_TypedSetting_int___set_Value(__this_01,uVar21,MethodInfo_Void_set_Value);
              GameProgress_GameStatHandler__CheckLevelUp((GameProgress_GameStatHandler_o *)__this_17,pMVar23);
              return;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          pSStack_58 = (System_Collections_Generic_List_Enumerator_T__c *)__this_17;
          if (g_data_057aef17 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
            il2cpp_runtime_helper_023445d0(&MethodInfo_BaseGameProgressHandler_get_Current);
            il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_BaseGameProgressHandler);
            g_data_057aef17 = '\x01';
          }
          pSVar17 = (System_String_array *)0x0;
          pSVar20 = (System_String_array *)0x0;
          pIVar30 = (Il2CppRGCTXData *)0x0;
          if (*(int *)&(TypeInfo_GameProgressManager->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar5 = *(System_Collections_Generic_List_object__o **)((long)TypeInfo_GameProgressManager->static_fields + 0x28);
          if (pSVar5 != (System_Collections_Generic_List_object__o *)0x0) {
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff88,pSVar5,
                       MethodInfo_List_1_T_Enumerator_GameProgress_BaseGameProgressHandler);
            while( true ) {
              __this_11.fields._8_8_ = pSVar20;
              __this_11.fields._list = (System_Collections_Generic_List_T__o *)pSVar17;
              __this_11.fields._current = (Il2CppObject *)pIVar30;
              bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 (__this_11,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88);
              if ((char)bVar13 == '\0') {
                __this_12.fields._8_8_ = pSVar20;
                __this_12.fields._list = (System_Collections_Generic_List_T__o *)pSVar17;
                __this_12.fields._current = (Il2CppObject *)pIVar30;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_12,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
                return;
              }
              if (pIVar30 == (Il2CppRGCTXData *)0x0) break;
              (*pIVar30->klass->vtable[4].methodPtr)
                        (pIVar30,ppMVar24,(ulong)uVar22,extraout_RDX,pIVar30->klass->vtable[4].method);
            }
            il2cpp_runtime_helper_022b2c90();
          }
          auVar27 = il2cpp_runtime_helper_022b2c90();
          if (auVar27._8_4_ == 1) {
            plVar16 = (long *)__cxa_begin_catch(auVar27._0_8_);
            lVar6 = *plVar16;
            __cxa_end_catch();
            __this_13.fields._8_8_ = pSVar20;
            __this_13.fields._list = (System_Collections_Generic_List_T__o *)pSVar17;
            __this_13.fields._current = (Il2CppObject *)pIVar30;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_13,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
            if (lVar6 == 0) {
              return;
            }
            il2cpp_runtime_helper_022fefe0(lVar6);
          }
          __this_14.fields._8_8_ = pSVar20;
          __this_14.fields._list = (System_Collections_Generic_List_T__o *)pSVar17;
          __this_14.fields._current = (Il2CppObject *)pIVar30;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_14,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
          _Unwind_Resume(auVar27._0_8_);
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_18 = (GameProgress_QuestHandler_o *)&stack0xffffffffffffff60;
  __this_19 = (GameProgress_QuestHandler_o *)&stack0xffffffffffffff60;
  if (g_data_057aef2f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestItem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_GameProgress_QuestItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_QuestItem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuestContainer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextAsset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_QuestItem_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"QuestList");
    g_data_057aef2f = '\x01';
  }
  _Stack_60.genericMethod = (char *)0x0;
  pGVar28 = (GameProgress_QuestHandler_c *)0x0;
  ppIVar29 = (Il2CppType **)0x0;
  pIVar30 = (Il2CppRGCTXData *)0x0;
  if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  d2._dateData = 0;
  System_DateTime___ctor_3c90070((System_DateTime_o)&stack0xffffffffffffff98,0x7b2,1,1,(MethodInfo *)0x0);
  _Stack_60 = (_union_249689)
              System_DateTime__op_Subtraction_3c94570(d1,(System_DateTime_o)d2._dateData,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar23 = (MethodInfo *)0x0;
  iVar14 = System_TimeSpan__get_Days((System_TimeSpan_o)&_Stack_60,(MethodInfo *)0x0);
  pSVar17 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_QuestContainer);
  GameProgress_QuestContainer___ctor((GameProgress_QuestContainer_o *)pSVar17,pMVar23);
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar18 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_15 = ApplicationManagers_ResourceManager__LoadAsset(pSVar18,"QuestList",0,(MethodInfo *)0x0);
  if (__this_15 == (UnityEngine_Object_o *)0x0) goto label_0453ff0c;
  bVar2 = (TypeInfo_TextAsset->_2).naturalAligment;
  pSVar20 = in_stack_ffffffffffffff90;
  if ((__this_15->klass->_2).naturalAligment < bVar2) goto label_0453ff25;
  if ((__this_15->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_TextAsset) goto label_0453ff25;
  pSVar18 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)__this_15,(MethodInfo *)0x0);
  if (pSVar17 == (System_String_array *)0x0) goto label_0453ff0c;
  pIVar10 = (pSVar17->obj).klass;
  (*(((GameProgress_QuestContainer_VTable *)pIVar10->vtable)->_8_DeserializeFromJsonString).methodPtr)
            (pSVar17,pSVar18,
             (((GameProgress_QuestContainer_VTable *)pIVar10->vtable)->_8_DeserializeFromJsonString).method);
  __this_16 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_QuestItem);
  Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)__this_16,MethodInfo_ListSetting_1_GameProgress_QuestItem);
  SVar11 = *(Settings_TypedSetting_bool__Fields *)&(pSVar25->_1).name;
  if (SVar11 == (Settings_TypedSetting_bool__Fields)0x0) goto label_0453ff0c;
  lVar6 = *(long *)((long)SVar11 + 0x20);
  if (lVar6 == 0) goto label_0453ff0c;
  pSVar5 = *(System_Collections_Generic_List_object__o **)(lVar6 + 0x18);
  if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) goto label_0453ff0c;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb0,pSVar5,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
  pGVar28 = in_stack_ffffffffffffffb0;
  ppIVar29 = in_stack_ffffffffffffffb8;
  pIVar30 = in_stack_ffffffffffffffc0;
  pSStack_80 = __this_16;
  if (__this_16 == (System_String_array *)0x0) {
    do {
      __this_03.fields._8_8_ = ppIVar29;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pGVar28;
      __this_03.fields._current = (Il2CppObject *)pIVar30;
      bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                         (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60);
      if ((char)bVar13 == '\0') goto label_0453fbf5;
      if (pIVar30 == (Il2CppRGCTXData *)0x0) goto label_0453fef8;
      pSVar20 = in_stack_ffffffffffffff90;
      if (pIVar30[0xc].method == (MethodInfo *)0x0) goto label_0453fefd;
    } while (*(int *)((long)&(pIVar30[0xc].method)->invoker_method + 4) != iVar14);
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    while (__this_02.fields._8_8_ = ppIVar29,
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pGVar28,
          __this_02.fields._current = (Il2CppObject *)pIVar30,
          bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60), lVar6 = MethodInfo_Void_Add,
          (char)bVar13 != '\0') {
      if (pIVar30 == (Il2CppRGCTXData *)0x0) goto label_0453fef8;
      pSVar20 = in_stack_ffffffffffffff90;
      if (pIVar30[0xc].method == (MethodInfo *)0x0) goto label_0453fefd;
      if (*(int *)((long)&(pIVar30[0xc].method)->invoker_method + 4) == iVar14) {
        pSVar5 = (System_Collections_Generic_List_object__o *)__this_16->max_length;
        if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) goto label_0453ff16;
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar12 = (pSVar5->fields)._items;
        if (pSVar12 == (System_Object_array *)0x0) goto label_0453ff11;
        uVar21 = (pSVar5->fields)._size;
        if (uVar21 < (uint)pSVar12->max_length) {
          (pSVar5->fields)._size = uVar21 + 1;
          pSVar12->m_Items[(int)uVar21] = (Il2CppObject *)pIVar30;
          il2cpp_runtime_helper_022b4080(pSVar12->m_Items + (int)uVar21);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar5,(Il2CppObject *)pIVar30,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  }
label_0453fbf5:
  __this_04.fields._8_8_ = ppIVar29;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pGVar28;
  __this_04.fields._current = (Il2CppObject *)pIVar30;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
  in_stack_ffffffffffffff88 = pSVar17;
  if (__this_16 == (System_String_array *)0x0) goto label_0453ff0c;
  pSVar5 = (System_Collections_Generic_List_object__o *)__this_16->max_length;
  if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) goto label_0453ff0c;
  pSVar19 = GameProgress_QuestHandler__CreateQuests
                      (__this_18,(GameProgress_QuestContainer_o *)pSVar17,iVar14,1,3 - (pSVar5->fields)._size,
                       in_R9);
  System_Collections_Generic_List_object___AddRange
            (pSVar5,(System_Collections_Generic_IEnumerable_T__o *)pSVar19,MethodInfo_Void_AddRange);
  pSVar20 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_QuestItem);
  Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)pSVar20,MethodInfo_ListSetting_1_GameProgress_QuestItem);
  SVar11 = *(Settings_TypedSetting_bool__Fields *)&(pSVar25->_1).name;
  in_stack_ffffffffffffff88 = pSVar17;
  if (SVar11 == (Settings_TypedSetting_bool__Fields)0x0) goto label_0453ff0c;
  lVar6 = *(long *)((long)SVar11 + 0x28);
  if (lVar6 == 0) goto label_0453ff0c;
  pSVar5 = *(System_Collections_Generic_List_object__o **)(lVar6 + 0x18);
  if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) goto label_0453ff0c;
  iVar26 = (int)((ulong)((long)(iVar14 + -1) * -0x6db6db6d) >> 0x20) + iVar14 + -1;
  iVar26 = (iVar26 >> 2) - (iVar26 >> 0x1f);
  pSStack_58 = pSVar25;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb0,pSVar5,MethodInfo_List_1_T_Enumerator_GameProgress_QuestItem_GetEnumerator);
  if (pSVar20 == (System_String_array *)0x0) {
    do {
      __this_06.fields._8_8_ = in_stack_ffffffffffffffb8;
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffb0;
      __this_06.fields._current = (Il2CppObject *)in_stack_ffffffffffffffc0;
      bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                         (__this_06,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60);
      if ((char)bVar13 == '\0') goto label_0453fe3a;
      if (in_stack_ffffffffffffffc0 == (Il2CppRGCTXData *)0x0) goto label_0453ff02;
      if (in_stack_ffffffffffffffc0[0xc].method == (MethodInfo *)0x0) goto label_0453ff07;
      iVar15 = *(int *)((long)&(in_stack_ffffffffffffffc0[0xc].method)->invoker_method + 4);
      iVar15 = (int)((ulong)((long)(iVar15 + -1) * -0x6db6db6d) >> 0x20) + iVar15 + -1;
    } while ((iVar15 >> 2) - (iVar15 >> 0x1f) != iVar26);
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    while (__this_05.fields._8_8_ = in_stack_ffffffffffffffb8,
          __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffb0,
          __this_05.fields._current = (Il2CppObject *)in_stack_ffffffffffffffc0,
          bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60), lVar6 = MethodInfo_Void_Add,
          (char)bVar13 != '\0') {
      if (in_stack_ffffffffffffffc0 == (Il2CppRGCTXData *)0x0) goto label_0453ff02;
      if (in_stack_ffffffffffffffc0[0xc].method == (MethodInfo *)0x0) goto label_0453ff07;
      iVar15 = *(int *)((long)&(in_stack_ffffffffffffffc0[0xc].method)->invoker_method + 4);
      iVar15 = (int)((ulong)((long)(iVar15 + -1) * -0x6db6db6d) >> 0x20) + iVar15 + -1;
      if ((iVar15 >> 2) - (iVar15 >> 0x1f) == iVar26) {
        pSVar5 = (System_Collections_Generic_List_object__o *)pSVar20->max_length;
        if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) goto label_0453ff20;
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar12 = (pSVar5->fields)._items;
        if (pSVar12 == (System_Object_array *)0x0) goto label_0453ff1b;
        uVar21 = (pSVar5->fields)._size;
        if (uVar21 < (uint)pSVar12->max_length) {
          (pSVar5->fields)._size = uVar21 + 1;
          pSVar12->m_Items[(int)uVar21] = (Il2CppObject *)in_stack_ffffffffffffffc0;
          il2cpp_runtime_helper_022b4080(pSVar12->m_Items + (int)uVar21);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar5,(Il2CppObject *)in_stack_ffffffffffffffc0,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  }
label_0453fe3a:
  __this_07.fields._8_8_ = in_stack_ffffffffffffffb8;
  __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffb0;
  __this_07.fields._current = (Il2CppObject *)in_stack_ffffffffffffffc0;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
  while( true ) {
    pSVar25 = pSStack_58;
    pGVar28 = in_stack_ffffffffffffffb0;
    ppIVar29 = in_stack_ffffffffffffffb8;
    pIVar30 = in_stack_ffffffffffffffc0;
    in_stack_ffffffffffffff88 = pSVar17;
    in_stack_ffffffffffffff90 = pSVar20;
    if ((pSVar20 != (System_String_array *)0x0) &&
       (pSVar5 = (System_Collections_Generic_List_object__o *)pSVar20->max_length,
       pSVar5 != (System_Collections_Generic_List_object__o *)0x0)) {
      pSVar19 = GameProgress_QuestHandler__CreateQuests
                          (__this_19,(GameProgress_QuestContainer_o *)pSVar17,iVar14,0,
                           3 - (pSVar5->fields)._size,in_R9);
      System_Collections_Generic_List_object___AddRange
                (pSVar5,(System_Collections_Generic_IEnumerable_T__o *)pSVar19,MethodInfo_Void_AddRange);
      SVar11 = *(Settings_TypedSetting_bool__Fields *)&(pSVar25->_1).name;
      pGVar28 = in_stack_ffffffffffffffb0;
      ppIVar29 = in_stack_ffffffffffffffb8;
      pIVar30 = in_stack_ffffffffffffffc0;
      in_stack_ffffffffffffff88 = pSVar17;
      if ((SVar11 != (Settings_TypedSetting_bool__Fields)0x0) &&
         (plVar16 = *(long **)((long)SVar11 + 0x20), plVar16 != (long *)0x0)) {
        (**(code **)(*plVar16 + 0x1c8))(plVar16,pSStack_80,*(undefined8 *)(*plVar16 + 0x1d0));
        SVar11 = *(Settings_TypedSetting_bool__Fields *)&(pSVar25->_1).name;
        pGVar28 = in_stack_ffffffffffffffb0;
        ppIVar29 = in_stack_ffffffffffffffb8;
        pIVar30 = in_stack_ffffffffffffffc0;
        in_stack_ffffffffffffff88 = pSVar17;
        if ((SVar11 != (Settings_TypedSetting_bool__Fields)0x0) &&
           (plVar16 = *(long **)((long)SVar11 + 0x28), plVar16 != (long *)0x0)) {
          (**(code **)(*plVar16 + 0x1c8))(plVar16,pSVar20,*(undefined8 *)(*plVar16 + 0x1d0));
          return;
        }
      }
    }
label_0453ff0c:
    il2cpp_runtime_helper_022b2c90();
    pSVar17 = in_stack_ffffffffffffff88;
    pSVar20 = in_stack_ffffffffffffff90;
label_0453ff11:
    il2cpp_runtime_helper_022b2c90();
label_0453ff16:
    in_stack_ffffffffffffffc0 = pIVar30;
    in_stack_ffffffffffffffb8 = ppIVar29;
    in_stack_ffffffffffffffb0 = pGVar28;
    il2cpp_runtime_helper_022b2c90();
label_0453ff1b:
    il2cpp_runtime_helper_022b2c90();
label_0453ff20:
    __this_15 = (UnityEngine_Object_o *)il2cpp_runtime_helper_022b2c90();
    pGVar28 = in_stack_ffffffffffffffb0;
    ppIVar29 = in_stack_ffffffffffffffb8;
    pIVar30 = in_stack_ffffffffffffffc0;
    in_stack_ffffffffffffff88 = pSVar17;
label_0453ff25:
    pSVar17 = in_stack_ffffffffffffff88;
    in_stack_ffffffffffffffc0 = pIVar30;
    in_stack_ffffffffffffffb8 = ppIVar29;
    in_stack_ffffffffffffffb0 = pGVar28;
    auVar27 = il2cpp_runtime_helper_022b2fd0(__this_15);
    if (auVar27._8_4_ != 1) break;
    plVar16 = (long *)__cxa_begin_catch(auVar27._0_8_);
    lVar6 = *plVar16;
    __cxa_end_catch();
    __this_08.fields._8_8_ = in_stack_ffffffffffffffb8;
    __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffb0;
    __this_08.fields._current = (Il2CppObject *)in_stack_ffffffffffffffc0;
    __this_19 = (GameProgress_QuestHandler_o *)&stack0xffffffffffffff60;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
    if (lVar6 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar6);
      __this_10.fields._8_8_ = in_stack_ffffffffffffffb8;
      __this_10.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffb0;
      __this_10.fields._current = (Il2CppObject *)in_stack_ffffffffffffffc0;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_10,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
label_0454008f:
      _Unwind_Resume(auVar27._0_8_);
    }
  }
  __this_09.fields._8_8_ = in_stack_ffffffffffffffb8;
  __this_09.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffb0;
  __this_09.fields._current = (Il2CppObject *)in_stack_ffffffffffffffc0;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
  goto label_0454008f;
label_0453fef8:
  il2cpp_runtime_helper_022b2c90();
  pSVar20 = in_stack_ffffffffffffff90;
label_0453fefd:
  in_stack_ffffffffffffffc0 = pIVar30;
  in_stack_ffffffffffffffb8 = ppIVar29;
  in_stack_ffffffffffffffb0 = pGVar28;
  il2cpp_runtime_helper_022b2c90();
label_0453ff02:
  il2cpp_runtime_helper_022b2c90();
label_0453ff07:
  il2cpp_runtime_helper_022b2c90();
  pGVar28 = in_stack_ffffffffffffffb0;
  ppIVar29 = in_stack_ffffffffffffffb8;
  pIVar30 = in_stack_ffffffffffffffc0;
  in_stack_ffffffffffffff88 = pSVar17;
  in_stack_ffffffffffffff90 = pSVar20;
  goto label_0453ff0c;
}


// GameProgress.QuestItem$$.ctor
// il2cpp: void GameProgress_QuestItem___ctor (GameProgress_QuestItem_o* __this, const MethodInfo* method);
// 0x453a650

void GameProgress_QuestItem___ctor(GameProgress_QuestItem_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ListSetting_StringSetting__o *__this_00;
  Settings_IntSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  
  if (g_data_057aef41 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057aef41 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Category = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Category,pSVar2);
  __this_00 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)__this_00,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).Conditions = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Conditions);
  pSVar3 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar3,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Amount = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Amount,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).RewardType = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).RewardType,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).RewardValue = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).RewardValue,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Icon = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Icon);
  pSVar3 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar3,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Progress = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Progress,pSVar3);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar4,1,(MethodInfo *)0x0);
  (__this->fields).Daily = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Daily);
  pSVar3 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar3,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).DayCreated = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).DayCreated);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar4,0,(MethodInfo *)0x0);
  (__this->fields).Collected = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Collected);
  Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


