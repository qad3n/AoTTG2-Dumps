// Type: GameProgress.QuestHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameProgress/QuestHandler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameProgress/QuestHandler.cs  [CHANGED since prior version]
// --------------------------------

// GameProgress.QuestHandler$$.ctor
// il2cpp: void GameProgress_QuestHandler___ctor (GameProgress_QuestHandler_o* __this, GameProgress_QuestContainer_o* quest, const MethodInfo* method);
// 0x4206aa0

void GameProgress_QuestHandler___ctor
               (GameProgress_QuestHandler_o *__this,GameProgress_QuestContainer_o *quest,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_array *pSVar1;
  
  if (DAT_05705052 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_List_1_GameProgress_Q);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__List_QuestItem);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"ReachSpeed");
    il2cpp_init_method_metadata(&"KillHuman");
    il2cpp_init_method_metadata(&"ShareGas");
    il2cpp_init_method_metadata(&"DealDamage");
    il2cpp_init_method_metadata(&"HitDamage");
    il2cpp_init_method_metadata(&"CarryPlayer");
    il2cpp_init_method_metadata(&"KillTitan");
    DAT_05705052 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__List_QuestItem);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_List_1_GameProgress_Q);
  (__this->fields)._activeQuests =
       (System_Collections_Generic_Dictionary_string__List_QuestItem___o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields)._activeQuests,__this_00);
  pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "KillTitan";
      il2cpp_runtime_glue(pSVar1->m_Items);
      (__this->fields).TitanKillCategories = pSVar1;
      il2cpp_runtime_glue(&(__this->fields).TitanKillCategories,pSVar1);
      pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,1);
      if (pSVar1 == (System_String_array *)0x0) goto LAB_04206d80;
      if ((int)pSVar1->max_length != 0) {
        pSVar1->m_Items[0] = "KillHuman";
        il2cpp_runtime_glue(pSVar1->m_Items);
        (__this->fields).HumanKillCategories = pSVar1;
        il2cpp_runtime_glue(&(__this->fields).HumanKillCategories,pSVar1);
        pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
        if (pSVar1 == (System_String_array *)0x0) goto LAB_04206d80;
        if ((int)pSVar1->max_length != 0) {
          pSVar1->m_Items[0] = "DealDamage";
          il2cpp_runtime_glue(pSVar1->m_Items);
          if (1 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[1] = "HitDamage";
            il2cpp_runtime_glue(pSVar1->m_Items + 1);
            (__this->fields).DamageCategories = pSVar1;
            il2cpp_runtime_glue(&(__this->fields).DamageCategories,pSVar1);
            pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,1);
            if (pSVar1 == (System_String_array *)0x0) goto LAB_04206d80;
            if ((int)pSVar1->max_length != 0) {
              pSVar1->m_Items[0] = "ReachSpeed";
              il2cpp_runtime_glue(pSVar1->m_Items);
              (__this->fields).SpeedCategories = pSVar1;
              il2cpp_runtime_glue(&(__this->fields).SpeedCategories,pSVar1);
              pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
              if (pSVar1 == (System_String_array *)0x0) goto LAB_04206d80;
              if ((int)pSVar1->max_length != 0) {
                pSVar1->m_Items[0] = "ShareGas";
                il2cpp_runtime_glue(pSVar1->m_Items);
                if (1 < (uint)pSVar1->max_length) {
                  pSVar1->m_Items[1] = "CarryPlayer";
                  il2cpp_runtime_glue(pSVar1->m_Items + 1);
                  (__this->fields).InteractionCategories = pSVar1;
                  il2cpp_runtime_glue(&(__this->fields).InteractionCategories);
                  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                  if (quest != (GameProgress_QuestContainer_o *)0x0) {
                    (__this->fields)._quest = quest;
                    il2cpp_runtime_glue(&__this->fields);
                    GameProgress_QuestHandler__LoadQuests(__this,(MethodInfo *)quest);
                    GameProgress_QuestHandler__CacheActiveQuests(__this,(MethodInfo *)quest);
                    return;
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_04206d80:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.QuestHandler$$ReloadQuests
// il2cpp: void GameProgress_QuestHandler__ReloadQuests (GameProgress_QuestHandler_o* __this, const MethodInfo* method);
// 0x420bc70

void GameProgress_QuestHandler__ReloadQuests(GameProgress_QuestHandler_o *__this,MethodInfo *method)

{
  GameProgress_QuestHandler__LoadQuests(__this,method);
  GameProgress_QuestHandler__CacheActiveQuests(__this,method);
  return;
}


// GameProgress.QuestHandler$$GetTimeToQuestReset
// il2cpp: System_String_o* GameProgress_QuestHandler__GetTimeToQuestReset (bool daily, const MethodInfo* method);
// 0x420dbf0

System_String_o *
GameProgress_QuestHandler__GetTimeToQuestReset(bool_conflict daily,MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  System_DateTime_o d1;
  Il2CppObject *pIVar3;
  System_Object_array *args;
  long lVar4;
  System_String_o *pSVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  System_DateTime_Fields local_40;
  System_TimeSpan_Fields local_38;
  
  if (DAT_05705053 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    il2cpp_init_method_metadata(&"day");
    il2cpp_init_method_metadata(&"hour");
    il2cpp_init_method_metadata(&"days");
    il2cpp_init_method_metadata(&"hours");
    il2cpp_init_method_metadata(&"Resets in: {0} {1}, {2} {3}");
    il2cpp_init_method_metadata(&"Resets in: {0} {1}");
    DAT_05705053 = '\x01';
  }
  local_38._ticks = 0;
  if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
    il2cpp_init_class();
  }
  d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  local_40._dateData = 0;
  System_DateTime___ctor((System_DateTime_o)&local_40,0x7b2,1,1,(MethodInfo *)0x0);
  local_38._ticks =
       (int64_t)System_DateTime__op_Subtraction
                          (d1,(System_DateTime_o)local_40._dateData,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((char)daily != '\0') {
    iVar1 = System_TimeSpan__get_Hours((System_TimeSpan_o)&local_38,(MethodInfo *)0x0);
    local_40._dateData._0_4_ = 0x18 - iVar1;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_40);
    if (0x18 - iVar1 == 1) {
      puVar7 = &"hour";
    }
    else {
      puVar7 = &"hours";
    }
    pSVar5 = System_String__Format("Resets in: {0} {1}",pIVar3,(Il2CppObject *)*puVar7,(MethodInfo *)0x0);
    return pSVar5;
  }
  iVar1 = System_TimeSpan__get_Days((System_TimeSpan_o)&local_38,(MethodInfo *)0x0);
  iVar2 = (int)((ulong)((long)(iVar1 + -1) * -0x6db6db6d) >> 0x20) + iVar1 + -1;
  iVar2 = (((iVar2 >> 2) - (iVar2 >> 0x1f)) * 7 - (iVar1 + -1)) + 6;
  iVar1 = System_TimeSpan__get_Hours((System_TimeSpan_o)&local_38,(MethodInfo *)0x0);
  args = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,4);
  local_40._dateData._0_4_ = iVar2;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_40);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((pIVar3 != (Il2CppObject *)0x0) &&
     (lVar4 = il2cpp_runtime_glue(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
LAB_0420df4d:
    uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(uVar6,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar3;
    il2cpp_runtime_glue(args->m_Items,pIVar3);
    pSVar5 = "Resets in: {0} {1}, {2} {3}";
    pIVar3 = "days";
    if (iVar2 == 1) {
      pIVar3 = "day";
    }
    if ((pIVar3 != (Il2CppObject *)0x0) &&
       (lVar4 = il2cpp_runtime_glue(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0))
    goto LAB_0420df4d;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar3;
      il2cpp_runtime_glue(args->m_Items + 1,pIVar3);
      local_40._dateData._0_4_ = 0x18 - iVar1;
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_40);
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (lVar4 = il2cpp_runtime_glue(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0))
      goto LAB_0420df4d;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar3;
        il2cpp_runtime_glue(args->m_Items + 2,pIVar3);
        pIVar3 = "hours";
        if (0x18 - iVar1 == 1) {
          pIVar3 = "hour";
        }
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (lVar4 = il2cpp_runtime_glue(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0))
        goto LAB_0420df4d;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar3;
          il2cpp_runtime_glue(args->m_Items + 3,pIVar3);
          pSVar5 = System_String__Format(pSVar5,args,(MethodInfo *)0x0);
          return pSVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.QuestHandler$$LoadQuests
// il2cpp: void GameProgress_QuestHandler__LoadQuests (GameProgress_QuestHandler_o* __this, const MethodInfo* method);
// 0x420cfd0

void GameProgress_QuestHandler__LoadQuests(GameProgress_QuestHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Settings_ListSetting_QuestItem__o *pSVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  long lVar7;
  int32_t currentDay;
  bool_conflict bVar8;
  int iVar9;
  System_DateTime_o d1;
  GameProgress_QuestContainer_o *pGVar10;
  UnityEngine_Object_o *__this_06;
  System_String_o *pSVar11;
  Settings_ListSetting_T__o *__this_07;
  System_Collections_Generic_List_QuestItem__o *pSVar12;
  Settings_ListSetting_T__o *__this_08;
  MethodInfo *method_00;
  GameProgress_QuestHandler_o *pGVar13;
  GameProgress_QuestHandler_o *__this_09;
  MethodInfo *in_R9;
  int iVar14;
  GameProgress_QuestHandler_c *pGVar15;
  Il2CppMethodPointer pIVar16;
  GameProgress_QuestContainer_o *pGVar17;
  System_DateTime_Fields local_60;
  _union_247328 local_58;
  GameProgress_QuestHandler_o *local_50;
  undefined1 local_48 [16];
  GameProgress_QuestContainer_o *local_38;
  
  pGVar13 = (GameProgress_QuestHandler_o *)&stack0xffffffffffffff68;
  __this_09 = (GameProgress_QuestHandler_o *)&stack0xffffffffffffff68;
  if (DAT_05705054 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_QuestItem_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_ListSetting_1_GameProgress_QuestItem);
    il2cpp_init_method_metadata(&TypeInfo_ListSetting_QuestItem);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddRange);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_QuestContainer);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_TextAsset);
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_QuestItem__get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"QuestList");
    DAT_05705054 = '\x01';
  }
  local_58.genericMethod = (void *)0x0;
  if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
    il2cpp_init_class();
  }
  d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  local_60._dateData = 0;
  System_DateTime___ctor((System_DateTime_o)&local_60,0x7b2,1,1,(MethodInfo *)0x0);
  local_58 = (_union_247328)
             System_DateTime__op_Subtraction
                       (d1,(System_DateTime_o)local_60._dateData,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  currentDay = System_TimeSpan__get_Days((System_TimeSpan_o)&local_58,(MethodInfo *)0x0);
  pGVar10 = (GameProgress_QuestContainer_o *)il2cpp_runtime_glue(TypeInfo_QuestContainer);
  GameProgress_QuestContainer___ctor(pGVar10,method_00);
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_06 = ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar11,"QuestList",0,(MethodInfo *)0x0);
  if (__this_06 != (UnityEngine_Object_o *)0x0) {
    bVar2 = (TypeInfo_TextAsset->_2).naturalAligment;
    if (((__this_06->klass->_2).naturalAligment < bVar2) ||
       ((__this_06->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_TextAsset)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_06);
    }
    pSVar11 = UnityEngine_TextAsset__get_text
                        ((UnityEngine_TextAsset_o *)__this_06,(MethodInfo *)0x0);
    if (pGVar10 != (GameProgress_QuestContainer_o *)0x0) {
      (*(pGVar10->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
                (pGVar10,pSVar11,(pGVar10->klass->vtable)._8_DeserializeFromJsonString.method);
      __this_07 = (Settings_ListSetting_T__o *)il2cpp_runtime_glue(TypeInfo_ListSetting_QuestItem);
      Settings_ListSetting<object>___ctor(__this_07,MethodInfo_ListSetting_1_GameProgress_QuestItem);
      pGVar17 = (__this->fields)._quest;
      if (((pGVar17 != (GameProgress_QuestContainer_o *)0x0) &&
          (pSVar4 = (pGVar17->fields).DailyQuestItems,
          pSVar4 != (Settings_ListSetting_QuestItem__o *)0x0)) &&
         (pSVar5 = (System_Collections_Generic_List_object__o *)(pSVar4->fields)._value,
         pSVar5 != (System_Collections_Generic_List_object__o *)0x0)) {
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar5,MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
        pGVar15 = (GameProgress_QuestHandler_c *)local_48._0_8_;
        pIVar16 = (Il2CppMethodPointer)local_48._8_8_;
        pGVar17 = local_38;
        if (__this_07 == (Settings_ListSetting_T__o *)0x0) {
          while (__this_01.fields._8_8_ = pIVar16,
                __this_01.fields._list = (System_Collections_Generic_List_T__o *)pGVar15,
                __this_01.fields._current = (Il2CppObject *)pGVar17,
                bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff68),
                (char)bVar8 != '\0') {
            if (pGVar17 == (GameProgress_QuestContainer_o *)0x0) goto LAB_0420d6b8;
            if ((Il2CppClass *)pGVar17[2].klass == (Il2CppClass *)0x0) goto LAB_0420d6bd;
            if (*(int *)((long)&(((Il2CppClass *)pGVar17[2].klass)->_1).name + 4) == currentDay) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
        }
        else {
          while (__this_00.fields._8_8_ = pIVar16,
                __this_00.fields._list = (System_Collections_Generic_List_T__o *)pGVar15,
                __this_00.fields._current = (Il2CppObject *)pGVar17,
                bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff68),
                lVar7 = MethodInfo_Void_Add, (char)bVar8 != '\0') {
            if (pGVar17 == (GameProgress_QuestContainer_o *)0x0) {
LAB_0420d6b8:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((Il2CppClass *)pGVar17[2].klass == (Il2CppClass *)0x0) {
LAB_0420d6bd:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if (*(int *)((long)&(((Il2CppClass *)pGVar17[2].klass)->_1).name + 4) == currentDay) {
              pSVar5 = (System_Collections_Generic_List_object__o *)(__this_07->fields)._value;
              if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              piVar1 = &(pSVar5->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar6 = (pSVar5->fields)._items;
              if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              uVar3 = (pSVar5->fields)._size;
              if (uVar3 < (uint)pSVar6->max_length) {
                (pSVar5->fields)._size = uVar3 + 1;
                pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)pGVar17;
                il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar3);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (pSVar5,(Il2CppObject *)pGVar17,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        __this_02.fields._8_8_ = pIVar16;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pGVar15;
        __this_02.fields._current = (Il2CppObject *)pGVar17;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff68);
        if ((__this_07 != (Settings_ListSetting_T__o *)0x0) &&
           (pSVar5 = (System_Collections_Generic_List_object__o *)(__this_07->fields)._value,
           pSVar5 != (System_Collections_Generic_List_object__o *)0x0)) {
          pSVar12 = GameProgress_QuestHandler__CreateQuests
                              (pGVar13,pGVar10,currentDay,1,3 - (pSVar5->fields)._size,in_R9);
          System_Collections_Generic_List<object>__AddRange
                    (pSVar5,(System_Collections_Generic_IEnumerable_T__o *)pSVar12,MethodInfo_Void_AddRange);
          __this_08 = (Settings_ListSetting_T__o *)il2cpp_runtime_glue(TypeInfo_ListSetting_QuestItem);
          Settings_ListSetting<object>___ctor(__this_08,MethodInfo_ListSetting_1_GameProgress_QuestItem);
          pGVar17 = (__this->fields)._quest;
          if ((pGVar17 != (GameProgress_QuestContainer_o *)0x0) &&
             ((pSVar4 = (pGVar17->fields).WeeklyQuestItems,
              pSVar4 != (Settings_ListSetting_QuestItem__o *)0x0 &&
              (pSVar5 = (System_Collections_Generic_List_object__o *)(pSVar4->fields)._value,
              pSVar5 != (System_Collections_Generic_List_object__o *)0x0)))) {
            iVar14 = (int)((ulong)((long)(currentDay + -1) * -0x6db6db6d) >> 0x20) + currentDay + -1
            ;
            iVar14 = (iVar14 >> 2) - (iVar14 >> 0x1f);
            local_50 = __this;
            System_Collections_Generic_List<object>__GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar5,
                       MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
            pGVar15 = (GameProgress_QuestHandler_c *)local_48._0_8_;
            pIVar16 = (Il2CppMethodPointer)local_48._8_8_;
            pGVar17 = local_38;
            if (__this_08 == (Settings_ListSetting_T__o *)0x0) {
              while (__this_04.fields._8_8_ = pIVar16,
                    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pGVar15,
                    __this_04.fields._current = (Il2CppObject *)pGVar17,
                    bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                      (__this_04,(MethodInfo_3185E20 *)&stack0xffffffffffffff68),
                    (char)bVar8 != '\0') {
                if (pGVar17 == (GameProgress_QuestContainer_o *)0x0) goto LAB_0420d6c2;
                if ((Il2CppClass *)pGVar17[2].klass == (Il2CppClass *)0x0) goto LAB_0420d6c7;
                iVar9 = *(int *)((long)&(((Il2CppClass *)pGVar17[2].klass)->_1).name + 4);
                iVar9 = (int)((ulong)((long)(iVar9 + -1) * -0x6db6db6d) >> 0x20) + iVar9 + -1;
                if ((iVar9 >> 2) - (iVar9 >> 0x1f) == iVar14) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
              }
            }
            else {
              while (__this_03.fields._8_8_ = pIVar16,
                    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pGVar15,
                    __this_03.fields._current = (Il2CppObject *)pGVar17,
                    bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                      (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffff68),
                    lVar7 = MethodInfo_Void_Add, (char)bVar8 != '\0') {
                if (pGVar17 == (GameProgress_QuestContainer_o *)0x0) {
LAB_0420d6c2:
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                if ((Il2CppClass *)pGVar17[2].klass == (Il2CppClass *)0x0) {
LAB_0420d6c7:
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                iVar9 = *(int *)((long)&(((Il2CppClass *)pGVar17[2].klass)->_1).name + 4);
                iVar9 = (int)((ulong)((long)(iVar9 + -1) * -0x6db6db6d) >> 0x20) + iVar9 + -1;
                if ((iVar9 >> 2) - (iVar9 >> 0x1f) == iVar14) {
                  pSVar5 = (System_Collections_Generic_List_object__o *)(__this_08->fields)._value;
                  if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  piVar1 = &(pSVar5->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar6 = (pSVar5->fields)._items;
                  if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  uVar3 = (pSVar5->fields)._size;
                  if (uVar3 < (uint)pSVar6->max_length) {
                    (pSVar5->fields)._size = uVar3 + 1;
                    pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)pGVar17;
                    il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar3);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              (pSVar5,(Il2CppObject *)pGVar17,
                               *(MethodInfo_35A7350 **)
                                (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                  }
                }
              }
            }
            __this_05.fields._8_8_ = pIVar16;
            __this_05.fields._list = (System_Collections_Generic_List_T__o *)pGVar15;
            __this_05.fields._current = (Il2CppObject *)pGVar17;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (__this_05,(MethodInfo_3185E10 *)&stack0xffffffffffffff68);
            pGVar13 = local_50;
            if ((__this_08 != (Settings_ListSetting_T__o *)0x0) &&
               (pSVar5 = (System_Collections_Generic_List_object__o *)(__this_08->fields)._value,
               pSVar5 != (System_Collections_Generic_List_object__o *)0x0)) {
              pSVar12 = GameProgress_QuestHandler__CreateQuests
                                  (__this_09,pGVar10,currentDay,0,3 - (pSVar5->fields)._size,in_R9);
              System_Collections_Generic_List<object>__AddRange
                        (pSVar5,(System_Collections_Generic_IEnumerable_T__o *)pSVar12,MethodInfo_Void_AddRange)
              ;
              pGVar10 = (pGVar13->fields)._quest;
              if ((pGVar10 != (GameProgress_QuestContainer_o *)0x0) &&
                 (pSVar4 = (pGVar10->fields).DailyQuestItems,
                 pSVar4 != (Settings_ListSetting_QuestItem__o *)0x0)) {
                (*(pSVar4->klass->vtable)._9_Copy.methodPtr)
                          (pSVar4,__this_07,(pSVar4->klass->vtable)._9_Copy.method);
                pGVar10 = (pGVar13->fields)._quest;
                if ((pGVar10 != (GameProgress_QuestContainer_o *)0x0) &&
                   (pSVar4 = (pGVar10->fields).WeeklyQuestItems,
                   pSVar4 != (Settings_ListSetting_QuestItem__o *)0x0)) {
                  (*(pSVar4->klass->vtable)._9_Copy.methodPtr)
                            (pSVar4,__this_08,(pSVar4->klass->vtable)._9_Copy.method);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.QuestHandler$$CreateQuests
// il2cpp: System_Collections_Generic_List_QuestItem__o* GameProgress_QuestHandler__CreateQuests (GameProgress_QuestHandler_o* __this, GameProgress_QuestContainer_o* defaultQuest, int32_t currentDay, bool daily, int32_t count, const MethodInfo* method);
// 0x420df70

System_Collections_Generic_List_QuestItem__o *
GameProgress_QuestHandler__CreateQuests
          (GameProgress_QuestHandler_o *__this,GameProgress_QuestContainer_o *defaultQuest,
          int32_t currentDay,bool_conflict daily,int32_t count,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_ListSetting_QuestItem__o *pSVar3;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_IntSetting_o *__this_01;
  GameProgress_QuestItem_array *pGVar4;
  long lVar5;
  int32_t index;
  bool_conflict bVar6;
  System_Collections_Generic_List_QuestItem__o *__this_02;
  System_Collections_Generic_HashSet_object__o *__this_03;
  Il2CppObject *pIVar7;
  GameProgress_QuestItem_o *__this_04;
  
  if (DAT_05705055 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_QuestItem);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_QuestItem_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_QuestItem);
    il2cpp_init_method_metadata(&TypeInfo_QuestItem);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_QuestItem__get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05705055 = '\x01';
  }
  if (defaultQuest != (GameProgress_QuestContainer_o *)0x0) {
    if ((char)daily == '\0') {
      pSVar3 = (defaultQuest->fields).WeeklyQuestItems;
    }
    else {
      pSVar3 = (defaultQuest->fields).DailyQuestItems;
    }
    if (pSVar3 != (Settings_ListSetting_QuestItem__o *)0x0) {
      __this_00 = (System_Collections_Generic_List_object__o *)(pSVar3->fields)._value;
      __this_02 = (System_Collections_Generic_List_QuestItem__o *)il2cpp_runtime_glue(TypeInfo_List_QuestItem);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_GameProgress_QuestItem);
      __this_03 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
      System_Collections_Generic_HashSet<object>___ctor(__this_03,MethodInfo_HashSet_1_System_String);
      if (0 < count) {
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0420e589;
        do {
          index = UnityEngine_Random__Range(0,(__this_00->fields)._size,(MethodInfo *)0x0);
          pIVar7 = System_Collections_Generic_List<object>__get_Item(__this_00,index,MethodInfo_QuestItem_get_Item);
          if (__this_03 == (System_Collections_Generic_HashSet_object__o *)0x0) {
            if (pIVar7 != (Il2CppObject *)0x0) {
              (*pIVar7->klass->vtable[0xd].methodPtr)(pIVar7,pIVar7->klass->vtable[0xd].method);
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            goto LAB_0420e589;
          }
          if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0420e589;
          pIVar7 = (Il2CppObject *)
                   (*pIVar7->klass->vtable[0xd].methodPtr)(pIVar7,pIVar7->klass->vtable[0xd].method)
          ;
          bVar6 = System_Collections_Generic_HashSet<object>__Contains
                            (__this_03,pIVar7,MethodInfo_Boolean_Contains);
          if ((char)bVar6 == '\0') {
LAB_0420e450:
            __this_04 = (GameProgress_QuestItem_o *)il2cpp_runtime_glue(TypeInfo_QuestItem);
            GameProgress_QuestItem___ctor(__this_04,(MethodInfo *)0x0);
            pIVar7 = System_Collections_Generic_List<object>__get_Item(__this_00,index,MethodInfo_QuestItem_get_Item)
            ;
            if (__this_04 == (GameProgress_QuestItem_o *)0x0) goto LAB_0420e589;
            (*(__this_04->klass->vtable)._9_Copy.methodPtr)
                      (__this_04,pIVar7,(__this_04->klass->vtable)._9_Copy.method);
            __this_01 = (__this_04->fields).DayCreated;
            if ((__this_01 == (Settings_IntSetting_o *)0x0) ||
               (Settings_TypedSetting<int>__set_Value
                          ((Settings_TypedSetting_int__o *)__this_01,currentDay,MethodInfo_Void_set_Value),
               lVar5 = MethodInfo_Void_Add,
               __this_02 == (System_Collections_Generic_List_QuestItem__o *)0x0)) goto LAB_0420e589;
            piVar1 = &(__this_02->fields)._version;
            *piVar1 = *piVar1 + 1;
            pGVar4 = (__this_02->fields)._items;
            if (pGVar4 == (GameProgress_QuestItem_array *)0x0) goto LAB_0420e589;
            uVar2 = (__this_02->fields)._size;
            if (uVar2 < (uint)pGVar4->max_length) {
              (__this_02->fields)._size = uVar2 + 1;
              pGVar4->m_Items[(int)uVar2] = __this_04;
              il2cpp_runtime_glue(pGVar4->m_Items + (int)uVar2,__this_04);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_02,
                         (Il2CppObject *)__this_04,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pIVar7 = (Il2CppObject *)
                     (*(__this_04->klass->vtable)._13_GetQuestName.methodPtr)
                               (__this_04,(__this_04->klass->vtable)._13_GetQuestName.method);
            System_Collections_Generic_HashSet<object>__Add(__this_03,pIVar7,MethodInfo_Boolean_Add);
          }
          else {
            index = UnityEngine_Random__Range(0,(__this_00->fields)._size,(MethodInfo *)0x0);
            pIVar7 = System_Collections_Generic_List<object>__get_Item(__this_00,index,MethodInfo_QuestItem_get_Item)
            ;
            if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0420e589;
            pIVar7 = (Il2CppObject *)
                     (*pIVar7->klass->vtable[0xd].methodPtr)
                               (pIVar7,pIVar7->klass->vtable[0xd].method);
            bVar6 = System_Collections_Generic_HashSet<object>__Contains
                              (__this_03,pIVar7,MethodInfo_Boolean_Contains);
            if ((char)bVar6 == '\0') goto LAB_0420e450;
            index = UnityEngine_Random__Range(0,(__this_00->fields)._size,(MethodInfo *)0x0);
            pIVar7 = System_Collections_Generic_List<object>__get_Item(__this_00,index,MethodInfo_QuestItem_get_Item)
            ;
            if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0420e589;
            pIVar7 = (Il2CppObject *)
                     (*pIVar7->klass->vtable[0xd].methodPtr)
                               (pIVar7,pIVar7->klass->vtable[0xd].method);
            bVar6 = System_Collections_Generic_HashSet<object>__Contains
                              (__this_03,pIVar7,MethodInfo_Boolean_Contains);
            if ((char)bVar6 == '\0') goto LAB_0420e450;
            index = UnityEngine_Random__Range(0,(__this_00->fields)._size,(MethodInfo *)0x0);
            pIVar7 = System_Collections_Generic_List<object>__get_Item(__this_00,index,MethodInfo_QuestItem_get_Item)
            ;
            if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0420e589;
            pIVar7 = (Il2CppObject *)
                     (*pIVar7->klass->vtable[0xd].methodPtr)
                               (pIVar7,pIVar7->klass->vtable[0xd].method);
            bVar6 = System_Collections_Generic_HashSet<object>__Contains
                              (__this_03,pIVar7,MethodInfo_Boolean_Contains);
            if ((char)bVar6 == '\0') goto LAB_0420e450;
            index = UnityEngine_Random__Range(0,(__this_00->fields)._size,(MethodInfo *)0x0);
            pIVar7 = System_Collections_Generic_List<object>__get_Item(__this_00,index,MethodInfo_QuestItem_get_Item)
            ;
            if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0420e589;
            pIVar7 = (Il2CppObject *)
                     (*pIVar7->klass->vtable[0xd].methodPtr)
                               (pIVar7,pIVar7->klass->vtable[0xd].method);
            bVar6 = System_Collections_Generic_HashSet<object>__Contains
                              (__this_03,pIVar7,MethodInfo_Boolean_Contains);
            if ((char)bVar6 == '\0') goto LAB_0420e450;
            index = UnityEngine_Random__Range(0,(__this_00->fields)._size,(MethodInfo *)0x0);
            pIVar7 = System_Collections_Generic_List<object>__get_Item(__this_00,index,MethodInfo_QuestItem_get_Item)
            ;
            if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0420e589;
            pIVar7 = (Il2CppObject *)
                     (*pIVar7->klass->vtable[0xd].methodPtr)
                               (pIVar7,pIVar7->klass->vtable[0xd].method);
            bVar6 = System_Collections_Generic_HashSet<object>__Contains
                              (__this_03,pIVar7,MethodInfo_Boolean_Contains);
            if ((char)bVar6 == '\0') goto LAB_0420e450;
            index = UnityEngine_Random__Range(0,(__this_00->fields)._size,(MethodInfo *)0x0);
            pIVar7 = System_Collections_Generic_List<object>__get_Item(__this_00,index,MethodInfo_QuestItem_get_Item)
            ;
            if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0420e589;
            pIVar7 = (Il2CppObject *)
                     (*pIVar7->klass->vtable[0xd].methodPtr)
                               (pIVar7,pIVar7->klass->vtable[0xd].method);
            bVar6 = System_Collections_Generic_HashSet<object>__Contains
                              (__this_03,pIVar7,MethodInfo_Boolean_Contains);
            if ((char)bVar6 == '\0') goto LAB_0420e450;
            index = UnityEngine_Random__Range(0,(__this_00->fields)._size,(MethodInfo *)0x0);
            pIVar7 = System_Collections_Generic_List<object>__get_Item(__this_00,index,MethodInfo_QuestItem_get_Item)
            ;
            if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0420e589;
            pIVar7 = (Il2CppObject *)
                     (*pIVar7->klass->vtable[0xd].methodPtr)
                               (pIVar7,pIVar7->klass->vtable[0xd].method);
            bVar6 = System_Collections_Generic_HashSet<object>__Contains
                              (__this_03,pIVar7,MethodInfo_Boolean_Contains);
            if ((char)bVar6 == '\0') goto LAB_0420e450;
            index = UnityEngine_Random__Range(0,(__this_00->fields)._size,(MethodInfo *)0x0);
            pIVar7 = System_Collections_Generic_List<object>__get_Item(__this_00,index,MethodInfo_QuestItem_get_Item)
            ;
            if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0420e589;
            pIVar7 = (Il2CppObject *)
                     (*pIVar7->klass->vtable[0xd].methodPtr)
                               (pIVar7,pIVar7->klass->vtable[0xd].method);
            bVar6 = System_Collections_Generic_HashSet<object>__Contains
                              (__this_03,pIVar7,MethodInfo_Boolean_Contains);
            if ((char)bVar6 == '\0') goto LAB_0420e450;
            index = UnityEngine_Random__Range(0,(__this_00->fields)._size,(MethodInfo *)0x0);
            pIVar7 = System_Collections_Generic_List<object>__get_Item(__this_00,index,MethodInfo_QuestItem_get_Item)
            ;
            if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0420e589;
            pIVar7 = (Il2CppObject *)
                     (*pIVar7->klass->vtable[0xd].methodPtr)
                               (pIVar7,pIVar7->klass->vtable[0xd].method);
            bVar6 = System_Collections_Generic_HashSet<object>__Contains
                              (__this_03,pIVar7,MethodInfo_Boolean_Contains);
            if ((char)bVar6 == '\0') goto LAB_0420e450;
          }
          count = count + -1;
        } while (count != 0);
      }
      return __this_02;
    }
  }
LAB_0420e589:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.QuestHandler$$CacheActiveQuests
// il2cpp: void GameProgress_QuestHandler__CacheActiveQuests (GameProgress_QuestHandler_o* __this, const MethodInfo* method);
// 0x420d870

void GameProgress_QuestHandler__CacheActiveQuests
               (GameProgress_QuestHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  GameProgress_QuestContainer_o *pGVar1;
  Settings_ListSetting_QuestItem__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  GameProgress_QuestItem_o *pGVar9;
  undefined1 local_48 [16];
  GameProgress_QuestItem_o *local_38;
  
  if (DAT_05705056 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_QuestItem_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_QuestItem__get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05705056 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields)._activeQuests;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(__this_00,MethodInfo_Void_Clear);
    pGVar1 = (__this->fields)._quest;
    if (((pGVar1 != (GameProgress_QuestContainer_o *)0x0) &&
        (pSVar2 = (pGVar1->fields).DailyQuestItems,
        pSVar2 != (Settings_ListSetting_QuestItem__o *)0x0)) &&
       (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
       pSVar3 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar3,MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
      pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIVar8 = (Il2CppType *)local_48._8_8_;
      pGVar9 = local_38;
      while( true ) {
        __this_01.fields._8_8_ = pIVar8;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
        __this_01.fields._current = (Il2CppObject *)pGVar9;
        bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        if ((char)bVar6 == '\0') break;
        if (pGVar9 == (GameProgress_QuestItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar4 = (pGVar9->fields).Progress;
        if (pSVar4 == (Settings_IntSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar5 = (pGVar9->fields).Amount;
        if (pSVar5 == (Settings_IntSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((pSVar4->fields)._value < (pSVar5->fields)._value) {
          GameProgress_QuestHandler__AddActiveQuest(__this,pGVar9,method_00);
        }
      }
      __this_02.fields._8_8_ = pIVar8;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
      __this_02.fields._current = (Il2CppObject *)pGVar9;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      pGVar1 = (__this->fields)._quest;
      if (((pGVar1 != (GameProgress_QuestContainer_o *)0x0) &&
          (pSVar2 = (pGVar1->fields).WeeklyQuestItems,
          pSVar2 != (Settings_ListSetting_QuestItem__o *)0x0)) &&
         (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
         pSVar3 != (System_Collections_Generic_List_object__o *)0x0)) {
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar3,MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
        pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
        pIVar8 = (Il2CppType *)local_48._8_8_;
        pGVar9 = local_38;
        while( true ) {
          __this_03.fields._8_8_ = pIVar8;
          __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
          __this_03.fields._current = (Il2CppObject *)pGVar9;
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
          if ((char)bVar6 == '\0') {
            __this_04.fields._8_8_ = pIVar8;
            __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
            __this_04.fields._current = (Il2CppObject *)pGVar9;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
            return;
          }
          if (pGVar9 == (GameProgress_QuestItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar4 = (pGVar9->fields).Progress;
          if (pSVar4 == (Settings_IntSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar5 = (pGVar9->fields).Amount;
          if (pSVar5 == (Settings_IntSetting_o *)0x0) break;
          if ((pSVar4->fields)._value < (pSVar5->fields)._value) {
            GameProgress_QuestHandler__AddActiveQuest(__this,pGVar9,method_01);
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.QuestHandler$$AddActiveQuest
// il2cpp: void GameProgress_QuestHandler__AddActiveQuest (GameProgress_QuestHandler_o* __this, GameProgress_QuestItem_o* item, const MethodInfo* method);
// 0x4207eb0

void GameProgress_QuestHandler__AddActiveQuest
               (GameProgress_QuestHandler_o *__this,GameProgress_QuestItem_o *item,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_StringSetting_o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_String_o *key;
  System_Object_array *pSVar5;
  long lVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_object__o *pSVar8;
  
  if (DAT_05705057 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_QuestItem__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_QuestItem);
    il2cpp_init_method_metadata(&TypeInfo_List_QuestItem);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05705057 = '\x01';
  }
  if (((item != (GameProgress_QuestItem_o *)0x0) &&
      (pSVar3 = (item->fields).Category, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._activeQuests,
     pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    key = (pSVar3->fields)._value;
    bVar7 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar4,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar7 == '\0') {
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._activeQuests;
      pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_QuestItem);
      System_Collections_Generic_List<object>___ctor(pSVar8,MethodInfo_List_1_GameProgress_QuestItem);
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_04208030;
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar4,(Il2CppObject *)key,(Il2CppObject *)pSVar8,MethodInfo_Void_Add);
    }
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._activeQuests;
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar8 = (System_Collections_Generic_List_object__o *)
               System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar4,(Il2CppObject *)key,MethodInfo_List_1_GameProgress_QuestItem__get_Item);
      lVar6 = MethodInfo_Void_Add;
      if (pSVar8 != (System_Collections_Generic_List_object__o *)0x0) {
        piVar1 = &(pSVar8->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (pSVar8->fields)._items;
        if (pSVar5 != (System_Object_array *)0x0) {
          uVar2 = (pSVar8->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (pSVar8->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)item;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,item);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar8,(Il2CppObject *)item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
LAB_04208030:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.QuestHandler$$CheckKillConditions
// il2cpp: bool GameProgress_QuestHandler__CheckKillConditions (GameProgress_QuestHandler_o* __this, System_Collections_Generic_List_StringSetting__o* conditions, int32_t weapon, const MethodInfo* method);
// 0x420e5b0

bool_conflict
GameProgress_QuestHandler__CheckKillConditions
          (GameProgress_QuestHandler_o *__this,
          System_Collections_Generic_List_StringSetting__o *conditions,int32_t weapon,
          MethodInfo *method)

{
  System_String_o *key;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar1;
  int32_t iVar2;
  System_String_array *pSVar3;
  undefined8 extraout_RAX;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__c *pSVar5;
  Il2CppType *pIVar6;
  Il2CppObject *pIVar7;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (DAT_05705058 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_KillWeapon_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_StringSetting_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
    il2cpp_init_method_metadata(&TypeInfo_QuestHandler);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Weapon");
    DAT_05705058 = '\x01';
  }
  if (conditions == (System_Collections_Generic_List_StringSetting__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
             (System_Collections_Generic_List_object__o *)conditions,MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
  pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
  pIVar6 = (Il2CppType *)auStack_48._8_8_;
  pIVar7 = pIStack_38;
  do {
    do {
      __this_00.fields._8_8_ = pIVar6;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
      __this_00.fields._current = pIVar7;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
      if ((char)bVar1 == '\0') {
        iVar4 = 5;
        goto LAB_0420e74c;
      }
      if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (pIVar7[1].monitor == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar3 = System_String__Split(pIVar7[1].monitor,0x3a,0,(MethodInfo *)0x0);
      if (pSVar3 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar4 = (int)pSVar3->max_length;
      if (iVar4 == 1) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      key = pSVar3->m_Items[1];
      bVar1 = System_String__op_Equality(pSVar3->m_Items[0],"Weapon",(MethodInfo *)0x0);
    } while ((char)bVar1 == '\0');
    if (*(int *)(TypeInfo_QuestHandler + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
        **(undefined8 **)(TypeInfo_QuestHandler + 0xb8) ==
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar2 = System_Collections_Generic_Dictionary<object__Int32Enum>__get_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       **(undefined8 **)(TypeInfo_QuestHandler + 0xb8),(Il2CppObject *)key,MethodInfo_KillWeapon_get_Item);
  } while (iVar2 == weapon);
  iVar4 = 4;
LAB_0420e74c:
  __this_01.fields._8_8_ = pIVar6;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
  __this_01.fields._current = pIVar7;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
  return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),iVar4 != 4);
}


// GameProgress.QuestHandler$$CheckDamageConditions
// il2cpp: bool GameProgress_QuestHandler__CheckDamageConditions (GameProgress_QuestHandler_o* __this, System_Collections_Generic_List_StringSetting__o* conditions, int32_t weapon, int32_t damage, const MethodInfo* method);
// 0x420e880

bool_conflict
GameProgress_QuestHandler__CheckDamageConditions
          (GameProgress_QuestHandler_o *__this,
          System_Collections_Generic_List_StringSetting__o *conditions,int32_t weapon,int32_t damage
          ,MethodInfo *method)

{
  System_String_o *a;
  System_String_o *s;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar1;
  int32_t iVar2;
  System_String_array *pSVar3;
  undefined8 extraout_RAX;
  int iVar4;
  undefined8 in_stack_ffffffffffffff88;
  System_Collections_Generic_List_Enumerator_T__c *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (DAT_05705059 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_KillWeapon_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_StringSetting_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
    il2cpp_init_method_metadata(&TypeInfo_QuestHandler);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Weapon");
    il2cpp_init_method_metadata(&"Damage");
    DAT_05705059 = '\x01';
  }
  if (conditions == (System_Collections_Generic_List_StringSetting__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&SStack_48,(System_Collections_Generic_List_object__o *)conditions,MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
  pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_48.fields._list;
  do {
    do {
      __this_00.fields._index = damage;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
      __this_00.fields._version = weapon;
      __this_00.fields._current = (Il2CppObject *)pSVar5;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
      if ((char)bVar1 == '\0') {
        iVar4 = 6;
        goto LAB_0420ea75;
      }
      if (SStack_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (SStack_48.fields._current[1].monitor == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar3 = System_String__Split(SStack_48.fields._current[1].monitor,0x3a,0,(MethodInfo *)0x0);
      if (pSVar3 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar4 = (int)pSVar3->max_length;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (iVar4 == 1) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      a = pSVar3->m_Items[0];
      s = pSVar3->m_Items[1];
      bVar1 = System_String__op_Equality(a,"Weapon",(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        if (*(int *)(TypeInfo_QuestHandler + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
            **(undefined8 **)(TypeInfo_QuestHandler + 0xb8) ==
            (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        iVar2 = System_Collections_Generic_Dictionary<object__Int32Enum>__get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                           **(undefined8 **)(TypeInfo_QuestHandler + 0xb8),(Il2CppObject *)s,MethodInfo_KillWeapon_get_Item);
        if (iVar2 != weapon) goto LAB_0420ea69;
      }
      bVar1 = System_String__op_Equality(a,"Damage",(MethodInfo *)0x0);
    } while ((char)bVar1 == '\0');
    iVar2 = System_Int32__Parse(s,(MethodInfo *)0x0);
  } while (iVar2 <= damage);
LAB_0420ea69:
  iVar4 = 5;
LAB_0420ea75:
  __this_01.fields._index = damage;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
  __this_01.fields._version = weapon;
  __this_01.fields._current = (Il2CppObject *)pSVar5;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
  return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),iVar4 != 5);
}


// GameProgress.QuestHandler$$CheckSpeedConditions
// il2cpp: bool GameProgress_QuestHandler__CheckSpeedConditions (GameProgress_QuestHandler_o* __this, System_Collections_Generic_List_StringSetting__o* conditions, float speed, const MethodInfo* method);
// 0x420ebb0

bool_conflict
GameProgress_QuestHandler__CheckSpeedConditions
          (GameProgress_QuestHandler_o *__this,
          System_Collections_Generic_List_StringSetting__o *conditions,float speed,
          MethodInfo *method)

{
  System_String_o *s;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar1;
  int32_t iVar2;
  System_String_array *pSVar3;
  undefined8 extraout_RAX;
  int iVar4;
  undefined1 in_stack_ffffffffffffff98 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o SStack_40;
  
  if (DAT_0570505a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_StringSetting_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Speed");
    DAT_0570505a = '\x01';
  }
  if (conditions == (System_Collections_Generic_List_StringSetting__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&SStack_40,(System_Collections_Generic_List_object__o *)conditions,MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
  pSVar5 = SStack_40.fields._list;
  do {
    do {
      __this_00.fields._version = (int32_t)speed;
      __this_00.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98._0_8_;
      __this_00.fields._index = in_stack_ffffffffffffff98._8_4_;
      __this_00.fields._current = (Il2CppObject *)pSVar5;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
      if ((char)bVar1 == '\0') {
        iVar4 = 5;
        goto LAB_0420ed04;
      }
      if ((Il2CppType *)SStack_40.fields._current == (Il2CppType *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(System_String_o **)&((Il2CppType *)(SStack_40.fields._current + 1))->bits ==
          (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar3 = System_String__Split
                         (*(System_String_o **)
                           &((Il2CppType *)(SStack_40.fields._current + 1))->bits,0x3a,0,
                          (MethodInfo *)0x0);
      if (pSVar3 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar4 = (int)pSVar3->max_length;
      if (iVar4 == 1) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      s = pSVar3->m_Items[1];
      bVar1 = System_String__op_Equality(pSVar3->m_Items[0],"Speed",(MethodInfo *)0x0);
    } while ((char)bVar1 == '\0');
    iVar2 = System_Int32__Parse(s,(MethodInfo *)0x0);
  } while ((float)iVar2 <= speed);
  iVar4 = 4;
LAB_0420ed04:
  __this_01.fields._version = (int32_t)speed;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98._0_8_;
  __this_01.fields._index = in_stack_ffffffffffffff98._8_4_;
  __this_01.fields._current = (Il2CppObject *)pSVar5;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
  return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),iVar4 != 4);
}


// GameProgress.QuestHandler$$RegisterTitanKill
// il2cpp: void GameProgress_QuestHandler__RegisterTitanKill (GameProgress_QuestHandler_o* __this, Characters_BasicTitan_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x420ee20

void GameProgress_QuestHandler__RegisterTitanKill(void)

{
  long lVar1;
  System_String_o *a;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  char cVar2;
  bool_conflict bVar3;
  System_Collections_Generic_List_object__o *__this_01;
  long *in_RDI;
  ulong uVar4;
  System_Collections_Generic_List_Enumerator_T__c *pSVar5;
  Il2CppType *pIVar6;
  GameProgress_QuestItem_o *__this_02;
  GameProgress_QuestItem_o *pGVar7;
  undefined1 auStack_48 [16];
  GameProgress_QuestItem_o *pGStack_38;
  
  if (DAT_0570505b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_QuestItem__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_QuestItem_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    il2cpp_init_method_metadata(&"KillTitan");
    DAT_0570505b = '\x01';
  }
  lVar1 = in_RDI[4];
  if (lVar1 != 0) {
    if ((int)*(ulong *)(lVar1 + 0x18) < 1) {
      return;
    }
    uVar4 = 0;
    if ((*(ulong *)(lVar1 + 0x18) & 0xffffffff) != 0) {
      do {
        if ((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3] ==
            (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0420f0a1;
        a = *(System_String_o **)(lVar1 + 0x20 + uVar4 * 8);
        bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                          ((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3],
                           (Il2CppObject *)a,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar3 != '\0') {
          if (((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3] ==
               (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
             (__this_01 = (System_Collections_Generic_List_object__o *)
                          System_Collections_Generic_Dictionary<object__object>__get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)
                                     in_RDI[3],(Il2CppObject *)a,MethodInfo_List_1_GameProgress_QuestItem__get_Item),
             __this_01 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_0420f0a1;
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,__this_01,
                     MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
          pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
          pIVar6 = (Il2CppType *)auStack_48._8_8_;
          pGVar7 = pGStack_38;
          while (__this_02 = pGVar7, __this_00.fields._8_8_ = pIVar6,
                __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar5,
                __this_00.fields._current = (Il2CppObject *)__this_02,
                bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
                (char)bVar3 != '\0') {
            if (__this_02 == (GameProgress_QuestItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((__this_02->fields).Conditions == (Settings_ListSetting_StringSetting__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pGVar7 = __this_02;
            cVar2 = (**(code **)(*in_RDI + 0x1c8))();
            if ((cVar2 != '\0') &&
               (bVar3 = System_String__op_Equality(a,"KillTitan",(MethodInfo *)0x0),
               (char)bVar3 != '\0')) {
              GameProgress_QuestItem__AddProgress(__this_02,1,(MethodInfo *)0x0);
            }
          }
          __this.fields._8_8_ = pIVar6;
          __this.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
          __this.fields._current = (Il2CppObject *)__this_02;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
        }
        uVar4 = uVar4 + 1;
        if ((long)(int)*(uint *)(lVar1 + 0x18) <= (long)uVar4) {
          return;
        }
      } while (uVar4 < *(uint *)(lVar1 + 0x18));
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0420f0a1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.QuestHandler$$RegisterHumanKill
// il2cpp: void GameProgress_QuestHandler__RegisterHumanKill (GameProgress_QuestHandler_o* __this, Characters_Human_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x420f0f0

void GameProgress_QuestHandler__RegisterHumanKill(void)

{
  long lVar1;
  System_String_o *a;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  char cVar2;
  bool_conflict bVar3;
  System_Collections_Generic_List_object__o *__this_01;
  long *in_RDI;
  ulong uVar4;
  System_Collections_Generic_List_Enumerator_T__c *pSVar5;
  Il2CppType *pIVar6;
  GameProgress_QuestItem_o *__this_02;
  GameProgress_QuestItem_o *pGVar7;
  undefined1 auStack_48 [16];
  GameProgress_QuestItem_o *pGStack_38;
  
  if (DAT_0570505c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_QuestItem__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_QuestItem_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    il2cpp_init_method_metadata(&"KillHuman");
    DAT_0570505c = '\x01';
  }
  lVar1 = in_RDI[5];
  if (lVar1 != 0) {
    if ((int)*(ulong *)(lVar1 + 0x18) < 1) {
      return;
    }
    uVar4 = 0;
    if ((*(ulong *)(lVar1 + 0x18) & 0xffffffff) != 0) {
      do {
        if ((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3] ==
            (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0420f371;
        a = *(System_String_o **)(lVar1 + 0x20 + uVar4 * 8);
        bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                          ((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3],
                           (Il2CppObject *)a,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar3 != '\0') {
          if (((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3] ==
               (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
             (__this_01 = (System_Collections_Generic_List_object__o *)
                          System_Collections_Generic_Dictionary<object__object>__get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)
                                     in_RDI[3],(Il2CppObject *)a,MethodInfo_List_1_GameProgress_QuestItem__get_Item),
             __this_01 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_0420f371;
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,__this_01,
                     MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
          pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
          pIVar6 = (Il2CppType *)auStack_48._8_8_;
          pGVar7 = pGStack_38;
          while (__this_02 = pGVar7, __this_00.fields._8_8_ = pIVar6,
                __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar5,
                __this_00.fields._current = (Il2CppObject *)__this_02,
                bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
                (char)bVar3 != '\0') {
            if (__this_02 == (GameProgress_QuestItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((__this_02->fields).Conditions == (Settings_ListSetting_StringSetting__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pGVar7 = __this_02;
            cVar2 = (**(code **)(*in_RDI + 0x1c8))();
            if ((cVar2 != '\0') &&
               (bVar3 = System_String__op_Equality(a,"KillHuman",(MethodInfo *)0x0),
               (char)bVar3 != '\0')) {
              GameProgress_QuestItem__AddProgress(__this_02,1,(MethodInfo *)0x0);
            }
          }
          __this.fields._8_8_ = pIVar6;
          __this.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
          __this.fields._current = (Il2CppObject *)__this_02;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
        }
        uVar4 = uVar4 + 1;
        if ((long)(int)*(uint *)(lVar1 + 0x18) <= (long)uVar4) {
          return;
        }
      } while (uVar4 < *(uint *)(lVar1 + 0x18));
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0420f371:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.QuestHandler$$RegisterDamage
// il2cpp: void GameProgress_QuestHandler__RegisterDamage (GameProgress_QuestHandler_o* __this, UnityEngine_GameObject_o* victim, GameProgress_KillMethod_o method, int32_t damage, const MethodInfo* method);
// 0x420f3c0

void GameProgress_QuestHandler__RegisterDamage(void)

{
  long lVar1;
  System_String_o *a;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  char cVar2;
  bool_conflict bVar3;
  System_Collections_Generic_List_object__o *__this_01;
  long *in_RDI;
  int32_t in_R8D;
  ulong uVar4;
  System_Collections_Generic_List_Enumerator_T__c *pSVar5;
  Il2CppType *pIVar6;
  GameProgress_QuestItem_o *__this_02;
  GameProgress_QuestItem_o *pGVar7;
  undefined1 auStack_48 [16];
  GameProgress_QuestItem_o *pGStack_38;
  
  if (DAT_0570505d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_QuestItem__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_QuestItem_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    il2cpp_init_method_metadata(&"DealDamage");
    il2cpp_init_method_metadata(&"HitDamage");
    DAT_0570505d = '\x01';
  }
  lVar1 = in_RDI[6];
  if (lVar1 != 0) {
    if ((int)*(ulong *)(lVar1 + 0x18) < 1) {
      return;
    }
    uVar4 = 0;
    if ((*(ulong *)(lVar1 + 0x18) & 0xffffffff) != 0) {
      do {
        if ((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3] ==
            (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0420f6aa;
        a = *(System_String_o **)(lVar1 + 0x20 + uVar4 * 8);
        bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                          ((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3],
                           (Il2CppObject *)a,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar3 != '\0') {
          if (((System_Collections_Generic_Dictionary_object__object__o *)in_RDI[3] ==
               (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
             (__this_01 = (System_Collections_Generic_List_object__o *)
                          System_Collections_Generic_Dictionary<object__object>__get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)
                                     in_RDI[3],(Il2CppObject *)a,MethodInfo_List_1_GameProgress_QuestItem__get_Item),
             __this_01 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_0420f6aa;
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,__this_01,
                     MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
          pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
          pIVar6 = (Il2CppType *)auStack_48._8_8_;
          pGVar7 = pGStack_38;
          while (__this_02 = pGVar7, __this_00.fields._8_8_ = pIVar6,
                __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar5,
                __this_00.fields._current = (Il2CppObject *)__this_02,
                bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
                (char)bVar3 != '\0') {
            if (__this_02 == (GameProgress_QuestItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((__this_02->fields).Conditions == (Settings_ListSetting_StringSetting__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pGVar7 = __this_02;
            cVar2 = (**(code **)(*in_RDI + 0x1d8))();
            if (cVar2 != '\0') {
              bVar3 = System_String__op_Equality(a,"HitDamage",(MethodInfo *)0x0);
              if ((char)bVar3 == '\0') {
                bVar3 = System_String__op_Equality(a,"DealDamage",(MethodInfo *)0x0);
                if ((char)bVar3 != '\0') {
                  GameProgress_QuestItem__AddProgress(__this_02,in_R8D,(MethodInfo *)0x0);
                }
              }
              else {
                GameProgress_QuestItem__AddProgress(__this_02,1,(MethodInfo *)0x0);
              }
            }
          }
          __this.fields._8_8_ = pIVar6;
          __this.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
          __this.fields._current = (Il2CppObject *)__this_02;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
        }
        uVar4 = uVar4 + 1;
        if ((long)(int)*(uint *)(lVar1 + 0x18) <= (long)uVar4) {
          return;
        }
      } while (uVar4 < *(uint *)(lVar1 + 0x18));
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0420f6aa:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.QuestHandler$$RegisterSpeed
// il2cpp: void GameProgress_QuestHandler__RegisterSpeed (GameProgress_QuestHandler_o* __this, float speed, const MethodInfo* method);
// 0x420f6f0

void GameProgress_QuestHandler__RegisterSpeed
               (GameProgress_QuestHandler_o *__this,float speed,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_o *a;
  Settings_ListSetting_StringSetting__o *pSVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  Il2CppObject *__this_02;
  char cVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_object__o *__this_03;
  ulong uVar7;
  undefined1 in_stack_ffffffffffffff88 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (DAT_0570505e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_QuestItem__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_QuestItem_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    il2cpp_init_method_metadata(&"ReachSpeed");
    DAT_0570505e = '\x01';
  }
  pSVar2 = (__this->fields).SpeedCategories;
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length < 1) {
      return;
    }
    uVar7 = 0;
    if ((pSVar2->max_length & 0xffffffff) != 0) {
      do {
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._activeQuests;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_0420f97e;
        a = pSVar2->m_Items[uVar7];
        bVar6 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                          (pSVar3,(Il2CppObject *)a,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar6 != '\0') {
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._activeQuests;
          if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
             (__this_03 = (System_Collections_Generic_List_object__o *)
                          System_Collections_Generic_Dictionary<object__object>__get_Item
                                    (pSVar3,(Il2CppObject *)a,MethodInfo_List_1_GameProgress_QuestItem__get_Item),
             __this_03 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_0420f97e;
          System_Collections_Generic_List<object>__GetEnumerator(&SStack_48,__this_03,MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
          __this_02 = SStack_48.fields._current;
          pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_48.fields._list;
          while (__this_01.fields._version = (int32_t)speed,
                __this_01.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_,
                __this_01.fields._index = in_stack_ffffffffffffff88._8_4_,
                __this_01.fields._current = (Il2CppObject *)pSVar8,
                bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
                (char)bVar6 != '\0') {
            if ((GameProgress_QuestItem_o *)__this_02 == (GameProgress_QuestItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar4 = ((GameProgress_QuestItem_Fields *)((long)__this_02 + 0x10))->Conditions;
            if (pSVar4 == (Settings_ListSetting_StringSetting__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            cVar5 = (*(__this->klass->vtable)._11_CheckSpeedConditions.methodPtr)
                              (speed,__this,(pSVar4->fields)._value,
                               (__this->klass->vtable)._11_CheckSpeedConditions.method);
            if ((cVar5 != '\0') &&
               (bVar6 = System_String__op_Equality(a,"ReachSpeed",(MethodInfo *)0x0),
               (char)bVar6 != '\0')) {
              GameProgress_QuestItem__AddProgress
                        ((GameProgress_QuestItem_o *)__this_02,1,(MethodInfo *)0x0);
            }
          }
          __this_00.fields._version = (int32_t)speed;
          __this_00.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
          __this_00.fields._index = in_stack_ffffffffffffff88._8_4_;
          __this_00.fields._current = (Il2CppObject *)pSVar8;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_00,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
        }
        uVar7 = uVar7 + 1;
        uVar1 = (uint)pSVar2->max_length;
        if ((long)(int)uVar1 <= (long)uVar7) {
          return;
        }
      } while (uVar7 < uVar1);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0420f97e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.QuestHandler$$RegisterInteraction
// il2cpp: void GameProgress_QuestHandler__RegisterInteraction (GameProgress_QuestHandler_o* __this, UnityEngine_GameObject_o* interact, int32_t interactionType, const MethodInfo* method);
// 0x420f9c0

void GameProgress_QuestHandler__RegisterInteraction
               (GameProgress_QuestHandler_o *__this,UnityEngine_GameObject_o *interact,
               int32_t interactionType,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_o *a;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  Il2CppObject *__this_02;
  bool_conflict bVar4;
  System_Collections_Generic_List_object__o *__this_03;
  undefined4 in_register_00000014;
  ulong uVar5;
  undefined8 in_stack_ffffffffffffff88;
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (DAT_0570505f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey,interact,CONCAT44(in_register_00000014,interactionType));
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameProgress_QuestItem__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_QuestItem_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
    il2cpp_init_method_metadata(&"CarryHuman");
    il2cpp_init_method_metadata(&"ShareGas");
    DAT_0570505f = '\x01';
  }
  pSVar2 = (__this->fields).InteractionCategories;
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length < 1) {
      return;
    }
    uVar5 = 0;
    if ((pSVar2->max_length & 0xffffffff) != 0) {
      do {
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._activeQuests;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_0420fc6b;
        a = pSVar2->m_Items[uVar5];
        bVar4 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                          (pSVar3,(Il2CppObject *)a,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar4 != '\0') {
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._activeQuests;
          if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
             (__this_03 = (System_Collections_Generic_List_object__o *)
                          System_Collections_Generic_Dictionary<object__object>__get_Item
                                    (pSVar3,(Il2CppObject *)a,MethodInfo_List_1_GameProgress_QuestItem__get_Item),
             __this_03 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_0420fc6b;
          System_Collections_Generic_List<object>__GetEnumerator(&SStack_48,__this_03,MethodInfo_List_1_T__Enumerator_GameProgress_QuestItem__Get);
          __this_02 = SStack_48.fields._current;
          pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_48.fields._list;
          while (__this_01.fields._8_8_ = __this,
                __this_01.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88,
                __this_01.fields._current = (Il2CppObject *)pSVar6,
                bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
                (char)bVar4 != '\0') {
            bVar4 = System_String__op_Equality(a,"ShareGas",(MethodInfo *)0x0);
            if ((char)bVar4 == '\0') {
              bVar4 = System_String__op_Equality(a,"CarryHuman",(MethodInfo *)0x0);
              if ((char)bVar4 != '\0') {
                if ((GameProgress_QuestItem_o *)__this_02 == (GameProgress_QuestItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                GameProgress_QuestItem__AddProgress
                          ((GameProgress_QuestItem_o *)__this_02,1,(MethodInfo *)0x0);
              }
            }
            else {
              if ((GameProgress_QuestItem_o *)__this_02 == (GameProgress_QuestItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              GameProgress_QuestItem__AddProgress
                        ((GameProgress_QuestItem_o *)__this_02,1,(MethodInfo *)0x0);
            }
          }
          __this_00.fields._8_8_ = __this;
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88
          ;
          __this_00.fields._current = (Il2CppObject *)pSVar6;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_00,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
        }
        uVar5 = uVar5 + 1;
        uVar1 = (uint)pSVar2->max_length;
        if ((long)(int)uVar1 <= (long)uVar5) {
          return;
        }
      } while (uVar5 < uVar1);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0420fc6b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.QuestHandler$$.cctor
// il2cpp: void GameProgress_QuestHandler___cctor (const MethodInfo* method);
// 0x420fcb0

void GameProgress_QuestHandler___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__T__o *pSVar1;
  
  if (DAT_05705060 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_QuestHandler);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_GameProgress_KillWeap);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05705060 = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = Utility_Util__EnumToDict<Int32Enum>(MethodInfo_Dictionary_2_System_String_GameProgress_KillWeap);
  **(undefined8 **)(TypeInfo_QuestHandler + 0xb8) = pSVar1;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_QuestHandler + 0xb8),pSVar1);
  return;
}


