// Type: Weather.WeatherScheduleRunner
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/WeatherScheduleRunner.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherScheduleRunner.cs
// --------------------------------

// Weather.WeatherScheduleRunner$$.ctor
// il2cpp: void Weather_WeatherScheduleRunner___ctor (Weather_WeatherScheduleRunner_o* __this, Weather_WeatherManager_o* manager, const MethodInfo* method);
// 0x181dd3540

void Weather_WeatherScheduleRunner___ctor
               (Weather_WeatherScheduleRunner_o *__this,Weather_WeatherManager_o *manager,MethodInfo *method)

{
  System_Collections_Generic_LinkedList_int__o *__this_00;
  System_Collections_Generic_Dictionary_string__int__o *__this_01;
  System_Collections_Generic_Dictionary_int__int__o *pSVar1;
  Weather_WeatherSchedule_o *__this_02;
  System_Collections_Generic_List_WeatherEvent__o *__this_03;
  
  if (Il2CppMethodInitialized_18434495b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_LinkedList_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_LinkedList_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherSchedule);
    Il2CppMethodInitialized_18434495b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_LinkedList_int);
  System_Collections_Generic_LinkedList_int____ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,
             MethodInfo_System_Collections_Generic_LinkedList_int_ctor);
  (__this->fields)._callerStack = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._callerStack,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
  (__this->fields)._scheduleLabels = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scheduleLabels,__this_01);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int);
  System_Collections_Generic_Dictionary_int__int____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
  (__this->fields)._repeatStartLines = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._repeatStartLines,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int);
  System_Collections_Generic_Dictionary_int__int____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
  (__this->fields)._repeatCurrentCounts = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._repeatCurrentCounts,pSVar1);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_WeatherSchedule);
  if (Il2CppMethodInitialized_18434494f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherEvent_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_WeatherEvent);
    Il2CppMethodInitialized_18434494f = '\x01';
  }
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_WeatherEvent);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_03,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_WeatherEvent_ctor);
  (__this_02->fields).Events = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this_02->fields).Events,__this_03);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_02,(MethodInfo *)0x0);
  (__this->fields).Schedule = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Schedule,__this_02);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._manager = manager;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._manager,manager);
  return;
}


// Weather.WeatherScheduleRunner$$ProcessSchedule
// il2cpp: void Weather_WeatherScheduleRunner__ProcessSchedule (Weather_WeatherScheduleRunner_o* __this, const MethodInfo* method);
// 0x181dd3260
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dd32ec: nop dword ptr [rax]
// asm:   0x181dd33e3: jmp 0x181dd32f0
// asm:   0x181dd33fa: nop word ptr [rax + rax]
// asm:   0x181dd3518: jmp 0x181dd352f

void Weather_WeatherScheduleRunner__ProcessSchedule
               (Weather_WeatherScheduleRunner_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_WeatherEvent__o *pSVar1;
  System_Collections_Generic_Dictionary_int__int__o *pSVar2;
  System_Collections_Generic_Dictionary_string__int__o *__this_00;
  System_Collections_Generic_Dictionary_object__int__o *__this_01;
  bool bVar3;
  Weather_WeatherSchedule_o *pWVar4;
  Weather_WeatherEvent_o *pWVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *key;
  int iVar7;
  int index;
  
  if (Il2CppMethodInitialized_18434495c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherEvent_Insert);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherEvent_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherEvent_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherEvent);
    Il2CppMethodInitialized_18434495c = '\x01';
  }
  pWVar4 = (__this->fields).Schedule;
  iVar7 = 0;
  if (pWVar4 != (Weather_WeatherSchedule_o *)0x0) {
    while (pSVar1 = (pWVar4->fields).Events, pSVar1 != (System_Collections_Generic_List_WeatherEvent__o *)0x0)
    {
      pWVar4 = (__this->fields).Schedule;
      if ((pSVar1->fields)._size + -1 <= iVar7) {
        index = 0;
        iVar7 = -1;
        if (pWVar4 != (Weather_WeatherSchedule_o *)0x0) goto label_181dd3400;
        break;
      }
      if (((pWVar4 == (Weather_WeatherSchedule_o *)0x0) ||
          (pSVar1 = (pWVar4->fields).Events, pSVar1 == (System_Collections_Generic_List_WeatherEvent__o *)0x0)
          ) || (pWVar5 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar1,iVar7,
                                    (MethodInfo_92B830 *)
                                    MethodInfo_System_Collections_Generic_List_WeatherEvent_get_Item),
               pWVar5 == (Weather_WeatherEvent_o *)0x0)) break;
      if ((pWVar5->fields).Action == 2) {
        pWVar4 = (__this->fields).Schedule;
        if (((pWVar4 == (Weather_WeatherSchedule_o *)0x0) ||
            (pSVar1 = (pWVar4->fields).Events,
            pSVar1 == (System_Collections_Generic_List_WeatherEvent__o *)0x0)) ||
           (pWVar5 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar1,iVar7,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_WeatherEvent_get_Item),
           pWVar5 == (Weather_WeatherEvent_o *)0x0)) break;
        (pWVar5->fields).Action = 3;
        pWVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_WeatherEvent);
        Weather_WeatherEvent___ctor(pWVar5,(MethodInfo *)0x0);
        if (pWVar5 == (Weather_WeatherEvent_o *)0x0) break;
        (pWVar5->fields).Action = 4;
        pWVar4 = (__this->fields).Schedule;
        if ((pWVar4 == (Weather_WeatherSchedule_o *)0x0) ||
           (pSVar1 = (pWVar4->fields).Events, pSVar1 == (System_Collections_Generic_List_WeatherEvent__o *)0x0
           )) break;
        System_Collections_Generic_List_object___Insert
                  ((System_Collections_Generic_List_object__o *)pSVar1,iVar7 + 2,(Il2CppObject *)pWVar5,
                   (MethodInfo_945FE0 *)MethodInfo_System_Collections_Generic_List_WeatherEvent_Insert);
      }
      pWVar4 = (__this->fields).Schedule;
      iVar7 = iVar7 + 1;
      if (pWVar4 == (Weather_WeatherSchedule_o *)0x0) break;
    }
  }
