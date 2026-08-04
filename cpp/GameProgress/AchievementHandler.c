// Type: GameProgress.AchievementHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/AchievementHandler.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/AchievementHandler.cs
// --------------------------------

// GameProgress.AchievementHandler.<>c$$.cctor
// il2cpp: void GameProgress_AchievementHandler___c___cctor (const MethodInfo* method);
// 0x453a360

void GameProgress_AchievementHandler___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aeefa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aeefa = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// GameProgress.AchievementHandler.<>c$$.ctor
// il2cpp: void GameProgress_AchievementHandler___c___ctor (GameProgress_AchievementHandler___c_o* __this, const MethodInfo* method);
// 0x453a3d0

void GameProgress_AchievementHandler___c___ctor
               (GameProgress_AchievementHandler___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.AchievementHandler.<>c$$<CacheActiveAchievements>b__4_0
// il2cpp: System_String_o* GameProgress_AchievementHandler___c___CacheActiveAchievements_b__4_0 (GameProgress_AchievementHandler___c_o* __this, GameProgress_AchievementItem_o* x, const MethodInfo* method);
// 0x453a3e0

System_String_o *
GameProgress_AchievementHandler___c___CacheActiveAchievements_b__4_0
          (GameProgress_AchievementHandler___c_o *__this,GameProgress_AchievementItem_o *x,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  Settings_StringSetting_o *pSVar1;
  System_String_o *str0;
  Settings_IntSetting_o *pSVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  undefined8 *puVar5;
  System_String_o *str1;
  System_String_o *str3;
  GameProgress_QuestItem_c *__this_00;
  MethodInfo *pMVar6;
  System_String_o *extraout_RAX;
  System_String_o **__this_01;
  undefined8 uStack_30;
  
  if (x != (GameProgress_AchievementItem_o *)0x0) {
    vtableDispatch = (x->klass->vtable)._13_GetQuestName.methodPtr;
    pSVar4 = (System_String_o *)
             (*vtableDispatch)
                       (x,(x->klass->vtable)._13_GetQuestName.method,method,vtableDispatch);
    return pSVar4;
  }
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  __this_01 = (System_String_o **)__this;
  if (g_data_057aeefb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Silver");
    il2cpp_runtime_helper_023445d0(&"Bronze");
    il2cpp_runtime_helper_023445d0(&"Gold");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"C");
    __this_01 = &"A";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeefb = '\x01';
  }
  pSVar4 = "A";
  uStack_30 = uStack_30 & 0xffffffff;
  if (((GameProgress_QuestItem_o *)((long)__this + 0x70))->klass == (GameProgress_QuestItem_c *)0x0)
  goto label_0453a583;
  __this_01 = (System_String_o **)(((GameProgress_QuestItem_o *)((long)__this + 0x70))->klass->_1).namespaze;
  pMVar6 = "Bronze";
  bVar3 = System_String__op_Equality
                    ((System_String_o *)__this_01,(System_String_o *)"Bronze",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (((GameProgress_QuestItem_o *)((long)__this + 0x70))->klass == (GameProgress_QuestItem_c *)0x0)
    goto label_0453a583;
    __this_01 = (System_String_o **)(((GameProgress_QuestItem_o *)((long)__this + 0x70))->klass->_1).namespaze
    ;
    pMVar6 = "Silver";
    bVar3 = System_String__op_Equality
                      ((System_String_o *)__this_01,(System_String_o *)"Silver",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (((GameProgress_QuestItem_o *)((long)__this + 0x70))->klass == (GameProgress_QuestItem_c *)0x0)
      goto label_0453a583;
      __this_01 = (System_String_o **)
                  (((GameProgress_QuestItem_o *)((long)__this + 0x70))->klass->_1).namespaze;
      pMVar6 = "Gold";
      bVar3 = System_String__op_Equality
                        ((System_String_o *)__this_01,(System_String_o *)"Gold",(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        puVar5 = &"C";
        goto label_0453a52c;
      }
    }
    else {
      puVar5 = &"B";
label_0453a52c:
      pSVar4 = (System_String_o *)*puVar5;
    }
    pSVar1 = (((GameProgress_QuestItem_o *)__this)->fields).Category;
  }
  else {
    pSVar1 = (((GameProgress_QuestItem_o *)__this)->fields).Category;
    pSVar4 = "A";
  }
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    str0 = (pSVar1->fields)._value;
    __this_01 = (System_String_o **)__this;
    str1 = GameProgress_QuestItem__GetConditionsHash((GameProgress_QuestItem_o *)__this,pMVar6);
    pSVar2 = (((GameProgress_QuestItem_o *)__this)->fields).Amount;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      uStack_30 = CONCAT44((pSVar2->fields)._value,(undefined4)uStack_30);
      str3 = System_Int32__ToString((int)&uStack_30 + 4,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_3af7470(str0,str1,pSVar4,str3,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
label_0453a583:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeefc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057aeefc = '\x01';
  }
  pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_00 = (GameProgress_QuestItem_c *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)__this_00,pSVar4,0x7fffffff,(MethodInfo *)0x0);
  ((GameProgress_QuestItem_o *)((long)__this_01 + 0x70))->klass = __this_00;
  il2cpp_runtime_helper_022b4080((GameProgress_QuestItem_o *)((long)__this_01 + 0x70));
  pMVar6 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960((Settings_BoolSetting_o *)pMVar6,0,(MethodInfo *)0x0);
  ((GameProgress_QuestItem_o *)((long)__this_01 + 0x70))->monitor = pMVar6;
  il2cpp_runtime_helper_022b4080(&((GameProgress_QuestItem_o *)((long)__this_01 + 0x70))->monitor);
  GameProgress_QuestItem___ctor((GameProgress_QuestItem_o *)__this_01,pMVar6);
  return extraout_RAX;
}


// GameProgress.AchievementHandler$$.ctor
// il2cpp: void GameProgress_AchievementHandler___ctor (GameProgress_AchievementHandler_o* __this, GameProgress_AchievementContainer_o* achievement, const MethodInfo* method);
// 0x4538ba0

void GameProgress_AchievementHandler___ctor
               (GameProgress_AchievementHandler_o *__this,GameProgress_AchievementContainer_o *achievement,
               MethodInfo *method)

{
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (g_data_057aeef7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuestHandler);
    g_data_057aeef7 = '\x01';
    method = extraout_RDX;
  }
  if (*(int *)(TypeInfo_QuestHandler + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method = extraout_RDX_00;
  }
  GameProgress_QuestHandler___ctor
            ((GameProgress_QuestHandler_o *)__this,(GameProgress_QuestContainer_o *)0x0,method);
  (__this->fields)._achievement = achievement;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._achievement);
  GameProgress_AchievementHandler__LoadAchievements(__this,(MethodInfo *)achievement);
  GameProgress_AchievementHandler__CacheActiveAchievements(__this,(MethodInfo *)achievement);
  return;
}


