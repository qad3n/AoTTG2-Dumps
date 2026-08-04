// Type: Weather.WeatherScheduleRunner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/WeatherScheduleRunner.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherScheduleRunner.cs
// --------------------------------

// Weather.WeatherScheduleRunner$$.ctor
// il2cpp: void Weather_WeatherScheduleRunner___ctor (Weather_WeatherScheduleRunner_o* __this, Weather_WeatherManager_o* manager, const MethodInfo* method);
// 0x4077700

void Weather_WeatherScheduleRunner___ctor
               (Weather_WeatherScheduleRunner_o *__this,Weather_WeatherManager_o *manager,MethodInfo *method)

{
  System_Collections_Generic_LinkedList_int__o *__this_00;
  System_Collections_Generic_Dictionary_object__int__o *__this_01;
  System_Collections_Generic_Dictionary_int__int__o *pSVar1;
  Weather_WeatherSchedule_o *__this_02;
  System_Collections_Generic_List_WeatherEvent__o *__this_03;
  
  if (g_data_057ac32b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_System_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedList_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LinkedList_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSchedule);
    g_data_057ac32b = '\x01';
  }
  __this_00 = (System_Collections_Generic_LinkedList_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_LinkedList_int);
  System_Collections_Generic_LinkedList_int____ctor(__this_00,MethodInfo_LinkedList_1_System_Int32);
  (__this->fields)._callerStack = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._callerStack,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor(__this_01,MethodInfo_Dictionary_2_System_String_System_Int32);
  (__this->fields)._scheduleLabels = (System_Collections_Generic_Dictionary_string__int__o *)__this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._scheduleLabels,__this_01);
  pSVar1 = (System_Collections_Generic_Dictionary_int__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_int);
  System_Collections_Generic_Dictionary_int__int____ctor(pSVar1,MethodInfo_Dictionary_2_System_Int32_System_Int32);
  (__this->fields)._repeatStartLines = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._repeatStartLines,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_int__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_int);
  System_Collections_Generic_Dictionary_int__int____ctor(pSVar1,MethodInfo_Dictionary_2_System_Int32_System_Int32);
  (__this->fields)._repeatCurrentCounts = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._repeatCurrentCounts,pSVar1);
  __this_02 = (Weather_WeatherSchedule_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSchedule);
  if (g_data_057ac31f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherEvent);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherEvent);
    g_data_057ac31f = '\x01';
  }
  __this_03 = (System_Collections_Generic_List_WeatherEvent__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherEvent);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_Weather_WeatherEvent);
  (__this_02->fields).Events = __this_03;
  il2cpp_runtime_helper_022b4080(&__this_02->fields);
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  (__this->fields).Schedule = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Schedule);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._manager = manager;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._manager,manager);
  return;
}


// Weather.WeatherScheduleRunner$$ProcessSchedule
// il2cpp: void Weather_WeatherScheduleRunner__ProcessSchedule (Weather_WeatherScheduleRunner_o* __this, const MethodInfo* method);
// 0x40778f0

void Weather_WeatherScheduleRunner__ProcessSchedule
               (Weather_WeatherScheduleRunner_o *__this,MethodInfo *method)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int index;
  Weather_WeatherSchedule_o *pWVar5;
  System_Collections_Generic_Dictionary_object__int__o *pSVar6;
  System_Collections_Generic_Dictionary_int__int__o *pSVar7;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar8;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar9;
  long *plVar10;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__RGCTXs *__this_00;
  Settings_TypedSetting_bool__o *__this_01;
  void *pvVar11;
  System_Collections_Specialized_OrderedDictionary_o *__this_02;
  System_Collections_Generic_Dictionary_int__float__o *pSVar12;
  Il2CppClass **ppIVar13;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_T__o __this_04;
  System_Collections_Generic_List_Enumerator_T__o __this_05;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o **ppSVar14;
  undefined4 key;
  bool_conflict bVar15;
  int32_t iVar16;
  uint key_00;
  int iVar17;
  Il2CppObject *pIVar18;
  Weather_WeatherEvent_o *pWVar19;
  Weather_WeatherEvent_o *__this_06;
  System_Int32_array *pSVar20;
  int32_t *piVar21;
  float *pfVar22;
  undefined8 extraout_RAX;
  System_Collections_Generic_LinkedListNode_T__o *pSVar23;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__c *pSVar24;
  System_String_o *pSVar25;
  Il2CppObject *pIVar26;
  Il2CppType *pIVar27;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar28;
  System_Collections_Generic_List_T__o *__this_07;
  Il2CppClass *pIVar29;
  Il2CppType *extraout_RDX;
  int iVar30;
  Weather_WeatherEvent_o *pWVar31;
  System_Collections_Generic_List_WeatherEvent__o *pSVar32;
  System_Int32_array *key_01;
  undefined8 in_stack_ffffffffffffff20;
  System_Enum_c *in_stack_ffffffffffffff28;
  Il2CppObject *in_stack_ffffffffffffff30;
  int32_t iStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_b0 [56];
  Il2CppRGCTXData *pIStack_78;
  _union_249663 _Stack_70;
  Weather_WeatherEvent_o *pWStack_68;
  MethodInfo_362BED0 **ppMStack_60;
  MethodInfo_3078810 **ppMStack_58;
  Weather_WeatherScheduleRunner_o *pWStack_50;
  Weather_WeatherEvent_o *pWStack_48;
  System_Int32_array *pSStack_40;
  
  if (g_data_057ac32c == '\0') {
    pSStack_40 = (System_Int32_array *)0x4077913;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_40 = (System_Int32_array *)0x407791f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_40 = (System_Int32_array *)0x407792b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pSStack_40 = (System_Int32_array *)0x4077937;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Insert);
    pSStack_40 = (System_Int32_array *)0x4077943;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pSStack_40 = (System_Int32_array *)0x407794f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherEvent_get_Item);
    pSStack_40 = (System_Int32_array *)0x407795b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherEvent);
    g_data_057ac32c = '\x01';
  }
  pWVar5 = (__this->fields).Schedule;
  if (pWVar5 != (Weather_WeatherSchedule_o *)0x0) {
    iVar30 = 0;
    pSVar32 = (pWVar5->fields).Events;
    if (pSVar32 != (System_Collections_Generic_List_WeatherEvent__o *)0x0) {
      do {
        if ((pSVar32->fields)._size + -1 <= iVar30) {
          pWVar19 = (Weather_WeatherEvent_o *)&g_data_ffffffff;
          pWVar31 = (Weather_WeatherEvent_o *)0x0;
          goto label_04077a80;
        }
        pSStack_40 = (System_Int32_array *)0x40779d6;
        pIVar18 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar32,iVar30,MethodInfo_WeatherEvent_get_Item);
        if (pIVar18 == (Il2CppObject *)0x0) break;
        if (*(int *)&pIVar18[1].klass == 2) {
          pWVar5 = (__this->fields).Schedule;
          if ((pWVar5 == (Weather_WeatherSchedule_o *)0x0) ||
             (pSVar32 = (pWVar5->fields).Events,
             pSVar32 == (System_Collections_Generic_List_WeatherEvent__o *)0x0)) break;
          pSStack_40 = (System_Int32_array *)0x4077a0a;
          pIVar18 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar32,iVar30,MethodInfo_WeatherEvent_get_Item);
          if (pIVar18 == (Il2CppObject *)0x0) break;
          *(undefined4 *)&pIVar18[1].klass = 3;
          pSStack_40 = (System_Int32_array *)0x4077a22;
          pWVar19 = (Weather_WeatherEvent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherEvent);
          pSStack_40 = (System_Int32_array *)0x4077a2f;
          Weather_WeatherEvent___ctor(pWVar19,(MethodInfo *)0x0);
          if (pWVar19 == (Weather_WeatherEvent_o *)0x0) break;
          (pWVar19->fields).Action = 4;
          pWVar5 = (__this->fields).Schedule;
          if ((pWVar5 == (Weather_WeatherSchedule_o *)0x0) ||
             (pSVar32 = (pWVar5->fields).Events,
             pSVar32 == (System_Collections_Generic_List_WeatherEvent__o *)0x0)) break;
          pSStack_40 = (System_Int32_array *)0x4077a68;
          System_Collections_Generic_List_object___Insert
                    ((System_Collections_Generic_List_object__o *)pSVar32,iVar30 + 2,(Il2CppObject *)pWVar19,
                     MethodInfo_Void_Insert);
        }
        iVar30 = iVar30 + 1;
        pWVar5 = (__this->fields).Schedule;
        if ((pWVar5 == (Weather_WeatherSchedule_o *)0x0) ||
           (pSVar32 = (pWVar5->fields).Events,
           pSVar32 == (System_Collections_Generic_List_WeatherEvent__o *)0x0)) break;
      } while( true );
    }
  }
  goto label_04077ba9;