label_181dd352f:
  ThrowNullReferenceException();
label_181dd3400:
  pSVar1 = (pWVar4->fields).Events;
  if (pSVar1 == (System_Collections_Generic_List_WeatherEvent__o *)0x0) goto label_181dd352f;
  if ((pSVar1->fields)._size <= index) {
    return;
  }
  pWVar4 = (__this->fields).Schedule;
  if (((pWVar4 == (Weather_WeatherSchedule_o *)0x0) ||
      (pSVar1 = (pWVar4->fields).Events, pSVar1 == (System_Collections_Generic_List_WeatherEvent__o *)0x0)) ||
     (pWVar5 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_WeatherEvent_get_Item),
     pWVar5 == (Weather_WeatherEvent_o *)0x0)) goto label_181dd352f;
  if ((pWVar5->fields).Action == 0xf) {
    pIVar6 = Weather_WeatherEvent__GetValue(pWVar5,(MethodInfo *)0x0);
    key = (Il2CppObject *)0x0;
    if (pIVar6 != (Il2CppObject *)0x0) {
      if (pIVar6->klass == g_data_184354e50) {
        key = pIVar6;
      }
      if (key == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
      }
    }
    __this_00 = (__this->fields)._scheduleLabels;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__int__o *)0x0) goto label_181dd352f;
    bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,key,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey);
    if (!bVar3) {
      __this_01 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields)._scheduleLabels;
      if (__this_01 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto label_181dd352f;
      System_Collections_Generic_Dictionary_object__int___Add
                (__this_01,key,index,
                 (MethodInfo_146B480 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    }
  }
  else if ((pWVar5->fields).Action == 3) {
    pSVar2 = (__this->fields)._repeatCurrentCounts;
    if (pSVar2 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_181dd352f;
    System_Collections_Generic_Dictionary_int__int___Add
              (pSVar2,index,0,
               (MethodInfo_1407050 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Add);
    iVar7 = index;
  }
  else if (((pWVar5->fields).Action == 4) && (-1 < iVar7)) {
    pSVar2 = (__this->fields)._repeatStartLines;
    if (pSVar2 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_181dd352f;
    System_Collections_Generic_Dictionary_int__int___Add
              (pSVar2,index,iVar7,
               (MethodInfo_1407050 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Add);
    iVar7 = -1;
  }
  pWVar4 = (__this->fields).Schedule;
  index = index + 1;
  if (pWVar4 == (Weather_WeatherSchedule_o *)0x0) goto label_181dd352f;
  goto label_181dd3400;
}


// Weather.WeatherScheduleRunner$$ConsumeSchedule
// il2cpp: void Weather_WeatherScheduleRunner__ConsumeSchedule (Weather_WeatherScheduleRunner_o* __this, const MethodInfo* method);
// 0x181dd22f0
// eh: try 0x181dd2573..0x181dd2ac5 -> pad 0x1803531b0 (+2 call sites) cleanup
// eh: try 0x181dd2bb0..0x181dd2c23 -> pad 0x183315930 catch Il2CppExceptionWrapper
// eh: try 0x181dd2eed..0x181dd2f0b -> pad 0x1803531b0 cleanup
// eh: try 0x181dd31cf..0x181dd31e5 -> pad 0x183315930 catch Il2CppExceptionWrapper
// eh: try 0x181dd3224..0x181dd325c -> pad 0x1803531b0 cleanup
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dd24cc: lea rsi, [rip - 0x1dd24d3]
// asm:   0x181dd272f: mov rax, qword ptr [rdi + 0x38]
// asm:   0x181dd2733: test rax, rax
// asm:   0x181dd2736: je 0x181dd317b
// asm:   0x181dd273c: mov byte ptr [rax + 0x7c], 1
// asm:   0x181dd2740: jmp 0x181dd307b
// asm:   0x181dd2c37: mov rdx, qword ptr [rip + 0x22cb86a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEffect_Dispose
// asm:   0x181dd2c3e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181dd2c43: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181dd2c48: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181dd2c4d: test rcx, rcx
// asm:   0x181dd2c50: jne 0x181dd31e5
// asm:   0x181dd2c56: mov rdi, qword ptr [rsp + 0xf0]
// asm:   0x181dd2c5e: mov r13d, dword ptr [rsp + 0x108]
// asm:   0x181dd2c66: xorps xmm8, xmm8
// asm:   0x181dd2c6a: jmp 0x181dd272f
// asm:   0x181dd31e5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Weather_WeatherScheduleRunner__ConsumeSchedule
               (Weather_WeatherScheduleRunner_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  Weather_WeatherSchedule_o *pWVar4;
  System_Collections_Generic_List_WeatherEvent__o *pSVar5;
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  System_Collections_Generic_Dictionary_int__LayerMask__o *pSVar6;
  Settings_WeatherSet_c *pSVar7;
  System_Collections_Generic_Dictionary_int__float__o *pSVar8;
  System_Collections_Specialized_OrderedDictionary_o *pSVar9;
  Il2CppClass *pIVar10;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *__this_01;
  System_Collections_Generic_Dictionary_string__int__o *pSVar11;
  System_Collections_Generic_LinkedList_int__o *__this_02;
  System_Collections_Generic_LinkedList_UIRenderDevice_DeviceToFree__o *__this_03;
  System_Collections_Generic_LinkedList_TextCacheEntry__o *pSVar12;
  Settings_WeatherSet_o *pSVar13;
  Settings_BoolSetting_o *pSVar14;
  bool bVar15;
  MethodInfo *pMVar16;
  bool bVar17;
  UnityEngine_LayerMask_o key;
  UnityEngine_LayerMask_o UVar18;
  int32_t iVar19;
  Weather_WeatherEvent_o *__this_04;
  int32_t *piVar20;
  Weather_WeatherManager_o *pWVar21;
  Settings_BaseSetting_o *pSVar22;
  System_Collections_Generic_List_T__o *__this_05;
  System_String_o *pSVar23;
  Il2CppObject *pIVar24;
  Il2CppObject *obj;
  Il2CppObject *pIVar25;
  float *pfVar26;
  System_String_o *pSVar27;
  System_Collections_Generic_LinkedListNode_T__o *pSVar28;
  int iVar29;
  int iVar30;
  undefined1 local_b0 [8];
  undefined1 *puStack_a8;
  Il2CppObject *local_a0;
  System_Enum_o local_98;
  int32_t local_88;
  undefined1 local_80 [16];
  int32_t local_70;
  undefined4 uStack_6c;
  
  if (Il2CppMethodInitialized_18434495d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEffect_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEffect_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEffect_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedListNode_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_LinkedList_int_AddLast);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_int_RemoveFirst);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_int_RemoveLast);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_LinkedList_int_get_Last)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherEvent_Clear)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherEffect_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherEvent_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherEvent_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumToList_WeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"Weather schedule reached max usage (did you forget to use waits?)");
    il2cpp_codegen_initialize_runtime_metadata(&"NextLine");
    Il2CppMethodInitialized_18434495d = '\x01';
  }
  local_b0 = (undefined1  [8])0x0;
  puStack_a8 = (undefined1 *)0x0;
  local_a0 = (Il2CppObject *)0x0;
  iVar30 = 0;
  bVar15 = false;
  do {
    do {
      if (bVar15) {
        return;
      }
      iVar30 = iVar30 + 1;
      if (200 < iVar30) {
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        ApplicationManagers_DebugConsole__Log("Weather schedule reached max usage (did you forget to use waits?)",true,(MethodInfo *)0x0);
        pWVar4 = (__this->fields).Schedule;
        if ((pWVar4 != (Weather_WeatherSchedule_o *)0x0) &&
           (pSVar5 = (pWVar4->fields).Events, pSVar5 != (System_Collections_Generic_List_WeatherEvent__o *)0x0
           )) {
          piVar20 = &(pSVar5->fields)._version;
          *piVar20 = *piVar20 + 1;
          iVar19 = (pSVar5->fields)._size;
          (pSVar5->fields)._size = 0;
          if (iVar19 < 1) {
            return;
          }
          System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar19,(MethodInfo *)0x0);
          return;
        }
        goto label_181dd317b;
      }
      pWVar4 = (__this->fields).Schedule;
      if ((pWVar4 == (Weather_WeatherSchedule_o *)0x0) ||
         (pSVar5 = (pWVar4->fields).Events, pSVar5 == (System_Collections_Generic_List_WeatherEvent__o *)0x0))
      goto label_181dd317b;
      if ((pSVar5->fields)._size == 0) {
        return;
      }
      if ((__this->fields)._currentScheduleLine < 0) {
        return;
      }
      if ((((pWVar4->fields).Events)->fields)._size <= (__this->fields)._currentScheduleLine) {
        return;
      }
      __this_04 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)
                             (((__this->fields).Schedule)->fields).Events,
                             (__this->fields)._currentScheduleLine,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_WeatherEvent_get_Item);
      if (__this_04 == (Weather_WeatherEvent_o *)0x0) goto label_181dd317b;
      switch((__this_04->fields).Action) {
      case 3:
        __this_00 = (__this->fields)._repeatCurrentCounts;
        iVar19 = (__this->fields)._currentScheduleLine;
        pIVar25 = Weather_WeatherEvent__GetValue(__this_04,(MethodInfo *)0x0);
        pMVar16 = MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item;
        if ((__this_00 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
           (pIVar25 == (Il2CppObject *)0x0)) goto label_181dd317b;
        if ((pIVar25->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        piVar20 = il2cpp_object_unbox(pIVar25);
        System_Collections_Generic_Dictionary_int__int___set_Item
                  (__this_00,iVar19,*piVar20,(MethodInfo_14159F0 *)pMVar16);
        break;
      case 4:
        pSVar6 = (System_Collections_Generic_Dictionary_int__LayerMask__o *)(__this->fields)._repeatStartLines
        ;
        if (pSVar6 == (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) goto label_181dd317b;
        key = System_Collections_Generic_Dictionary_int__LayerMask___get_Item
                        (pSVar6,(__this->fields)._currentScheduleLine,
                         (MethodInfo_14157A0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
        pSVar8 = (System_Collections_Generic_Dictionary_int__float__o *)(__this->fields)._repeatCurrentCounts;
        if (pSVar8 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) goto label_181dd317b;
        bVar17 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                           (pSVar8,(int32_t)key.fields.m_Mask,
                            (MethodInfo_14070E0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
        if (bVar17) {
          pSVar6 = (System_Collections_Generic_Dictionary_int__LayerMask__o *)
                   (__this->fields)._repeatCurrentCounts;
          if (pSVar6 == (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) goto label_181dd317b;
          UVar18 = System_Collections_Generic_Dictionary_int__LayerMask___get_Item
                             (pSVar6,(int32_t)key.fields.m_Mask,
                              (MethodInfo_14157A0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
          if (0 < (int)UVar18.fields.m_Mask) {
            (__this->fields)._currentScheduleLine = (int)key.fields.m_Mask + 1;
            pSVar6 = (System_Collections_Generic_Dictionary_int__LayerMask__o *)
                     (__this->fields)._repeatCurrentCounts;
            if (pSVar6 == (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) goto label_181dd317b;
            UVar18 = System_Collections_Generic_Dictionary_int__LayerMask___get_Item
                               (pSVar6,(int32_t)key.fields.m_Mask,
                                (MethodInfo_14157A0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
            System_Collections_Generic_Dictionary_int__int___set_Item
                      ((System_Collections_Generic_Dictionary_int__int__o *)pSVar6,(int32_t)key.fields.m_Mask,
                       (int)UVar18.fields.m_Mask + -1,
                       (MethodInfo_14159F0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item
                      );
          }
        }
        break;
      case 5:
        pWVar21 = (__this->fields)._manager;
        if (((pWVar21 == (Weather_WeatherManager_o *)0x0) ||
            (pSVar13 = (pWVar21->fields)._currentWeather, pSVar13 == (Settings_WeatherSet_o *)0x0)) ||
           (pSVar14 = (pSVar13->fields).ScheduleLoop, pSVar14 == (Settings_BoolSetting_o *)0x0))
        goto label_181dd317b;
        bVar17 = (pSVar14->fields)._value;
        pSVar13 = (((__this->fields)._manager)->fields)._currentWeather;
        pSVar7 = pSVar13->klass;
        (*(pSVar7->vtable)._4_SetDefault.methodPtr)(pSVar13,(pSVar7->vtable)._4_SetDefault.method);
        pWVar21 = (__this->fields)._manager;
        if (((pWVar21 == (Weather_WeatherManager_o *)0x0) ||
            (pSVar13 = (pWVar21->fields)._currentWeather, pSVar13 == (Settings_WeatherSet_o *)0x0)) ||
           (pSVar14 = (pSVar13->fields).UseSchedule, pSVar14 == (Settings_BoolSetting_o *)0x0))
        goto label_181dd317b;
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar14,true,
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        pWVar21 = (__this->fields)._manager;
        if (((pWVar21 == (Weather_WeatherManager_o *)0x0) ||
            (pSVar13 = (pWVar21->fields)._currentWeather, pSVar13 == (Settings_WeatherSet_o *)0x0)) ||
           (pSVar14 = (pSVar13->fields).ScheduleLoop, pSVar14 == (Settings_BoolSetting_o *)0x0))
        goto label_181dd317b;
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar14,bVar17,
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        goto label_181dd272f;
      case 6:
        pWVar21 = (__this->fields)._manager;
        if ((pWVar21 == (Weather_WeatherManager_o *)0x0) ||
           (pSVar13 = (pWVar21->fields)._currentWeather, pSVar13 == (Settings_WeatherSet_o *)0x0)) {
label_181dd3193:
          ThrowNullReferenceException();
        }
        pSVar9 = (pSVar13->fields).Settings;
        local_98.klass = (System_Enum_c *)TypeInfo_Weather_WeatherEffect;
        local_98.monitor = &g_data_ffffffffffffffff;
        local_88 = (__this_04->fields).Effect;
        pSVar23 = System_Enum__ToString(&local_98,(MethodInfo *)0x0);
        if ((pSVar9 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) ||
           (pIVar25 = System_Collections_Specialized_OrderedDictionary__get_Item
                                (pSVar9,(Il2CppObject *)pSVar23,(MethodInfo *)0x0),
           pIVar25 == (Il2CppObject *)0x0)) goto label_181dd3193;
        pIVar10 = pIVar25->klass;
        bVar3 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
        if (((pIVar10->_2).typeHierarchyDepth < bVar3) ||
           ((pIVar10->_2).typeHierarchy[(ulonglong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting)
           ) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar25,TypeInfo_Settings_BaseSetting);
        }
        (*pIVar10->vtable[4].methodPtr)(pIVar25,pIVar10->vtable[4].method);
        pWVar21 = (__this->fields)._manager;
        if (pWVar21 == (Weather_WeatherManager_o *)0x0) goto label_181dd3193;
        (pWVar21->fields)._needSync = true;
        break;
      case 7:
        pWVar21 = (__this->fields)._manager;
        if ((pWVar21 == (Weather_WeatherManager_o *)0x0) ||
           (pSVar13 = (pWVar21->fields)._currentWeather, pSVar13 == (Settings_WeatherSet_o *)0x0)) {
label_181dd31a5:
          ThrowNullReferenceException();
        }
        pSVar9 = (pSVar13->fields).Settings;
        local_98.klass = (System_Enum_c *)TypeInfo_Weather_WeatherEffect;
        local_98.monitor = &g_data_ffffffffffffffff;
        local_88 = (__this_04->fields).Effect;
        pSVar23 = System_Enum__ToString(&local_98,(MethodInfo *)0x0);
        if (pSVar9 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_181dd31a5;
        pSVar22 = (Settings_BaseSetting_o *)
                  System_Collections_Specialized_OrderedDictionary__get_Item
                            (pSVar9,(Il2CppObject *)pSVar23,(MethodInfo *)0x0);
        iVar19 = Weather_WeatherEvent__GetSettingType(__this_04,(MethodInfo *)0x0);
        pIVar25 = Weather_WeatherEvent__GetValue(__this_04,(MethodInfo *)0x0);
        if (pSVar22 != (Settings_BaseSetting_o *)0x0) {
          bVar3 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
          if (((pSVar22->klass->_2).typeHierarchyDepth < bVar3) ||
             ((pSVar22->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar22,TypeInfo_Settings_BaseSetting);
          }
        }
        Settings_SettingsUtil__SetSettingValue(pSVar22,iVar19,pIVar25,(MethodInfo *)0x0);
        pWVar21 = (__this->fields)._manager;
        if (pWVar21 == (Weather_WeatherManager_o *)0x0) goto label_181dd31a5;
        (pWVar21->fields)._needSync = true;
        break;
      case 8:
        pWVar21 = (__this->fields)._manager;
        if ((pWVar21 == (Weather_WeatherManager_o *)0x0) ||
           (pSVar13 = (pWVar21->fields)._targetWeather, pSVar13 == (Settings_WeatherSet_o *)0x0))
        goto label_181dd317b;
        (*(pSVar13->klass->vtable)._4_SetDefault.methodPtr)
                  (pSVar13,(pSVar13->klass->vtable)._4_SetDefault.method);
        goto label_181dd272f;
      case 9:
        pWVar21 = (__this->fields)._manager;
        if ((pWVar21 == (Weather_WeatherManager_o *)0x0) ||
           (pSVar13 = (pWVar21->fields)._targetWeather, pSVar13 == (Settings_WeatherSet_o *)0x0)) {
label_181dd31ab:
          ThrowNullReferenceException();
        }
        pSVar9 = (pSVar13->fields).Settings;
        local_98.klass = (System_Enum_c *)TypeInfo_Weather_WeatherEffect;
        local_98.monitor = &g_data_ffffffffffffffff;
        local_88 = (__this_04->fields).Effect;
        pSVar23 = System_Enum__ToString(&local_98,(MethodInfo *)0x0);
        if ((pSVar9 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) ||
           (pIVar25 = System_Collections_Specialized_OrderedDictionary__get_Item
                                (pSVar9,(Il2CppObject *)pSVar23,(MethodInfo *)0x0),
           pIVar25 == (Il2CppObject *)0x0)) goto label_181dd31ab;
        pIVar10 = pIVar25->klass;
        bVar3 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
        if (((pIVar10->_2).typeHierarchyDepth < bVar3) ||
           ((pIVar10->_2).typeHierarchy[(ulonglong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting)
           ) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar25,TypeInfo_Settings_BaseSetting);
        }
        (*pIVar10->vtable[4].methodPtr)(pIVar25,pIVar10->vtable[4].method);
        pWVar21 = (__this->fields)._manager;
        if (pWVar21 == (Weather_WeatherManager_o *)0x0) goto label_181dd31ab;
        goto label_181dd273c;
      case 10:
        pWVar21 = (__this->fields)._manager;
        if ((pWVar21 == (Weather_WeatherManager_o *)0x0) ||
           (pSVar13 = (pWVar21->fields)._targetWeather, pSVar13 == (Settings_WeatherSet_o *)0x0)) {
label_181dd31bd:
          ThrowNullReferenceException();
        }
        pSVar9 = (pSVar13->fields).Settings;
        local_98.klass = (System_Enum_c *)TypeInfo_Weather_WeatherEffect;
        local_98.monitor = &g_data_ffffffffffffffff;
        local_88 = (__this_04->fields).Effect;
        pSVar23 = System_Enum__ToString(&local_98,(MethodInfo *)0x0);
        if (pSVar9 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_181dd31bd;
        pSVar22 = (Settings_BaseSetting_o *)
                  System_Collections_Specialized_OrderedDictionary__get_Item
                            (pSVar9,(Il2CppObject *)pSVar23,(MethodInfo *)0x0);
        iVar19 = Weather_WeatherEvent__GetSettingType(__this_04,(MethodInfo *)0x0);
        pIVar25 = Weather_WeatherEvent__GetValue(__this_04,(MethodInfo *)0x0);
        if (pSVar22 != (Settings_BaseSetting_o *)0x0) {
          bVar3 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
          if (((pSVar22->klass->_2).typeHierarchyDepth < bVar3) ||
             ((pSVar22->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar22,TypeInfo_Settings_BaseSetting);
          }
        }
        Settings_SettingsUtil__SetSettingValue(pSVar22,iVar19,pIVar25,(MethodInfo *)0x0);
        pWVar21 = (__this->fields)._manager;
        if (pWVar21 == (Weather_WeatherManager_o *)0x0) goto label_181dd31bd;
        goto label_181dd273c;
      case 0xb:
        pWVar21 = (__this->fields)._manager;
        if ((pWVar21 == (Weather_WeatherManager_o *)0x0) ||
           (pSVar8 = (pWVar21->fields)._targetWeatherStartTimes,
           pSVar8 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto label_181dd317b;
        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                   (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Clear);
        pWVar21 = (__this->fields)._manager;
        if ((pWVar21 == (Weather_WeatherManager_o *)0x0) ||
           (pSVar8 = (pWVar21->fields)._targetWeatherEndTimes,
           pSVar8 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto label_181dd317b;
        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                   (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Clear);
        pWVar21 = (__this->fields)._manager;
        if (pWVar21 == (Weather_WeatherManager_o *)0x0) goto label_181dd317b;
        fVar2 = (pWVar21->fields)._currentTime;
        pIVar25 = Weather_WeatherEvent__GetValue(__this_04,(MethodInfo *)0x0);
        if (pIVar25 == (Il2CppObject *)0x0) goto label_181dd317b;
        if ((pIVar25->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e38 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pfVar26 = il2cpp_object_unbox(pIVar25);
        fVar1 = *pfVar26;
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        __this_05 = Utility_Util__EnumToList_Int32Enum_
                              ((MethodInfo_869C70 *)MethodInfo_Utility_Util_EnumToList_WeatherEffect);
        if (__this_05 == (System_Collections_Generic_List_T__o *)0x0) goto label_181dd317b;
        System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                   (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_05,
                   (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_WeatherEffect_GetEnumerator
                  );
        local_b0 = (undefined1  [8])local_80._0_8_;
        puStack_a8 = (undefined1 *)local_80._8_8_;
        local_a0 = (Il2CppObject *)CONCAT44(uStack_6c,local_70);
        while (bVar17 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                                  ((System_Collections_Generic_List_Enumerator_T__o *)local_b0,
                                   (MethodInfo_1530180 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEffect_MoveNext
                                  ), bVar17) {
          pWVar21 = (__this->fields)._manager;
          if (pWVar21 == (Weather_WeatherManager_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar8 = (pWVar21->fields)._targetWeatherStartTimes;
          if (pSVar8 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
            ThrowNullReferenceException();
          }
          iVar19 = (int32_t)local_a0;
          System_Collections_Generic_Dictionary_int__float___Add
                    (pSVar8,(int32_t)local_a0,(pWVar21->fields)._currentTime,
                     (MethodInfo_1415AC0 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Add);
          pWVar21 = (__this->fields)._manager;
          if (pWVar21 == (Weather_WeatherManager_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar8 = (pWVar21->fields)._targetWeatherEndTimes;
          if (pSVar8 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_int__float___Add
                    (pSVar8,iVar19,fVar2 + fVar1,
                     (MethodInfo_1415AC0 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Add);
        }
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_b0,
                   MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEffect_Dispose);
label_181dd272f:
        pWVar21 = (__this->fields)._manager;
        if (pWVar21 == (Weather_WeatherManager_o *)0x0) goto label_181dd317b;
        goto label_181dd273c;
      case 0xc:
        pWVar21 = (__this->fields)._manager;
        if ((pWVar21 == (Weather_WeatherManager_o *)0x0) ||
           (pSVar8 = (pWVar21->fields)._targetWeatherStartTimes,
           pSVar8 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto label_181dd317b;
        bVar17 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                           (pSVar8,(__this_04->fields).Effect,
                            (MethodInfo_14070E0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_float_ContainsKey);
        if (!bVar17) {
          pWVar21 = (__this->fields)._manager;
          if ((pWVar21 == (Weather_WeatherManager_o *)0x0) ||
             (pSVar8 = (pWVar21->fields)._targetWeatherStartTimes,
             pSVar8 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto label_181dd317b;
          System_Collections_Generic_Dictionary_int__float___Add
                    (pSVar8,(__this_04->fields).Effect,0.0,
                     (MethodInfo_1415AC0 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Add);
          pWVar21 = (__this->fields)._manager;
          if ((pWVar21 == (Weather_WeatherManager_o *)0x0) ||
             (pSVar8 = (pWVar21->fields)._targetWeatherEndTimes,
             pSVar8 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto label_181dd317b;
          System_Collections_Generic_Dictionary_int__float___Add
                    (pSVar8,(__this_04->fields).Effect,0.0,
                     (MethodInfo_1415AC0 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Add);
        }
        pWVar21 = (__this->fields)._manager;
        if ((pWVar21 == (Weather_WeatherManager_o *)0x0) ||
           (pSVar13 = (pWVar21->fields)._startWeather, pSVar13 == (Settings_WeatherSet_o *)0x0)) {
label_181dd31f1:
          ThrowNullReferenceException();
        }
        pSVar9 = (pSVar13->fields).Settings;
        local_98.klass = (System_Enum_c *)TypeInfo_Weather_WeatherEffect;
        local_98.monitor = &g_data_ffffffffffffffff;
        local_88 = (__this_04->fields).Effect;
        pSVar23 = System_Enum__ToString(&local_98,(MethodInfo *)0x0);
        if (pSVar9 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_181dd31f1;
        pIVar25 = System_Collections_Specialized_OrderedDictionary__get_Item
                            (pSVar9,(Il2CppObject *)pSVar23,(MethodInfo *)0x0);
        pWVar21 = (__this->fields)._manager;
        if ((pWVar21 == (Weather_WeatherManager_o *)0x0) ||
           (pSVar13 = (pWVar21->fields)._currentWeather, pSVar13 == (Settings_WeatherSet_o *)0x0))
        goto label_181dd31f1;
        pSVar9 = (pSVar13->fields).Settings;
        local_80._0_8_ = TypeInfo_Weather_WeatherEffect;
        local_80._8_8_ = &g_data_ffffffffffffffff;
        local_70 = (__this_04->fields).Effect;
        pSVar23 = System_Enum__ToString((System_Enum_o *)local_80,(MethodInfo *)0x0);
        if (pSVar9 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_181dd31f1;
        pIVar24 = System_Collections_Specialized_OrderedDictionary__get_Item
                            (pSVar9,(Il2CppObject *)pSVar23,(MethodInfo *)0x0);
        if (pIVar24 != (Il2CppObject *)0x0) {
          bVar3 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
          if (((pIVar24->klass->_2).typeHierarchyDepth < bVar3) ||
             ((pIVar24->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar24);
          }
        }
        pWVar21 = (__this->fields)._manager;
        if ((pWVar21 == (Weather_WeatherManager_o *)0x0) ||
           (pSVar8 = (pWVar21->fields)._targetWeatherStartTimes,
           pSVar8 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto label_181dd31f1;
        System_Collections_Generic_Dictionary_int__float___set_Item
                  (pSVar8,(__this_04->fields).Effect,(pWVar21->fields)._currentTime,
                   (MethodInfo_1423540 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_set_Item);
        pWVar21 = (__this->fields)._manager;
        if (pWVar21 == (Weather_WeatherManager_o *)0x0) goto label_181dd31f1;
        pSVar8 = (pWVar21->fields)._targetWeatherEndTimes;
        iVar19 = (__this_04->fields).Effect;
        fVar2 = (pWVar21->fields)._currentTime;
        obj = Weather_WeatherEvent__GetValue(__this_04,(MethodInfo *)0x0);
        pMVar16 = MethodInfo_System_Collections_Generic_Dictionary_int_float_set_Item;
        if ((pSVar8 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) ||
           (obj == (Il2CppObject *)0x0)) goto label_181dd31f1;
        if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e38 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pfVar26 = il2cpp_object_unbox(obj);
        System_Collections_Generic_Dictionary_int__float___set_Item
                  (pSVar8,iVar19,fVar2 + *pfVar26,(MethodInfo_1423540 *)pMVar16);
        if (pIVar25 == (Il2CppObject *)0x0) goto label_181dd31f1;
        pIVar10 = pIVar25->klass;
        bVar3 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
        if (((pIVar10->_2).typeHierarchyDepth < bVar3) ||
           ((pIVar10->_2).typeHierarchy[(ulonglong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting)
           ) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar25);
        }
        (*pIVar10->vtable[10].methodPtr)(pIVar25,pIVar24);
        pWVar21 = (__this->fields)._manager;
        if (pWVar21 == (Weather_WeatherManager_o *)0x0) goto label_181dd31f1;
label_181dd273c:
        (pWVar21->fields)._needSync = true;
        break;
      case 0xd:
        pWVar21 = (__this->fields)._manager;
        if (pWVar21 == (Weather_WeatherManager_o *)0x0) goto label_181dd317b;
        __this_01 = (pWVar21->fields)._currentScheduleWait;
        pIVar25 = Weather_WeatherEvent__GetValue(__this_04,(MethodInfo *)0x0);
        pMVar16 = MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_set_Item;
        if ((__this_01 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0) ||
           (pIVar25 == (Il2CppObject *)0x0)) goto label_181dd317b;
        if ((pIVar25->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e38 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar25,g_data_184354e38);
        }
        pfVar26 = il2cpp_object_unbox(pIVar25);
        System_Collections_Generic_Dictionary_object__float___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,(Il2CppObject *)__this,
                   *pfVar26,(MethodInfo_1488DA0 *)pMVar16);
        bVar15 = true;
        goto label_181dd3083;
      case 0xe:
        pSVar27 = (System_String_o *)Weather_WeatherEvent__GetValue(__this_04,(MethodInfo *)0x0);
        pSVar23 = (System_String_o *)0x0;
        if (pSVar27 != (System_String_o *)0x0) {
          if ((Il2CppClass *)pSVar27->klass == g_data_184354e50) {
            pSVar23 = pSVar27;
          }
          if (pSVar23 == (System_String_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar27);
          }
        }
        bVar17 = System_String__op_Inequality(pSVar23,"NextLine",(MethodInfo *)0x0);
        if (bVar17) {
          pSVar11 = (__this->fields)._scheduleLabels;
          if (pSVar11 == (System_Collections_Generic_Dictionary_string__int__o *)0x0) goto label_181dd317b;
          bVar17 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                              (Il2CppObject *)pSVar23,
                              (MethodInfo_1455450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey);
          if (bVar17) {
            __this_02 = (__this->fields)._callerStack;
            if (__this_02 == (System_Collections_Generic_LinkedList_int__o *)0x0) goto label_181dd317b;
            System_Collections_Generic_LinkedList_int___AddLast
                      (__this_02,(__this->fields)._currentScheduleLine,
                       (MethodInfo_181E500 *)MethodInfo_System_Collections_Generic_LinkedList_int_AddLast);
            pSVar12 = (System_Collections_Generic_LinkedList_TextCacheEntry__o *)(__this->fields)._callerStack
            ;
            if (pSVar12 == (System_Collections_Generic_LinkedList_TextCacheEntry__o *)0x0) goto label_181dd317b;
            if (200 < (pSVar12->fields).count) {
              System_Collections_Generic_LinkedList_TextCacheEntry___RemoveFirst
                        (pSVar12,(MethodInfo_18224E0 *)
                                 MethodInfo_System_Collections_Generic_LinkedList_int_RemoveFirst);
            }
            pSVar11 = (__this->fields)._scheduleLabels;
            if (pSVar11 == (System_Collections_Generic_Dictionary_string__int__o *)0x0) goto label_181dd317b;
            iVar19 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                                (Il2CppObject *)pSVar23,
                                (MethodInfo_147A530 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item);
            (__this->fields)._currentScheduleLine = iVar19;
          }
        }
        break;
      case 0x10:
        __this_03 = (System_Collections_Generic_LinkedList_UIRenderDevice_DeviceToFree__o *)
                    (__this->fields)._callerStack;
        if (__this_03 == (System_Collections_Generic_LinkedList_UIRenderDevice_DeviceToFree__o *)0x0)
        goto label_181dd317b;
        if (0 < (__this_03->fields).count) {
          pSVar28 = System_Collections_Generic_LinkedList_UIRenderDevice_DeviceToFree___get_Last
                              (__this_03,
                               (MethodInfo_1824E20 *)
                               MethodInfo_System_Collections_Generic_LinkedList_int_get_Last);
          if (pSVar28 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) goto label_181dd317b;
          (__this->fields)._currentScheduleLine = *(int32_t *)&(pSVar28->fields).item;
          pSVar12 = (System_Collections_Generic_LinkedList_TextCacheEntry__o *)(__this->fields)._callerStack;
          if (pSVar12 == (System_Collections_Generic_LinkedList_TextCacheEntry__o *)0x0) goto label_181dd317b;
          System_Collections_Generic_LinkedList_TextCacheEntry___RemoveLast
                    (pSVar12,(MethodInfo_18225E0 *)
                             MethodInfo_System_Collections_Generic_LinkedList_int_RemoveLast);
        }
      }
label_181dd3083:
      iVar29 = (__this->fields)._currentScheduleLine + 1;
      (__this->fields)._currentScheduleLine = iVar29;
      pWVar4 = (__this->fields).Schedule;
      if ((pWVar4 == (Weather_WeatherSchedule_o *)0x0) ||
         (pSVar5 = (pWVar4->fields).Events, pSVar5 == (System_Collections_Generic_List_WeatherEvent__o *)0x0))
      goto label_181dd317b;
    } while (iVar29 < (pSVar5->fields)._size);
    pWVar21 = (__this->fields)._manager;
    if (((pWVar21 == (Weather_WeatherManager_o *)0x0) ||
        (pSVar13 = (pWVar21->fields)._currentWeather, pSVar13 == (Settings_WeatherSet_o *)0x0)) ||
       (pSVar14 = (pSVar13->fields).ScheduleLoop, pSVar14 == (Settings_BoolSetting_o *)0x0)) {
label_181dd317b:
      ThrowNullReferenceException();
    }
    if ((pSVar14->fields)._value != false) {
      (__this->fields)._currentScheduleLine = 0;
    }
  } while( true );
}