// GameProgress.AchievementHandler$$ReloadAchievements
// il2cpp: void GameProgress_AchievementHandler__ReloadAchievements (GameProgress_AchievementHandler_o* __this, const MethodInfo* method);
// 0x4538f00

void GameProgress_AchievementHandler__ReloadAchievements
               (GameProgress_AchievementHandler_o *__this,MethodInfo *method)

{
  GameProgress_AchievementHandler__LoadAchievements(__this,method);
  GameProgress_AchievementHandler__CacheActiveAchievements(__this,method);
  return;
}


// GameProgress.AchievementHandler$$LoadAchievements
// il2cpp: void GameProgress_AchievementHandler__LoadAchievements (GameProgress_AchievementHandler_o* __this, const MethodInfo* method);
// 0x4538f20

void GameProgress_AchievementHandler__LoadAchievements
               (GameProgress_AchievementHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameProgress_AchievementContainer_o *pGVar4;
  Settings_ListSetting_AchievementItem__o *pSVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  Il2CppClass *__this_00;
  System_Object_array *pSVar7;
  long lVar8;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  bool_conflict bVar9;
  System_Collections_Generic_List_Enumerator_T__c *__this_10;
  System_Collections_Generic_Dictionary_object__object__o *__this_11;
  Il2CppObject *pIVar10;
  Settings_PresetSettingsContainer_o *__this_12;
  Settings_PresetSettingsContainer_c *__this_13;
  UnityEngine_Object_o *__this_14;
  System_String_o *pSVar11;
  long *plVar12;
  _union_249689 _Var13;
  undefined1 auVar14 [12];
  System_Collections_Generic_List_T__o *pSVar15;
  Il2CppRGCTXData *pIVar16;
  _union_249689 value;
  _union_249689 item;
  System_Collections_Generic_List_Enumerator_T__c *local_58;
  GameProgress_AchievementHandler_o *local_50;
  undefined1 local_48 [16];
  _union_249689 local_38;
  
  if (g_data_057aeef8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AchievementContainer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_GameProgress_AchievementItem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AchievementItem_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_AchievementItem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AchievementItem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_GameProgress_AchievementItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_AchievementItem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_AchievementItem_GetEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextAsset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_AchievementItem_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"AchievementList");
    g_data_057aeef8 = '\x01';
  }
  pSVar15 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar16 = (Il2CppRGCTXData *)0x0;
  value.genericMethod = (Il2CppObject *)0x0;
  __this_10 = (System_Collections_Generic_List_Enumerator_T__c *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_AchievementItem);
  Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)__this_10,MethodInfo_ListSetting_1_GameProgress_AchievementItem);
  __this_11 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_AchievementItem);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_11,MethodInfo_Dictionary_2_System_String_GameProgress_AchievementItem);
  pGVar4 = (__this->fields)._achievement;
  if (pGVar4 == (GameProgress_AchievementContainer_o *)0x0) goto label_045394cf;
  pSVar5 = (pGVar4->fields).AchievementItems;
  if (pSVar5 == (Settings_ListSetting_AchievementItem__o *)0x0) goto label_045394cf;
  pSVar6 = (System_Collections_Generic_List_object__o *)(pSVar5->fields)._value;
  if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) goto label_045394cf;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar6,MethodInfo_List_1_T_Enumerator_GameProgress_AchievementItem_GetEnum);
  pSVar15 = (System_Collections_Generic_List_T__o *)local_48._0_8_;
  pIVar16 = (Il2CppRGCTXData *)local_48._8_8_;
  value = local_38;
  local_58 = __this_10;
  local_50 = __this;
  if (__this_11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_02.fields._index = local_48._8_4_;
    __this_02.fields._version = local_48._12_4_;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
    __this_02.fields._current = local_38.genericMethod;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88);
    _Var13 = value;
    if ((char)bVar9 != '\0') goto label_045394dc;
  }
  else {
    while (__this_01.fields._8_8_ = pIVar16, __this_01.fields._list = pSVar15,
          __this_01.fields._current = value.genericMethod,
          bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88), (char)bVar9 != '\0') {
      _Var13 = value;
      if (value.genericMethod == (Il2CppObject *)0x0) goto label_045394e6;
      pIVar10 = (Il2CppObject *)
                (**(code **)(*(long *)value.genericMethod + 0x208))
                          (value.genericMethod,*(undefined8 *)(*(long *)value.genericMethod + 0x210));
      System_Collections_Generic_Dictionary_object__object___Add
                (__this_11,pIVar10,value.genericMethod,MethodInfo_Void_Add);
      value = _Var13;
    }
  }
  __this_03.fields._8_8_ = pIVar16;
  __this_03.fields._list = pSVar15;
  __this_03.fields._current = value.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
  __this_12 = (Settings_PresetSettingsContainer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AchievementContainer);
  if (g_data_057aeef6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_GameProgress_AchievementItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_AchievementItem);
    g_data_057aeef6 = '\x01';
  }
  __this_13 = (Settings_PresetSettingsContainer_c *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_AchievementItem);
  Settings_ListSetting_object____ctor_3521170((Settings_ListSetting_T__o *)__this_13,MethodInfo_ListSetting_1_GameProgress_AchievementItem);
  __this_12[1].klass = __this_13;
  il2cpp_runtime_helper_022b4080(__this_12 + 1);
  Settings_BaseSettingsContainer___ctor(__this_12,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_14 = ApplicationManagers_ResourceManager__LoadAsset(pSVar11,"AchievementList",0,(MethodInfo *)0x0);
  if (__this_14 == (UnityEngine_Object_o *)0x0) goto label_045394cf;
  bVar2 = (TypeInfo_TextAsset->_2).naturalAligment;
  if ((__this_14->klass->_2).naturalAligment < bVar2) goto label_045394d4;
  if ((__this_14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_TextAsset) goto label_045394d4;
  pSVar11 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)__this_14,(MethodInfo *)0x0);
  (*(__this_12->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
            (__this_12,pSVar11,(__this_12->klass->vtable)._8_DeserializeFromJsonString.method);
  if (__this_12[1].klass == (Settings_PresetSettingsContainer_c *)0x0) goto label_045394cf;
  pSVar6 = (System_Collections_Generic_List_object__o *)((__this_12[1].klass)->_1).namespaze;
  if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) goto label_045394cf;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar6,MethodInfo_List_1_T_Enumerator_GameProgress_AchievementItem_GetEnum);
  pSVar15 = (System_Collections_Generic_List_T__o *)local_48._0_8_;
  pIVar16 = (Il2CppRGCTXData *)local_48._8_8_;
  item = local_38;
  if (__this_11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_05.fields._index = local_48._8_4_;
    __this_05.fields._version = local_48._12_4_;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
    __this_05.fields._current = local_38.genericMethod;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88);
    pSVar15 = (System_Collections_Generic_List_T__o *)local_48._0_8_;
    pIVar16 = (Il2CppRGCTXData *)local_48._8_8_;
    value = local_38;
    _Var13 = local_38;
    if ((char)bVar9 != '\0') goto label_045394eb;
  }
  else {
    while (__this_04.fields._8_8_ = pIVar16, __this_04.fields._list = pSVar15,
          __this_04.fields._current = item.genericMethod, _Var13.genericMethod = &stack0xffffffffffffff88,
          bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88), value = item,
          (char)bVar9 != '\0') {
      if (item.genericMethod == (Il2CppObject *)0x0) goto label_045394f5;
      pIVar10 = (Il2CppObject *)
                (**(code **)(*(long *)item.genericMethod + 0x208))
                          (item.genericMethod,*(undefined8 *)(*(long *)item.genericMethod + 0x210));
      bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (__this_11,pIVar10,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar9 != '\0') {
        pIVar10 = (Il2CppObject *)
                  (**(code **)(*(long *)item.genericMethod + 0x208))
                            (item.genericMethod,*(undefined8 *)(*(long *)item.genericMethod + 0x210));
        pIVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_11,pIVar10,MethodInfo_AchievementItem_get_Item);
        if (pIVar10 == (Il2CppObject *)0x0) goto label_045394ca;
        if (pIVar10[5].klass != (Il2CppClass *)0x0) {
          __this_00 = ((Il2CppObject *)((long)item.genericMethod + 0x50))->klass;
          if (__this_00 != (Il2CppClass *)0x0) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)__this_00,
                       *(int32_t *)((long)&((pIVar10[5].klass)->_1).name + 4),MethodInfo_Void_set_Value);
            goto label_045393d2;
          }
          goto label_045394c0;
        }