label_04077e3c:
  do {
    pSVar20 = (System_Int32_array *)&MethodInfo_Boolean_MoveNext;
    if ((*(System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o **)(key_01->m_Items + 8) ==
         (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) ||
       (pSVar8 = ((*(System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o **)
                    (key_01->m_Items + 8))->fields)._dictionary,
       pSVar8 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)) goto label_04078b0c;
    iVar17 = *(int *)&(pSVar8->fields)._entries;
    if (iVar17 == 0) {
      return;
    }
    index = *(int *)&((System_Collections_Generic_Dictionary_int__int__Fields *)&key_01->bounds)->_buckets;
    if (index < 0) {
      return;
    }
    if (iVar17 <= index) {
      return;
    }
    pWVar19 = (Weather_WeatherEvent_o *)
              System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar8,index,MethodInfo_WeatherEvent_get_Item);
    if (pWVar19 == (Weather_WeatherEvent_o *)0x0) goto label_04078b0c;
    pWVar31 = pWVar19;
    switch((pWVar19->fields).Action) {
    case 3:
      pSVar20 = *(System_Int32_array **)(key_01->m_Items + 4);
      iVar16 = *(int32_t *)
                &((System_Collections_Generic_Dictionary_int__int__Fields *)&key_01->bounds)->_buckets;
      pIVar18 = Weather_WeatherEvent__GetValue(pWVar19,(MethodInfo *)0x0);
      if ((pSVar20 == (System_Int32_array *)0x0) || (pIVar18 == (Il2CppObject *)0x0)) goto label_04078b0c;
      if ((pIVar18->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9bb8 + 0x40)) goto label_04078b14;
      piVar21 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar18);
      System_Collections_Generic_Dictionary_int__int___set_Item
                ((System_Collections_Generic_Dictionary_int__int__o *)pSVar20,iVar16,*piVar21,MethodInfo_Void_set_Item);
      break;
    case 4:
      if (*(System_Collections_Generic_Dictionary_int__int__o **)(key_01->m_Items + 2) ==
          (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_04078b0c;
      key_00 = System_Collections_Generic_Dictionary_int__int___get_Item
                         (*(System_Collections_Generic_Dictionary_int__int__o **)(key_01->m_Items + 2),
                          *(int32_t *)
                           &((System_Collections_Generic_Dictionary_int__int__Fields *)&key_01->bounds)->
                            _buckets,MethodInfo_Int32_get_Item);
      if (*(System_Collections_Generic_Dictionary_int__int__o **)(key_01->m_Items + 4) ==
          (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_04078b0c;
      pWVar19 = (Weather_WeatherEvent_o *)(ulong)key_00;
      bVar15 = System_Collections_Generic_Dictionary_int__int___ContainsKey
                         (*(System_Collections_Generic_Dictionary_int__int__o **)(key_01->m_Items + 4),key_00,
                          MethodInfo_Boolean_ContainsKey);
      if ((char)bVar15 != '\0') {
        pWVar31 = pWVar19;
        if (*(System_Collections_Generic_Dictionary_int__int__o **)(key_01->m_Items + 4) ==
            (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_04078b0c;
        iVar16 = System_Collections_Generic_Dictionary_int__int___get_Item
                           (*(System_Collections_Generic_Dictionary_int__int__o **)(key_01->m_Items + 4),
                            key_00,MethodInfo_Int32_get_Item);
        if (0 < iVar16) {
          *(uint *)&((System_Collections_Generic_Dictionary_int__int__Fields *)&key_01->bounds)->_buckets =
               key_00 + 1;
          pSVar7 = *(System_Collections_Generic_Dictionary_int__int__o **)(key_01->m_Items + 4);
          pSVar20 = (System_Int32_array *)0x0;
          if (pSVar7 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_04078b0c;
          iVar16 = System_Collections_Generic_Dictionary_int__int___get_Item(pSVar7,key_00,MethodInfo_Int32_get_Item);
          System_Collections_Generic_Dictionary_int__int___set_Item(pSVar7,key_00,iVar16 + -1,MethodInfo_Void_set_Item);
        }
      }
      break;
    case 5:
      if (((*ppSVar14 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) &&
          (pSVar24 = (*ppSVar14)[3].klass,
          pSVar24 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__c *)0x0)) &&
         (ppIVar13 = (pSVar24->_2).typeHierarchy, ppIVar13 != (Il2CppClass **)0x0)) {
        bVar4 = *(byte *)((long)ppIVar13 + 0x11);
        pWVar19 = (Weather_WeatherEvent_o *)(ulong)bVar4;
        pvVar11 = (pSVar24->_1).image;
        (**(code **)((long)pvVar11 + 0x178))(pSVar24,*(undefined8 *)((long)pvVar11 + 0x180));
        pWVar31 = pWVar19;
        if (((*ppSVar14 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) &&
            (pSVar24 = (*ppSVar14)[3].klass,
            pSVar24 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__c *)0x0)) &&
           (__this_00 = pSVar24->rgctx_data,
           __this_00 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__RGCTXs *)0x0)) {
          Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)__this_00,1,MethodInfo_Void_set_Value);
          if (((*ppSVar14 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) &&
              (pSVar24 = (*ppSVar14)[3].klass,
              pSVar24 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__c *)0x0)) &&
             (__this_01 = (Settings_TypedSetting_bool__o *)(pSVar24->_2).typeHierarchy,
             __this_01 != (Settings_TypedSetting_bool__o *)0x0)) {
            Settings_TypedSetting_bool___set_Value(__this_01,(uint)bVar4,MethodInfo_Void_set_Value);
            pSVar28 = *ppSVar14;
            goto joined_r0x04078033;
          }
        }
      }
      goto label_04078b0c;
    case 6:
      if ((*ppSVar14 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) &&
         (pSVar24 = (*ppSVar14)[3].klass,
         pSVar24 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__c *)0x0)) {
        pSVar20 = (System_Int32_array *)(pSVar24->_1).name;
        in_stack_ffffffffffffff30 = (Il2CppObject *)0xffffffffffffffff;
        iStack_c8 = (pWVar19->fields).Effect;
        in_stack_ffffffffffffff28 = TypeInfo_WeatherEffect;
        pSVar25 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff28,(MethodInfo *)0x0);
        if ((pSVar20 != (System_Int32_array *)0x0) &&
           (pIVar18 = System_Collections_Specialized_OrderedDictionary__get_Item
                                ((System_Collections_Specialized_OrderedDictionary_o *)pSVar20,
                                 (Il2CppObject *)pSVar25,(MethodInfo *)0x0), pIVar18 != (Il2CppObject *)0x0))
        {
          bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
          pSVar20 = (System_Int32_array *)&MethodInfo_Boolean_MoveNext;
          if ((bVar4 <= (pIVar18->klass->_2).naturalAligment) &&
             ((pIVar18->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_BaseSetting)) {
            pIVar29 = pIVar18->klass;
            bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
            if ((bVar4 <= (pIVar29->_2).naturalAligment) &&
               ((pIVar29->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_BaseSetting)) goto label_0407842b;
          }
          goto label_04078b14;
        }
      }
      goto label_04078b0c;
    case 7:
      if ((*ppSVar14 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) &&
         (pSVar24 = (*ppSVar14)[3].klass,
         pSVar24 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__c *)0x0))
      goto label_04078467;
      goto label_04078b0c;
    case 8:
      if ((*ppSVar14 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) &&
         (plVar10 = (*ppSVar14)[3].monitor, plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        pSVar28 = *ppSVar14;
        goto joined_r0x04078033;
      }
      goto label_04078b0c;
    case 9:
      if ((*ppSVar14 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) ||
         (pvVar11 = (*ppSVar14)[3].monitor, pvVar11 == (void *)0x0)) goto label_04078b0c;
      pSVar20 = *(System_Int32_array **)((long)pvVar11 + 0x10);
      in_stack_ffffffffffffff30 = (Il2CppObject *)0xffffffffffffffff;
      iStack_c8 = (pWVar19->fields).Effect;
      in_stack_ffffffffffffff28 = TypeInfo_WeatherEffect;
      pSVar25 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff28,(MethodInfo *)0x0);
      if ((pSVar20 == (System_Int32_array *)0x0) ||
         (pIVar18 = System_Collections_Specialized_OrderedDictionary__get_Item
                              ((System_Collections_Specialized_OrderedDictionary_o *)pSVar20,
                               (Il2CppObject *)pSVar25,(MethodInfo *)0x0), pIVar18 == (Il2CppObject *)0x0))
      goto label_04078b0c;
      bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
      pSVar20 = (System_Int32_array *)&MethodInfo_Boolean_MoveNext;
      if (((pIVar18->klass->_2).naturalAligment < bVar4) ||
         ((pIVar18->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseSetting)) goto label_04078b14;
      pIVar29 = pIVar18->klass;
      bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
      if (((pIVar29->_2).naturalAligment < bVar4) ||
         ((pIVar29->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseSetting)) goto label_04078b14;
label_0407842b:
      (*pIVar29->vtable[4].methodPtr)(pIVar18,pIVar29->vtable[4].method);
      pSVar28 = *ppSVar14;
joined_r0x04078033:
      pSVar20 = (System_Int32_array *)&MethodInfo_Boolean_MoveNext;
      pWVar31 = pWVar19;
      if (pSVar28 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
      goto label_04078b0c;
label_04078810:
      *(undefined1 *)((long)&pSVar28[5].klass + 4) = 1;
      break;
    case 10:
      if ((*ppSVar14 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) ||
         (pSVar24 = (*ppSVar14)[3].monitor,
         pSVar24 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__c *)0x0))
      goto label_04078b0c;
label_04078467:
      __this_02 = (System_Collections_Specialized_OrderedDictionary_o *)(pSVar24->_1).name;
      in_stack_ffffffffffffff30 = (Il2CppObject *)0xffffffffffffffff;
      iStack_c8 = (pWVar19->fields).Effect;
      in_stack_ffffffffffffff28 = TypeInfo_WeatherEffect;
      pSVar25 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff28,(MethodInfo *)0x0);
      pSVar20 = (System_Int32_array *)0x0;
      if (__this_02 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_04078b0c;
      pSVar20 = (System_Int32_array *)
                System_Collections_Specialized_OrderedDictionary__get_Item
                          (__this_02,(Il2CppObject *)pSVar25,(MethodInfo *)0x0);
      iVar16 = Weather_WeatherEvent__GetSettingType(pWVar19,(MethodInfo *)0x0);
      pIVar18 = Weather_WeatherEvent__GetValue(pWVar19,(MethodInfo *)0x0);
      if (pSVar20 != (System_Int32_array *)0x0) {
        pIVar29 = (pSVar20->obj).klass;
        bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
        if (((pIVar29->_2).naturalAligment < bVar4) ||
           ((pIVar29->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseSetting)) goto label_04078b21;
      }
      Settings_SettingsUtil__SetSettingValue
                ((Settings_BaseSetting_o *)pSVar20,iVar16,pIVar18,(MethodInfo *)0x0);
      if (*ppSVar14 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
      goto label_04078b0c;
      *(undefined1 *)((long)&(*ppSVar14)[5].klass + 4) = 1;
      break;
    case 0xb:
      if ((*ppSVar14 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) ||
         (pSVar24 = (*ppSVar14)[4].klass,
         pSVar24 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__c *)0x0))
      goto label_04078b0c;
      System_Collections_Generic_Dictionary_int__float___Clear
                ((System_Collections_Generic_Dictionary_int__float__o *)pSVar24,MethodInfo_Void_Clear);
      if ((*ppSVar14 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) ||
         (pSVar12 = (*ppSVar14)[4].monitor,
         pSVar12 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto label_04078b0c;
      System_Collections_Generic_Dictionary_int__float___Clear(pSVar12,MethodInfo_Void_Clear);
      if (*ppSVar14 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
      goto label_04078b0c;
      fVar2 = *(float *)&(*ppSVar14)[5].klass;
      pIVar18 = Weather_WeatherEvent__GetValue(pWVar19,(MethodInfo *)0x0);
      if (pIVar18 == (Il2CppObject *)0x0) goto label_04078b0c;
      if ((pIVar18->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9be8 + 0x40)) goto label_04078b14;
      pfVar22 = (float *)il2cpp_runtime_helper_02305440(pIVar18);
      fVar3 = *pfVar22;
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_07 = Utility_Util__EnumToList_Int32Enum_(MethodInfo_List_1_Weather_WeatherEffect_EnumToList_WeatherEffect);
      if (__this_07 == (System_Collections_Generic_List_T__o *)0x0) goto label_04078b0c;
      System_Collections_Generic_List_Int32Enum___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff28,__this_07,
                 MethodInfo_List_1_T_Enumerator_Weather_WeatherEffect_GetEnumerator);
      auStack_b0._16_8_ = CONCAT44(uStack_c4,iStack_c8);
      auStack_b0._0_8_ = in_stack_ffffffffffffff28;
      auStack_b0._8_8_ = in_stack_ffffffffffffff30;
      while (__this_03.fields._8_8_ = in_stack_ffffffffffffff28,
            __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff20,
            __this_03.fields._current = in_stack_ffffffffffffff30,
            bVar15 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext
                               (__this_03,(MethodInfo_3216100 *)auStack_b0), (char)bVar15 != '\0') {
        pSVar28 = *ppSVar14;
        if (pSVar28 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
          pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
          goto label_04078b14;
        }
        if (pSVar28[4].klass == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__c *)0x0) {
          pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
          goto label_04078b14;
        }
        key = auStack_b0._16_4_;
        pWVar19 = (Weather_WeatherEvent_o *)(auStack_b0._16_8_ & 0xffffffff);
        System_Collections_Generic_Dictionary_int__float___Add
                  ((System_Collections_Generic_Dictionary_int__float__o *)pSVar28[4].klass,auStack_b0._16_4_,
                   *(float *)&pSVar28[5].klass,MethodInfo_Void_Add);
        if (*ppSVar14 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
          pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
          goto label_04078b14;
        }
        pSVar12 = (*ppSVar14)[4].monitor;
        if (pSVar12 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
          pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
          goto label_04078b14;
        }
        System_Collections_Generic_Dictionary_int__float___Add(pSVar12,key,fVar2 + fVar3,MethodInfo_Void_Add);
      }
      __this_04.fields._8_8_ = in_stack_ffffffffffffff28;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff20;
      __this_04.fields._current = in_stack_ffffffffffffff30;
      System_Collections_Generic_List_Enumerator_Int32Enum___Dispose
                (__this_04,(MethodInfo_32160F0 *)auStack_b0);
      pWVar31 = pWVar19;
      if (*ppSVar14 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
      goto label_04078b0c;
      *(undefined1 *)((long)&(*ppSVar14)[5].klass + 4) = 1;
      break;
    case 0xc:
      if ((*ppSVar14 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) ||
         (pSVar24 = (*ppSVar14)[4].klass,
         pSVar24 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__c *)0x0))
      goto label_04078b0c;
      bVar15 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                         ((System_Collections_Generic_Dictionary_int__float__o *)pSVar24,
                          (pWVar19->fields).Effect,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar15 == '\0') {
        if ((*ppSVar14 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) ||
           (pSVar24 = (*ppSVar14)[4].klass,
           pSVar24 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__c *)0x0))
        goto label_04078b0c;
        System_Collections_Generic_Dictionary_int__float___Add
                  ((System_Collections_Generic_Dictionary_int__float__o *)pSVar24,(pWVar19->fields).Effect,0.0
                   ,MethodInfo_Void_Add);
        if ((*ppSVar14 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) ||
           (pSVar12 = (*ppSVar14)[4].monitor,
           pSVar12 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto label_04078b0c;
        System_Collections_Generic_Dictionary_int__float___Add
                  (pSVar12,(pWVar19->fields).Effect,0.0,MethodInfo_Void_Add);
      }
      if ((*ppSVar14 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) &&
         (pSVar8 = (*ppSVar14)[3].fields._dictionary,
         pSVar8 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)) {
        pSVar20 = (pSVar8->fields)._buckets;
        in_stack_ffffffffffffff30 = (Il2CppObject *)0xffffffffffffffff;
        iStack_c8 = (pWVar19->fields).Effect;
        in_stack_ffffffffffffff28 = TypeInfo_WeatherEffect;
        pSVar25 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff28,(MethodInfo *)0x0);
        if (pSVar20 != (System_Int32_array *)0x0) {
          pIVar26 = System_Collections_Specialized_OrderedDictionary__get_Item
                              ((System_Collections_Specialized_OrderedDictionary_o *)pSVar20,
                               (Il2CppObject *)pSVar25,(MethodInfo *)0x0);
          if ((*ppSVar14 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) &&
             (pSVar24 = (*ppSVar14)[3].klass,
             pSVar24 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__c *)0x0)) {
            pSVar20 = (System_Int32_array *)(pSVar24->_1).name;
            auStack_b0._48_8_ = TypeInfo_WeatherEffect;
            pIStack_78 = (Il2CppRGCTXData *)0xffffffffffffffff;
            _Stack_70._0_4_ = (pWVar19->fields).Effect;
            pSVar25 = System_Enum__ToString((System_Enum_o *)(auStack_b0 + 0x30),(MethodInfo *)0x0);
            if (pSVar20 != (System_Int32_array *)0x0) {
              pIVar27 = (Il2CppType *)
                        System_Collections_Specialized_OrderedDictionary__get_Item
                                  ((System_Collections_Specialized_OrderedDictionary_o *)pSVar20,
                                   (Il2CppObject *)pSVar25,(MethodInfo *)0x0);
              if (pIVar27 != (Il2CppType *)0x0) {
                bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
                if (((pIVar27->data->_2).naturalAligment < bVar4) ||
                   ((pIVar27->data->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseSetting)) goto label_04078b29;
              }
              pSVar28 = *ppSVar14;
              if ((pSVar28 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) &&
                 (pSVar28[4].klass !=
                  (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__c *)0x0)) {
                auStack_b0._40_8_ = pIVar27;
                System_Collections_Generic_Dictionary_int__float___set_Item
                          ((System_Collections_Generic_Dictionary_int__float__o *)pSVar28[4].klass,
                           (pWVar19->fields).Effect,*(float *)&pSVar28[5].klass,MethodInfo_Void_set_Item);
                pSVar28 = *ppSVar14;
                pSVar20 = key_01;
                if (pSVar28 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
                  pSVar12 = pSVar28[4].monitor;
                  iVar16 = (pWVar19->fields).Effect;
                  fVar2 = *(float *)&pSVar28[5].klass;
                  pIVar18 = Weather_WeatherEvent__GetValue(pWVar19,(MethodInfo *)0x0);
                  if ((pSVar12 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) &&
                     (pIVar18 != (Il2CppObject *)0x0)) {
                    if ((pIVar18->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9be8 + 0x40)) {
                      pfVar22 = (float *)il2cpp_runtime_helper_02305440(pIVar18);
                      System_Collections_Generic_Dictionary_int__float___set_Item
                                (pSVar12,iVar16,fVar2 + *pfVar22,MethodInfo_Void_set_Item);
                      if (pIVar26 != (Il2CppObject *)0x0) {
                        bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
                        pIVar18 = pIVar26;
                        if ((bVar4 <= (pIVar26->klass->_2).naturalAligment) &&
                           ((pIVar26->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_BaseSetting)) {
                          pIVar29 = pIVar26->klass;
                          bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
                          pSVar20 = (System_Int32_array *)&MethodInfo_Boolean_MoveNext;
                          if ((bVar4 <= (pIVar29->_2).naturalAligment) &&
                             ((pIVar29->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_BaseSetting)) {
                            (*pIVar29->vtable[9].methodPtr)
                                      (pIVar26,auStack_b0._40_8_,pIVar29->vtable[9].method);
                            pSVar28 = *ppSVar14;
                            if (pSVar28 !=
                                (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
                            goto label_04078810;
                            goto label_04078b0c;
                          }
                        }
                        goto label_04078b14;
                      }
                      goto label_04078b0c;
                    }
                    goto label_04078b14;
                  }
                }
              }
            }
          }
        }
      }
      goto label_04078b0c;
    case 0xd:
      if (*ppSVar14 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
      goto label_04078b0c;
      pSVar20 = (*ppSVar14)[5].monitor;
      pIVar18 = Weather_WeatherEvent__GetValue(pWVar19,(MethodInfo *)0x0);
      if ((pSVar20 == (System_Int32_array *)0x0) || (pIVar18 == (Il2CppObject *)0x0)) goto label_04078b0c;
      if ((pIVar18->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9be8 + 0x40)) goto label_04078b14;
      pfVar22 = (float *)il2cpp_runtime_helper_02305440(pIVar18);
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar20,&key_01->obj,*pfVar22,
                 MethodInfo_Void_set_Item);
      auStack_b0._32_8_ = CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
      break;
    case 0xe:
      pWVar19 = (Weather_WeatherEvent_o *)Weather_WeatherEvent__GetValue(pWVar19,(MethodInfo *)0x0);
      if ((pWVar19 != (Weather_WeatherEvent_o *)0x0) && ((Il2CppClass *)pWVar19->klass != g_data_057b9c00))
      goto label_04078b19;
      bVar15 = System_String__op_Inequality((System_String_o *)pWVar19,"NextLine",(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        pWVar31 = pWVar19;
        if (*(System_Collections_Generic_Dictionary_object__int__o **)key_01->m_Items ==
            (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto label_04078b0c;
        bVar15 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                           (*(System_Collections_Generic_Dictionary_object__int__o **)key_01->m_Items,
                            (Il2CppObject *)pWVar19,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar15 != '\0') {
          if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)key_01->max_length ==
              (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_04078b0c;
          System_Collections_Generic_LinkedList_int___AddLast
                    ((System_Collections_Generic_LinkedList_int__o *)key_01->max_length,
                     *(int32_t *)
                      &((System_Collections_Generic_Dictionary_int__int__Fields *)&key_01->bounds)->_buckets,
                     MethodInfo_LinkedListNode_1_System_Int32_AddLast);
          pSVar9 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)key_01->max_length;
          if (pSVar9 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_04078b0c;
          if (200 < (int)pSVar9->max_length) {
            System_Collections_Generic_LinkedList_int___RemoveFirst
                      ((System_Collections_Generic_LinkedList_int__o *)pSVar9,MethodInfo_Void_RemoveFirst);
          }
          if (*(System_Collections_Generic_Dictionary_object__int__o **)key_01->m_Items ==
              (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto label_04078b0c;
          iVar16 = System_Collections_Generic_Dictionary_object__int___get_Item
                             (*(System_Collections_Generic_Dictionary_object__int__o **)key_01->m_Items,
                              (Il2CppObject *)pWVar19,MethodInfo_Int32_get_Item);
          *(int32_t *)&((System_Collections_Generic_Dictionary_int__int__Fields *)&key_01->bounds)->_buckets =
               iVar16;
        }
      }
      break;
    case 0x10:
      pSVar9 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)key_01->max_length;
      if (pSVar9 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_04078b0c;
      if (0 < (int)pSVar9->max_length) {
        pSVar23 = System_Collections_Generic_LinkedList_int___get_Last
                            ((System_Collections_Generic_LinkedList_int__o *)pSVar9,MethodInfo_LinkedListNode_1_System_Int32_get_Last);
        if (pSVar23 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) goto label_04078b0c;
        *(undefined4 *)&((System_Collections_Generic_Dictionary_int__int__Fields *)&key_01->bounds)->_buckets
             = *(undefined4 *)&(pSVar23->fields).item;
        if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)key_01->max_length ==
            (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_04078b0c;
        System_Collections_Generic_LinkedList_int___RemoveLast
                  ((System_Collections_Generic_LinkedList_int__o *)key_01->max_length,MethodInfo_Void_RemoveLast);
      }
    }
    iVar17 = *(int *)&((System_Collections_Generic_Dictionary_int__int__Fields *)&key_01->bounds)->_buckets +
             1;
    *(int *)&((System_Collections_Generic_Dictionary_int__int__Fields *)&key_01->bounds)->_buckets = iVar17;
    pWVar31 = pWVar19;
    pSVar20 = (System_Int32_array *)&MethodInfo_Boolean_MoveNext;
    if ((*(System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o **)(key_01->m_Items + 8) ==
         (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) ||
       (pSVar8 = ((*(System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o **)
                    (key_01->m_Items + 8))->fields)._dictionary,
       pSVar8 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)) goto label_04078b0c;
    if (*(int *)&(pSVar8->fields)._entries <= iVar17) {
      if (((*ppSVar14 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) ||
          (pSVar24 = (*ppSVar14)[3].klass,
          pSVar24 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__c *)0x0)) ||
         (ppIVar13 = (pSVar24->_2).typeHierarchy, ppIVar13 == (Il2CppClass **)0x0)) goto label_04078b0c;
      if (*(char *)((long)ppIVar13 + 0x11) != '\0') {
        *(undefined4 *)&((System_Collections_Generic_Dictionary_int__int__Fields *)&key_01->bounds)->_buckets
             = 0;
      }
    }
    iVar30 = iVar30 + 1;
    if ((auStack_b0._32_8_ & 1) != 0) {
      return;
    }
  } while (iVar30 != 200);
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ApplicationManagers_DebugConsole__Log("Weather schedule reached max usage (did you forget to use waits?)",1,(MethodInfo *)0x0);
  pSVar20 = (System_Int32_array *)&MethodInfo_Boolean_MoveNext;
  if ((*(System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o **)(key_01->m_Items + 8) !=
       (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) &&
     (pSVar8 = ((*(System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o **)
                  (key_01->m_Items + 8))->fields)._dictionary,
     pSVar8 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)) {
    piVar1 = (int *)((long)&(pSVar8->fields)._entries + 4);
    *piVar1 = *piVar1 + 1;
    iVar16 = *(int32_t *)&(pSVar8->fields)._entries;
    *(undefined4 *)&(pSVar8->fields)._entries = 0;
    if (0 < iVar16) {
      System_Array__Clear((System_Array_o *)(pSVar8->fields)._buckets,0,iVar16,(MethodInfo *)0x0);
    }
    return;
  }
label_04078b0c:
  pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  pWVar19 = pWVar31;
label_04078b14:
  il2cpp_runtime_helper_022b2fd0(pIVar18);
label_04078b19:
  il2cpp_runtime_helper_022b2fd0(pWVar19);
label_04078b21:
  il2cpp_runtime_helper_022b2fd0(pSVar20);
  pIVar27 = extraout_RDX;
label_04078b29:
  il2cpp_runtime_helper_022b2fd0(pIVar27);
  __this_05.fields._8_8_ = in_stack_ffffffffffffff28;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff20;
  __this_05.fields._current = in_stack_ffffffffffffff30;
  System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(__this_05,(MethodInfo_32160F0 *)auStack_b0);
  _Unwind_Resume(pWVar19);
label_04077a80:
  do {
    iVar30 = (int)pWVar31;
    if ((pSVar32->fields)._size <= iVar30) {
      return;
    }
    pSStack_40 = (System_Int32_array *)0x4077a94;
    __this_06 = (Weather_WeatherEvent_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar32,iVar30,MethodInfo_WeatherEvent_get_Item);
    if (__this_06 == (Weather_WeatherEvent_o *)0x0) break;
    iVar17 = (__this_06->fields).Action;
    if (iVar17 == 3) {
      pSVar7 = (__this->fields)._repeatCurrentCounts;
      if (pSVar7 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) break;
      pSStack_40 = (System_Int32_array *)0x4077b46;
      System_Collections_Generic_Dictionary_int__int___Add(pSVar7,iVar30,0,MethodInfo_Void_Add);
      pWVar5 = (__this->fields).Schedule;
      pWVar19 = pWVar31;
    }
    else {
      if (iVar17 == 0xf) {
        pSStack_40 = (System_Int32_array *)0x4077abc;
        pSVar20 = (System_Int32_array *)Weather_WeatherEvent__GetValue(__this_06,(MethodInfo *)0x0);
        if ((pSVar20 != (System_Int32_array *)0x0) && ((pSVar20->obj).klass != g_data_057b9c00)) {
          pSStack_40 = (System_Int32_array *)0x4077bc5;
          key_01 = pSVar20;
          il2cpp_runtime_helper_022b2fd0();
          ppMStack_58 = &MethodInfo_Void_Add;
          ppMStack_60 = &MethodInfo_WeatherEvent_get_Item;
          pWStack_68 = pWVar31;
          pWStack_50 = __this;
          pWStack_48 = pWVar19;
          pSStack_40 = pSVar20;
          if (g_data_057ac32d == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
            il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
            il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherEffect_get_Current);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
            il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_System_Int32_AddLast);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveFirst);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveLast);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_System_Int32_get_Last);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Weather_WeatherEffect_GetEnumerator);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherEvent_get_Item);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherEffect_EnumToList_WeatherEffect);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
            il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherEffect);
            il2cpp_runtime_helper_023445d0(&"Weather schedule reached max usage (did you forget to use waits?)");
            il2cpp_runtime_helper_023445d0(&"NextLine");
            g_data_057ac32d = '\x01';
          }
          auStack_b0._0_8_ = (System_Enum_c *)0x0;
          auStack_b0._8_8_ = (Il2CppObject *)0x0;
          auStack_b0._16_8_ = (InvokerMethod)0x0;
          ppSVar14 = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o **)
                     (key_01->m_Items + 6);
          iVar30 = 0;
          auStack_b0._32_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
          goto label_04077e3c;
        }
        pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields)._scheduleLabels;
        if (pSVar6 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) break;
        pSStack_40 = (System_Int32_array *)0x4077afb;
        bVar15 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                           (pSVar6,(Il2CppObject *)pSVar20,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar15 == '\0') {
          pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields)._scheduleLabels;
          if (pSVar6 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
            pSStack_40 = (System_Int32_array *)0x4077b24;
            System_Collections_Generic_Dictionary_object__int___Add
                      (pSVar6,(Il2CppObject *)pSVar20,iVar30,MethodInfo_Void_Add);
            pWVar5 = (__this->fields).Schedule;
            goto joined_r0x04077b50;
          }
          break;
        }
      }
      else if ((-1 < (int)pWVar19) && (iVar17 == 4)) {
        pSVar7 = (__this->fields)._repeatStartLines;
        if (pSVar7 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) break;
        pSStack_40 = (System_Int32_array *)0x4077b81;
        System_Collections_Generic_Dictionary_int__int___Add(pSVar7,iVar30,(int)pWVar19,MethodInfo_Void_Add);
        pWVar19 = (Weather_WeatherEvent_o *)&g_data_ffffffff;
      }
      pWVar5 = (__this->fields).Schedule;
    }
joined_r0x04077b50:
    if (pWVar5 == (Weather_WeatherSchedule_o *)0x0) break;
    pWVar31 = (Weather_WeatherEvent_o *)(ulong)(iVar30 + 1);
    pSVar32 = (pWVar5->fields).Events;
  } while (pSVar32 != (System_Collections_Generic_List_WeatherEvent__o *)0x0);
label_04077ba9:
  pSStack_40 = (System_Int32_array *)0x4077bae;
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Weather.WeatherScheduleRunner$$ConsumeSchedule
// il2cpp: void Weather_WeatherScheduleRunner__ConsumeSchedule (Weather_WeatherScheduleRunner_o* __this, const MethodInfo* method);
// 0x4077bd0

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
  System_Collections_Generic_LinkedList_int__o *pSVar7;
  System_Collections_Generic_Dictionary_object__int__o *pSVar8;
  System_Collections_Generic_Dictionary_int__int__o *pSVar9;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  System_Collections_Generic_Dictionary_int__float__o *pSVar10;
  Settings_BoolSetting_o *pSVar11;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  bool_conflict bVar12;
  int32_t iVar13;
  uint key;
  int iVar14;
  Weather_WeatherEvent_o *__this_04;
  int32_t *piVar15;
  float *pfVar16;
  undefined8 extraout_RAX;
  System_Collections_Generic_LinkedListNode_T__o *pSVar17;
  Settings_WeatherSet_o *pSVar18;
  System_String_o *pSVar19;
  Il2CppObject *pIVar20;
  Il2CppType *pIVar21;
  Weather_WeatherManager_o *pWVar22;
  System_Collections_Generic_List_T__o *__this_05;
  Il2CppObject *pIVar23;
  Il2CppClass *pIVar24;
  Il2CppType *extraout_RDX;
  Weather_WeatherEvent_o *unaff_RBX;
  System_Collections_Generic_Dictionary_int__int__o *__this_06;
  int iVar25;
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
  _union_249663 local_38;
  
  if (g_data_057ac32d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherEffect_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_System_Int32_AddLast);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveFirst);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveLast);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_System_Int32_get_Last);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Weather_WeatherEffect_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherEvent_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherEffect_EnumToList_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&"Weather schedule reached max usage (did you forget to use waits?)");
    il2cpp_runtime_helper_023445d0(&"NextLine");
    g_data_057ac32d = '\x01';
  }
  local_78 = (System_Enum_c *)0x0;
  pIStack_70 = (Il2CppObject *)0x0;
  local_68 = (InvokerMethod)0x0;
  ppWVar1 = &(__this->fields)._manager;
  iVar25 = 0;
  local_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  do {
    __this_06 = (System_Collections_Generic_Dictionary_int__int__o *)&MethodInfo_Boolean_MoveNext;
    pWVar5 = (__this->fields).Schedule;
    if ((pWVar5 == (Weather_WeatherSchedule_o *)0x0) ||
       (pSVar6 = (pWVar5->fields).Events, pSVar6 == (System_Collections_Generic_List_WeatherEvent__o *)0x0))
    goto label_04078b0c;
    iVar14 = (pSVar6->fields)._size;
    if (iVar14 == 0) {
      return;
    }
    index = (__this->fields)._currentScheduleLine;
    if (index < 0) {
      return;
    }
    if (iVar14 <= index) {
      return;
    }
    __this_04 = (Weather_WeatherEvent_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar6,index,MethodInfo_WeatherEvent_get_Item);
    if (__this_04 == (Weather_WeatherEvent_o *)0x0) goto label_04078b0c;
    unaff_RBX = __this_04;
    switch((__this_04->fields).Action) {
    case 3:
      __this_06 = (__this->fields)._repeatCurrentCounts;
      iVar13 = (__this->fields)._currentScheduleLine;
      pIVar23 = Weather_WeatherEvent__GetValue(__this_04,(MethodInfo *)0x0);
      if ((__this_06 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
         (pIVar23 == (Il2CppObject *)0x0)) goto label_04078b0c;
      if ((pIVar23->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9bb8 + 0x40)) goto label_04078b14;
      piVar15 = (int32_t *)il2cpp_runtime_helper_02305440(pIVar23);
      System_Collections_Generic_Dictionary_int__int___set_Item(__this_06,iVar13,*piVar15,MethodInfo_Void_set_Item);
      break;
    case 4:
      pSVar9 = (__this->fields)._repeatStartLines;
      if (pSVar9 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_04078b0c;
      key = System_Collections_Generic_Dictionary_int__int___get_Item
                      (pSVar9,(__this->fields)._currentScheduleLine,MethodInfo_Int32_get_Item);
      pSVar9 = (__this->fields)._repeatCurrentCounts;
      if (pSVar9 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_04078b0c;
      __this_04 = (Weather_WeatherEvent_o *)(ulong)key;
      bVar12 = System_Collections_Generic_Dictionary_int__int___ContainsKey(pSVar9,key,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar12 != '\0') {
        pSVar9 = (__this->fields)._repeatCurrentCounts;
        unaff_RBX = __this_04;
        if (pSVar9 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_04078b0c;
        iVar13 = System_Collections_Generic_Dictionary_int__int___get_Item(pSVar9,key,MethodInfo_Int32_get_Item);
        if (0 < iVar13) {
          (__this->fields)._currentScheduleLine = key + 1;
          pSVar9 = (__this->fields)._repeatCurrentCounts;
          __this_06 = (System_Collections_Generic_Dictionary_int__int__o *)0x0;
          if (pSVar9 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_04078b0c;
          iVar13 = System_Collections_Generic_Dictionary_int__int___get_Item(pSVar9,key,MethodInfo_Int32_get_Item);
          System_Collections_Generic_Dictionary_int__int___set_Item(pSVar9,key,iVar13 + -1,MethodInfo_Void_set_Item);
        }
      }
      break;
    case 5:
      if (((*ppWVar1 != (Weather_WeatherManager_o *)0x0) &&
          (pSVar18 = ((*ppWVar1)->fields)._currentWeather, pSVar18 != (Settings_WeatherSet_o *)0x0)) &&
         (pSVar11 = (pSVar18->fields).ScheduleLoop, pSVar11 != (Settings_BoolSetting_o *)0x0)) {
        bVar4 = *(byte *)((long)&(pSVar11->fields).DefaultValue + 1);
        __this_04 = (Weather_WeatherEvent_o *)(ulong)bVar4;
        (*(pSVar18->klass->vtable)._4_SetDefault.methodPtr)
                  (pSVar18,(pSVar18->klass->vtable)._4_SetDefault.method);
        unaff_RBX = __this_04;
        if (((*ppWVar1 != (Weather_WeatherManager_o *)0x0) &&
            (pSVar18 = ((*ppWVar1)->fields)._currentWeather, pSVar18 != (Settings_WeatherSet_o *)0x0)) &&
           (pSVar11 = (pSVar18->fields).UseSchedule, pSVar11 != (Settings_BoolSetting_o *)0x0)) {
          Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)pSVar11,1,MethodInfo_Void_set_Value);
          if (((*ppWVar1 != (Weather_WeatherManager_o *)0x0) &&
              (pSVar18 = ((*ppWVar1)->fields)._currentWeather, pSVar18 != (Settings_WeatherSet_o *)0x0)) &&
             (pSVar11 = (pSVar18->fields).ScheduleLoop, pSVar11 != (Settings_BoolSetting_o *)0x0)) {
            Settings_TypedSetting_bool___set_Value
                      ((Settings_TypedSetting_bool__o *)pSVar11,(uint)bVar4,MethodInfo_Void_set_Value);
            pWVar22 = *ppWVar1;
            goto joined_r0x04078033;
          }
        }
      }
      goto label_04078b0c;
    case 6:
      if ((*ppWVar1 != (Weather_WeatherManager_o *)0x0) &&
         (pSVar18 = ((*ppWVar1)->fields)._currentWeather, pSVar18 != (Settings_WeatherSet_o *)0x0)) {
        __this_06 = (System_Collections_Generic_Dictionary_int__int__o *)(pSVar18->fields).Settings;
        in_stack_ffffffffffffff68 = (Il2CppObject *)0xffffffffffffffff;
        local_90 = (__this_04->fields).Effect;
        in_stack_ffffffffffffff60 = TypeInfo_WeatherEffect;
        pSVar19 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff60,(MethodInfo *)0x0);
        if ((__this_06 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) &&
           (pIVar23 = System_Collections_Specialized_OrderedDictionary__get_Item
                                ((System_Collections_Specialized_OrderedDictionary_o *)__this_06,
                                 (Il2CppObject *)pSVar19,(MethodInfo *)0x0), pIVar23 != (Il2CppObject *)0x0))
        {
          bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
          __this_06 = (System_Collections_Generic_Dictionary_int__int__o *)&MethodInfo_Boolean_MoveNext;
          if ((bVar4 <= (pIVar23->klass->_2).naturalAligment) &&
             ((pIVar23->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_BaseSetting)) {
            pIVar24 = pIVar23->klass;
            bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
            if ((bVar4 <= (pIVar24->_2).naturalAligment) &&
               ((pIVar24->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_BaseSetting)) goto label_0407842b;
          }
          goto label_04078b14;
        }
      }
      goto label_04078b0c;
    case 7:
      if ((*ppWVar1 != (Weather_WeatherManager_o *)0x0) &&
         (pSVar18 = ((*ppWVar1)->fields)._currentWeather, pSVar18 != (Settings_WeatherSet_o *)0x0))
      goto label_04078467;
      goto label_04078b0c;
    case 8:
      if ((*ppWVar1 != (Weather_WeatherManager_o *)0x0) &&
         (pSVar18 = ((*ppWVar1)->fields)._targetWeather, pSVar18 != (Settings_WeatherSet_o *)0x0)) {
        (*(pSVar18->klass->vtable)._4_SetDefault.methodPtr)
                  (pSVar18,(pSVar18->klass->vtable)._4_SetDefault.method);
        pWVar22 = *ppWVar1;
        goto joined_r0x04078033;
      }
      goto label_04078b0c;
    case 9:
      if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar18 = ((*ppWVar1)->fields)._targetWeather, pSVar18 == (Settings_WeatherSet_o *)0x0))
      goto label_04078b0c;
      __this_06 = (System_Collections_Generic_Dictionary_int__int__o *)(pSVar18->fields).Settings;
      in_stack_ffffffffffffff68 = (Il2CppObject *)0xffffffffffffffff;
      local_90 = (__this_04->fields).Effect;
      in_stack_ffffffffffffff60 = TypeInfo_WeatherEffect;
      pSVar19 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff60,(MethodInfo *)0x0);
      if ((__this_06 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
         (pIVar23 = System_Collections_Specialized_OrderedDictionary__get_Item
                              ((System_Collections_Specialized_OrderedDictionary_o *)__this_06,
                               (Il2CppObject *)pSVar19,(MethodInfo *)0x0), pIVar23 == (Il2CppObject *)0x0))
      goto label_04078b0c;
      bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
      __this_06 = (System_Collections_Generic_Dictionary_int__int__o *)&MethodInfo_Boolean_MoveNext;
      if (((pIVar23->klass->_2).naturalAligment < bVar4) ||
         ((pIVar23->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseSetting)) goto label_04078b14;
      pIVar24 = pIVar23->klass;
      bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
      if (((pIVar24->_2).naturalAligment < bVar4) ||
         ((pIVar24->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseSetting)) goto label_04078b14;
label_0407842b:
      (*pIVar24->vtable[4].methodPtr)(pIVar23,pIVar24->vtable[4].method);
      pWVar22 = *ppWVar1;
joined_r0x04078033:
      __this_06 = (System_Collections_Generic_Dictionary_int__int__o *)&MethodInfo_Boolean_MoveNext;
      unaff_RBX = __this_04;
      if (pWVar22 == (Weather_WeatherManager_o *)0x0) goto label_04078b0c;
label_04078810:
      *(undefined1 *)&(pWVar22->fields)._needSync = 1;
      break;
    case 10:
      if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar18 = ((*ppWVar1)->fields)._targetWeather, pSVar18 == (Settings_WeatherSet_o *)0x0))
      goto label_04078b0c;
label_04078467:
      __this_00 = (pSVar18->fields).Settings;
      in_stack_ffffffffffffff68 = (Il2CppObject *)0xffffffffffffffff;
      local_90 = (__this_04->fields).Effect;
      in_stack_ffffffffffffff60 = TypeInfo_WeatherEffect;
      pSVar19 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff60,(MethodInfo *)0x0);
      __this_06 = (System_Collections_Generic_Dictionary_int__int__o *)0x0;
      if (__this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_04078b0c;
      __this_06 = (System_Collections_Generic_Dictionary_int__int__o *)
                  System_Collections_Specialized_OrderedDictionary__get_Item
                            (__this_00,(Il2CppObject *)pSVar19,(MethodInfo *)0x0);
      iVar13 = Weather_WeatherEvent__GetSettingType(__this_04,(MethodInfo *)0x0);
      pIVar23 = Weather_WeatherEvent__GetValue(__this_04,(MethodInfo *)0x0);
      if (__this_06 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
        bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
        if (((__this_06->klass->_2).naturalAligment < bVar4) ||
           ((__this_06->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseSetting)) goto label_04078b21;
      }
      Settings_SettingsUtil__SetSettingValue
                ((Settings_BaseSetting_o *)__this_06,iVar13,pIVar23,(MethodInfo *)0x0);
      if (*ppWVar1 == (Weather_WeatherManager_o *)0x0) goto label_04078b0c;
      *(undefined1 *)&((*ppWVar1)->fields)._needSync = 1;
      break;
    case 0xb:
      if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar10 = ((*ppWVar1)->fields)._targetWeatherStartTimes,
         pSVar10 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto label_04078b0c;
      System_Collections_Generic_Dictionary_int__float___Clear(pSVar10,MethodInfo_Void_Clear);
      if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar10 = ((*ppWVar1)->fields)._targetWeatherEndTimes,
         pSVar10 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto label_04078b0c;
      System_Collections_Generic_Dictionary_int__float___Clear(pSVar10,MethodInfo_Void_Clear);
      if (*ppWVar1 == (Weather_WeatherManager_o *)0x0) goto label_04078b0c;
      fVar2 = ((*ppWVar1)->fields)._currentTime;
      pIVar23 = Weather_WeatherEvent__GetValue(__this_04,(MethodInfo *)0x0);
      if (pIVar23 == (Il2CppObject *)0x0) goto label_04078b0c;
      if ((pIVar23->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9be8 + 0x40)) goto label_04078b14;
      pfVar16 = (float *)il2cpp_runtime_helper_02305440(pIVar23);
      fVar3 = *pfVar16;
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_05 = Utility_Util__EnumToList_Int32Enum_(MethodInfo_List_1_Weather_WeatherEffect_EnumToList_WeatherEffect);
      if (__this_05 == (System_Collections_Generic_List_T__o *)0x0) goto label_04078b0c;
      System_Collections_Generic_List_Int32Enum___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff60,__this_05,
                 MethodInfo_List_1_T_Enumerator_Weather_WeatherEffect_GetEnumerator);
      local_68 = (InvokerMethod)CONCAT44(uStack_8c,local_90);
      local_78 = in_stack_ffffffffffffff60;
      pIStack_70 = in_stack_ffffffffffffff68;
      while (__this_01.fields._8_8_ = in_stack_ffffffffffffff60,
            __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff58,
            __this_01.fields._current = in_stack_ffffffffffffff68,
            bVar12 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext
                               (__this_01,(MethodInfo_3216100 *)&local_78), (char)bVar12 != '\0') {
        pWVar22 = *ppWVar1;
        if (pWVar22 == (Weather_WeatherManager_o *)0x0) {
          pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
          goto label_04078b14;
        }
        pSVar10 = (pWVar22->fields)._targetWeatherStartTimes;
        if (pSVar10 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
          pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
          goto label_04078b14;
        }
        iVar13 = (int32_t)local_68;
        __this_04 = (Weather_WeatherEvent_o *)((ulong)local_68 & 0xffffffff);
        System_Collections_Generic_Dictionary_int__float___Add
                  (pSVar10,(int32_t)local_68,(pWVar22->fields)._currentTime,MethodInfo_Void_Add);
        if (*ppWVar1 == (Weather_WeatherManager_o *)0x0) {
          pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
          goto label_04078b14;
        }
        pSVar10 = ((*ppWVar1)->fields)._targetWeatherEndTimes;
        if (pSVar10 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
          pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
          goto label_04078b14;
        }
        System_Collections_Generic_Dictionary_int__float___Add(pSVar10,iVar13,fVar2 + fVar3,MethodInfo_Void_Add);
      }
      __this_02.fields._8_8_ = in_stack_ffffffffffffff60;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff58;
      __this_02.fields._current = in_stack_ffffffffffffff68;
      System_Collections_Generic_List_Enumerator_Int32Enum___Dispose
                (__this_02,(MethodInfo_32160F0 *)&local_78);
      unaff_RBX = __this_04;
      if (*ppWVar1 == (Weather_WeatherManager_o *)0x0) goto label_04078b0c;
      *(undefined1 *)&((*ppWVar1)->fields)._needSync = 1;
      break;
    case 0xc:
      if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar10 = ((*ppWVar1)->fields)._targetWeatherStartTimes,
         pSVar10 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto label_04078b0c;
      bVar12 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                         (pSVar10,(__this_04->fields).Effect,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar12 == '\0') {
        if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
           (pSVar10 = ((*ppWVar1)->fields)._targetWeatherStartTimes,
           pSVar10 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto label_04078b0c;
        System_Collections_Generic_Dictionary_int__float___Add
                  (pSVar10,(__this_04->fields).Effect,0.0,MethodInfo_Void_Add);
        if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
           (pSVar10 = ((*ppWVar1)->fields)._targetWeatherEndTimes,
           pSVar10 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto label_04078b0c;
        System_Collections_Generic_Dictionary_int__float___Add
                  (pSVar10,(__this_04->fields).Effect,0.0,MethodInfo_Void_Add);
      }
      if ((*ppWVar1 != (Weather_WeatherManager_o *)0x0) &&
         (pSVar18 = ((*ppWVar1)->fields)._startWeather, pSVar18 != (Settings_WeatherSet_o *)0x0)) {
        __this_06 = (System_Collections_Generic_Dictionary_int__int__o *)(pSVar18->fields).Settings;
        in_stack_ffffffffffffff68 = (Il2CppObject *)0xffffffffffffffff;
        local_90 = (__this_04->fields).Effect;
        in_stack_ffffffffffffff60 = TypeInfo_WeatherEffect;
        pSVar19 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff60,(MethodInfo *)0x0);
        if (__this_06 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
          pIVar20 = System_Collections_Specialized_OrderedDictionary__get_Item
                              ((System_Collections_Specialized_OrderedDictionary_o *)__this_06,
                               (Il2CppObject *)pSVar19,(MethodInfo *)0x0);
          if ((*ppWVar1 != (Weather_WeatherManager_o *)0x0) &&
             (pSVar18 = ((*ppWVar1)->fields)._currentWeather, pSVar18 != (Settings_WeatherSet_o *)0x0)) {
            __this_06 = (System_Collections_Generic_Dictionary_int__int__o *)(pSVar18->fields).Settings;
            local_48.klass = TypeInfo_WeatherEffect;
            local_48.monitor = (Il2CppRGCTXData *)0xffffffffffffffff;
            local_38._0_4_ = (__this_04->fields).Effect;
            pSVar19 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
            if (__this_06 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
              pIVar21 = (Il2CppType *)
                        System_Collections_Specialized_OrderedDictionary__get_Item
                                  ((System_Collections_Specialized_OrderedDictionary_o *)__this_06,
                                   (Il2CppObject *)pSVar19,(MethodInfo *)0x0);
              if (pIVar21 != (Il2CppType *)0x0) {
                bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
                if (((pIVar21->data->_2).naturalAligment < bVar4) ||
                   ((pIVar21->data->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseSetting)) goto label_04078b29;
              }
              pWVar22 = *ppWVar1;
              if ((pWVar22 != (Weather_WeatherManager_o *)0x0) &&
                 (pSVar10 = (pWVar22->fields)._targetWeatherStartTimes,
                 pSVar10 != (System_Collections_Generic_Dictionary_int__float__o *)0x0)) {
                local_50 = pIVar21;
                System_Collections_Generic_Dictionary_int__float___set_Item
                          (pSVar10,(__this_04->fields).Effect,(pWVar22->fields)._currentTime,MethodInfo_Void_set_Item);
                pWVar22 = *ppWVar1;
                __this_06 = (System_Collections_Generic_Dictionary_int__int__o *)__this;
                if (pWVar22 != (Weather_WeatherManager_o *)0x0) {
                  pSVar10 = (pWVar22->fields)._targetWeatherEndTimes;
                  iVar13 = (__this_04->fields).Effect;
                  fVar2 = (pWVar22->fields)._currentTime;
                  pIVar23 = Weather_WeatherEvent__GetValue(__this_04,(MethodInfo *)0x0);
                  if ((pSVar10 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) &&
                     (pIVar23 != (Il2CppObject *)0x0)) {
                    if ((pIVar23->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9be8 + 0x40)) {
                      pfVar16 = (float *)il2cpp_runtime_helper_02305440(pIVar23);
                      System_Collections_Generic_Dictionary_int__float___set_Item
                                (pSVar10,iVar13,fVar2 + *pfVar16,MethodInfo_Void_set_Item);
                      if (pIVar20 != (Il2CppObject *)0x0) {
                        bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
                        pIVar23 = pIVar20;
                        if ((bVar4 <= (pIVar20->klass->_2).naturalAligment) &&
                           ((pIVar20->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_BaseSetting)) {
                          pIVar24 = pIVar20->klass;
                          bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
                          __this_06 = (System_Collections_Generic_Dictionary_int__int__o *)&MethodInfo_Boolean_MoveNext;
                          if ((bVar4 <= (pIVar24->_2).naturalAligment) &&
                             ((pIVar24->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_BaseSetting)) {
                            (*pIVar24->vtable[9].methodPtr)(pIVar20,local_50,pIVar24->vtable[9].method);
                            pWVar22 = *ppWVar1;
                            if (pWVar22 != (Weather_WeatherManager_o *)0x0) goto label_04078810;
                            goto label_04078b0c;
                          }
                        }
                        goto label_04078b14;
                      }
                      goto label_04078b0c;
                    }
                    goto label_04078b14;
                  }
                }
              }
            }
          }
        }
      }
      goto label_04078b0c;
    case 0xd:
      if (*ppWVar1 == (Weather_WeatherManager_o *)0x0) goto label_04078b0c;
      __this_06 = (System_Collections_Generic_Dictionary_int__int__o *)
                  ((*ppWVar1)->fields)._currentScheduleWait;
      pIVar23 = Weather_WeatherEvent__GetValue(__this_04,(MethodInfo *)0x0);
      if ((__this_06 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
         (pIVar23 == (Il2CppObject *)0x0)) goto label_04078b0c;
      if ((pIVar23->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9be8 + 0x40)) goto label_04078b14;
      pfVar16 = (float *)il2cpp_runtime_helper_02305440(pIVar23);
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06,(Il2CppObject *)__this,
                 *pfVar16,MethodInfo_Void_set_Item);
      local_58 = (System_Collections_Generic_List_Enumerator_T__c *)
                 CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
      break;
    case 0xe:
      __this_04 = (Weather_WeatherEvent_o *)Weather_WeatherEvent__GetValue(__this_04,(MethodInfo *)0x0);
      if ((__this_04 != (Weather_WeatherEvent_o *)0x0) && (__this_04->klass != g_data_057b9c00))
      goto label_04078b19;
      bVar12 = System_String__op_Inequality((System_String_o *)__this_04,"NextLine",(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        pSVar8 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields)._scheduleLabels;
        unaff_RBX = __this_04;
        if (pSVar8 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto label_04078b0c;
        bVar12 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                           (pSVar8,(Il2CppObject *)__this_04,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar12 != '\0') {
          pSVar7 = (__this->fields)._callerStack;
          if (pSVar7 == (System_Collections_Generic_LinkedList_int__o *)0x0) goto label_04078b0c;
          System_Collections_Generic_LinkedList_int___AddLast
                    (pSVar7,(__this->fields)._currentScheduleLine,MethodInfo_LinkedListNode_1_System_Int32_AddLast);
          pSVar7 = (__this->fields)._callerStack;
          if (pSVar7 == (System_Collections_Generic_LinkedList_int__o *)0x0) goto label_04078b0c;
          if (200 < (pSVar7->fields).count) {
            System_Collections_Generic_LinkedList_int___RemoveFirst(pSVar7,MethodInfo_Void_RemoveFirst);
          }
          pSVar8 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields)._scheduleLabels;
          if (pSVar8 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto label_04078b0c;
          iVar13 = System_Collections_Generic_Dictionary_object__int___get_Item
                             (pSVar8,(Il2CppObject *)__this_04,MethodInfo_Int32_get_Item);
          (__this->fields)._currentScheduleLine = iVar13;
        }
      }
      break;
    case 0x10:
      pSVar7 = (__this->fields)._callerStack;
      if (pSVar7 == (System_Collections_Generic_LinkedList_int__o *)0x0) goto label_04078b0c;
      if (0 < (pSVar7->fields).count) {
        pSVar17 = System_Collections_Generic_LinkedList_int___get_Last(pSVar7,MethodInfo_LinkedListNode_1_System_Int32_get_Last);
        if (pSVar17 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) goto label_04078b0c;
        (__this->fields)._currentScheduleLine = *(int32_t *)&(pSVar17->fields).item;
        pSVar7 = (__this->fields)._callerStack;
        if (pSVar7 == (System_Collections_Generic_LinkedList_int__o *)0x0) goto label_04078b0c;
        System_Collections_Generic_LinkedList_int___RemoveLast(pSVar7,MethodInfo_Void_RemoveLast);
      }
    }
    iVar14 = (__this->fields)._currentScheduleLine + 1;
    (__this->fields)._currentScheduleLine = iVar14;
    pWVar5 = (__this->fields).Schedule;
    unaff_RBX = __this_04;
    __this_06 = (System_Collections_Generic_Dictionary_int__int__o *)&MethodInfo_Boolean_MoveNext;
    if ((pWVar5 == (Weather_WeatherSchedule_o *)0x0) ||
       (pSVar6 = (pWVar5->fields).Events, pSVar6 == (System_Collections_Generic_List_WeatherEvent__o *)0x0))
    goto label_04078b0c;
    if ((pSVar6->fields)._size <= iVar14) {
      if (((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
          (pSVar18 = ((*ppWVar1)->fields)._currentWeather, pSVar18 == (Settings_WeatherSet_o *)0x0)) ||
         (pSVar11 = (pSVar18->fields).ScheduleLoop, pSVar11 == (Settings_BoolSetting_o *)0x0))
      goto label_04078b0c;
      if (*(char *)((long)&(pSVar11->fields).DefaultValue + 1) != '\0') {
        (__this->fields)._currentScheduleLine = 0;
      }
    }
    iVar25 = iVar25 + 1;
    if (((ulong)local_58 & 1) != 0) {
      return;
    }
  } while (iVar25 != 200);
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ApplicationManagers_DebugConsole__Log("Weather schedule reached max usage (did you forget to use waits?)",1,(MethodInfo *)0x0);
  pWVar5 = (__this->fields).Schedule;
  __this_06 = (System_Collections_Generic_Dictionary_int__int__o *)&MethodInfo_Boolean_MoveNext;
  if ((pWVar5 != (Weather_WeatherSchedule_o *)0x0) &&
     (pSVar6 = (pWVar5->fields).Events, pSVar6 != (System_Collections_Generic_List_WeatherEvent__o *)0x0)) {
    piVar15 = &(pSVar6->fields)._version;
    *piVar15 = *piVar15 + 1;
    iVar13 = (pSVar6->fields)._size;
    (pSVar6->fields)._size = 0;
    if (0 < iVar13) {
      System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar13,(MethodInfo *)0x0);
    }
    return;
  }
label_04078b0c:
  pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  __this_04 = unaff_RBX;
label_04078b14:
  il2cpp_runtime_helper_022b2fd0(pIVar23);
label_04078b19:
  il2cpp_runtime_helper_022b2fd0(__this_04);
label_04078b21:
  il2cpp_runtime_helper_022b2fd0(__this_06);
  pIVar21 = extraout_RDX;
label_04078b29:
  il2cpp_runtime_helper_022b2fd0(pIVar21);
  __this_03.fields._8_8_ = in_stack_ffffffffffffff60;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff58;
  __this_03.fields._current = in_stack_ffffffffffffff68;
  System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(__this_03,(MethodInfo_32160F0 *)&local_78);
  _Unwind_Resume(__this_04);
}


