// Type: GameProgress.AchievementHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameProgress/AchievementHandler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameProgress/AchievementHandler.cs  [CHANGED since prior version]
// --------------------------------

// GameProgress.AchievementHandler.<>c$$.cctor
// il2cpp: void GameProgress_AchievementHandler___c___cctor (const MethodInfo* method);
// 0x4208040

void GameProgress_AchievementHandler_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_0570501f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570501f = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// GameProgress.AchievementHandler.<>c$$.ctor
// il2cpp: void GameProgress_AchievementHandler___c___ctor (GameProgress_AchievementHandler___c_o* __this, const MethodInfo* method);
// 0x42080b0

void GameProgress_AchievementHandler_<>c___ctor
               (GameProgress_AchievementHandler___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.AchievementHandler.<>c$$<CacheActiveAchievements>b__4_0
// il2cpp: System_String_o* GameProgress_AchievementHandler___c___CacheActiveAchievements_b__4_0 (GameProgress_AchievementHandler___c_o* __this, GameProgress_AchievementItem_o* x, const MethodInfo* method);
// 0x42080c0

System_String_o *
GameProgress_AchievementHandler_<>c__<CacheActiveAchievements>b__4_0
          (GameProgress_AchievementHandler___c_o *__this,GameProgress_AchievementItem_o *x,
          MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar1;
  
  if (x != (GameProgress_AchievementItem_o *)0x0) {
    vtable_dispatch = (x->klass->vtable)._13_GetQuestName.methodPtr;
    pSVar1 = (System_String_o *)
             (*vtable_dispatch)
                       (x,(x->klass->vtable)._13_GetQuestName.method,method,vtable_dispatch);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.AchievementHandler$$.ctor
// il2cpp: void GameProgress_AchievementHandler___ctor (GameProgress_AchievementHandler_o* __this, GameProgress_AchievementContainer_o* achievement, const MethodInfo* method);
// 0x4206a30

void GameProgress_AchievementHandler___ctor
               (GameProgress_AchievementHandler_o *__this,
               GameProgress_AchievementContainer_o *achievement,MethodInfo *method)

{
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_0570501c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_QuestHandler);
    DAT_0570501c = '\x01';
    method = extraout_RDX;
  }
  if (*(int *)(TypeInfo_QuestHandler + 0xe4) == 0) {
    il2cpp_init_class();
    method = extraout_RDX_00;
  }
  GameProgress_QuestHandler___ctor
            ((GameProgress_QuestHandler_o *)__this,(GameProgress_QuestContainer_o *)0x0,method);
  (__this->fields)._achievement = achievement;
  il2cpp_runtime_glue(&(__this->fields)._achievement);
  GameProgress_AchievementHandler__LoadAchievements(__this,(MethodInfo *)achievement);
  GameProgress_AchievementHandler__CacheActiveAchievements(__this,(MethodInfo *)achievement);
  return;
}


// GameProgress.AchievementHandler$$ReloadAchievements
// il2cpp: void GameProgress_AchievementHandler__ReloadAchievements (GameProgress_AchievementHandler_o* __this, const MethodInfo* method);
// 0x4206d90

void GameProgress_AchievementHandler__ReloadAchievements
               (GameProgress_AchievementHandler_o *__this,MethodInfo *method)

{
  GameProgress_AchievementHandler__LoadAchievements(__this,method);
  GameProgress_AchievementHandler__CacheActiveAchievements(__this,method);
  return;
}


// GameProgress.AchievementHandler$$LoadAchievements
// il2cpp: void GameProgress_AchievementHandler__LoadAchievements (GameProgress_AchievementHandler_o* __this, const MethodInfo* method);
// 0x4206db0

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
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  long lVar8;
  bool_conflict bVar9;
  Settings_ListSetting_T__o *__this_07;
  System_Collections_Generic_Dictionary_object__object__o *__this_08;
  Il2CppObject *pIVar10;
  Settings_SaveableSettingsContainer_o *__this_09;
  Settings_SaveableSettingsContainer_c *__this_10;
  UnityEngine_Object_o *__this_11;
  System_String_o *pSVar11;
  System_Collections_Generic_List_T__o *pSVar12;
  Il2CppRGCTXData *pIVar13;
  _union_247328 _Var14;
  _union_247328 _Var15;
  undefined1 local_48 [16];
  _union_247328 local_38;
  
  if (DAT_0570501d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AchievementContainer);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_GameProgress_Achievem);
    il2cpp_init_method_metadata(&MethodInfo_AchievementItem_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__AchievementItem);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_AchievementItem_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_ListSetting_1_GameProgress_AchievementItem);
    il2cpp_init_method_metadata(&TypeInfo_ListSetting_AchievementItem);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameProgress_AchievementIte);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_TextAsset);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_AchievementItem__get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"AchievementList");
    DAT_0570501d = '\x01';
  }
  __this_07 = (Settings_ListSetting_T__o *)il2cpp_runtime_glue(TypeInfo_ListSetting_AchievementItem);
  Settings_ListSetting<object>___ctor(__this_07,MethodInfo_ListSetting_1_GameProgress_AchievementItem);
  __this_08 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__AchievementItem);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_08,MethodInfo_Dictionary_2_System_String_GameProgress_Achievem);
  pGVar4 = (__this->fields)._achievement;
  if (((pGVar4 != (GameProgress_AchievementContainer_o *)0x0) &&
      (pSVar5 = (pGVar4->fields).AchievementItems,
      pSVar5 != (Settings_ListSetting_AchievementItem__o *)0x0)) &&
     (pSVar6 = (System_Collections_Generic_List_object__o *)(pSVar5->fields)._value,
     pSVar6 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar6,MethodInfo_List_1_T__Enumerator_GameProgress_AchievementIte);
    pSVar12 = (System_Collections_Generic_List_T__o *)local_48._0_8_;
    pIVar13 = (Il2CppRGCTXData *)local_48._8_8_;
    _Var14 = local_38;
    if (__this_08 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_02.fields._index = local_48._8_4_;
      __this_02.fields._version = local_48._12_4_;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
      __this_02.fields._current = local_38.genericMethod;
      bVar9 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff88);
      if ((char)bVar9 != '\0') {
        if (_Var14.genericMethod != (Il2CppObject *)0x0) {
          (**(code **)(*(long *)_Var14.genericMethod + 0x208))
                    (_Var14.genericMethod,*(undefined8 *)(*(long *)_Var14.genericMethod + 0x210));
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_04207376:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      while (__this_01.fields._8_8_ = pIVar13, __this_01.fields._list = pSVar12,
            __this_01.fields._current = _Var14.genericMethod,
            bVar9 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff88),
            (char)bVar9 != '\0') {
        if (_Var14.genericMethod == (Il2CppObject *)0x0) goto LAB_04207376;
        _Var15 = _Var14;
        pIVar10 = (Il2CppObject *)
                  (**(code **)(*(long *)_Var14.genericMethod + 0x208))
                            (_Var14.genericMethod,
                             *(undefined8 *)(*(long *)_Var14.genericMethod + 0x210));
        System_Collections_Generic_Dictionary<object__object>__Add
                  (__this_08,pIVar10,_Var14.genericMethod,MethodInfo_Void_Add);
        _Var14 = _Var15;
      }
    }
    __this_03.fields._8_8_ = pIVar13;
    __this_03.fields._list = pSVar12;
    __this_03.fields._current = _Var14.genericMethod;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff88);
    __this_09 = (Settings_SaveableSettingsContainer_o *)il2cpp_runtime_glue(TypeInfo_AchievementContainer);
    if (DAT_0570501b == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_ListSetting_1_GameProgress_AchievementItem);
      il2cpp_init_method_metadata(&TypeInfo_ListSetting_AchievementItem);
      DAT_0570501b = '\x01';
    }
    __this_10 = (Settings_SaveableSettingsContainer_c *)il2cpp_runtime_glue(TypeInfo_ListSetting_AchievementItem);
    Settings_ListSetting<object>___ctor((Settings_ListSetting_T__o *)__this_10,MethodInfo_ListSetting_1_GameProgress_AchievementItem);
    __this_09[1].klass = __this_10;
    il2cpp_runtime_glue(__this_09 + 1);
    Settings_BaseSettingsContainer___ctor(__this_09,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_11 = ApplicationManagers_ResourceManager__LoadAsset
                          (pSVar11,"AchievementList",0,(MethodInfo *)0x0);
    if (__this_11 != (UnityEngine_Object_o *)0x0) {
      bVar2 = (TypeInfo_TextAsset->_2).naturalAligment;
      if (((__this_11->klass->_2).naturalAligment < bVar2) ||
         ((__this_11->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_TextAsset)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_11);
      }
      pSVar11 = UnityEngine_TextAsset__get_text
                          ((UnityEngine_TextAsset_o *)__this_11,(MethodInfo *)0x0);
      (*(__this_09->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
                (__this_09,pSVar11,(__this_09->klass->vtable)._8_DeserializeFromJsonString.method);
      if ((__this_09[1].klass != (Settings_SaveableSettingsContainer_c *)0x0) &&
         (pSVar6 = (System_Collections_Generic_List_object__o *)((__this_09[1].klass)->_1).namespaze
         , pSVar6 != (System_Collections_Generic_List_object__o *)0x0)) {
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar6,MethodInfo_List_1_T__Enumerator_GameProgress_AchievementIte);
        pSVar12 = (System_Collections_Generic_List_T__o *)local_48._0_8_;
        pIVar13 = (Il2CppRGCTXData *)local_48._8_8_;
        _Var14 = local_38;
        if (__this_08 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          __this_05.fields._index = local_48._8_4_;
          __this_05.fields._version = local_48._12_4_;
          __this_05.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
          __this_05.fields._current = local_38.genericMethod;
          bVar9 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_05,(MethodInfo_3185E20 *)&stack0xffffffffffffff88);
          if ((char)bVar9 != '\0') {
            if (local_38.genericMethod != (Il2CppObject *)0x0) {
              (**(code **)(*(long *)local_38.genericMethod + 0x208))
                        (local_38.genericMethod,
                         *(undefined8 *)(*(long *)local_38.genericMethod + 0x210));
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
LAB_04207385:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
        else {
          while (__this_04.fields._8_8_ = pIVar13, __this_04.fields._list = pSVar12,
                __this_04.fields._current = _Var14.genericMethod,
                bVar9 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_04,(MethodInfo_3185E20 *)&stack0xffffffffffffff88),
                local_48._0_8_ = pSVar12, local_48._8_8_ = pIVar13, local_38 = _Var14,
                (char)bVar9 != '\0') {
            if (_Var14.genericMethod == (Il2CppObject *)0x0) goto LAB_04207385;
            _Var15 = _Var14;
            pIVar10 = (Il2CppObject *)
                      (**(code **)(*(long *)_Var14.genericMethod + 0x208))
                                (_Var14.genericMethod,
                                 *(undefined8 *)(*(long *)_Var14.genericMethod + 0x210));
            bVar9 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                              (__this_08,pIVar10,MethodInfo_Boolean_ContainsKey);
            if ((char)bVar9 != '\0') {
              pIVar10 = (Il2CppObject *)
                        (**(code **)(*(long *)_Var14.genericMethod + 0x208))
                                  (_Var14.genericMethod,
                                   *(undefined8 *)(*(long *)_Var14.genericMethod + 0x210));
              pIVar10 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                  (__this_08,pIVar10,MethodInfo_AchievementItem_get_Item);
              if (pIVar10 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if (pIVar10[5].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              __this_00 = ((Il2CppObject *)((long)_Var14.genericMethod + 0x50))->klass;
              if (__this_00 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              Settings_TypedSetting<int>__set_Value
                        ((Settings_TypedSetting_int__o *)__this_00,
                         *(int32_t *)((long)&((pIVar10[5].klass)->_1).name + 4),MethodInfo_Void_set_Value);
            }
            if (*(void **)((long)_Var14.genericMethod + 0x78) ==
                (Settings_TypedSetting_bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            Settings_TypedSetting<bool>__set_Value
                      (*(void **)((long)_Var14.genericMethod + 0x78),0,MethodInfo_Void_set_Value);
            lVar8 = MethodInfo_Void_Add;
            if (__this_07 == (Settings_ListSetting_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar6 = (System_Collections_Generic_List_object__o *)(__this_07->fields)._value;
            if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(pSVar6->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar7 = (pSVar6->fields)._items;
            if (pSVar7 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar3 = (pSVar6->fields)._size;
            if (uVar3 < (uint)pSVar7->max_length) {
              (pSVar6->fields)._size = uVar3 + 1;
              ((_union_247328 *)(pSVar7->m_Items + (int)uVar3))->genericMethod = (void *)_Var14;
              il2cpp_runtime_glue(pSVar7->m_Items + (int)uVar3,_Var14.genericMethod);
              _Var14 = _Var15;
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar6,_Var14.genericMethod,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
              _Var14 = _Var15;
            }
          }
        }
        __this_06.fields._8_8_ = local_48._8_8_;
        __this_06.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
        __this_06.fields._current = local_38.genericMethod;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_06,(MethodInfo_3185E10 *)&stack0xffffffffffffff88);
        pGVar4 = (__this->fields)._achievement;
        if ((pGVar4 != (GameProgress_AchievementContainer_o *)0x0) &&
           (pSVar5 = (pGVar4->fields).AchievementItems,
           pSVar5 != (Settings_ListSetting_AchievementItem__o *)0x0)) {
          (*(pSVar5->klass->vtable)._9_Copy.methodPtr)
                    (pSVar5,__this_07,(pSVar5->klass->vtable)._9_Copy.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.AchievementHandler$$CacheActiveAchievements
// il2cpp: void GameProgress_AchievementHandler__CacheActiveAchievements (GameProgress_AchievementHandler_o* __this, const MethodInfo* method);
// 0x42075e0

/* WARNING: Removing unreachable block (ram,0x04207c87) */
/* WARNING: Removing unreachable block (ram,0x04207b85) */

void GameProgress_AchievementHandler__CacheActiveAchievements
               (GameProgress_AchievementHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  GameProgress_AchievementContainer_o *pGVar3;
  Settings_ListSetting_AchievementItem__o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  System_Object_array *pSVar6;
  long lVar7;
  Settings_IntSetting_o *pSVar8;
  Settings_IntSetting_o *pSVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_06;
  bool_conflict bVar10;
  System_Collections_Generic_Dictionary_object__object__o *pSVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  System_Collections_Generic_List_object__o *pSVar14;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_07;
  Il2CppObject *source;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_08;
  MethodInfo *method_00;
  GameProgress_QuestItem_o *pGVar15;
  Il2CppRGCTXData *pIVar16;
  _union_247328 _Var17;
  GameProgress_QuestItem_o *__this_09;
  Il2CppRGCTXData *local_68;
  _union_247328 _Stack_60;
  GameProgress_QuestItem_o *local_58;
  undefined1 local_50 [16];
  GameProgress_QuestItem_o *local_40;
  GameProgress_AchievementHandler_o *local_38;
  
  if (DAT_0570501e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_List_1_GameProgress_A);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_AchievementItem__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__List_AchievementItem);
    il2cpp_init_method_metadata(&MethodInfo_IOrderedEnumerable_1_GameProgress_AchievementIte);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_AchievementItem__ToList_Achi);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_AchievementItem_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_Func_AchievementItem__string);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameProgress_AchievementIte);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_AchievementItem);
    il2cpp_init_method_metadata(&TypeInfo_List_AchievementItem);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_AchievementItem__get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_String__CacheActiveAchievements_b__4_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570501e = '\x01';
  }
  local_68 = (Il2CppRGCTXData *)0x0;
  _Stack_60 = (_union_247328)0x0;
  local_58 = (GameProgress_QuestItem_o *)0x0;
  pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
            (__this->fields)._activeQuests;
  if (pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(pSVar11,MethodInfo_Void_Clear);
    pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__List_AchievementItem);
    System_Collections_Generic_Dictionary<object__object>___ctor(pSVar11,MethodInfo_Dictionary_2_System_String_List_1_GameProgress_A);
    pGVar3 = (__this->fields)._achievement;
    if (((pGVar3 != (GameProgress_AchievementContainer_o *)0x0) &&
        (pSVar4 = (pGVar3->fields).AchievementItems,
        pSVar4 != (Settings_ListSetting_AchievementItem__o *)0x0)) &&
       (pSVar14 = (System_Collections_Generic_List_object__o *)(pSVar4->fields)._value,
       pSVar14 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_50,pSVar14,MethodInfo_List_1_T__Enumerator_GameProgress_AchievementIte);
      pIVar16 = (Il2CppRGCTXData *)local_50._0_8_;
      _Var17 = (_union_247328)local_50._8_8_;
      __this_09 = local_40;
      local_38 = __this;
      if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        __this_01.fields._index = local_50._8_4_;
        __this_01.fields._version = local_50._12_4_;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)local_50._0_8_;
        __this_01.fields._current = (Il2CppObject *)local_40;
        bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff78);
        if ((char)bVar10 != '\0') {
          if (__this_09 != (GameProgress_QuestItem_o *)0x0) {
            pSVar5 = (__this_09->fields).Category;
            if (pSVar5 != (Settings_StringSetting_o *)0x0) {
              pSVar13 = (pSVar5->fields)._value;
              pSVar12 = GameProgress_QuestItem__GetConditionsHash(__this_09,(MethodInfo *)0x0);
              System_String__Concat(pSVar13,pSVar12,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
LAB_04207cb1:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_04207ca3:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        while (__this_00.fields._8_8_ = _Var17.genericMethod,
              __this_00.fields._list = (System_Collections_Generic_List_T__o *)pIVar16,
              __this_00.fields._current = (Il2CppObject *)__this_09,
              bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff78),
              (char)bVar10 != '\0') {
          if (__this_09 == (GameProgress_QuestItem_o *)0x0) goto LAB_04207ca3;
          pSVar5 = (__this_09->fields).Category;
          if (pSVar5 == (Settings_StringSetting_o *)0x0) goto LAB_04207cb1;
          pSVar13 = (pSVar5->fields)._value;
          pGVar15 = __this_09;
          pSVar12 = GameProgress_QuestItem__GetConditionsHash(__this_09,(MethodInfo *)0x0);
          pSVar13 = System_String__Concat(pSVar13,pSVar12,(MethodInfo *)0x0);
          bVar10 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                             (pSVar11,(Il2CppObject *)pSVar13,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar10 == '\0') {
            pSVar14 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_AchievementItem);
            System_Collections_Generic_List<object>___ctor(pSVar14,MethodInfo_List_1_GameProgress_AchievementItem);
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar11,(Il2CppObject *)pSVar13,(Il2CppObject *)pSVar14,MethodInfo_Void_Add);
          }
          pSVar14 = (System_Collections_Generic_List_object__o *)
                    System_Collections_Generic_Dictionary<object__object>__get_Item
                              (pSVar11,(Il2CppObject *)pSVar13,MethodInfo_List_1_GameProgress_AchievementItem__get_Item);
          lVar7 = MethodInfo_Void_Add;
          if (pSVar14 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          piVar1 = &(pSVar14->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (pSVar14->fields)._items;
          if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (pSVar14->fields)._size;
          if (uVar2 < (uint)pSVar6->max_length) {
            (pSVar14->fields)._size = uVar2 + 1;
            pSVar6->m_Items[(int)uVar2] = (Il2CppObject *)__this_09;
            il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar2,__this_09);
            __this_09 = pGVar15;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar14,(Il2CppObject *)__this_09,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            __this_09 = pGVar15;
          }
        }
      }
      __this_02.fields._8_8_ = _Var17.genericMethod;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pIVar16;
      __this_02.fields._current = (Il2CppObject *)__this_09;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff78);
      if ((pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (__this_07 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                                (pSVar11,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
         __this_07 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
        System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *
                   )local_50,__this_07,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
        local_58 = local_40;
        local_68 = (Il2CppRGCTXData *)local_50._0_8_;
        _Stack_60 = (_union_247328)local_50._8_8_;
        do {
          __this_03.fields._8_8_ = _Var17.genericMethod;
          __this_03.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar16;
          __this_03.fields._currentKey = (Il2CppObject *)__this_09;
          bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                             (__this_03,(MethodInfo_31D0850 *)&local_68);
          if ((char)bVar10 == '\0') {
            __this_06.fields._8_8_ = _Var17.genericMethod;
            __this_06.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar16;
            __this_06.fields._currentKey = (Il2CppObject *)__this_09;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                      (__this_06,(MethodInfo_31D0840 *)&local_68);
            return;
          }
          source = System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar11,(Il2CppObject *)local_58,MethodInfo_List_1_GameProgress_AchievementItem__get_Item);
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
            keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
          }
          else {
            keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
          }
          if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_AchievementItem__string);
            System_Func<object__object>___ctor();
            lVar7 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_TSource__TKey__o **)(lVar7 + 8) = keySelector;
            il2cpp_runtime_glue(lVar7 + 8,keySelector);
          }
          source_00 = System_Linq_Enumerable__OrderBy<object__object>
                                ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                 keySelector,MethodInfo_IOrderedEnumerable_1_GameProgress_AchievementIte);
          __this_08 = System_Linq_Enumerable__ToList<object>
                                ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                                 MethodInfo_List_1_GameProgress_AchievementItem__ToList_Achi);
          if (__this_08 == (System_Collections_Generic_List_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
                     (System_Collections_Generic_List_object__o *)__this_08,MethodInfo_List_1_T__Enumerator_GameProgress_AchievementIte);
          pIVar16 = (Il2CppRGCTXData *)local_50._0_8_;
          _Var17 = (_union_247328)local_50._8_8_;
          __this_09 = local_40;
          do {
            __this_04.fields._8_8_ = _Var17.genericMethod;
            __this_04.fields._list = (System_Collections_Generic_List_T__o *)pIVar16;
            __this_04.fields._current = (Il2CppObject *)__this_09;
            bVar10 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (__this_04,(MethodInfo_3185E20 *)&stack0xffffffffffffff78);
            if ((char)bVar10 == '\0') {
              pGVar15 = (GameProgress_QuestItem_o *)0x0;
              break;
            }
            if (__this_09 == (GameProgress_QuestItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar8 = (__this_09->fields).Progress;
            if (pSVar8 == (Settings_IntSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar9 = (__this_09->fields).Amount;
            if (pSVar9 == (Settings_IntSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pGVar15 = __this_09;
          } while ((pSVar9->fields)._value <= (pSVar8->fields)._value);
          __this_05.fields._8_8_ = _Var17.genericMethod;
          __this_05.fields._list = (System_Collections_Generic_List_T__o *)pIVar16;
          __this_05.fields._current = (Il2CppObject *)__this_09;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_05,(MethodInfo_3185E10 *)&stack0xffffffffffffff78);
          if (pGVar15 != (GameProgress_QuestItem_o *)0x0) {
            if (pGVar15[1].monitor == (Settings_TypedSetting_bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            Settings_TypedSetting<bool>__set_Value(pGVar15[1].monitor,1,MethodInfo_Void_set_Value);
            GameProgress_QuestHandler__AddActiveQuest
                      ((GameProgress_QuestHandler_o *)local_38,pGVar15,method_00);
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