label_045394c5:
        il2cpp_runtime_helper_022b2c90();
label_045394ca:
        il2cpp_runtime_helper_022b2c90();
        goto label_045394cf;
      }
label_045393d2:
      if (*(void **)((long)item.genericMethod + 0x78) == (Settings_TypedSetting_bool__o *)0x0) {
label_045394bb:
        il2cpp_runtime_helper_022b2c90();
label_045394c0:
        il2cpp_runtime_helper_022b2c90();
        goto label_045394c5;
      }
      Settings_TypedSetting_bool___set_Value(*(void **)((long)item.genericMethod + 0x78),0,MethodInfo_Void_set_Value);
      lVar8 = MethodInfo_Void_Add;
      if (__this_10 == (System_Collections_Generic_List_Enumerator_T__c *)0x0) {
label_045394b6:
        il2cpp_runtime_helper_022b2c90();
        goto label_045394bb;
      }
      pSVar6 = (System_Collections_Generic_List_object__o *)(__this_10->_1).namespaze;
      if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
label_045394b1:
        il2cpp_runtime_helper_022b2c90();
        goto label_045394b6;
      }
      piVar1 = &(pSVar6->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar7 = (pSVar6->fields)._items;
      if (pSVar7 == (System_Object_array *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_045394b1;
      }
      uVar3 = (pSVar6->fields)._size;
      if (uVar3 < (uint)pSVar7->max_length) {
        (pSVar6->fields)._size = uVar3 + 1;
        ((_union_249689 *)(pSVar7->m_Items + (int)uVar3))->genericMethod = (void *)item;
        il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar3,item.genericMethod);
        item = value;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar6,item.genericMethod,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        item = value;
      }
    }
  }
  __this_06.fields._8_8_ = pIVar16;
  __this_06.fields._list = pSVar15;
  __this_06.fields._current = value.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
  do {
    pGVar4 = (local_50->fields)._achievement;
    if ((pGVar4 != (GameProgress_AchievementContainer_o *)0x0) &&
       (pSVar5 = (pGVar4->fields).AchievementItems, pSVar5 != (Settings_ListSetting_AchievementItem__o *)0x0))
    {
      (*(pSVar5->klass->vtable)._9_Copy.methodPtr)(pSVar5,local_58,(pSVar5->klass->vtable)._9_Copy.method);
      return;
    }
label_045394cf:
    __this_14 = (UnityEngine_Object_o *)il2cpp_runtime_helper_022b2c90();
label_045394d4:
    il2cpp_runtime_helper_022b2fd0(__this_14);
    _Var13 = value;
label_045394dc:
    value = _Var13;
    if (_Var13.genericMethod == (Il2CppObject *)0x0) {
label_045394e6:
      il2cpp_runtime_helper_022b2c90();
label_045394eb:
      item = _Var13;
      value = _Var13;
      if (_Var13.genericMethod == (Il2CppObject *)0x0) {
label_045394f5:
        il2cpp_runtime_helper_022b2c90();
        value = item;
        goto label_045394fa;
      }
    }
    else {
label_045394fa:
      (**(code **)(*(long *)_Var13.genericMethod + 0x208))();
      il2cpp_runtime_helper_022b2c90();
    }
    (**(code **)(*(long *)_Var13.genericMethod + 0x208))();
    auVar14 = il2cpp_runtime_helper_022b2c90();
    if (auVar14._8_4_ != 1) {
      __this_08.fields._8_8_ = pIVar16;
      __this_08.fields._list = pSVar15;
      __this_08.fields._current = value.genericMethod;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
      goto label_0453972c;
    }
    plVar12 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar8 = *plVar12;
    __cxa_end_catch();
    __this_07.fields._8_8_ = pIVar16;
    __this_07.fields._list = pSVar15;
    __this_07.fields._current = value.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
    if (lVar8 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar8);
      __this_09.fields._8_8_ = pIVar16;
      __this_09.fields._list = pSVar15;
      __this_09.fields._current = value.genericMethod;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
label_0453972c:
      _Unwind_Resume(auVar14._0_8_);
    }
  } while( true );
}


