// Type: GameProgress.AchievementContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/AchievementContainer.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/AchievementContainer.cs
// --------------------------------

// GameProgress.AchievementContainer$$GetAchievementCount
// il2cpp: GameProgress_AchievementCount_o* GameProgress_AchievementContainer__GetAchievementCount (GameProgress_AchievementContainer_o* __this, const MethodInfo* method);
// 0x4538630

GameProgress_AchievementCount_o *
GameProgress_AchievementContainer__GetAchievementCount
          (GameProgress_AchievementContainer_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_ListSetting_AchievementItem__o *pSVar2;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar4;
  GameProgress_AchievementCount_o *__this_05;
  long *plVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (g_data_057aeef5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AchievementCount);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AchievementItem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_AchievementItem_GetEnum);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_AchievementItem_get_Value);
    il2cpp_runtime_helper_023445d0(&"Silver");
    il2cpp_runtime_helper_023445d0(&"Bronze");
    il2cpp_runtime_helper_023445d0(&"Gold");
    g_data_057aeef5 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  pIVar9 = (Il2CppObject *)0x0;
  __this_05 = (GameProgress_AchievementCount_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AchievementCount);
  System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).AchievementItems;
  if ((pSVar2 != (Settings_ListSetting_AchievementItem__o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_00,MethodInfo_List_1_T_Enumerator_GameProgress_AchievementItem_GetEnum);
    pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar8 = (Il2CppType *)local_48._8_8_;
    while( true ) {
      pIVar10 = local_38;
      __this_01.fields._8_8_ = pIVar8;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
      __this_01.fields._current = pIVar10;
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      if ((char)bVar4 == '\0') {
        __this_02.fields._8_8_ = pIVar8;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
        __this_02.fields._current = pIVar10;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        pIVar9 = pIVar10;
        goto label_04538904;
      }
      if (pIVar10 == (Il2CppObject *)0x0) break;
      pIVar9 = pIVar10;
      if (pIVar10[7].klass == (Il2CppClass *)0x0) goto label_04538938;
      bVar4 = System_String__op_Equality
                        ((System_String_o *)((pIVar10[7].klass)->_1).namespaze,"Bronze",(MethodInfo *)0x0)
      ;
      if ((char)bVar4 == '\0') {
        if (pIVar10[7].klass == (Il2CppClass *)0x0) goto label_0453893d;
        bVar4 = System_String__op_Equality
                          ((System_String_o *)((pIVar10[7].klass)->_1).namespaze,"Silver",
                           (MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          if (pIVar10[7].klass == (Il2CppClass *)0x0) goto label_0453895b;
          bVar4 = System_String__op_Equality
                            ((System_String_o *)((pIVar10[7].klass)->_1).namespaze,"Gold",
                             (MethodInfo *)0x0);
          local_38 = pIVar9;
          if ((char)bVar4 != '\0') {
            if (__this_05 == (GameProgress_AchievementCount_o *)0x0) goto label_04538965;
            piVar1 = &(__this_05->fields).TotalGold;
            *piVar1 = *piVar1 + 1;
            if (g_data_057aef3e == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
              g_data_057aef3e = '\x01';
            }
            if (pIVar10[5].klass == (Il2CppClass *)0x0) goto label_0453896a;
            if (pIVar10[3].klass == (Il2CppClass *)0x0) goto label_0453896f;
            local_38 = pIVar9;
            if (*(int *)((long)&((pIVar10[3].klass)->_1).name + 4) <=
                *(int *)((long)&((pIVar10[5].klass)->_1).name + 4)) {
              piVar1 = &(__this_05->fields).FinishedGold;
              *piVar1 = *piVar1 + 1;
            }
          }
        }
        else {
          if (__this_05 == (GameProgress_AchievementCount_o *)0x0) goto label_04538960;
          piVar1 = &(__this_05->fields).TotalSilver;
          *piVar1 = *piVar1 + 1;
          if (g_data_057aef3e == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
            g_data_057aef3e = '\x01';
          }
          if (pIVar10[5].klass == (Il2CppClass *)0x0) goto label_04538951;
          if (pIVar10[3].klass == (Il2CppClass *)0x0) goto label_04538956;
          local_38 = pIVar9;
          if (*(int *)((long)&((pIVar10[3].klass)->_1).name + 4) <=
              *(int *)((long)&((pIVar10[5].klass)->_1).name + 4)) {
            piVar1 = &(__this_05->fields).FinishedSilver;
            *piVar1 = *piVar1 + 1;
          }
        }
      }
      else {
        if (__this_05 == (GameProgress_AchievementCount_o *)0x0) goto label_04538942;
        piVar1 = &(__this_05->fields).TotalBronze;
        *piVar1 = *piVar1 + 1;
        if (g_data_057aef3e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
          g_data_057aef3e = '\x01';
        }
        if (pIVar10[5].klass == (Il2CppClass *)0x0) goto label_0453894c;
        if (pIVar10[3].klass == (Il2CppClass *)0x0) goto label_04538947;
        local_38 = pIVar9;
        if (*(int *)((long)&((pIVar10[3].klass)->_1).name + 4) <=
            *(int *)((long)&((pIVar10[5].klass)->_1).name + 4)) {
          (__this_05->fields).FinishedBronze = (__this_05->fields).FinishedBronze + 1;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pIVar9 = pIVar10;
label_04538938:
    il2cpp_runtime_helper_022b2c90();
label_0453893d:
    il2cpp_runtime_helper_022b2c90();
label_04538942:
    il2cpp_runtime_helper_022b2c90();
label_04538947:
    il2cpp_runtime_helper_022b2c90();
label_0453894c:
    il2cpp_runtime_helper_022b2c90();
label_04538951:
    il2cpp_runtime_helper_022b2c90();
label_04538956:
    il2cpp_runtime_helper_022b2c90();
label_0453895b:
    il2cpp_runtime_helper_022b2c90();
label_04538960:
    il2cpp_runtime_helper_022b2c90();
label_04538965:
    il2cpp_runtime_helper_022b2c90();
label_0453896a:
    il2cpp_runtime_helper_022b2c90();
label_0453896f:
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ != 1) {
label_04538a83:
      __this_04.fields._8_8_ = pIVar8;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
      __this_04.fields._current = pIVar9;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      _Unwind_Resume(auVar6._0_8_);
    }
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar3 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar8;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
    __this_03.fields._current = pIVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_04538a83;
    }
label_04538904:
    if (__this_05 != (GameProgress_AchievementCount_o *)0x0) {
      (__this_05->fields).TotalAll =
           (__this_05->fields).TotalSilver + (__this_05->fields).TotalBronze + (__this_05->fields).TotalGold;
      (__this_05->fields).FinishedAll =
           (__this_05->fields).FinishedSilver + (__this_05->fields).FinishedBronze +
           (__this_05->fields).FinishedGold;
      return __this_05;
    }
  } while( true );
}


// GameProgress.AchievementContainer$$.ctor
// il2cpp: void GameProgress_AchievementContainer___ctor (GameProgress_AchievementContainer_o* __this, const MethodInfo* method);
// 0x4538b20

void GameProgress_AchievementContainer___ctor(GameProgress_AchievementContainer_o *__this,MethodInfo *method)

{
  Settings_ListSetting_AchievementItem__o *__this_00;
  
  if (g_data_057aeef6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_GameProgress_AchievementItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_AchievementItem);
    g_data_057aeef6 = '\x01';
  }
  __this_00 = (Settings_ListSetting_AchievementItem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_AchievementItem);
  Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)__this_00,MethodInfo_ListSetting_1_GameProgress_AchievementItem);
  (__this->fields).AchievementItems = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AchievementItems);
  Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


