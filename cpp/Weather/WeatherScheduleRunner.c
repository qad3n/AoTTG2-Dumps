// Type: Weather.WeatherScheduleRunner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/WeatherScheduleRunner.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherScheduleRunner.cs
// --------------------------------

// Weather.WeatherScheduleRunner$$.ctor
// il2cpp: void Weather_WeatherScheduleRunner___ctor (Weather_WeatherScheduleRunner_o* __this, Weather_WeatherManager_o* manager, const MethodInfo* method);
// 0x58613d0

void Weather_WeatherScheduleRunner___ctor
               (Weather_WeatherScheduleRunner_o *__this,Weather_WeatherManager_o *manager,MethodInfo *method)

{
  System_Collections_Generic_LinkedList_int__o *__this_00;
  System_Collections_Generic_Dictionary_string__int__o *__this_01;
  System_Collections_Generic_Dictionary_int__int__o *pSVar1;
  Weather_WeatherSchedule_o *__this_02;
  System_Collections_Generic_List_WeatherEvent__o *__this_03;
  
  if (Il2CppMethodInitialized_075450b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_LinkedList_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_LinkedList_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherSchedule);
    Il2CppMethodInitialized_075450b7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_LinkedList_int);
  System_Collections_Generic_LinkedList_int____ctor
            (__this_00,(MethodInfo_514E020 *)MethodInfo_System_Collections_Generic_LinkedList_int_ctor);
  (__this->fields)._callerStack = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._callerStack);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_object__int__o *)__this_01,
             (MethodInfo_4A9CB80 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
  (__this->fields)._scheduleLabels = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scheduleLabels);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int);
  System_Collections_Generic_Dictionary_int__int____ctor
            (pSVar1,(MethodInfo_4A032E0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
  (__this->fields)._repeatStartLines = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._repeatStartLines);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int);
  System_Collections_Generic_Dictionary_int__int____ctor
            (pSVar1,(MethodInfo_4A032E0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
  (__this->fields)._repeatCurrentCounts = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._repeatCurrentCounts);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_WeatherSchedule);
  if (Il2CppMethodInitialized_075450a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherEvent_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_WeatherEvent);
    Il2CppMethodInitialized_075450a9 = '\x01';
  }
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_WeatherEvent);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_WeatherEvent_ctor);
  (__this_02->fields).Events = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this_02->fields).Events);
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  (__this->fields).Schedule = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Schedule);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._manager = manager;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._manager);
  return;
}


// Weather.WeatherScheduleRunner$$ProcessSchedule
// il2cpp: void Weather_WeatherScheduleRunner__ProcessSchedule (Weather_WeatherScheduleRunner_o* __this, const MethodInfo* method);
// 0x58615c0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58618df: mov rcx, qword ptr [r13]
// asm:   0x58618e3: mov rdi, rbx
// asm:   0x58618e6: mov esi, ebp
// asm:   0x58618e8: mov edx, eax
// asm:   0x58618ea: jmp 0x58617a0

