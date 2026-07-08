// Type: Weather.WeatherScheduleRunner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Weather/WeatherScheduleRunner.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Weather/WeatherScheduleRunner.cs  [CHANGED since prior version]
// --------------------------------

// Weather.WeatherScheduleRunner$$.ctor
// il2cpp: void Weather_WeatherScheduleRunner___ctor (Weather_WeatherScheduleRunner_o* __this, Weather_WeatherManager_o* manager, const MethodInfo* method);
// 0x3d81db0

void Weather_WeatherScheduleRunner___ctor
               (Weather_WeatherScheduleRunner_o *__this,Weather_WeatherManager_o *manager,
               MethodInfo *method)

{
  System_Collections_Generic_LinkedList_int__o *__this_00;
  System_Collections_Generic_Dictionary_object__int__o *__this_01;
  System_Collections_Generic_Dictionary_int__int__o *pSVar1;
  Weather_WeatherSchedule_o *__this_02;
  System_Collections_Generic_List_WeatherEvent__o *__this_03;
  
  if (DAT_0570267b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__int);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__int);
    il2cpp_init_method_metadata(&MethodInfo_LinkedList_1_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_LinkedList_int);
    il2cpp_init_method_metadata(&TypeInfo_WeatherSchedule);
    DAT_0570267b = '\x01';
  }
  __this_00 = (System_Collections_Generic_LinkedList_int__o *)il2cpp_runtime_glue(TypeInfo_LinkedList_int);
  System_Collections_Generic_LinkedList<int>___ctor(__this_00,MethodInfo_LinkedList_1_System_Int32);
  (__this->fields)._callerStack = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._callerStack,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_object__int__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__int);
  System_Collections_Generic_Dictionary<object__int>___ctor(__this_01,MethodInfo_Dictionary_2_System_String_System_Int32);
  (__this->fields)._scheduleLabels =
       (System_Collections_Generic_Dictionary_string__int__o *)__this_01;
  il2cpp_runtime_glue(&(__this->fields)._scheduleLabels,__this_01);
  pSVar1 = (System_Collections_Generic_Dictionary_int__int__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_int__int);
  System_Collections_Generic_Dictionary<int__int>___ctor(pSVar1,MethodInfo_Dictionary_2_System_Int32_System_Int32);
  (__this->fields)._repeatStartLines = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._repeatStartLines,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_int__int__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_int__int);
  System_Collections_Generic_Dictionary<int__int>___ctor(pSVar1,MethodInfo_Dictionary_2_System_Int32_System_Int32);
  (__this->fields)._repeatCurrentCounts = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._repeatCurrentCounts,pSVar1);
  __this_02 = (Weather_WeatherSchedule_o *)il2cpp_runtime_glue(TypeInfo_WeatherSchedule);
  if (DAT_0570266f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_Weather_WeatherEvent);
    il2cpp_init_method_metadata(&TypeInfo_List_WeatherEvent);
    DAT_0570266f = '\x01';
  }
  __this_03 = (System_Collections_Generic_List_WeatherEvent__o *)il2cpp_runtime_glue(TypeInfo_List_WeatherEvent);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_Weather_WeatherEvent);
  (__this_02->fields).Events = __this_03;
  il2cpp_runtime_glue(&__this_02->fields);
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  (__this->fields).Schedule = __this_02;
  il2cpp_runtime_glue(&(__this->fields).Schedule);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._manager = manager;
  il2cpp_runtime_glue(&(__this->fields)._manager,manager);
  return;
}


// Weather.WeatherScheduleRunner$$ProcessSchedule
// il2cpp: void Weather_WeatherScheduleRunner__ProcessSchedule (Weather_WeatherScheduleRunner_o* __this, const MethodInfo* method);
// 0x3d81fa0

void Weather_WeatherScheduleRunner__ProcessSchedule
               (Weather_WeatherScheduleRunner_o *__this,MethodInfo *method)