// GameProgress.AchievementHandler$$CacheActiveAchievements
// il2cpp: void GameProgress_AchievementHandler__CacheActiveAchievements (GameProgress_AchievementHandler_o* __this, const MethodInfo* method);
// 0x4539750

void GameProgress_AchievementHandler__CacheActiveAchievements
               (GameProgress_AchievementHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  GameProgress_AchievementContainer_o *pGVar3;
  Settings_ListSetting_AchievementItem__o *pSVar4;
  System_String_o *pSVar5;
  System_Object_array *pSVar6;
  Settings_IntSetting_o *pSVar7;
  Settings_IntSetting_o *pSVar8;
  long lVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  bool_conflict bVar10;
  System_String_o *pSVar11;
  System_Collections_Generic_List_object__o *pSVar12;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_10;
  Il2CppObject *source;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_11;
  Settings_StringSetting_o *pSVar13;
  long *plVar14;
  MethodInfo *method_00;
  System_Collections_Generic_List_object__o *unaff_RBP;
  System_Collections_Generic_Dictionary_object__object__o *unaff_R13;
  GameProgress_QuestItem_o *pGVar15;
  undefined1 auVar16 [12];
  Il2CppRGCTXData *pIVar17;
  _union_249689 _Var18;
  GameProgress_QuestItem_o *__this_12;
  Il2CppRGCTXData *local_68;
  _union_249689 _Stack_60;
  GameProgress_QuestItem_o *local_58;
  undefined1 local_50 [16];
  GameProgress_QuestItem_o *local_40;
  GameProgress_AchievementHandler_o *local_38;
  
  if (g_data_057aeef9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_List_1_GameProgress_Achieveme);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_AchievementItem_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Lis);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_List_AchievementItem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_GameProgress_AchievementItem_OrderB);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_AchievementItem_ToList_AchievementIt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AchievementItem_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_AchievementItem_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameProgress_AchievementItem_GetEnum);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_AchievementItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AchievementItem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_GameProgress_AchievementItem_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_CacheActiveAchievements_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aeef9 = '\x01';
  }
  pIVar17 = (Il2CppRGCTXData *)0x0;
  _Var18.genericMethod = (Il2CppType *)0x0;
  __this_12 = (GameProgress_QuestItem_o *)0x0;
  local_68 = (Il2CppRGCTXData *)0x0;
  _Stack_60.genericMethod = (Il2CppType *)0x0;
  local_58 = (GameProgress_QuestItem_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04539e04;
  System_Collections_Generic_Dictionary_object__object___Clear(__this_00,MethodInfo_Void_Clear);
  unaff_R13 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_List_AchievementItem);
  method = MethodInfo_Dictionary_2_System_String_List_1_GameProgress_Achieveme;
  System_Collections_Generic_Dictionary_object__object____ctor(unaff_R13,(MethodInfo_31041B0 *)MethodInfo_Dictionary_2_System_String_List_1_GameProgress_Achieveme);
  pGVar3 = (__this->fields)._achievement;
  if (pGVar3 == (GameProgress_AchievementContainer_o *)0x0) goto label_04539e04;
  pSVar4 = (pGVar3->fields).AchievementItems;
  if (pSVar4 == (Settings_ListSetting_AchievementItem__o *)0x0) goto label_04539e04;
  pSVar12 = (System_Collections_Generic_List_object__o *)(pSVar4->fields)._value;
  method = (MethodInfo *)0x0;
  if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) goto label_04539e04;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_50,pSVar12,MethodInfo_List_1_T_Enumerator_GameProgress_AchievementItem_GetEnum);
  pIVar17 = (Il2CppRGCTXData *)local_50._0_8_;
  _Var18 = (_union_249689)local_50._8_8_;
  pGVar15 = local_40;
  local_38 = __this;
  if (unaff_R13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_02.fields._index = local_50._8_4_;
    __this_02.fields._version = local_50._12_4_;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)local_50._0_8_;
    __this_02.fields._current = (Il2CppObject *)local_40;
    method = MethodInfo_Boolean_MoveNext;
    bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
    __this_12 = pGVar15;
    if ((char)bVar10 != '\0') goto label_04539e09;
  }
  else {
    while (__this_01.fields._8_8_ = _Var18.genericMethod,
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pIVar17,
          __this_01.fields._current = (Il2CppObject *)pGVar15, method = MethodInfo_Boolean_MoveNext,
          __this_12 = (GameProgress_QuestItem_o *)&stack0xffffffffffffff78,
          bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78), (char)bVar10 != '\0')
    {
      if (pGVar15 == (GameProgress_QuestItem_o *)0x0) goto label_04539e13;
      pSVar13 = (pGVar15->fields).Category;
      if (pSVar13 == (Settings_StringSetting_o *)0x0) goto label_04539e21;
      pSVar5 = (pSVar13->fields)._value;
      __this_12 = pGVar15;
      pSVar11 = GameProgress_QuestItem__GetConditionsHash(pGVar15,method);
      method = (MethodInfo *)System_String__Concat_3ae5ba0(pSVar5,pSVar11,(MethodInfo *)0x0);
      bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                         (unaff_R13,(Il2CppObject *)method,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar10 == '\0') {
        unaff_RBP = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AchievementItem);
        System_Collections_Generic_List_object____ctor(unaff_RBP,MethodInfo_List_1_GameProgress_AchievementItem);
        System_Collections_Generic_Dictionary_object__object___Add
                  (unaff_R13,(Il2CppObject *)method,(Il2CppObject *)unaff_RBP,MethodInfo_Void_Add);
      }
      pSVar12 = (System_Collections_Generic_List_object__o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (unaff_R13,(Il2CppObject *)method,MethodInfo_List_1_GameProgress_AchievementItem_get_Item);
      lVar9 = MethodInfo_Void_Add;
      if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) goto label_04539ded;
      piVar1 = &(pSVar12->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar6 = (pSVar12->fields)._items;
      if (pSVar6 == (System_Object_array *)0x0) goto label_04539de8;
      uVar2 = (pSVar12->fields)._size;
      if (uVar2 < (uint)pSVar6->max_length) {
        (pSVar12->fields)._size = uVar2 + 1;
        pSVar6->m_Items[(int)uVar2] = (Il2CppObject *)pGVar15;
        il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar2,pGVar15);
        pGVar15 = __this_12;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar12,(Il2CppObject *)pGVar15,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        pGVar15 = __this_12;
      }
    }
  }
  __this_03.fields._8_8_ = _Var18.genericMethod;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pIVar17;
  __this_03.fields._current = (Il2CppObject *)pGVar15;
  method = MethodInfo_Void_Dispose;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
  __this_12 = pGVar15;
  do {
    if ((unaff_R13 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (method = MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Lis,
       __this_10 = System_Collections_Generic_Dictionary_object__object___get_Keys
                             (unaff_R13,(MethodInfo_3104A20 *)MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Lis),
       __this_10 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_50,
                 __this_10,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      local_58 = local_40;
      local_68 = (Il2CppRGCTXData *)local_50._0_8_;
      _Stack_60 = (_union_249689)local_50._8_8_;
label_04539b30:
      __this_04.fields._8_8_ = _Var18.genericMethod;
      __this_04.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar17;
      __this_04.fields._currentKey = (Il2CppObject *)__this_12;
      bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                         (__this_04,(MethodInfo_3251B20 *)&local_68);
      if ((char)bVar10 == '\0') {
        __this_07.fields._8_8_ = _Var18.genericMethod;
        __this_07.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar17;
        __this_07.fields._currentKey = (Il2CppObject *)__this_12;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_07,(MethodInfo_3251B10 *)&local_68);
        return;
      }
      source = System_Collections_Generic_Dictionary_object__object___get_Item
                         (unaff_R13,(Il2CppObject *)local_58,MethodInfo_List_1_GameProgress_AchievementItem_get_Item);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_RBP = (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_c + 0xb8);
        keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_AchievementItem_string);
        System_Func_object__object____ctor();
        lVar9 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_TSource__TKey__o **)(lVar9 + 8) = keySelector;
        il2cpp_runtime_helper_022b4080(lVar9 + 8,keySelector);
      }
      source_00 = System_Linq_Enumerable__OrderBy_object__object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,keySelector,
                             MethodInfo_IOrderedEnumerable_1_GameProgress_AchievementItem_OrderB);
      method = MethodInfo_List_1_GameProgress_AchievementItem_ToList_AchievementIt;
      __this_11 = System_Linq_Enumerable__ToList_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                             (MethodInfo_2525430 *)MethodInfo_List_1_GameProgress_AchievementItem_ToList_AchievementIt);
      if (__this_11 != (System_Collections_Generic_List_TSource__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
                   (System_Collections_Generic_List_object__o *)__this_11,MethodInfo_List_1_T_Enumerator_GameProgress_AchievementItem_GetEnum);
        pIVar17 = (Il2CppRGCTXData *)local_50._0_8_;
        _Var18 = (_union_249689)local_50._8_8_;
        __this_12 = local_40;
        while( true ) {
          __this_05.fields._8_8_ = _Var18.genericMethod;
          __this_05.fields._list = (System_Collections_Generic_List_T__o *)pIVar17;
          __this_05.fields._current = (Il2CppObject *)__this_12;
          method = MethodInfo_Boolean_MoveNext;
          bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
          if ((char)bVar10 == '\0') {
            pGVar15 = (GameProgress_QuestItem_o *)0x0;
            goto label_04539cd5;
          }
          if (__this_12 == (GameProgress_QuestItem_o *)0x0) break;
          pSVar7 = (__this_12->fields).Progress;
          if (pSVar7 == (Settings_IntSetting_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_04539de8;
          }
          pSVar8 = (__this_12->fields).Amount;
          if (pSVar8 == (Settings_IntSetting_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_04539de8;
          }
          pGVar15 = __this_12;
          if ((pSVar7->fields)._value < (pSVar8->fields)._value) goto label_04539cd5;
        }
        il2cpp_runtime_helper_022b2c90();
label_04539de8:
        il2cpp_runtime_helper_022b2c90();
label_04539ded:
        il2cpp_runtime_helper_022b2c90();
      }
      il2cpp_runtime_helper_022b2c90();
      il2cpp_runtime_helper_022fefe0(unaff_RBP);
label_04539dff:
      il2cpp_runtime_helper_022b2c90();
    }
label_04539e04:
    il2cpp_runtime_helper_022b2c90();
label_04539e09:
    pGVar15 = __this_12;
    if (__this_12 == (GameProgress_QuestItem_o *)0x0) {
label_04539e13:
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar13 = (__this_12->fields).Category;
    if (pSVar13 == (Settings_StringSetting_o *)0x0) {
label_04539e21:
      pSVar13 = (Settings_StringSetting_o *)il2cpp_runtime_helper_022b2c90();
    }
    pSVar5 = (pSVar13->fields)._value;
    pSVar11 = GameProgress_QuestItem__GetConditionsHash(__this_12,method);
    System_String__Concat_3ae5ba0(pSVar5,pSVar11,(MethodInfo *)0x0);
    auVar16 = il2cpp_runtime_helper_022b2c90();
    if (auVar16._8_4_ != 1) goto label_04539fe1;
    plVar14 = (long *)__cxa_begin_catch(auVar16._0_8_);
    lVar9 = *plVar14;
    __cxa_end_catch();
    __this_08.fields._8_8_ = _Var18.genericMethod;
    __this_08.fields._list = (System_Collections_Generic_List_T__o *)pIVar17;
    __this_08.fields._current = (Il2CppObject *)pGVar15;
    method = MethodInfo_Void_Dispose;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    __this_12 = pGVar15;
  } while (lVar9 == 0);
  il2cpp_runtime_helper_022fefe0(lVar9);
label_04539fe1:
  __this_09.fields._8_8_ = _Var18.genericMethod;
  __this_09.fields._list = (System_Collections_Generic_List_T__o *)pIVar17;
  __this_09.fields._current = (Il2CppObject *)pGVar15;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
  _Unwind_Resume(auVar16._0_8_);
label_04539cd5:
  unaff_RBP = (System_Collections_Generic_List_object__o *)0x0;
  __this_06.fields._8_8_ = _Var18.genericMethod;
  __this_06.fields._list = (System_Collections_Generic_List_T__o *)pIVar17;
  __this_06.fields._current = (Il2CppObject *)__this_12;
  method = MethodInfo_Void_Dispose;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
  if (pGVar15 != (GameProgress_QuestItem_o *)0x0) {
    if (pGVar15[1].monitor != (Settings_TypedSetting_bool__o *)0x0) {
      Settings_TypedSetting_bool___set_Value(pGVar15[1].monitor,1,MethodInfo_Void_set_Value);
      GameProgress_QuestHandler__AddActiveQuest((GameProgress_QuestHandler_o *)local_38,pGVar15,method_00);
      goto label_04539b30;
    }
    goto label_04539dff;
  }
  goto label_04539b30;
}