void Weather_WeatherScheduleRunner__ProcessSchedule
               (Weather_WeatherScheduleRunner_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_WeatherEvent__o *pSVar1;
  System_Collections_Generic_Dictionary_object__int__o *pSVar2;
  bool bVar3;
  bool bVar4;
  int32_t value;
  Weather_WeatherEvent_o *pWVar5;
  System_Collections_Generic_Stack_int__o *__this_00;
  Weather_WeatherSchedule_o *pWVar6;
  Il2CppObject *key;
  int iVar7;
  int32_t index;
  System_Collections_Generic_Dictionary_int__int__o *__this_01;
  
  if (Il2CppMethodInitialized_075450b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Pop);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_Push);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Stack_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Stack_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherEvent);
    il2cpp_codegen_initialize_runtime_metadata(&"Weather schedule has an EndRepeat without a matching BeginRepeat; it will be ignored.");
    Il2CppMethodInitialized_075450b8 = '\x01';
  }
  pWVar6 = (__this->fields).Schedule;
  if (pWVar6 != (Weather_WeatherSchedule_o *)0x0) {
    iVar7 = 0;
    while (pSVar1 = (pWVar6->fields).Events, pSVar1 != (System_Collections_Generic_List_WeatherEvent__o *)0x0)
    {
      if ((pSVar1->fields)._size + -1 <= iVar7) {
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Stack_int);
        System_Collections_Generic_Stack_int____ctor
                  (__this_00,(MethodInfo_4102810 *)MethodInfo_System_Collections_Generic_Stack_int_ctor);
        pWVar6 = (__this->fields).Schedule;
        if (pWVar6 != (Weather_WeatherSchedule_o *)0x0) {
          bVar4 = false;
          index = 0;
          goto label_058617b0;
        }
        break;
      }
      pWVar5 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,iVar7,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_WeatherEvent_get_Item);
      if (pWVar5 == (Weather_WeatherEvent_o *)0x0) break;
      if ((pWVar5->fields).Action == 2) {
        pWVar6 = (__this->fields).Schedule;
        if (((pWVar6 == (Weather_WeatherSchedule_o *)0x0) ||
            (pSVar1 = (pWVar6->fields).Events,
            pSVar1 == (System_Collections_Generic_List_WeatherEvent__o *)0x0)) ||
           (pWVar5 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar1,iVar7,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_WeatherEvent_get_Item),
           pWVar5 == (Weather_WeatherEvent_o *)0x0)) break;
        (pWVar5->fields).Action = 3;
        pWVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_WeatherEvent);
        Weather_WeatherEvent___ctor(pWVar5,(MethodInfo *)0x0);
        if (pWVar5 == (Weather_WeatherEvent_o *)0x0) break;
        (pWVar5->fields).Action = 4;
        pWVar6 = (__this->fields).Schedule;
        if ((pWVar6 == (Weather_WeatherSchedule_o *)0x0) ||
           (pSVar1 = (pWVar6->fields).Events, pSVar1 == (System_Collections_Generic_List_WeatherEvent__o *)0x0
           )) break;
        System_Collections_Generic_List_object___Insert
                  ((System_Collections_Generic_List_object__o *)pSVar1,iVar7 + 2,(Il2CppObject *)pWVar5,
                   (MethodInfo_395E3E0 *)MethodInfo_System_Collections_Generic_List_WeatherEvent_Insert);
      }
      iVar7 = iVar7 + 1;
      pWVar6 = (__this->fields).Schedule;
      if (pWVar6 == (Weather_WeatherSchedule_o *)0x0) break;
    }
  }
  goto label_05861756;