{
  int iVar1;
  Weather_WeatherSchedule_o *pWVar2;
  System_Collections_Generic_Dictionary_object__int__o *pSVar3;
  System_Collections_Generic_Dictionary_int__int__o *pSVar4;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  Weather_WeatherEvent_o *pWVar7;
  int iVar8;
  int index;
  System_Collections_Generic_List_WeatherEvent__o *pSVar9;
  
  if (DAT_0570267c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Void_Insert);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_WeatherEvent_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_WeatherEvent);
    DAT_0570267c = '\x01';
  }
  pWVar2 = (__this->fields).Schedule;
  if (pWVar2 != (Weather_WeatherSchedule_o *)0x0) {
    iVar8 = 0;
    pSVar9 = (pWVar2->fields).Events;
    if (pSVar9 != (System_Collections_Generic_List_WeatherEvent__o *)0x0) {
      do {
        if ((pSVar9->fields)._size + -1 <= iVar8) {
          iVar8 = -1;
          index = 0;
          goto LAB_03d82130;
        }
        pIVar6 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar9,iVar8,MethodInfo_WeatherEvent_get_Item);
        if (pIVar6 == (Il2CppObject *)0x0) break;
        if (*(int *)&pIVar6[1].klass == 2) {
          pWVar2 = (__this->fields).Schedule;
          if (((pWVar2 == (Weather_WeatherSchedule_o *)0x0) ||
              (pSVar9 = (pWVar2->fields).Events,
              pSVar9 == (System_Collections_Generic_List_WeatherEvent__o *)0x0)) ||
             (pIVar6 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar9,iVar8,
                                  MethodInfo_WeatherEvent_get_Item), pIVar6 == (Il2CppObject *)0x0)) break;
          *(undefined4 *)&pIVar6[1].klass = 3;
          pWVar7 = (Weather_WeatherEvent_o *)il2cpp_runtime_glue(TypeInfo_WeatherEvent);
          Weather_WeatherEvent___ctor(pWVar7,(MethodInfo *)0x0);
          if (pWVar7 == (Weather_WeatherEvent_o *)0x0) break;
          (pWVar7->fields).Action = 4;
          pWVar2 = (__this->fields).Schedule;
          if ((pWVar2 == (Weather_WeatherSchedule_o *)0x0) ||
             (pSVar9 = (pWVar2->fields).Events,
             pSVar9 == (System_Collections_Generic_List_WeatherEvent__o *)0x0)) break;
          System_Collections_Generic_List<object>__Insert
                    ((System_Collections_Generic_List_object__o *)pSVar9,iVar8 + 2,
                     (Il2CppObject *)pWVar7,MethodInfo_Void_Insert);
        }
        iVar8 = iVar8 + 1;
        pWVar2 = (__this->fields).Schedule;
        if ((pWVar2 == (Weather_WeatherSchedule_o *)0x0) ||
           (pSVar9 = (pWVar2->fields).Events,
           pSVar9 == (System_Collections_Generic_List_WeatherEvent__o *)0x0)) break;
      } while( true );
    }
  }
  goto LAB_03d82259;
LAB_03d82130:
  do {
    if ((pSVar9->fields)._size <= index) {
      return;
    }
    pWVar7 = (Weather_WeatherEvent_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar9,index,MethodInfo_WeatherEvent_get_Item);
    if (pWVar7 == (Weather_WeatherEvent_o *)0x0) break;
    iVar1 = (pWVar7->fields).Action;
    if (iVar1 == 3) {
      pSVar4 = (__this->fields)._repeatCurrentCounts;
      if (pSVar4 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) break;
      System_Collections_Generic_Dictionary<int__int>__Add(pSVar4,index,0,MethodInfo_Void_Add);
      pWVar2 = (__this->fields).Schedule;
      iVar8 = index;
    }
    else {
      if (iVar1 == 0xf) {
        pIVar6 = Weather_WeatherEvent__GetValue(pWVar7,(MethodInfo *)0x0);
        if ((pIVar6 != (Il2CppObject *)0x0) && (pIVar6->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar6);
        }
        pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)
                 (__this->fields)._scheduleLabels;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) break;
        bVar5 = System_Collections_Generic_Dictionary<object__int>__ContainsKey
                          (pSVar3,pIVar6,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar5 == '\0') {
          pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)
                   (__this->fields)._scheduleLabels;
          if (pSVar3 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
            System_Collections_Generic_Dictionary<object__int>__Add
                      (pSVar3,pIVar6,index,MethodInfo_Void_Add);
            pWVar2 = (__this->fields).Schedule;
            goto joined_r0x03d821db;
          }
          break;
        }
      }
      else if ((-1 < iVar8) && (iVar1 == 4)) {
        pSVar4 = (__this->fields)._repeatStartLines;
        if (pSVar4 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) break;
        System_Collections_Generic_Dictionary<int__int>__Add(pSVar4,index,iVar8,MethodInfo_Void_Add);
        iVar8 = -1;
      }
      pWVar2 = (__this->fields).Schedule;
    }
joined_r0x03d821db:
    if (pWVar2 == (Weather_WeatherSchedule_o *)0x0) break;
    index = index + 1;
    pSVar9 = (pWVar2->fields).Events;
  } while (pSVar9 != (System_Collections_Generic_List_WeatherEvent__o *)0x0);