label_058617b0:
  do {
    pSVar1 = (pWVar6->fields).Events;
    if (pSVar1 == (System_Collections_Generic_List_WeatherEvent__o *)0x0) break;
    if ((pSVar1->fields)._size <= index) {
      if (bVar4) {
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        ApplicationManagers_DebugConsole__Log("Weather schedule has an EndRepeat without a matching BeginRepeat; it will be ignored.",true,(MethodInfo *)0x0);
        return;
      }
      return;
    }
    pWVar5 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,index,
                        (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_WeatherEvent_get_Item
                       );
    if (pWVar5 == (Weather_WeatherEvent_o *)0x0) break;
    iVar7 = (pWVar5->fields).Action;
    if (iVar7 == 3) {
      if (__this_00 == (System_Collections_Generic_Stack_int__o *)0x0) break;
      System_Collections_Generic_Stack_int___Push
                (__this_00,index,(MethodInfo_4102F50 *)MethodInfo_System_Collections_Generic_Stack_int_Push);
      __this_01 = (__this->fields)._repeatCurrentCounts;
      if (__this_01 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) break;
      value = 0;
label_058617a0:
      System_Collections_Generic_Dictionary_int__int___Add
                (__this_01,index,value,
                 (MethodInfo_4A03F20 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Add);
    }
    else if (iVar7 == 4) {
      if (__this_00 == (System_Collections_Generic_Stack_int__o *)0x0) break;
      if (0 < (__this_00->fields)._size) {
        __this_01 = (__this->fields)._repeatStartLines;
        value = System_Collections_Generic_Stack_int___Pop
                          (__this_00,(MethodInfo_4102E90 *)MethodInfo_System_Collections_Generic_Stack_int_Pop
                          );
        if (__this_01 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_058617a0;
        break;
      }
      bVar4 = true;
    }
    else if (iVar7 == 0xf) {
      key = Weather_WeatherEvent__GetValue(pWVar5,(MethodInfo *)0x0);
      if ((key != (Il2CppObject *)0x0) && (key->klass != g_data_07556758)) {
        il2cpp_codegen_raise_invalid_cast_exception(key);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields)._scheduleLabels;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) break;
      bVar3 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                        (pSVar2,key,
                         (MethodInfo_4A9D990 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey);
      if (!bVar3) {
        pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields)._scheduleLabels;
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__int___Add
                  (pSVar2,key,index,
                   (MethodInfo_4A9D780 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
      }
    }
    index = index + 1;
    pWVar6 = (__this->fields).Schedule;
  } while (pWVar6 != (Weather_WeatherSchedule_o *)0x0);
label_05861756:
  ThrowNullReferenceException();
}


// Weather.WeatherScheduleRunner$$ConsumeSchedule
// il2cpp: void Weather_WeatherScheduleRunner__ConsumeSchedule (Weather_WeatherScheduleRunner_o* __this, const MethodInfo* method);
// 0x5861960
// eh: try 0x58625a3..0x58626d8 -> pad 0x58626e9 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5862705..0x586270a -> pad 0x58627ba cleanup
// eh: try 0x58627bd..0x58627c7 -> pad 0x58627cf catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5862626: mov rax, qword ptr [r14]
// asm:   0x5862629: test rax, rax
// asm:   0x586262c: mov rbp, qword ptr [rsp + 8]
// asm:   0x5862631: je 0x586279d
// asm:   0x5862637: nop word ptr [rax + rax]
// asm:   0x5862640: mov byte ptr [rax + 0x7c], 1
// asm:   0x58626dd: jmp 0x58626e9
// asm:   0x58626df: jmp 0x58626e9
// asm:   0x58626e1: jmp 0x58626e9
// asm:   0x58626e3: jmp 0x58626e9
// asm:   0x58626e5: jmp 0x58626e9
// asm:   0x58626e7: jmp 0x58626e9
// asm:   0x58626e9: mov rbp, rax
// asm:   0x58626ec: cmp edx, 1
// asm:   0x58626ef: jne 0x58627bd
// asm:   0x58626f5: mov rdi, rbp
// asm:   0x58626f8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58626fd: mov rbx, qword ptr [rax]
// asm:   0x5862700: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5862705: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x586270a: lea rax, [rip + 0x1a2c7d7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEffect_Dispose
// asm:   0x5862711: mov rsi, qword ptr [rax]
// asm:   0x5862714: lea rdi, [rsp + 0x40]
// asm:   0x5862719: call 0x4d3c9b0  ; System_Collections_Generic_List_Enumerator_Int32Enum___Dispose()
// asm:   0x586271e: test rbx, rbx
// asm:   0x5862721: je 0x5862626
// asm:   0x5862727: mov rdi, rbx
// asm:   0x586272a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58627ba: mov rbp, rax
// asm:   0x58627bd: lea rdi, [rsp + 0x10]
// asm:   0x58627c2: call 0x2fceb30  ; il2cpp_runtime_helper_02fceb30()
// asm:   0x58627c7: mov rdi, rbp
// asm:   0x58627ca: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58627cf: mov rdi, rax
// asm:   0x58627d2: call 0x2ab61e0  ; __clang_call_terminate()

void Weather_WeatherScheduleRunner__ConsumeSchedule
               (Weather_WeatherScheduleRunner_o *__this,MethodInfo *method)

{
  Weather_WeatherManager_o **ppWVar1;
  byte bVar2;
  int index;
  Weather_WeatherSchedule_o *pWVar3;
  System_Collections_Generic_List_WeatherEvent__o *pSVar4;
  System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *__this_00;
  System_Collections_Generic_LinkedList_int__o *pSVar5;
  System_Collections_Generic_Dictionary_object__int__o *pSVar6;
  System_Collections_Generic_Dictionary_int__int__o *pSVar7;
  System_Collections_Generic_Dictionary_int__float__o *pSVar8;
  System_Collections_Specialized_OrderedDictionary_o *pSVar9;
  Weather_WeatherManager_o *pWVar10;
  Settings_BoolSetting_o *pSVar11;
  bool bVar12;
  int32_t iVar13;
  int iVar14;
  Weather_WeatherEvent_o *__this_01;
  int32_t *piVar15;
  Il2CppObject *pIVar16;
  float *pfVar17;
  System_Collections_Generic_LinkedListNode_T__o *pSVar18;
  System_String_o *pSVar19;
  Settings_WeatherSet_o *pSVar20;
  System_Collections_Generic_List_T__o *__this_02;
  Il2CppClass *pIVar21;
  bool bVar22;
  int iVar23;
  undefined1 local_98 [8];
  System_Collections_Generic_List_Enumerator_T__o *pSStack_90;
  int32_t local_88;
  undefined4 uStack_84;
  int32_t local_7c;
  Il2CppObject *local_78;
  int32_t local_70;
  float local_6c;
  undefined1 local_68 [8];
  System_Collections_Generic_List_Enumerator_T__o *pSStack_60;
  Il2CppObject *local_58;
  Il2CppObject *local_50;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (Il2CppMethodInitialized_075450b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_TryGetValue);
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
    Il2CppMethodInitialized_075450b9 = '\x01';
  }
  local_7c = 0;
  local_70 = 0;
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_T__o *)0x0;
  local_58 = (Il2CppObject *)0x0;
  ppWVar1 = &(__this->fields)._manager;
  iVar23 = 0;
  bVar22 = false;
  do {
    if (iVar23 == 200) {
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      ApplicationManagers_DebugConsole__Log("Weather schedule reached max usage (did you forget to use waits?)",true,(MethodInfo *)0x0);
      pWVar3 = (__this->fields).Schedule;
      if ((pWVar3 != (Weather_WeatherSchedule_o *)0x0) &&
         (pSVar4 = (pWVar3->fields).Events, pSVar4 != (System_Collections_Generic_List_WeatherEvent__o *)0x0))
      {
        piVar15 = &(pSVar4->fields)._version;
        *piVar15 = *piVar15 + 1;
        iVar13 = (pSVar4->fields)._size;
        (pSVar4->fields)._size = 0;
        if (0 < iVar13) {
          System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar13,(MethodInfo *)0x0);
        }
        return;
      }
      goto label_0586279d;
    }
    pWVar3 = (__this->fields).Schedule;
    if ((pWVar3 == (Weather_WeatherSchedule_o *)0x0) ||
       (pSVar4 = (pWVar3->fields).Events, pSVar4 == (System_Collections_Generic_List_WeatherEvent__o *)0x0))
    goto label_0586279d;
    iVar14 = (pSVar4->fields)._size;
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
    __this_01 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar4,index,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_WeatherEvent_get_Item);
    if (__this_01 == (Weather_WeatherEvent_o *)0x0) goto label_0586279d;
    switch((__this_01->fields).Action) {
    case 3:
      pSVar7 = (__this->fields)._repeatCurrentCounts;
      iVar13 = (__this->fields)._currentScheduleLine;
      pIVar16 = Weather_WeatherEvent__GetValue(__this_01,(MethodInfo *)0x0);
      if ((pSVar7 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
         (pIVar16 == (Il2CppObject *)0x0)) goto label_0586279d;
      if ((pIVar16->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) goto label_058627a2;
      piVar15 = il2cpp_vm_Object_Unbox(pIVar16);
      System_Collections_Generic_Dictionary_int__int___set_Item
                (pSVar7,iVar13,*piVar15,
                 (MethodInfo_4A03F00 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item);
      break;
    case 4:
      pSVar7 = (__this->fields)._repeatStartLines;
      if (pSVar7 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_0586279d;
      bVar12 = System_Collections_Generic_Dictionary_int__int___TryGetValue
                         (pSVar7,(__this->fields)._currentScheduleLine,&local_7c,
                          (MethodInfo_4A05BD0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_int_TryGetValue);
      if (bVar12) {
        pSVar7 = (__this->fields)._repeatCurrentCounts;
        if (pSVar7 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_0586279d;
        bVar12 = System_Collections_Generic_Dictionary_int__int___TryGetValue
                           (pSVar7,local_7c,&local_70,
                            (MethodInfo_4A05BD0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_int_TryGetValue);
        if ((bVar12) && (0 < local_70)) {
          (__this->fields)._currentScheduleLine = local_7c;
          pSVar7 = (__this->fields)._repeatCurrentCounts;
          if (pSVar7 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_0586279d;
          System_Collections_Generic_Dictionary_int__int___set_Item
                    (pSVar7,local_7c,local_70 + -1,
                     (MethodInfo_4A03F00 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item);
        }
      }
      break;
    case 5:
      if (((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
          (pSVar20 = ((*ppWVar1)->fields)._currentWeather, pSVar20 == (Settings_WeatherSet_o *)0x0)) ||
         (pSVar11 = (pSVar20->fields).ScheduleLoop, pSVar11 == (Settings_BoolSetting_o *)0x0))
      goto label_0586279d;
      bVar12 = (pSVar11->fields)._value;
      (*(pSVar20->klass->vtable)._4_SetDefault.methodPtr)
                (pSVar20,(pSVar20->klass->vtable)._4_SetDefault.method);
      if (((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
          (pSVar20 = ((*ppWVar1)->fields)._currentWeather, pSVar20 == (Settings_WeatherSet_o *)0x0)) ||
         (pSVar11 = (pSVar20->fields).UseSchedule, pSVar11 == (Settings_BoolSetting_o *)0x0))
      goto label_0586279d;
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar11,true,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      if (((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
          (pSVar20 = ((*ppWVar1)->fields)._currentWeather, pSVar20 == (Settings_WeatherSet_o *)0x0)) ||
         (pSVar11 = (pSVar20->fields).ScheduleLoop, pSVar11 == (Settings_BoolSetting_o *)0x0))
      goto label_0586279d;
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar11,bVar12,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pWVar10 = *ppWVar1;
      goto joined_r0x05862631;
    case 6:
      if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar20 = ((*ppWVar1)->fields)._currentWeather, pSVar20 == (Settings_WeatherSet_o *)0x0))
      goto label_0586279d;
      pSVar9 = (pSVar20->fields).Settings;
      local_98 = (undefined1  [8])TypeInfo_Weather_WeatherEffect;
      pSStack_90 = (System_Collections_Generic_List_Enumerator_T__o *)0xffffffffffffffff;
      local_88 = (__this_01->fields).Effect;
      pSVar19 = System_Enum__ToString((System_Enum_o *)local_98,(MethodInfo *)0x0);
      if ((pSVar9 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) ||
         (pIVar16 = System_Collections_Specialized_OrderedDictionary__get_Item
                              (pSVar9,(Il2CppObject *)pSVar19,(MethodInfo *)0x0),
         pIVar16 == (Il2CppObject *)0x0)) goto label_0586279d;
      pIVar21 = pIVar16->klass;
      bVar2 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
      if ((bVar2 <= (pIVar21->_2).typeHierarchyDepth) &&
         ((pIVar21->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
label_058620c2:
        (*pIVar21->vtable[4].methodPtr)(pIVar16,pIVar21->vtable[4].method);
        pWVar10 = *ppWVar1;
        goto joined_r0x05862631;
      }
      goto label_058627a2;
    case 7:
      if (*ppWVar1 == (Weather_WeatherManager_o *)0x0) goto label_0586279d;
      pSVar20 = ((*ppWVar1)->fields)._currentWeather;
      goto label_058620f3;
    case 8:
      if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar20 = ((*ppWVar1)->fields)._targetWeather, pSVar20 == (Settings_WeatherSet_o *)0x0))
      goto label_0586279d;
      (*(pSVar20->klass->vtable)._4_SetDefault.methodPtr)
                (pSVar20,(pSVar20->klass->vtable)._4_SetDefault.method);
      pWVar10 = *ppWVar1;
      goto joined_r0x05862631;
    case 9:
      if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar20 = ((*ppWVar1)->fields)._targetWeather, pSVar20 == (Settings_WeatherSet_o *)0x0))
      goto label_0586279d;
      pSVar9 = (pSVar20->fields).Settings;
      local_98 = (undefined1  [8])TypeInfo_Weather_WeatherEffect;
      pSStack_90 = (System_Collections_Generic_List_Enumerator_T__o *)0xffffffffffffffff;
      local_88 = (__this_01->fields).Effect;
      pSVar19 = System_Enum__ToString((System_Enum_o *)local_98,(MethodInfo *)0x0);
      if ((pSVar9 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) ||
         (pIVar16 = System_Collections_Specialized_OrderedDictionary__get_Item
                              (pSVar9,(Il2CppObject *)pSVar19,(MethodInfo *)0x0),
         pIVar16 == (Il2CppObject *)0x0)) goto label_0586279d;
      pIVar21 = pIVar16->klass;
      bVar2 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
      if ((bVar2 <= (pIVar21->_2).typeHierarchyDepth) &&
         ((pIVar21->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_BaseSetting))
      goto label_058620c2;
label_058627a2:
label_058627a5:
      il2cpp_codegen_raise_invalid_cast_exception(pIVar16);
    case 10:
      if (*ppWVar1 == (Weather_WeatherManager_o *)0x0) goto label_0586279d;
      pSVar20 = ((*ppWVar1)->fields)._targetWeather;
label_058620f3:
      if (pSVar20 == (Settings_WeatherSet_o *)0x0) goto label_0586279d;
      pSVar9 = (pSVar20->fields).Settings;
      local_98 = (undefined1  [8])TypeInfo_Weather_WeatherEffect;
      pSStack_90 = (System_Collections_Generic_List_Enumerator_T__o *)0xffffffffffffffff;
      local_88 = (__this_01->fields).Effect;
      pSVar19 = System_Enum__ToString((System_Enum_o *)local_98,(MethodInfo *)0x0);
      if (pSVar9 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_0586279d;
      pSVar19 = (System_String_o *)
                System_Collections_Specialized_OrderedDictionary__get_Item
                          (pSVar9,(Il2CppObject *)pSVar19,(MethodInfo *)0x0);
      iVar13 = Weather_WeatherEvent__GetSettingType(__this_01,(MethodInfo *)0x0);
      pIVar16 = Weather_WeatherEvent__GetValue(__this_01,(MethodInfo *)0x0);
      if (pSVar19 != (System_String_o *)0x0) {
        bVar2 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
        if (((pSVar19->klass->_2).typeHierarchyDepth < bVar2) ||
           ((pSVar19->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
label_058627aa:
          il2cpp_codegen_raise_invalid_cast_exception(pSVar19);
        }
      }
      Settings_SettingsUtil__SetSettingValue
                ((Settings_BaseSetting_o *)pSVar19,iVar13,pIVar16,(MethodInfo *)0x0);
      if (*ppWVar1 == (Weather_WeatherManager_o *)0x0) goto label_0586279d;
      ((*ppWVar1)->fields)._needSync = true;
      break;
    case 0xb:
      if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar8 = ((*ppWVar1)->fields)._targetWeatherStartTimes,
         pSVar8 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto label_0586279d;
      System_Collections_Generic_Dictionary_int__float___Clear
                (pSVar8,(MethodInfo_4A17650 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Clear
                );
      if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar8 = ((*ppWVar1)->fields)._targetWeatherEndTimes,
         pSVar8 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto label_0586279d;
      System_Collections_Generic_Dictionary_int__float___Clear
                (pSVar8,(MethodInfo_4A17650 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Clear
                );
      if (*ppWVar1 == (Weather_WeatherManager_o *)0x0) goto label_0586279d;
      local_78 = (Il2CppObject *)CONCAT44(local_78._4_4_,((*ppWVar1)->fields)._currentTime);
      pIVar16 = Weather_WeatherEvent__GetValue(__this_01,(MethodInfo *)0x0);
      if (pIVar16 == (Il2CppObject *)0x0) goto label_0586279d;
      if ((pIVar16->klass->_1).element_class != *(Il2CppClass **)(g_data_07556740 + 0x40)) goto label_058627a2;
      pfVar17 = il2cpp_vm_Object_Unbox(pIVar16);
      local_78 = (Il2CppObject *)CONCAT44(local_78._4_4_,local_78._0_4_ + *pfVar17);
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      __this_02 = Utility_Util__EnumToList_Int32Enum_
                            ((MethodInfo_377C780 *)MethodInfo_Utility_Util_EnumToList_WeatherEffect);
      if (__this_02 == (System_Collections_Generic_List_T__o *)0x0) goto label_0586279d;
      System_Collections_Generic_List_Int32Enum___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_98,__this_02,
                 (MethodInfo_391A9A0 *)MethodInfo_System_Collections_Generic_List_WeatherEffect_GetEnumerator)
      ;
      local_58 = (Il2CppObject *)CONCAT44(uStack_84,local_88);
      local_68 = local_98;
      pSStack_60 = pSStack_90;
      local_98 = (undefined1  [8])0x0;
      pSStack_90 = (System_Collections_Generic_List_Enumerator_T__o *)local_68;
      while (bVar12 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext
                                ((System_Collections_Generic_List_Enumerator_T__o *)local_68,
                                 (MethodInfo_4C3C9C0 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEffect_MoveNext)
            , bVar12) {
        pWVar10 = *ppWVar1;
        if (pWVar10 == (Weather_WeatherManager_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar8 = (pWVar10->fields)._targetWeatherStartTimes;
        if (pSVar8 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar13 = (int32_t)local_58;
        System_Collections_Generic_Dictionary_int__float___Add
                  (pSVar8,(int32_t)local_58,(pWVar10->fields)._currentTime,
                   (MethodInfo_4A17490 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Add);
        if (*ppWVar1 == (Weather_WeatherManager_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar8 = ((*ppWVar1)->fields)._targetWeatherEndTimes;
        if (pSVar8 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_int__float___Add
                  (pSVar8,iVar13,local_78._0_4_,
                   (MethodInfo_4A17490 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Add);
      }
      System_Collections_Generic_List_Enumerator_Int32Enum___Dispose
                ((System_Collections_Generic_List_Enumerator_T__o *)local_68,
                 (MethodInfo_4C3C9B0 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEffect_Dispose);
      pWVar10 = *ppWVar1;
      goto joined_r0x05862631;
    case 0xc:
      if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar8 = ((*ppWVar1)->fields)._targetWeatherStartTimes,
         pSVar8 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto label_0586279d;
      bVar12 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                         (pSVar8,(__this_01->fields).Effect,
                          (MethodInfo_4A176B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_float_ContainsKey);
      if (!bVar12) {
        if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
           (pSVar8 = ((*ppWVar1)->fields)._targetWeatherStartTimes,
           pSVar8 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto label_0586279d;
        System_Collections_Generic_Dictionary_int__float___Add
                  (pSVar8,(__this_01->fields).Effect,0.0,
                   (MethodInfo_4A17490 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Add);
        if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
           (pSVar8 = ((*ppWVar1)->fields)._targetWeatherEndTimes,
           pSVar8 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto label_0586279d;
        System_Collections_Generic_Dictionary_int__float___Add
                  (pSVar8,(__this_01->fields).Effect,0.0,
                   (MethodInfo_4A17490 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_Add);
      }
      if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar20 = ((*ppWVar1)->fields)._startWeather, pSVar20 == (Settings_WeatherSet_o *)0x0))
      goto label_0586279d;
      pSVar9 = (pSVar20->fields).Settings;
      local_98 = (undefined1  [8])TypeInfo_Weather_WeatherEffect;
      pSStack_90 = (System_Collections_Generic_List_Enumerator_T__o *)0xffffffffffffffff;
      local_88 = (__this_01->fields).Effect;
      pSVar19 = System_Enum__ToString((System_Enum_o *)local_98,(MethodInfo *)0x0);
      if (pSVar9 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_0586279d;
      pIVar16 = System_Collections_Specialized_OrderedDictionary__get_Item
                          (pSVar9,(Il2CppObject *)pSVar19,(MethodInfo *)0x0);
      if ((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar20 = ((*ppWVar1)->fields)._currentWeather, local_78 = pIVar16,
         pSVar20 == (Settings_WeatherSet_o *)0x0)) goto label_0586279d;
      pSVar9 = (pSVar20->fields).Settings;
      local_48.klass = (System_Enum_c *)TypeInfo_Weather_WeatherEffect;
      local_48.monitor = (void *)0xffffffffffffffff;
      local_38 = (__this_01->fields).Effect;
      pSVar19 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
      if (pSVar9 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_0586279d;
      pIVar16 = System_Collections_Specialized_OrderedDictionary__get_Item
                          (pSVar9,(Il2CppObject *)pSVar19,(MethodInfo *)0x0);
      if (pIVar16 != (Il2CppObject *)0x0) {
        bVar2 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
        if (((pIVar16->klass->_2).typeHierarchyDepth < bVar2) ||
           ((pIVar16->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar16);
        }
      }
      pWVar10 = *ppWVar1;
      if ((pWVar10 == (Weather_WeatherManager_o *)0x0) ||
         (pSVar8 = (pWVar10->fields)._targetWeatherStartTimes,
         pSVar8 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)) goto label_0586279d;
      local_50 = pIVar16;
      System_Collections_Generic_Dictionary_int__float___set_Item
                (pSVar8,(__this_01->fields).Effect,(pWVar10->fields)._currentTime,
                 (MethodInfo_4A17470 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_set_Item);
      pWVar10 = *ppWVar1;
      if (pWVar10 == (Weather_WeatherManager_o *)0x0) goto label_0586279d;
      pSVar8 = (pWVar10->fields)._targetWeatherEndTimes;
      iVar13 = (__this_01->fields).Effect;
      local_6c = (pWVar10->fields)._currentTime;
      pIVar16 = Weather_WeatherEvent__GetValue(__this_01,(MethodInfo *)0x0);
      if ((pSVar8 == (System_Collections_Generic_Dictionary_int__float__o *)0x0) ||
         (pIVar16 == (Il2CppObject *)0x0)) goto label_0586279d;
      if ((pIVar16->klass->_1).element_class != *(Il2CppClass **)(g_data_07556740 + 0x40)) goto label_058627a2;
      pfVar17 = il2cpp_vm_Object_Unbox(pIVar16);
      System_Collections_Generic_Dictionary_int__float___set_Item
                (pSVar8,iVar13,local_6c + *pfVar17,
                 (MethodInfo_4A17470 *)MethodInfo_System_Collections_Generic_Dictionary_int_float_set_Item);
      if (local_78 == (Il2CppObject *)0x0) goto label_0586279d;
      pIVar21 = local_78->klass;
      bVar2 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
      pIVar16 = local_78;
      if (((pIVar21->_2).typeHierarchyDepth < bVar2) ||
         ((pIVar21->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting))
      goto label_058627a5;
      (*pIVar21->vtable[10].methodPtr)(local_78,local_50,pIVar21->vtable[10].method);
      pWVar10 = *ppWVar1;
joined_r0x05862631:
      if (pWVar10 == (Weather_WeatherManager_o *)0x0) goto label_0586279d;
      (pWVar10->fields)._needSync = true;
      break;
    case 0xd:
      if (*ppWVar1 == (Weather_WeatherManager_o *)0x0) goto label_0586279d;
      __this_00 = ((*ppWVar1)->fields)._currentScheduleWait;
      pIVar16 = Weather_WeatherEvent__GetValue(__this_01,(MethodInfo *)0x0);
      if ((__this_00 == (System_Collections_Generic_Dictionary_WeatherScheduleRunner__float__o *)0x0) ||
         (pIVar16 == (Il2CppObject *)0x0)) goto label_0586279d;
      if ((pIVar16->klass->_1).element_class != *(Il2CppClass **)(g_data_07556740 + 0x40)) goto label_058627a2;
      pfVar17 = il2cpp_vm_Object_Unbox(pIVar16);
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)__this,
                 *pfVar17,(MethodInfo_4AB5450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_WeatherScheduleRunner_float_set_Item
                );
      bVar22 = true;
      break;
    case 0xe:
      pSVar19 = (System_String_o *)Weather_WeatherEvent__GetValue(__this_01,(MethodInfo *)0x0);
      if ((pSVar19 != (System_String_o *)0x0) && (pSVar19->klass != g_data_07556758)) goto label_058627aa;
      bVar12 = System_String__op_Inequality(pSVar19,"NextLine",(MethodInfo *)0x0);
      if (bVar12) {
        pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields)._scheduleLabels;
        if (pSVar6 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto label_0586279d;
        bVar12 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                           (pSVar6,(Il2CppObject *)pSVar19,
                            (MethodInfo_4A9D990 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey);
        if (bVar12) {
          pSVar5 = (__this->fields)._callerStack;
          if (pSVar5 == (System_Collections_Generic_LinkedList_int__o *)0x0) goto label_0586279d;
          System_Collections_Generic_LinkedList_int___AddLast
                    (pSVar5,(__this->fields)._currentScheduleLine,
                     (MethodInfo_514E310 *)MethodInfo_System_Collections_Generic_LinkedList_int_AddLast);
          pSVar5 = (__this->fields)._callerStack;
          if (pSVar5 == (System_Collections_Generic_LinkedList_int__o *)0x0) goto label_0586279d;
          if (200 < (pSVar5->fields).count) {
            System_Collections_Generic_LinkedList_int___RemoveFirst
                      (pSVar5,(MethodInfo_514E9C0 *)
                              MethodInfo_System_Collections_Generic_LinkedList_int_RemoveFirst);
          }
          pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields)._scheduleLabels;
          if (pSVar6 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto label_0586279d;
          iVar13 = System_Collections_Generic_Dictionary_object__int___get_Item
                             (pSVar6,(Il2CppObject *)pSVar19,
                              (MethodInfo_4A9D700 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item);
          (__this->fields)._currentScheduleLine = iVar13;
        }
      }
      break;
    case 0x10:
      pSVar5 = (__this->fields)._callerStack;
      if (pSVar5 == (System_Collections_Generic_LinkedList_int__o *)0x0) goto label_0586279d;
      if (0 < (pSVar5->fields).count) {
        pSVar18 = System_Collections_Generic_LinkedList_int___get_Last
                            (pSVar5,(MethodInfo_514E080 *)
                                    MethodInfo_System_Collections_Generic_LinkedList_int_get_Last);
        if (pSVar18 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) goto label_0586279d;
        (__this->fields)._currentScheduleLine = *(int32_t *)&(pSVar18->fields).item;
        pSVar5 = (__this->fields)._callerStack;
        if (pSVar5 == (System_Collections_Generic_LinkedList_int__o *)0x0) goto label_0586279d;
        System_Collections_Generic_LinkedList_int___RemoveLast
                  (pSVar5,(MethodInfo_514EA30 *)
                          MethodInfo_System_Collections_Generic_LinkedList_int_RemoveLast);
      }
    }
    iVar14 = (__this->fields)._currentScheduleLine + 1;
    (__this->fields)._currentScheduleLine = iVar14;
    pWVar3 = (__this->fields).Schedule;
    if ((pWVar3 == (Weather_WeatherSchedule_o *)0x0) ||
       (pSVar4 = (pWVar3->fields).Events, pSVar4 == (System_Collections_Generic_List_WeatherEvent__o *)0x0)) {
label_0586279d:
      ThrowNullReferenceException();
    }
    if ((pSVar4->fields)._size <= iVar14) {
      if (((*ppWVar1 == (Weather_WeatherManager_o *)0x0) ||
          (pSVar20 = ((*ppWVar1)->fields)._currentWeather, pSVar20 == (Settings_WeatherSet_o *)0x0)) ||
         (pSVar11 = (pSVar20->fields).ScheduleLoop, pSVar11 == (Settings_BoolSetting_o *)0x0))
      goto label_0586279d;
      if ((pSVar11->fields)._value != false) {
        (__this->fields)._currentScheduleLine = 0;
      }
    }
    iVar23 = iVar23 + 1;
    if (bVar22) {
      return;
    }
  } while( true );
}