LAB_03d82259:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherScheduleRunner$$ConsumeSchedule
// il2cpp: void Weather_WeatherScheduleRunner__ConsumeSchedule (Weather_WeatherScheduleRunner_o* __this, const MethodInfo* method);
// 0x3d82280

void Weather_WeatherScheduleRunner__ConsumeSchedule
               (Weather_WeatherScheduleRunner_o *__this,MethodInfo *method)

{
  Weather_WeatherManager_o **ppWVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int index;
  Weather_WeatherSchedule_o *pWVar5;
  System_Collections_Generic_List_WeatherEvent__o *pSVar6;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *__this_00;
  System_Collections_Generic_LinkedList_int__o *pSVar7;
  System_Collections_Generic_Dictionary_object__int__o *pSVar8;
  System_Collections_Generic_Dictionary_int__int__o *pSVar9;
  System_Collections_Generic_Dictionary_int__float__o *pSVar10;
  System_Collections_Specialized_OrderedDictionary_o *pSVar11;
  Settings_BoolSetting_o *pSVar12;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  bool_conflict bVar13;
  int32_t iVar14;
  int32_t iVar15;
  int iVar16;
  Weather_WeatherEvent_o *__this_03;
  int32_t *piVar17;
  Il2CppObject *pIVar18;
  float *pfVar19;
  undefined8 extraout_RAX;
  System_Collections_Generic_LinkedListNode_T__o *pSVar20;
  System_String_o *pSVar21;
  Settings_WeatherSet_o *pSVar22;
  Il2CppObject *pIVar23;
  Il2CppType *pIVar24;
  Weather_WeatherManager_o *pWVar25;
  System_Collections_Generic_List_T__o *__this_04;
  Il2CppClass *pIVar26;
  int iVar27;
  undefined8 in_stack_ffffffffffffff58;
  System_Enum_c *in_stack_ffffffffffffff60;
  Il2CppObject *in_stack_ffffffffffffff68;
  int32_t local_90;
  undefined4 uStack_8c;
  System_Enum_c *local_78;
  Il2CppObject *pIStack_70;
  InvokerMethod local_68;
  System_Collections_Generic_List_Enumerator_T__c *local_58;
  Il2CppType *local_50;
  System_Enum_o local_48;
  _union_247302 local_38;
  
  if (DAT_0570267d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_WeatherEffect_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_LinkedListNode_1_System_Int32__AddLast);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveFirst);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveLast);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_LinkedListNode_1_System_Int32__get_Last);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Weather_WeatherEffect__GetE);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_WeatherEvent_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Weather_WeatherEffect__EnumToList_Weather);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&TypeInfo_WeatherEffect);
    il2cpp_init_method_metadata(&"Weather schedule reached max usage (did you forget to use waits?)");
    il2cpp_init_method_metadata(&"NextLine");
    DAT_0570267d = '\x01';
  }
  local_78 = (System_Enum_c *)0x0;
  pIStack_70 = (Il2CppObject *)0x0;
  local_68 = (InvokerMethod)0x0;
  ppWVar1 = &(__this->fields)._manager;
  iVar27 = 0;
  local_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  do {
    pWVar5 = (__this->fields).Schedule;
    if ((pWVar5 == (Weather_WeatherSchedule_o *)0x0) ||
       (pSVar6 = (pWVar5->fields).Events,
       pSVar6 == (System_Collections_Generic_List_WeatherEvent__o *)0x0)) goto LAB_03d831bc;
    iVar16 = (pSVar6->fields)._size;
    if (iVar16 == 0) {
      return;
    }
    index = (__this->fields)._currentScheduleLine;
    if (index < 0) {
      return;
    }
    if (iVar16 <= index) {
      return;
    }
    __this_03 = (Weather_WeatherEvent_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar6,index,MethodInfo_WeatherEvent_get_Item);
    if (__this_03 == (Weather_WeatherEvent_o *)0x0) goto LAB_03d831bc;
    switch((__this_03->fields).Action) {
    case 3:
      pSVar9 = (__this->fields)._repeatCurrentCounts;
      iVar14 = (__this->fields)._currentScheduleLine;
      pIVar18 = Weather_WeatherEvent__GetValue(__this_03,(MethodInfo *)0x0);
      if ((pSVar9 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
         (pIVar18 == (Il2CppObject *)0x0)) goto LAB_03d831bc;
      if ((pIVar18->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40))
      goto LAB_03d831c4;
      piVar17 = (int32_t *)il2cpp_glue_022c7330(pIVar18);
      System_Collections_Generic_Dictionary<int__int>__set_Item(pSVar9,iVar14,*piVar17,MethodInfo_Void_set_Item)
      ;
      break;
    case 4:
      pSVar9 = (__this->fields)._repeatStartLines;
      if (pSVar9 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto LAB_03d831bc;
      iVar14 = System_Collections_Generic_Dictionary<int__int>__get_Item
                         (pSVar9,(__this->fields)._currentScheduleLine,MethodInfo_Int32_get_Item);
      pSVar9 = (__this->fields)._repeatCurrentCounts;
      if (pSVar9 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto LAB_03d831bc;
      bVar13 = System_Collections_Generic_Dictionary<int__int>__ContainsKey
                         (pSVar9,iVar14,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar13 != '\0') {
        pSVar9 = (__this->fields)._repeatCurrentCounts;
        if (pSVar9 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto LAB_03d831bc;
        iVar15 = System_Collections_Generic_Dictionary<int__int>__get_Item
                           (pSVar9,iVar14,MethodInfo_Int32_get_Item);
        if (0 < iVar15) {
          (__this->fields)._currentScheduleLine = iVar14 + 1;
          pSVar9 = (__this->fields)._repeatCurrentCounts;
          if (pSVar9 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto LAB_03d831bc;
          iVar15 = System_Collections_Generic_Dictionary<int__int>__get_Item
                             (pSVar9,iVar14,MethodInfo_Int32_get_Item);
          System_Collections_Generic_Dictionary<int__int>__set_Item
                    (pSVar9,iVar14,iVar15 + -1,MethodInfo_Void_set_Item);
        }
      }
      break;
    case 5:
      if (((*ppWVar1 != (Weather_WeatherManager_o *)0x0) &&
          (pSVar22 = ((*ppWVar1)->fields)._currentWeather, pSVar22 != (Settings_WeatherSet_o *)0x0))
         && (pSVar12 = (pSVar22->fields).ScheduleLoop, pSVar12 != (Settings_BoolSetting_o *)0x0)) {
        bVar4 = *(byte *)((long)&(pSVar12->fields).DefaultValue + 1);
        (*(pSVar22->klass->vtable)._4_SetDefault.methodPtr)
                  (pSVar22,(pSVar22->klass->vtable)._4_SetDefault.method);
        if (((*ppWVar1 != (Weather_WeatherManager_o *)0x0) &&
            (pSVar22 = ((*ppWVar1)->fields)._currentWeather, pSVar22 != (Settings_WeatherSet_o *)0x0
            )) && (pSVar12 = (pSVar22->fields).UseSchedule, pSVar12 != (Settings_BoolSetting_o *)0x0
                  )) {
          Settings_TypedSetting<bool>__set_Value
                    ((Settings_TypedSetting_bool__o *)pSVar12,1,MethodInfo_Void_set_Value);
          if (((*ppWVar1 != (Weather_WeatherManager_o *)0x0) &&
              (pSVar22 = ((*ppWVar1)->fields)._currentWeather,
              pSVar22 != (Settings_WeatherSet_o *)0x0)) &&
             (pSVar12 = (pSVar22->fields).ScheduleLoop, pSVar12 != (Settings_BoolSetting_o *)0x0)) {
            Settings_TypedSetting<bool>__set_Value
                      ((Settings_TypedSetting_bool__o *)pSVar12,(uint)bVar4,MethodInfo_Void_set_Value);
            pWVar25 = *ppWVar1;
            goto joined_r0x03d826e3;
          }
        }
      }
      goto LAB_03d831bc;
    case 6:
      if ((*ppWVar1 != (Weather_WeatherManager_o *)0x0) &&
         (pSVar22 = ((*ppWVar1)->fields)._currentWeather, pSVar22 != (Settings_WeatherSet_o *)0x0))
      {
        pSVar11 = (pSVar22->fields).Settings;
        in_stack_ffffffffffffff68 = (Il2CppObject *)0xffffffffffffffff;
        local_90 = (__this_03->fields).Effect;
        in_stack_ffffffffffffff60 = TypeInfo_WeatherEffect;
        pSVar21 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff60,(MethodInfo *)0x0)
        ;
        if ((pSVar11 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) &&
           (pIVar18 = System_Collections_Specialized_OrderedDictionary__get_Item
                                (pSVar11,(Il2CppObject *)pSVar21,(MethodInfo *)0x0),
           pIVar18 != (Il2CppObject *)0x0)) {
          bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
          if (((pIVar18->klass->_2).naturalAligment < bVar4) ||
             ((pIVar18->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseSetting)) {
LAB_03d831c4:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pIVar18);
          }
          pIVar26 = pIVar18->klass;
          bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
          if (((pIVar26->_2).naturalAligment < bVar4) ||
             ((pIVar26->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseSetting)) goto LAB_03d831c4;
          goto LAB_03d82adb;
        }
      }
      goto LAB_03d831bc;
    case 7:
      if ((*ppWVar1 != (Weather_WeatherManager_o *)0x0) &&
         (pSVar22 = ((*ppWVar1)->fields)._currentWeather, pSVar22 != (Settings_WeatherSet_o *)0x0))
      goto LAB_03d82b17;
      goto LAB_03d831bc;
    case 8:
      if ((*ppWVar1 != (Weather_WeatherManager_o *)0x0) &&
         (pSVar22 = ((*ppWVar1)->fields)._targetWeather, pSVar22 != (Settings_WeatherSet_o *)0x0)) {
        (*(pSVar22->klass->vtable)._4_SetDefault.methodPtr)
                  (pSVar22,(pSVar22->klass->vtable)._4_SetDefault.method);
        pWVar25 = *ppWVar1;
        goto joined_r0x03d826e3;
      }
      goto LAB_03d831bc;
    case 9:
      if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar22 = ((*ppWVar1)->fields)._targetWeather, pSVar22 == (Settings_WeatherSet_o *)0x0))
      goto LAB_03d831bc;
      pSVar11 = (pSVar22->fields).Settings;
      in_stack_ffffffffffffff68 = (Il2CppObject *)0xffffffffffffffff;
      local_90 = (__this_03->fields).Effect;
      in_stack_ffffffffffffff60 = TypeInfo_WeatherEffect;
      pSVar21 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff60,(MethodInfo *)0x0);
      if ((pSVar11 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) ||
         (pIVar18 = System_Collections_Specialized_OrderedDictionary__get_Item
                              (pSVar11,(Il2CppObject *)pSVar21,(MethodInfo *)0x0),
         pIVar18 == (Il2CppObject *)0x0)) goto LAB_03d831bc;
      bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
      if (((pIVar18->klass->_2).naturalAligment < bVar4) ||
         ((pIVar18->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseSetting)) goto LAB_03d831c4;
      pIVar26 = pIVar18->klass;
      bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
      if (((pIVar26->_2).naturalAligment < bVar4) ||
         ((pIVar26->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseSetting)) goto LAB_03d831c4;
LAB_03d82adb:
      (*pIVar26->vtable[4].methodPtr)(pIVar18,pIVar26->vtable[4].method);
      pWVar25 = *ppWVar1;
joined_r0x03d826e3:
      if (pWVar25 == (Weather_WeatherManager_o *)0x0) goto LAB_03d831bc;
LAB_03d82ec0:
      *(undefined1 *)&(pWVar25->fields)._needSync = 1;
      break;
    case 10:
      if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar22 = ((*ppWVar1)->fields)._targetWeather, pSVar22 == (Settings_WeatherSet_o *)0x0))
      goto LAB_03d831bc;
LAB_03d82b17:
      pSVar11 = (pSVar22->fields).Settings;
      in_stack_ffffffffffffff68 = (Il2CppObject *)0xffffffffffffffff;
      local_90 = (__this_03->fields).Effect;
      in_stack_ffffffffffffff60 = TypeInfo_WeatherEffect;
      pSVar21 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff60,(MethodInfo *)0x0);
      if (pSVar11 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto LAB_03d831bc;
      pIVar18 = System_Collections_Specialized_OrderedDictionary__get_Item
                          (pSVar11,(Il2CppObject *)pSVar21,(MethodInfo *)0x0);
      iVar14 = Weather_WeatherEvent__GetSettingType(__this_03,(MethodInfo *)0x0);
      pIVar23 = Weather_WeatherEvent__GetValue(__this_03,(MethodInfo *)0x0);
      if (pIVar18 != (Il2CppObject *)0x0) {
        bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
        if (((pIVar18->klass->_2).naturalAligment < bVar4) ||
           ((pIVar18->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar18);
        }
      }
      Settings_SettingsUtil__SetSettingValue
                ((Settings_BaseSetting_o *)pIVar18,iVar14,pIVar23,(MethodInfo *)0x0);
      if (*ppWVar1 == (Weather_WeatherManager_o *)0x0) goto LAB_03d831bc;
      *(undefined1 *)&((*ppWVar1)->fields)._needSync = 1;
      break;
    case 0xb:
      if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar10 = ((*ppWVar1)->fields)._targetWeatherStartTimes,
         pSVar10 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto LAB_03d831bc;
      System_Collections_Generic_Dictionary<int__float>__Clear(pSVar10,MethodInfo_Void_Clear);
      if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar10 = ((*ppWVar1)->fields)._targetWeatherEndTimes,
         pSVar10 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto LAB_03d831bc;
      System_Collections_Generic_Dictionary<int__float>__Clear(pSVar10,MethodInfo_Void_Clear);
      if (*ppWVar1 == (Weather_WeatherManager_o *)0x0) goto LAB_03d831bc;
      fVar2 = ((*ppWVar1)->fields)._currentTime;
      pIVar18 = Weather_WeatherEvent__GetValue(__this_03,(MethodInfo *)0x0);
      if (pIVar18 == (Il2CppObject *)0x0) goto LAB_03d831bc;
      if ((pIVar18->klass->_1).element_class != *(Il2CppClass **)(DAT_05711098 + 0x40))
      goto LAB_03d831c4;
      pfVar19 = (float *)il2cpp_glue_022c7330(pIVar18);
      fVar3 = *pfVar19;
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_04 = Utility_Util__EnumToList<Int32Enum>(MethodInfo_List_1_Weather_WeatherEffect__EnumToList_Weather);
      if (__this_04 == (System_Collections_Generic_List_T__o *)0x0) goto LAB_03d831bc;
      System_Collections_Generic_List<Int32Enum>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff60,
                 __this_04,MethodInfo_List_1_T__Enumerator_Weather_WeatherEffect__GetE);
      local_68 = (InvokerMethod)CONCAT44(uStack_8c,local_90);
      local_78 = in_stack_ffffffffffffff60;
      pIStack_70 = in_stack_ffffffffffffff68;
      while (__this_01.fields._8_8_ = in_stack_ffffffffffffff60,
            __this_01.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff58,
            __this_01.fields._current = in_stack_ffffffffffffff68,
            bVar13 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                               (__this_01,(MethodInfo_3181D50 *)&local_78), (char)bVar13 != '\0') {
        pWVar25 = *ppWVar1;
        if (pWVar25 == (Weather_WeatherManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar10 = (pWVar25->fields)._targetWeatherStartTimes;
        if (pSVar10 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        iVar14 = (int32_t)local_68;
        System_Collections_Generic_Dictionary<int__float>__Add
                  (pSVar10,(int32_t)local_68,(pWVar25->fields)._currentTime,MethodInfo_Void_Add);
        if (*ppWVar1 == (Weather_WeatherManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar10 = ((*ppWVar1)->fields)._targetWeatherEndTimes;
        if (pSVar10 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_Dictionary<int__float>__Add
                  (pSVar10,iVar14,fVar2 + fVar3,MethodInfo_Void_Add);
      }
      __this_02.fields._8_8_ = in_stack_ffffffffffffff60;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff58;
      __this_02.fields._current = in_stack_ffffffffffffff68;
      System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                (__this_02,(MethodInfo_3181D40 *)&local_78);
      if (*ppWVar1 == (Weather_WeatherManager_o *)0x0) goto LAB_03d831bc;
      *(undefined1 *)&((*ppWVar1)->fields)._needSync = 1;
      break;
    case 0xc:
      if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar10 = ((*ppWVar1)->fields)._targetWeatherStartTimes,
         pSVar10 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto LAB_03d831bc;
      bVar13 = System_Collections_Generic_Dictionary<int__float>__ContainsKey
                         (pSVar10,(__this_03->fields).Effect,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar13 == '\0') {
        if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
           (pSVar10 = ((*ppWVar1)->fields)._targetWeatherStartTimes,
           pSVar10 == (System_Collections_Generic_Dictionary_int__float__o *)0x0))
        goto LAB_03d831bc;
        System_Collections_Generic_Dictionary<int__float>__Add
                  (pSVar10,(__this_03->fields).Effect,0.0,MethodInfo_Void_Add);
        if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
           (pSVar10 = ((*ppWVar1)->fields)._targetWeatherEndTimes,
           pSVar10 == (System_Collections_Generic_Dictionary_int__float__o *)0x0))
        goto LAB_03d831bc;
        System_Collections_Generic_Dictionary<int__float>__Add
                  (pSVar10,(__this_03->fields).Effect,0.0,MethodInfo_Void_Add);
      }
      if ((*ppWVar1 != (Weather_WeatherManager_o *)0x0) &&
         (pSVar22 = ((*ppWVar1)->fields)._startWeather, pSVar22 != (Settings_WeatherSet_o *)0x0)) {
        pSVar11 = (pSVar22->fields).Settings;
        in_stack_ffffffffffffff68 = (Il2CppObject *)0xffffffffffffffff;
        local_90 = (__this_03->fields).Effect;
        in_stack_ffffffffffffff60 = TypeInfo_WeatherEffect;
        pSVar21 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff60,(MethodInfo *)0x0)
        ;
        if (pSVar11 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
          pIVar23 = System_Collections_Specialized_OrderedDictionary__get_Item
                              (pSVar11,(Il2CppObject *)pSVar21,(MethodInfo *)0x0);
          if ((*ppWVar1 != (Weather_WeatherManager_o *)0x0) &&
             (pSVar22 = ((*ppWVar1)->fields)._currentWeather,
             pSVar22 != (Settings_WeatherSet_o *)0x0)) {
            pSVar11 = (pSVar22->fields).Settings;
            local_48.klass = TypeInfo_WeatherEffect;
            local_48.monitor = (Il2CppRGCTXData *)0xffffffffffffffff;
            local_38._0_4_ = (__this_03->fields).Effect;
            pSVar21 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
            if (pSVar11 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
              pIVar24 = (Il2CppType *)
                        System_Collections_Specialized_OrderedDictionary__get_Item
                                  (pSVar11,(Il2CppObject *)pSVar21,(MethodInfo *)0x0);
              if (pIVar24 != (Il2CppType *)0x0) {
                bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
                if (((pIVar24->data->_2).naturalAligment < bVar4) ||
                   ((pIVar24->data->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_unwind_resume(pIVar24);
                }
              }
              pWVar25 = *ppWVar1;
              if ((pWVar25 != (Weather_WeatherManager_o *)0x0) &&
                 (pSVar10 = (pWVar25->fields)._targetWeatherStartTimes,
                 pSVar10 != (System_Collections_Generic_Dictionary_int__float__o *)0x0)) {
                local_50 = pIVar24;
                System_Collections_Generic_Dictionary<int__float>__set_Item
                          (pSVar10,(__this_03->fields).Effect,(pWVar25->fields)._currentTime,
                           MethodInfo_Void_set_Item);
                pWVar25 = *ppWVar1;
                if (pWVar25 != (Weather_WeatherManager_o *)0x0) {
                  pSVar10 = (pWVar25->fields)._targetWeatherEndTimes;
                  iVar14 = (__this_03->fields).Effect;
                  fVar2 = (pWVar25->fields)._currentTime;
                  pIVar18 = Weather_WeatherEvent__GetValue(__this_03,(MethodInfo *)0x0);
                  if ((pSVar10 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) &&
                     (pIVar18 != (Il2CppObject *)0x0)) {
                    if ((pIVar18->klass->_1).element_class != *(Il2CppClass **)(DAT_05711098 + 0x40)
                       ) goto LAB_03d831c4;
                    pfVar19 = (float *)il2cpp_glue_022c7330(pIVar18);
                    System_Collections_Generic_Dictionary<int__float>__set_Item
                              (pSVar10,iVar14,fVar2 + *pfVar19,MethodInfo_Void_set_Item);
                    if (pIVar23 != (Il2CppObject *)0x0) {
                      bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
                      pIVar18 = pIVar23;
                      if (((pIVar23->klass->_2).naturalAligment < bVar4) ||
                         ((pIVar23->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseSetting))
                      goto LAB_03d831c4;
                      pIVar26 = pIVar23->klass;
                      bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
                      if (((pIVar26->_2).naturalAligment < bVar4) ||
                         ((pIVar26->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseSetting))
                      goto LAB_03d831c4;
                      (*pIVar26->vtable[9].methodPtr)(pIVar23,local_50,pIVar26->vtable[9].method);
                      pWVar25 = *ppWVar1;
                      if (pWVar25 != (Weather_WeatherManager_o *)0x0) goto LAB_03d82ec0;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_03d831bc;
    case 0xd:
      if (*ppWVar1 == (Weather_WeatherManager_o *)0x0) goto LAB_03d831bc;
      __this_00 = ((*ppWVar1)->fields)._currentScheduleWait;
      pIVar18 = Weather_WeatherEvent__GetValue(__this_03,(MethodInfo *)0x0);
      if ((__this_00 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0
          ) || (pIVar18 == (Il2CppObject *)0x0)) goto LAB_03d831bc;
      if ((pIVar18->klass->_1).element_class != *(Il2CppClass **)(DAT_05711098 + 0x40))
      goto LAB_03d831c4;
      pfVar19 = (float *)il2cpp_glue_022c7330(pIVar18);
      System_Collections_Generic_Dictionary<object__float>__set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (Il2CppObject *)__this,*pfVar19,MethodInfo_Void_set_Item);
      local_58 = (System_Collections_Generic_List_Enumerator_T__c *)
                 CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
      break;
    case 0xe:
      pSVar21 = (System_String_o *)Weather_WeatherEvent__GetValue(__this_03,(MethodInfo *)0x0);
      if ((pSVar21 != (System_String_o *)0x0) && (pSVar21->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar21);
      }
      bVar13 = System_String__op_Inequality(pSVar21,"NextLine",(MethodInfo *)0x0);
      if ((char)bVar13 != '\0') {
        pSVar8 = (System_Collections_Generic_Dictionary_object__int__o *)
                 (__this->fields)._scheduleLabels;
        if (pSVar8 == (System_Collections_Generic_Dictionary_object__int__o *)0x0)
        goto LAB_03d831bc;
        bVar13 = System_Collections_Generic_Dictionary<object__int>__ContainsKey
                           (pSVar8,(Il2CppObject *)pSVar21,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar13 != '\0') {
          pSVar7 = (__this->fields)._callerStack;
          if (pSVar7 == (System_Collections_Generic_LinkedList_int__o *)0x0) goto LAB_03d831bc;
          System_Collections_Generic_LinkedList<int>__AddLast
                    (pSVar7,(__this->fields)._currentScheduleLine,MethodInfo_LinkedListNode_1_System_Int32__AddLast);
          pSVar7 = (__this->fields)._callerStack;
          if (pSVar7 == (System_Collections_Generic_LinkedList_int__o *)0x0) goto LAB_03d831bc;
          if (200 < (pSVar7->fields).count) {
            System_Collections_Generic_LinkedList<int>__RemoveFirst(pSVar7,MethodInfo_Void_RemoveFirst);
          }
          pSVar8 = (System_Collections_Generic_Dictionary_object__int__o *)
                   (__this->fields)._scheduleLabels;
          if (pSVar8 == (System_Collections_Generic_Dictionary_object__int__o *)0x0)
          goto LAB_03d831bc;
          iVar14 = System_Collections_Generic_Dictionary<object__int>__get_Item
                             (pSVar8,(Il2CppObject *)pSVar21,MethodInfo_Int32_get_Item);
          (__this->fields)._currentScheduleLine = iVar14;
        }
      }
      break;
    case 0x10:
      pSVar7 = (__this->fields)._callerStack;
      if (pSVar7 == (System_Collections_Generic_LinkedList_int__o *)0x0) goto LAB_03d831bc;
      if (0 < (pSVar7->fields).count) {
        pSVar20 = System_Collections_Generic_LinkedList<int>__get_Last(pSVar7,MethodInfo_LinkedListNode_1_System_Int32__get_Last);
        if (pSVar20 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) goto LAB_03d831bc;
        (__this->fields)._currentScheduleLine = *(int32_t *)&(pSVar20->fields).item;
        pSVar7 = (__this->fields)._callerStack;
        if (pSVar7 == (System_Collections_Generic_LinkedList_int__o *)0x0) goto LAB_03d831bc;
        System_Collections_Generic_LinkedList<int>__RemoveLast(pSVar7,MethodInfo_Void_RemoveLast);
      }
    }
    iVar16 = (__this->fields)._currentScheduleLine + 1;
    (__this->fields)._currentScheduleLine = iVar16;
    pWVar5 = (__this->fields).Schedule;
    if ((pWVar5 == (Weather_WeatherSchedule_o *)0x0) ||
       (pSVar6 = (pWVar5->fields).Events,
       pSVar6 == (System_Collections_Generic_List_WeatherEvent__o *)0x0)) goto LAB_03d831bc;
    if ((pSVar6->fields)._size <= iVar16) {
      if (((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
          (pSVar22 = ((*ppWVar1)->fields)._currentWeather, pSVar22 == (Settings_WeatherSet_o *)0x0))
         || (pSVar12 = (pSVar22->fields).ScheduleLoop, pSVar12 == (Settings_BoolSetting_o *)0x0))
      goto LAB_03d831bc;
      if (*(char *)((long)&(pSVar12->fields).DefaultValue + 1) != '\0') {
        (__this->fields)._currentScheduleLine = 0;
      }
    }
    iVar27 = iVar27 + 1;
    if (((ulong)local_58 & 1) != 0) {
      return;
    }
  } while (iVar27 != 200);
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ApplicationManagers_DebugConsole__Log("Weather schedule reached max usage (did you forget to use waits?)",1,(MethodInfo *)0x0);
  pWVar5 = (__this->fields).Schedule;
  if ((pWVar5 != (Weather_WeatherSchedule_o *)0x0) &&
     (pSVar6 = (pWVar5->fields).Events,
     pSVar6 != (System_Collections_Generic_List_WeatherEvent__o *)0x0)) {
    piVar17 = &(pSVar6->fields)._version;
    *piVar17 = *piVar17 + 1;
    iVar14 = (pSVar6->fields)._size;
    (pSVar6->fields)._size = 0;
    if (0 < iVar14) {
      System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar14,(MethodInfo *)0x0);
    }
    return;
  }
LAB_03d831bc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


