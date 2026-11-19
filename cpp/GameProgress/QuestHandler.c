// Type: GameProgress.QuestHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/QuestHandler.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/QuestHandler.cs
// --------------------------------

// GameProgress.QuestHandler$$.ctor
// il2cpp: void GameProgress_QuestHandler___ctor (GameProgress_QuestHandler_o* __this, GameProgress_QuestContainer_o* quest, const MethodInfo* method);
// 0x591abc0

void GameProgress_QuestHandler___ctor
               (GameProgress_QuestHandler_o *__this,GameProgress_QuestContainer_o *quest,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__List_QuestItem___o *__this_00;
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_07545766 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_List_QuestItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"ReachSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"KillHuman");
    il2cpp_codegen_initialize_runtime_metadata(&"ShareGas");
    il2cpp_codegen_initialize_runtime_metadata(&"DealDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"HitDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"CarryPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"KillTitan");
    Il2CppMethodInitialized_07545766 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_List_QuestItem);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ctor
            );
  (__this->fields)._activeQuests = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeQuests);
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
  if (pSVar1 == (System_String_array *)0x0) {
label_0591aea6:
    ThrowNullReferenceException();
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = "KillTitan";
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    (__this->fields).TitanKillCategories = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).TitanKillCategories);
    pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
    if (pSVar1 == (System_String_array *)0x0) goto label_0591aea6;
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "KillHuman";
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
      (__this->fields).HumanKillCategories = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields).HumanKillCategories);
      pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
      if (pSVar1 == (System_String_array *)0x0) goto label_0591aea6;
      if ((int)pSVar1->max_length != 0) {
        pSVar1->m_Items[0] = "DealDamage";
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
        if ((pSVar1->max_length & 0xfffffffe) != 0) {
          pSVar1->m_Items[1] = "HitDamage";
          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
          (__this->fields).DamageCategories = pSVar1;
          Il2CppCodeGenWriteBarrier(&(__this->fields).DamageCategories);
          pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
          if (pSVar1 == (System_String_array *)0x0) goto label_0591aea6;
          if ((int)pSVar1->max_length != 0) {
            pSVar1->m_Items[0] = "ReachSpeed";
            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
            (__this->fields).SpeedCategories = pSVar1;
            Il2CppCodeGenWriteBarrier(&(__this->fields).SpeedCategories);
            pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
            if (pSVar1 == (System_String_array *)0x0) goto label_0591aea6;
            if ((int)pSVar1->max_length != 0) {
              pSVar1->m_Items[0] = "ShareGas";
              Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
              if ((pSVar1->max_length & 0xfffffffe) != 0) {
                pSVar1->m_Items[1] = "CarryPlayer";
                Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                (__this->fields).InteractionCategories = pSVar1;
                Il2CppCodeGenWriteBarrier(&(__this->fields).InteractionCategories);
                System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                if (quest == (GameProgress_QuestContainer_o *)0x0) {
                  return;
                }
                (__this->fields)._quest = quest;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._quest);
                GameProgress_QuestHandler__LoadQuests(__this,(MethodInfo *)quest);
                GameProgress_QuestHandler__CacheActiveQuests(__this,(MethodInfo *)quest);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// GameProgress.QuestHandler$$ReloadQuests
// il2cpp: void GameProgress_QuestHandler__ReloadQuests (GameProgress_QuestHandler_o* __this, const MethodInfo* method);
// 0x59203d0

void GameProgress_QuestHandler__ReloadQuests(GameProgress_QuestHandler_o *__this,MethodInfo *method)

{
  GameProgress_QuestHandler__LoadQuests(__this,method);
  GameProgress_QuestHandler__CacheActiveQuests(__this,method);
  return;
}


// GameProgress.QuestHandler$$GetTimeToQuestReset
// il2cpp: System_String_o* GameProgress_QuestHandler__GetTimeToQuestReset (bool daily, const MethodInfo* method);
// 0x5922bd0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5922e1a: jmp 0x5922e5f
// asm:   0x5922ee6: jmp 0x5922f0b
// asm:   0x5922ee8: lea rax, [rip + 0x19d3af1]  ; "hours"
// asm:   0x5922eef: mov rbp, qword ptr [rax]
// asm:   0x5922ef2: test rbp, rbp

System_String_o * GameProgress_QuestHandler__GetTimeToQuestReset(bool daily,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *format;
  int32_t iVar2;
  System_DateTime_o d1;
  Il2CppObject *pIVar3;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  int iVar6;
  System_String_o **ppSVar7;
  System_DateTime_o local_40;
  System_TimeSpan_o local_38;
  
  if (Il2CppMethodInitialized_07545767 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    il2cpp_codegen_initialize_runtime_metadata(&"day");
    il2cpp_codegen_initialize_runtime_metadata(&"hour");
    il2cpp_codegen_initialize_runtime_metadata(&"days");
    il2cpp_codegen_initialize_runtime_metadata(&"hours");
    il2cpp_codegen_initialize_runtime_metadata(&"Resets in: {0} {1}, {2} {3}");
    il2cpp_codegen_initialize_runtime_metadata(&"Resets in: {0} {1}");
    Il2CppMethodInitialized_07545767 = '\x01';
  }
  local_38.fields._ticks = (System_TimeSpan_Fields)0;
  if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
  }
  d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  local_40.fields._dateData = (System_DateTime_Fields)0;
  System_DateTime___ctor_5493df0(&local_40,0x7b2,1,1,(MethodInfo *)0x0);
  local_38 = System_DateTime__op_Subtraction_5498240(d1,local_40,(MethodInfo *)0x0);
  uVar1 = (TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor;
  if (daily) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
    }
    iVar2 = System_TimeSpan__get_Hours(&local_38,(MethodInfo *)0x0);
    local_40.fields._dateData._0_4_ = 0x18 - iVar2;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_40);
    if (iVar2 == 0x17) {
      ppSVar7 = &"hour";
    }
    else {
      ppSVar7 = &"hours";
    }
    pSVar5 = System_String__Format_5302c50
                       ("Resets in: {0} {1}",pIVar3,(Il2CppObject *)*ppSVar7,(MethodInfo *)0x0);
    return pSVar5;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  iVar2 = System_TimeSpan__get_Days(&local_38,(MethodInfo *)0x0);
  iVar6 = (int)((ulong)((long)(iVar2 + -1) * -0x6db6db6d) >> 0x20) + iVar2 + -1;
  iVar6 = iVar2 + ((iVar6 >> 2) - (iVar6 >> 0x1f)) * -7 + -1;
  iVar2 = System_TimeSpan__get_Hours(&local_38,(MethodInfo *)0x0);
  args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,4);
  local_40.fields._dateData._0_4_ = 6 - iVar6;
  pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_40);
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pIVar3 != (Il2CppObject *)0x0) &&
     (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((args->obj).klass)->_1).element_class),
     pIVar4 == (Il2CppObject *)0x0)) {
label_05922f48:
    pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar3;
    Il2CppCodeGenWriteBarrier(args->m_Items);
    format = "Resets in: {0} {1}, {2} {3}";
    pSVar5 = "days";
    if (iVar6 == 5) {
      pSVar5 = "day";
    }
    if ((pSVar5 != (System_String_o *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((args->obj).klass)->_1).element_class),
       pIVar3 == (Il2CppObject *)0x0)) goto label_05922f48;
    if ((args->max_length & 0xfffffffe) != 0) {
      args->m_Items[1] = (Il2CppObject *)pSVar5;
      Il2CppCodeGenWriteBarrier(args->m_Items + 1);
      local_40.fields._dateData._0_4_ = 0x18 - iVar2;
      pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_40);
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((args->obj).klass)->_1).element_class),
         pIVar4 == (Il2CppObject *)0x0)) goto label_05922f48;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar3;
        Il2CppCodeGenWriteBarrier(args->m_Items + 2);
        pSVar5 = "hours";
        if (iVar2 == 0x17) {
          pSVar5 = "hour";
        }
        if ((pSVar5 != (System_String_o *)0x0) &&
           (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((args->obj).klass)->_1).element_class),
           pIVar3 == (Il2CppObject *)0x0)) goto label_05922f48;
        if ((args->max_length & 0xfffffffc) != 0) {
          args->m_Items[3] = (Il2CppObject *)pSVar5;
          Il2CppCodeGenWriteBarrier(args->m_Items + 3);
          pSVar5 = System_String__Format_5302cf0(format,args,(MethodInfo *)0x0);
          return pSVar5;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// GameProgress.QuestHandler$$LoadQuests
// il2cpp: void GameProgress_QuestHandler__LoadQuests (GameProgress_QuestHandler_o* __this, const MethodInfo* method);
// 0x59220b0
// eh: try 0x59223df..0x59227db -> pad 0x59227ea (+15 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5922822..0x5922827 -> pad 0x592284a cleanup
// eh: try 0x592284d..0x5922857 -> pad 0x59228b7 catch (...) [compiler noexcept guard]
// eh: try 0x592287a..0x592287f -> pad 0x59228a2 cleanup
// eh: try 0x59228a5..0x59228af -> pad 0x59228b7 catch (...) [compiler noexcept guard]
// asm: 70 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59223bd: mov rbp, rsp
// asm:   0x59223c0: lea r15, [rip + 0x1973cb9]  ; MethodInfo_System_Collections_Generic_List_QuestItem_Add
// asm:   0x59223c7: jmp 0x59223e4
// asm:   0x5922460: mov rbp, rsp
// asm:   0x5922463: nop word ptr cs:[rax + rax]
// asm:   0x59225bb: lea r15, [rip + 0x196c1f6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext
// asm:   0x59225c2: mov rbp, rsp
// asm:   0x59225c5: lea r12, [rip + 0x1973ab4]  ; MethodInfo_System_Collections_Generic_List_QuestItem_Add
// asm:   0x59225cc: jmp 0x59225e4
// asm:   0x592268a: lea rbx, [rip + 0x196c127]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext
// asm:   0x5922691: mov rbp, rsp
// asm:   0x5922694: nop word ptr cs:[rax + rax]
// asm:   0x59227e8: jmp 0x59227fe
// asm:   0x59227ea: jmp 0x592285b
// asm:   0x59227ec: jmp 0x59227fe
// asm:   0x59227ee: jmp 0x592285b
// asm:   0x59227f0: jmp 0x59227fe
// asm:   0x59227f2: jmp 0x592285b
// asm:   0x59227f4: jmp 0x59227fe
// asm:   0x59227f6: jmp 0x592285b
// asm:   0x59227f8: jmp 0x59227fe
// asm:   0x59227fa: jmp 0x592285b
// asm:   0x59227fc: jmp 0x59227fe
// asm:   0x59227fe: cmp edx, 1
// asm:   0x5922801: mov rbx, qword ptr [rsp + 0x50]
// asm:   0x5922806: mov r14, qword ptr [rsp + 0x28]
// asm:   0x592280b: mov r15, qword ptr [rsp + 0x20]
// asm:   0x5922810: jne 0x592284a
// asm:   0x5922812: mov rdi, rax
// asm:   0x5922815: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x592281a: mov rbp, qword ptr [rax]
// asm:   0x592281d: mov qword ptr [rsp + 0x30], rbp
// asm:   0x5922822: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5922827: lea rax, [rip + 0x196bf82]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x592282e: mov rsi, qword ptr [rax]
// asm:   0x5922831: mov rdi, rsp
// asm:   0x5922834: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5922839: test rbp, rbp
// asm:   0x592283c: je 0x5922718
// asm:   0x5922842: mov rdi, rbp
// asm:   0x5922845: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x592284a: mov rbx, rax
// asm:   0x592284d: lea rdi, [rsp + 0x30]
// asm:   0x5922852: call 0x2fd28c0  ; il2cpp_runtime_helper_02fd28c0()
// asm:   0x5922857: jmp 0x59228af
// asm:   0x5922859: jmp 0x592285b
// asm:   0x592285b: cmp edx, 1
// asm:   0x592285e: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x5922863: mov rbp, qword ptr [rsp + 0x20]
// asm:   0x5922868: jne 0x59228a2
// asm:   0x592286a: mov rdi, rax
// asm:   0x592286d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5922872: mov r15, qword ptr [rax]
// asm:   0x5922875: mov qword ptr [rsp + 0x30], r15
// asm:   0x592287a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x592287f: lea rax, [rip + 0x196bf2a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x5922886: mov rsi, qword ptr [rax]
// asm:   0x5922889: mov rdi, rsp
// asm:   0x592288c: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5922891: test r15, r15
// asm:   0x5922894: je 0x59224c1
// asm:   0x592289a: mov rdi, r15
// asm:   0x592289d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59228a2: mov rbx, rax
// asm:   0x59228a5: lea rdi, [rsp + 0x30]
// asm:   0x59228aa: call 0x2fd2890  ; il2cpp_runtime_helper_02fd2890()
// asm:   0x59228af: mov rdi, rbx
// asm:   0x59228b2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59228b7: mov rdi, rax
// asm:   0x59228ba: call 0x2ab61e0  ; __clang_call_terminate()

void GameProgress_QuestHandler__LoadQuests(GameProgress_QuestHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Il2CppClass *pIVar4;
  GameProgress_QuestContainer_o *pGVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  System_Object_array *pSVar7;
  Settings_ListSetting_QuestItem__o *pSVar8;
  undefined8 uVar9;
  bool bVar10;
  int32_t currentDay;
  int iVar11;
  System_DateTime_o d1;
  System_String_array *pSVar12;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar13;
  System_String_array *__this_01;
  System_Collections_Generic_List_QuestItem__o *pSVar14;
  Settings_ListSetting_QuestItem__o *pSVar15;
  MethodInfo *pMVar16;
  GameProgress_QuestHandler_o *pGVar17;
  GameProgress_QuestHandler_o *__this_02;
  MethodInfo *in_R9;
  int iVar18;
  undefined1 local_98 [56];
  System_String_array *pSStack_60;
  System_String_array *local_58;
  Settings_ListSetting_QuestItem__o *local_50;
  GameProgress_QuestHandler_o *local_48;
  System_DateTime_o local_40;
  System_TimeSpan_o local_38;
  
  if (Il2CppMethodInitialized_07545768 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_QuestItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_QuestItem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_QuestItem_AddRange)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_QuestItem_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_QuestItem_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_QuestContainer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_TextAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_QuestItem_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"QuestList");
    Il2CppMethodInitialized_07545768 = '\x01';
  }
  local_38.fields._ticks = (System_TimeSpan_Fields)0;
  local_98._0_8_ = (System_String_array *)0x0;
  local_98._8_8_ = (System_String_array *)0x0;
  local_98._16_8_ = (System_String_array *)0x0;
  if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
  }
  d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  local_40.fields._dateData = (System_DateTime_Fields)0;
  System_DateTime___ctor_5493df0(&local_40,0x7b2,1,1,(MethodInfo *)0x0);
  local_38 = System_DateTime__op_Subtraction_5498240(d1,local_40,(MethodInfo *)0x0);
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  pMVar16 = (MethodInfo *)0x0;
  currentDay = System_TimeSpan__get_Days(&local_38,(MethodInfo *)0x0);
  pSVar12 = (System_String_array *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_QuestContainer);
  GameProgress_QuestContainer___ctor((GameProgress_QuestContainer_o *)pSVar12,pMVar16);
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar13 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this_00 = ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar13,"QuestList",false,false,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    bVar2 = (TypeInfo_UnityEngine_TextAsset->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_TextAsset)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    pSVar13 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)__this_00,(MethodInfo *)0x0);
    if (pSVar12 != (System_String_array *)0x0) {
      pIVar4 = (pSVar12->obj).klass;
      (*(((GameProgress_QuestContainer_VTable *)pIVar4->vtable)->_9_DeserializeFromJsonString).methodPtr)
                (pSVar12,pSVar13,
                 (((GameProgress_QuestContainer_VTable *)pIVar4->vtable)->_9_DeserializeFromJsonString).method
                );
      __this_01 = (System_String_array *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_QuestItem);
      Settings_ListSetting_object____ctor_515d6d0
                ((Settings_ListSetting_T__o *)__this_01,
                 (MethodInfo_515D6D0 *)MethodInfo_Settings_ListSetting_QuestItem_ctor);
      pGVar5 = (__this->fields)._quest;
      if (((pGVar5 != (GameProgress_QuestContainer_o *)0x0) &&
          (pSVar15 = (pGVar5->fields).DailyQuestItems, pSVar15 != (Settings_ListSetting_QuestItem__o *)0x0))
         && (pSVar6 = (System_Collections_Generic_List_object__o *)(pSVar15->fields)._value,
            pSVar6 != (System_Collections_Generic_List_object__o *)0x0)) {
        local_98._40_8_ = pSVar12;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)(local_98 + 0x30),pSVar6,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
        pGVar17 = (GameProgress_QuestHandler_o *)local_98;
        __this_02 = (GameProgress_QuestHandler_o *)local_98;
        local_98._16_8_ = local_58;
        local_98._0_8_ = local_98._48_8_;
        local_98._8_8_ = pSStack_60;
        local_98._48_8_ = (System_String_array *)0x0;
        local_98._32_8_ = __this_01;
        pSStack_60 = (System_String_array *)local_98;
        pSVar12 = (System_String_array *)local_98;
        if (__this_01 == (System_String_array *)0x0) {
          while (pSStack_60 = pSVar12,
                bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   ((System_Collections_Generic_List_Enumerator_object__o *)local_98,
                                    (MethodInfo_4C45C50 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext),
                bVar10) {
            if ((System_String_array *)local_98._16_8_ == (System_String_array *)0x0) goto label_059227bd;
            if (((System_Collections_Generic_Dictionary_string__BaseSetting__o **)(local_98._16_8_ + 0x20))
                [10] == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)
            goto label_059227c2;
            pSVar12 = pSStack_60;
            if (*(int *)((long)((System_Collections_Generic_Dictionary_string__BaseSetting__o **)
                               (local_98._16_8_ + 0x20))[10] + 0x1c) == currentDay) {
              ThrowNullReferenceException();
            }
          }
        }
        else {
label_059223e4:
          bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_98,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
          pMVar16 = MethodInfo_System_Collections_Generic_List_QuestItem_Add;
          if (bVar10) {
            if ((System_String_array *)local_98._16_8_ == (System_String_array *)0x0) {
label_059227bd:
              ThrowNullReferenceException();
            }
            if (((System_Collections_Generic_Dictionary_string__BaseSetting__o **)(local_98._16_8_ + 0x20))
                [10] == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
label_059227c2:
              ThrowNullReferenceException();
            }
            if (*(int *)((long)((System_Collections_Generic_Dictionary_string__BaseSetting__o **)
                               (local_98._16_8_ + 0x20))[10] + 0x1c) == currentDay) {
              pSVar6 = *(System_Collections_Generic_List_object__o **)(local_98._32_8_ + 0x20);
              if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
                piVar1 = &(pSVar6->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar7 = (pSVar6->fields)._items;
                if (pSVar7 != (System_Object_array *)0x0) {
                  uVar3 = (pSVar6->fields)._size;
                  if (uVar3 < (uint)pSVar7->max_length) {
                    (pSVar6->fields)._size = uVar3 + 1;
                    pSVar7->m_Items[(int)uVar3] = (Il2CppObject *)local_98._16_8_;
                    Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar3);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              (pSVar6,(Il2CppObject *)local_98._16_8_,
                               (MethodInfo_395D230 *)pMVar16->klass->rgctx_data[0xe].method);
                  }
                  goto label_059223e4;
                }
              }
              ThrowNullReferenceException();
            }
            goto label_059223e4;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)local_98,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
        if (((System_String_array *)local_98._32_8_ != (System_String_array *)0x0) &&
           (pSVar6 = *(System_Collections_Generic_List_object__o **)(local_98._32_8_ + 0x20),
           pSVar6 != (System_Collections_Generic_List_object__o *)0x0)) {
          pSVar14 = GameProgress_QuestHandler__CreateQuests
                              (pGVar17,(GameProgress_QuestContainer_o *)local_98._40_8_,currentDay,true,
                               3 - (pSVar6->fields)._size,in_R9);
          System_Collections_Generic_List_object___AddRange
                    (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pSVar14,
                     (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_QuestItem_AddRange);
          pSVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_QuestItem);
          Settings_ListSetting_object____ctor_515d6d0
                    ((Settings_ListSetting_T__o *)pSVar15,
                     (MethodInfo_515D6D0 *)MethodInfo_Settings_ListSetting_QuestItem_ctor);
          pGVar5 = (__this->fields)._quest;
          if ((pGVar5 != (GameProgress_QuestContainer_o *)0x0) &&
             ((pSVar8 = (pGVar5->fields).WeeklyQuestItems, pSVar8 != (Settings_ListSetting_QuestItem__o *)0x0
              && (pSVar6 = (System_Collections_Generic_List_object__o *)(pSVar8->fields)._value,
                 pSVar6 != (System_Collections_Generic_List_object__o *)0x0)))) {
            iVar18 = (int)((ulong)((long)(currentDay + -1) * -0x6db6db6d) >> 0x20) + currentDay + -1;
            iVar18 = (iVar18 >> 2) - (iVar18 >> 0x1f);
            local_48 = __this;
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)(local_98 + 0x30),pSVar6,
                       (MethodInfo_395E050 *)
                       MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
            local_98._16_8_ = local_58;
            local_98._0_8_ = local_98._48_8_;
            local_98._8_8_ = pSStack_60;
            local_98._48_8_ = (System_String_array *)0x0;
            pSStack_60 = (System_String_array *)local_98;
            pSVar12 = (System_String_array *)local_98;
            local_50 = pSVar15;
            if (pSVar15 == (Settings_ListSetting_QuestItem__o *)0x0) {
              while (pSStack_60 = pSVar12,
                    bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                       ((System_Collections_Generic_List_Enumerator_object__o *)local_98,
                                        (MethodInfo_4C45C50 *)
                                        MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext
                                       ), bVar10) {
                if ((System_String_array *)local_98._16_8_ == (System_String_array *)0x0) goto label_059227c7;
                if (((System_Collections_Generic_Dictionary_string__BaseSetting__o **)(local_98._16_8_ + 0x20)
                    )[10] == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)
                goto label_059227cc;
                iVar11 = *(int *)((long)((System_Collections_Generic_Dictionary_string__BaseSetting__o **)
                                        (local_98._16_8_ + 0x20))[10] + 0x1c);
                iVar11 = iVar11 + (int)((ulong)((long)(iVar11 + -1) * -0x6db6db6d) >> 0x20) + -1;
                pSVar12 = pSStack_60;
                if ((iVar11 >> 2) - (iVar11 >> 0x1f) == iVar18) {
                  ThrowNullReferenceException();
                }
              }
            }
            else {
label_059225e4:
              bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)local_98,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
              pMVar16 = MethodInfo_System_Collections_Generic_List_QuestItem_Add;
              if (bVar10) {
                if ((System_String_array *)local_98._16_8_ == (System_String_array *)0x0) {
label_059227c7:
                  ThrowNullReferenceException();
                }
                if (((System_Collections_Generic_Dictionary_string__BaseSetting__o **)(local_98._16_8_ + 0x20)
                    )[10] == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
label_059227cc:
                  ThrowNullReferenceException();
                }
                iVar11 = *(int *)((long)((System_Collections_Generic_Dictionary_string__BaseSetting__o **)
                                        (local_98._16_8_ + 0x20))[10] + 0x1c);
                iVar11 = iVar11 + (int)((ulong)((long)(iVar11 + -1) * -0x6db6db6d) >> 0x20) + -1;
                if ((iVar11 >> 2) - (iVar11 >> 0x1f) == iVar18) {
                  pSVar6 = (System_Collections_Generic_List_object__o *)(local_50->fields)._value;
                  if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
                    piVar1 = &(pSVar6->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar7 = (pSVar6->fields)._items;
                    if (pSVar7 != (System_Object_array *)0x0) {
                      uVar3 = (pSVar6->fields)._size;
                      if (uVar3 < (uint)pSVar7->max_length) {
                        (pSVar6->fields)._size = uVar3 + 1;
                        pSVar7->m_Items[(int)uVar3] = (Il2CppObject *)local_98._16_8_;
                        Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar3);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  (pSVar6,(Il2CppObject *)local_98._16_8_,
                                   (MethodInfo_395D230 *)pMVar16->klass->rgctx_data[0xe].method);
                      }
                      goto label_059225e4;
                    }
                  }
                  ThrowNullReferenceException();
                }
                goto label_059225e4;
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_98,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
            pGVar17 = local_48;
            uVar9 = local_98._32_8_;
            if ((local_50 != (Settings_ListSetting_QuestItem__o *)0x0) &&
               (pSVar6 = (System_Collections_Generic_List_object__o *)(local_50->fields)._value,
               pSVar6 != (System_Collections_Generic_List_object__o *)0x0)) {
              pSVar14 = GameProgress_QuestHandler__CreateQuests
                                  (__this_02,(GameProgress_QuestContainer_o *)local_98._40_8_,currentDay,false
                                   ,3 - (pSVar6->fields)._size,in_R9);
              System_Collections_Generic_List_object___AddRange
                        (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pSVar14,
                         (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_QuestItem_AddRange);
              pSVar15 = local_50;
              pGVar5 = (pGVar17->fields)._quest;
              if ((pGVar5 != (GameProgress_QuestContainer_o *)0x0) &&
                 (pSVar8 = (pGVar5->fields).DailyQuestItems,
                 pSVar8 != (Settings_ListSetting_QuestItem__o *)0x0)) {
                (*(pSVar8->klass->vtable)._10_Copy.methodPtr)
                          (pSVar8,uVar9,(pSVar8->klass->vtable)._10_Copy.method);
                pGVar5 = (pGVar17->fields)._quest;
                if ((pGVar5 != (GameProgress_QuestContainer_o *)0x0) &&
                   (pSVar8 = (pGVar5->fields).WeeklyQuestItems,
                   pSVar8 != (Settings_ListSetting_QuestItem__o *)0x0)) {
                  (*(pSVar8->klass->vtable)._10_Copy.methodPtr)
                            (pSVar8,pSVar15,(pSVar8->klass->vtable)._10_Copy.method);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestHandler$$CreateQuests
// il2cpp: System_Collections_Generic_List_QuestItem__o* GameProgress_QuestHandler__CreateQuests (GameProgress_QuestHandler_o* __this, GameProgress_QuestContainer_o* defaultQuest, int32_t currentDay, bool daily, int32_t count, const MethodInfo* method);
// 0x5922f60
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59230b4: lea r12, [rip + 0x196e66d]  ; MethodInfo_System_Collections_Generic_HashSet_string_Contains
// asm:   0x59230bb: nop dword ptr [rax + rax]
// asm:   0x592342c: nop dword ptr [rax]

System_Collections_Generic_List_QuestItem__o *
GameProgress_QuestHandler__CreateQuests
          (GameProgress_QuestHandler_o *__this,GameProgress_QuestContainer_o *defaultQuest,int32_t currentDay,
          bool daily,int32_t count,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_IntSetting_o *__this_01;
  GameProgress_QuestItem_array *pGVar3;
  bool bVar4;
  int32_t iVar5;
  Settings_ListSetting_QuestItem__o *pSVar6;
  System_Collections_Generic_List_QuestItem__o *__this_02;
  System_Collections_Generic_HashSet_string__o *__this_03;
  GameProgress_QuestItem_o *pGVar7;
  MethodInfo *pMVar8;
  GameProgress_QuestItem_o *pGVar9;
  System_String_o *item;
  
  if (Il2CppMethodInitialized_07545769 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_QuestItem_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_QuestItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_QuestItem_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_QuestItem_get_Item)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_QuestItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_QuestItem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_QuestItem_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07545769 = '\x01';
  }
  if (daily) {
    if (defaultQuest == (GameProgress_QuestContainer_o *)0x0) goto label_05923574;
    pSVar6 = (defaultQuest->fields).DailyQuestItems;
  }
  else {
    if (defaultQuest == (GameProgress_QuestContainer_o *)0x0) goto label_05923574;
    pSVar6 = (defaultQuest->fields).WeeklyQuestItems;
  }
  if (pSVar6 != (Settings_ListSetting_QuestItem__o *)0x0) {
    __this_00 = (System_Collections_Generic_List_object__o *)(pSVar6->fields)._value;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_QuestItem);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_02,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_QuestItem_ctor);
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
    System_Collections_Generic_HashSet_object____ctor
              ((System_Collections_Generic_HashSet_object__o *)__this_03,
               (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    if (count < 1) {
      return __this_02;
    }
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      if (__this_03 == (System_Collections_Generic_HashSet_string__o *)0x0) {
        iVar5 = UnityEngine_Random__Range_690e2b0(0,(__this_00->fields)._size,(MethodInfo *)0x0);
        pGVar7 = System_Collections_Generic_List_object___get_Item
                           (__this_00,iVar5,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_QuestItem_get_Item);
        if (pGVar7 != (GameProgress_QuestItem_o *)0x0) {
          (*(pGVar7->klass->vtable)._14_GetQuestName.methodPtr)
                    (pGVar7,(pGVar7->klass->vtable)._14_GetQuestName.method);
          ThrowNullReferenceException();
        }
      }
      else {
        while( true ) {
          iVar5 = UnityEngine_Random__Range_690e2b0(0,(__this_00->fields)._size,(MethodInfo *)0x0);
          pGVar7 = System_Collections_Generic_List_object___get_Item
                             (__this_00,iVar5,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_QuestItem_get_Item);
          if (pGVar7 == (GameProgress_QuestItem_o *)0x0) break;
          pMVar8 = (MethodInfo *)
                   (*(pGVar7->klass->vtable)._14_GetQuestName.methodPtr)
                             (pGVar7,(pGVar7->klass->vtable)._14_GetQuestName.method);
          bVar4 = System_Collections_Generic_HashSet_object___Contains
                            ((System_Collections_Generic_HashSet_object__o *)__this_03,(Il2CppObject *)pMVar8,
                             (MethodInfo_4FB3720 *)
                             MethodInfo_System_Collections_Generic_HashSet_string_Contains);
          if (bVar4) {
            iVar5 = UnityEngine_Random__Range_690e2b0(0,(__this_00->fields)._size,(MethodInfo *)0x0);
            pGVar7 = System_Collections_Generic_List_object___get_Item
                               (__this_00,iVar5,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_QuestItem_get_Item);
            if (pGVar7 == (GameProgress_QuestItem_o *)0x0) break;
            pMVar8 = (MethodInfo *)
                     (*(pGVar7->klass->vtable)._14_GetQuestName.methodPtr)
                               (pGVar7,(pGVar7->klass->vtable)._14_GetQuestName.method);
            bVar4 = System_Collections_Generic_HashSet_object___Contains
                              ((System_Collections_Generic_HashSet_object__o *)__this_03,
                               (Il2CppObject *)pMVar8,
                               (MethodInfo_4FB3720 *)
                               MethodInfo_System_Collections_Generic_HashSet_string_Contains);
            if (!bVar4) goto label_05923430;
            iVar5 = UnityEngine_Random__Range_690e2b0(0,(__this_00->fields)._size,(MethodInfo *)0x0);
            pGVar7 = System_Collections_Generic_List_object___get_Item
                               (__this_00,iVar5,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_QuestItem_get_Item);
            if (pGVar7 == (GameProgress_QuestItem_o *)0x0) break;
            pMVar8 = (MethodInfo *)
                     (*(pGVar7->klass->vtable)._14_GetQuestName.methodPtr)
                               (pGVar7,(pGVar7->klass->vtable)._14_GetQuestName.method);
            bVar4 = System_Collections_Generic_HashSet_object___Contains
                              ((System_Collections_Generic_HashSet_object__o *)__this_03,
                               (Il2CppObject *)pMVar8,
                               (MethodInfo_4FB3720 *)
                               MethodInfo_System_Collections_Generic_HashSet_string_Contains);
            if (!bVar4) goto label_05923430;
            iVar5 = UnityEngine_Random__Range_690e2b0(0,(__this_00->fields)._size,(MethodInfo *)0x0);
            pGVar7 = System_Collections_Generic_List_object___get_Item
                               (__this_00,iVar5,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_QuestItem_get_Item);
            if (pGVar7 == (GameProgress_QuestItem_o *)0x0) break;
            pMVar8 = (MethodInfo *)
                     (*(pGVar7->klass->vtable)._14_GetQuestName.methodPtr)
                               (pGVar7,(pGVar7->klass->vtable)._14_GetQuestName.method);
            bVar4 = System_Collections_Generic_HashSet_object___Contains
                              ((System_Collections_Generic_HashSet_object__o *)__this_03,
                               (Il2CppObject *)pMVar8,
                               (MethodInfo_4FB3720 *)
                               MethodInfo_System_Collections_Generic_HashSet_string_Contains);
            if (!bVar4) goto label_05923430;
            iVar5 = UnityEngine_Random__Range_690e2b0(0,(__this_00->fields)._size,(MethodInfo *)0x0);
            pGVar7 = System_Collections_Generic_List_object___get_Item
                               (__this_00,iVar5,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_QuestItem_get_Item);
            if (pGVar7 == (GameProgress_QuestItem_o *)0x0) break;
            pMVar8 = (MethodInfo *)
                     (*(pGVar7->klass->vtable)._14_GetQuestName.methodPtr)
                               (pGVar7,(pGVar7->klass->vtable)._14_GetQuestName.method);
            bVar4 = System_Collections_Generic_HashSet_object___Contains
                              ((System_Collections_Generic_HashSet_object__o *)__this_03,
                               (Il2CppObject *)pMVar8,
                               (MethodInfo_4FB3720 *)
                               MethodInfo_System_Collections_Generic_HashSet_string_Contains);
            if (!bVar4) goto label_05923430;
            iVar5 = UnityEngine_Random__Range_690e2b0(0,(__this_00->fields)._size,(MethodInfo *)0x0);
            pGVar7 = System_Collections_Generic_List_object___get_Item
                               (__this_00,iVar5,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_QuestItem_get_Item);
            if (pGVar7 == (GameProgress_QuestItem_o *)0x0) break;
            pMVar8 = (MethodInfo *)
                     (*(pGVar7->klass->vtable)._14_GetQuestName.methodPtr)
                               (pGVar7,(pGVar7->klass->vtable)._14_GetQuestName.method);
            bVar4 = System_Collections_Generic_HashSet_object___Contains
                              ((System_Collections_Generic_HashSet_object__o *)__this_03,
                               (Il2CppObject *)pMVar8,
                               (MethodInfo_4FB3720 *)
                               MethodInfo_System_Collections_Generic_HashSet_string_Contains);
            if (!bVar4) goto label_05923430;
            iVar5 = UnityEngine_Random__Range_690e2b0(0,(__this_00->fields)._size,(MethodInfo *)0x0);
            pGVar7 = System_Collections_Generic_List_object___get_Item
                               (__this_00,iVar5,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_QuestItem_get_Item);
            if (pGVar7 == (GameProgress_QuestItem_o *)0x0) break;
            pMVar8 = (MethodInfo *)
                     (*(pGVar7->klass->vtable)._14_GetQuestName.methodPtr)
                               (pGVar7,(pGVar7->klass->vtable)._14_GetQuestName.method);
            bVar4 = System_Collections_Generic_HashSet_object___Contains
                              ((System_Collections_Generic_HashSet_object__o *)__this_03,
                               (Il2CppObject *)pMVar8,
                               (MethodInfo_4FB3720 *)
                               MethodInfo_System_Collections_Generic_HashSet_string_Contains);
            if (!bVar4) goto label_05923430;
            iVar5 = UnityEngine_Random__Range_690e2b0(0,(__this_00->fields)._size,(MethodInfo *)0x0);
            pGVar7 = System_Collections_Generic_List_object___get_Item
                               (__this_00,iVar5,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_QuestItem_get_Item);
            if (pGVar7 == (GameProgress_QuestItem_o *)0x0) break;
            pMVar8 = (MethodInfo *)
                     (*(pGVar7->klass->vtable)._14_GetQuestName.methodPtr)
                               (pGVar7,(pGVar7->klass->vtable)._14_GetQuestName.method);
            bVar4 = System_Collections_Generic_HashSet_object___Contains
                              ((System_Collections_Generic_HashSet_object__o *)__this_03,
                               (Il2CppObject *)pMVar8,
                               (MethodInfo_4FB3720 *)
                               MethodInfo_System_Collections_Generic_HashSet_string_Contains);
            if (!bVar4) goto label_05923430;
            iVar5 = UnityEngine_Random__Range_690e2b0(0,(__this_00->fields)._size,(MethodInfo *)0x0);
            pGVar7 = System_Collections_Generic_List_object___get_Item
                               (__this_00,iVar5,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_QuestItem_get_Item);
            if (pGVar7 == (GameProgress_QuestItem_o *)0x0) break;
            pMVar8 = (MethodInfo *)
                     (*(pGVar7->klass->vtable)._14_GetQuestName.methodPtr)
                               (pGVar7,(pGVar7->klass->vtable)._14_GetQuestName.method);
            bVar4 = System_Collections_Generic_HashSet_object___Contains
                              ((System_Collections_Generic_HashSet_object__o *)__this_03,
                               (Il2CppObject *)pMVar8,
                               (MethodInfo_4FB3720 *)
                               MethodInfo_System_Collections_Generic_HashSet_string_Contains);
            if (!bVar4) goto label_05923430;
            iVar5 = UnityEngine_Random__Range_690e2b0(0,(__this_00->fields)._size,(MethodInfo *)0x0);
            pGVar7 = System_Collections_Generic_List_object___get_Item
                               (__this_00,iVar5,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_QuestItem_get_Item);
            if (pGVar7 == (GameProgress_QuestItem_o *)0x0) break;
            pMVar8 = (MethodInfo *)
                     (*(pGVar7->klass->vtable)._14_GetQuestName.methodPtr)
                               (pGVar7,(pGVar7->klass->vtable)._14_GetQuestName.method);
            bVar4 = System_Collections_Generic_HashSet_object___Contains
                              ((System_Collections_Generic_HashSet_object__o *)__this_03,
                               (Il2CppObject *)pMVar8,
                               (MethodInfo_4FB3720 *)
                               MethodInfo_System_Collections_Generic_HashSet_string_Contains);
            if (!bVar4) goto label_05923430;
          }
          else {
label_05923430:
            pGVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_QuestItem);
            GameProgress_QuestItem___ctor(pGVar7,pMVar8);
            pGVar9 = System_Collections_Generic_List_object___get_Item
                               (__this_00,iVar5,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_QuestItem_get_Item);
            if (pGVar7 == (GameProgress_QuestItem_o *)0x0) break;
            (*(pGVar7->klass->vtable)._10_Copy.methodPtr)
                      (pGVar7,(Settings_BaseSetting_o *)pGVar9,(pGVar7->klass->vtable)._10_Copy.method);
            __this_01 = (pGVar7->fields).DayCreated;
            if ((__this_01 == (Settings_IntSetting_o *)0x0) ||
               (Settings_TypedSetting_int___set_Value
                          ((Settings_TypedSetting_int__o *)__this_01,currentDay,
                           (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value),
               pMVar8 = MethodInfo_System_Collections_Generic_List_QuestItem_Add,
               __this_02 == (System_Collections_Generic_List_QuestItem__o *)0x0)) break;
            piVar1 = &(__this_02->fields)._version;
            *piVar1 = *piVar1 + 1;
            pGVar3 = (__this_02->fields)._items;
            if (pGVar3 == (GameProgress_QuestItem_array *)0x0) break;
            uVar2 = (__this_02->fields)._size;
            if (uVar2 < (uint)pGVar3->max_length) {
              (__this_02->fields)._size = uVar2 + 1;
              pGVar3->m_Items[(int)uVar2] = pGVar7;
              Il2CppCodeGenWriteBarrier(pGVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)pGVar7,
                         (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
            }
            item = (*(pGVar7->klass->vtable)._14_GetQuestName.methodPtr)
                             (pGVar7,(pGVar7->klass->vtable)._14_GetQuestName.method);
            System_Collections_Generic_HashSet_object___Add
                      ((System_Collections_Generic_HashSet_object__o *)__this_03,(Il2CppObject *)item,
                       (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
          }
          count = count + -1;
          if (count == 0) {
            return __this_02;
          }
        }
      }
    }
  }
label_05923574:
  ThrowNullReferenceException();
}


// GameProgress.QuestHandler$$CacheActiveQuests
// il2cpp: void GameProgress_QuestHandler__CacheActiveQuests (GameProgress_QuestHandler_o* __this, const MethodInfo* method);
// 0x59228c0
// eh: try 0x59229d4..0x5922b0e -> pad 0x5922b70 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5922b3b..0x5922b40 -> pad 0x5922b61 cleanup
// eh: try 0x5922b64..0x5922b6e -> pad 0x5922bc7 catch (...) [compiler noexcept guard]
// eh: try 0x5922b88..0x5922b8d -> pad 0x5922bb2 cleanup
// eh: try 0x5922bb5..0x5922bbf -> pad 0x5922bc7 catch (...) [compiler noexcept guard]
// asm: 51 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5922b13: jmp 0x5922b23
// asm:   0x5922b15: jmp 0x5922b70
// asm:   0x5922b17: jmp 0x5922b23
// asm:   0x5922b19: jmp 0x5922b23
// asm:   0x5922b1b: jmp 0x5922b23
// asm:   0x5922b1d: jmp 0x5922b70
// asm:   0x5922b1f: jmp 0x5922b70
// asm:   0x5922b21: jmp 0x5922b70
// asm:   0x5922b23: mov r15, rax
// asm:   0x5922b26: cmp edx, 1
// asm:   0x5922b29: jne 0x5922b64
// asm:   0x5922b2b: mov rdi, r15
// asm:   0x5922b2e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5922b33: mov rbx, qword ptr [rax]
// asm:   0x5922b36: mov qword ptr [rsp + 8], rbx
// asm:   0x5922b3b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5922b40: lea rax, [rip + 0x196bc69]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x5922b47: mov rsi, qword ptr [rax]
// asm:   0x5922b4a: lea rdi, [rsp + 0x20]
// asm:   0x5922b4f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5922b54: test rbx, rbx
// asm:   0x5922b57: je 0x5922ae2
// asm:   0x5922b59: mov rdi, rbx
// asm:   0x5922b5c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5922b61: mov r15, rax
// asm:   0x5922b64: lea rdi, [rsp + 8]
// asm:   0x5922b69: call 0x2fd2920  ; il2cpp_runtime_helper_02fd2920()
// asm:   0x5922b6e: jmp 0x5922bbf
// asm:   0x5922b70: mov r15, rax
// asm:   0x5922b73: cmp edx, 1
// asm:   0x5922b76: jne 0x5922bb5
// asm:   0x5922b78: mov rdi, r15
// asm:   0x5922b7b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5922b80: mov r15, qword ptr [rax]
// asm:   0x5922b83: mov qword ptr [rsp + 8], r15
// asm:   0x5922b88: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5922b8d: lea rax, [rip + 0x196bc1c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x5922b94: mov rsi, qword ptr [rax]
// asm:   0x5922b97: lea rdi, [rsp + 0x20]
// asm:   0x5922b9c: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5922ba1: test r15, r15
// asm:   0x5922ba4: je 0x5922a2e
// asm:   0x5922baa: mov rdi, r15
// asm:   0x5922bad: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5922bb2: mov r15, rax
// asm:   0x5922bb5: lea rdi, [rsp + 8]
// asm:   0x5922bba: call 0x2fd28f0  ; il2cpp_runtime_helper_02fd28f0()
// asm:   0x5922bbf: mov rdi, r15
// asm:   0x5922bc2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5922bc7: mov rdi, rax
// asm:   0x5922bca: call 0x2ab61e0  ; __clang_call_terminate()

void GameProgress_QuestHandler__CacheActiveQuests(GameProgress_QuestHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  GameProgress_QuestContainer_o *pGVar1;
  Settings_ListSetting_QuestItem__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  bool bVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 local_60 [16];
  GameProgress_QuestItem_o *local_50;
  undefined1 local_48 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_40;
  GameProgress_QuestItem_o *local_38;
  
  if (Il2CppMethodInitialized_0754576a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_QuestItem_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_0754576a = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_38 = (GameProgress_QuestItem_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear
              (__this_00,
               (MethodInfo_4AAD690 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_Clear);
    pGVar1 = (__this->fields)._quest;
    if (((pGVar1 != (GameProgress_QuestContainer_o *)0x0) &&
        (pSVar2 = (pGVar1->fields).DailyQuestItems, pSVar2 != (Settings_ListSetting_QuestItem__o *)0x0)) &&
       (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
       pSVar3 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,pSVar3,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
      local_38 = local_50;
      local_48 = (undefined1  [8])local_60._0_8_;
      pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)local_60._8_8_;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_48;
      while( true ) {
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
        if (!bVar6) break;
        if (local_38 == (GameProgress_QuestItem_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar4 = (local_38->fields).Progress;
        if (pSVar4 == (Settings_IntSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar5 = (local_38->fields).Amount;
        if (pSVar5 == (Settings_IntSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pSVar4->fields)._value < (pSVar5->fields)._value) {
          GameProgress_QuestHandler__AddActiveQuest(__this,local_38,method_00);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
                );
      pGVar1 = (__this->fields)._quest;
      if (((pGVar1 != (GameProgress_QuestContainer_o *)0x0) &&
          (pSVar2 = (pGVar1->fields).WeeklyQuestItems, pSVar2 != (Settings_ListSetting_QuestItem__o *)0x0)) &&
         (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value,
         pSVar3 != (System_Collections_Generic_List_object__o *)0x0)) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_60,pSVar3,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
        local_38 = local_50;
        local_48 = (undefined1  [8])local_60._0_8_;
        pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)local_60._8_8_;
        local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_48;
        while( true ) {
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
          if (!bVar6) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
            return;
          }
          if (local_38 == (GameProgress_QuestItem_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar4 = (local_38->fields).Progress;
          if (pSVar4 == (Settings_IntSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar5 = (local_38->fields).Amount;
          if (pSVar5 == (Settings_IntSetting_o *)0x0) break;
          if ((pSVar4->fields)._value < (pSVar5->fields)._value) {
            GameProgress_QuestHandler__AddActiveQuest(__this,local_38,method_01);
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestHandler$$AddActiveQuest
// il2cpp: void GameProgress_QuestHandler__AddActiveQuest (GameProgress_QuestHandler_o* __this, GameProgress_QuestItem_o* item, const MethodInfo* method);
// 0x591bf60

void GameProgress_QuestHandler__AddActiveQuest
               (GameProgress_QuestHandler_o *__this,GameProgress_QuestItem_o *item,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_StringSetting_o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_String_o *key;
  System_Object_array *pSVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  System_Collections_Generic_List_QuestItem__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  
  if (Il2CppMethodInitialized_0754576b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_QuestItem_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_QuestItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_QuestItem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_0754576b = '\x01';
  }
  if (((item != (GameProgress_QuestItem_o *)0x0) &&
      (pSVar3 = (item->fields).Category, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests,
     pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    key = (pSVar3->fields)._value;
    bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar4,(Il2CppObject *)key,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ContainsKey);
    if (!bVar7) {
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_QuestItem)
      ;
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_QuestItem_ctor);
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0591c0df;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar4,(Il2CppObject *)key,(Il2CppObject *)__this_00,
                 (MethodInfo_4AAD4E0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_Add);
    }
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_01 = (System_Collections_Generic_List_object__o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar4,(Il2CppObject *)key,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_get_Item);
      pMVar6 = MethodInfo_System_Collections_Generic_List_QuestItem_Add;
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this_01->fields)._items;
        if (pSVar5 != (System_Object_array *)0x0) {
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)item;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
            return;
          }
          System_Collections_Generic_List_object___AddWithResize
                    (__this_01,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          return;
        }
      }
    }
  }
label_0591c0df:
  ThrowNullReferenceException();
}


// GameProgress.QuestHandler$$CheckKillConditions
// il2cpp: bool GameProgress_QuestHandler__CheckKillConditions (GameProgress_QuestHandler_o* __this, System_Collections_Generic_List_StringSetting__o* conditions, int32_t weapon, const MethodInfo* method);
// 0x59235a0
// eh: try 0x5923693..0x5923791 -> pad 0x59237aa (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59237c2..0x59237c7 -> pad 0x59237ec cleanup
// eh: try 0x59237ef..0x59237f9 -> pad 0x5923801 catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592368d: nop dword ptr [rax]
// asm:   0x5923796: jmp 0x59237aa
// asm:   0x5923798: jmp 0x59237aa
// asm:   0x592379a: jmp 0x59237aa
// asm:   0x592379c: jmp 0x59237aa
// asm:   0x592379e: jmp 0x59237aa
// asm:   0x59237a0: jmp 0x59237aa
// asm:   0x59237a2: jmp 0x59237aa
// asm:   0x59237a4: jmp 0x59237aa
// asm:   0x59237a6: jmp 0x59237aa
// asm:   0x59237a8: jmp 0x59237aa
// asm:   0x59237aa: mov rbx, rax
// asm:   0x59237ad: cmp edx, 1
// asm:   0x59237b0: jne 0x59237ef
// asm:   0x59237b2: mov rdi, rbx
// asm:   0x59237b5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59237ba: mov rbx, qword ptr [rax]
// asm:   0x59237bd: mov qword ptr [rsp + 0x20], rbx
// asm:   0x59237c2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59237c7: lea rax, [rip + 0x196b35a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose
// asm:   0x59237ce: mov rsi, qword ptr [rax]
// asm:   0x59237d1: mov rdi, rsp
// asm:   0x59237d4: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59237d9: xor ebp, ebp
// asm:   0x59237db: test rbx, rbx
// asm:   0x59237de: je 0x592375e
// asm:   0x59237e4: mov rdi, rbx
// asm:   0x59237e7: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59237ec: mov rbx, rax
// asm:   0x59237ef: lea rdi, [rsp + 0x20]
// asm:   0x59237f4: call 0x2fd2950  ; il2cpp_runtime_helper_02fd2950()
// asm:   0x59237f9: mov rdi, rbx
// asm:   0x59237fc: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5923801: mov rdi, rax
// asm:   0x5923804: call 0x2ab61e0  ; __clang_call_terminate()

bool GameProgress_QuestHandler__CheckKillConditions
               (GameProgress_QuestHandler_o *__this,
               System_Collections_Generic_List_StringSetting__o *conditions,int32_t weapon,MethodInfo *method)

{
  System_String_o *key;
  System_Collections_Generic_Dictionary_string__KillWeapon__o *__this_00;
  bool bVar1;
  int32_t iVar2;
  System_String_array *pSVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_object__o SStack_68;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (Il2CppMethodInitialized_0754576c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_KillWeapon_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_QuestHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Weapon");
    Il2CppMethodInitialized_0754576c = '\x01';
  }
  SStack_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_68.fields._index = 0;
  SStack_68.fields._version = 0;
  SStack_68.fields._current = (Il2CppObject *)0x0;
  if (conditions == (System_Collections_Generic_List_StringSetting__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
             (System_Collections_Generic_List_object__o *)conditions,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
  SStack_68.fields._current = pIStack_38;
  SStack_68.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
  SStack_68.fields._index = auStack_48._8_4_;
  SStack_68.fields._version = auStack_48._12_4_;
  auStack_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_48._8_8_ = &SStack_68;
  do {
    do {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&SStack_68,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
      if (!bVar1) {
        iVar4 = 5;
        goto label_0592374c;
      }
      if (SStack_68.fields._current == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (SStack_68.fields._current[2].klass == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = System_String__Split
                         ((System_String_o *)SStack_68.fields._current[2].klass,0x3a,0,(MethodInfo *)0x0);
      if (pSVar3 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      iVar4 = (int)pSVar3->max_length;
      if (iVar4 == 1) {
        ThrowIndexOutOfRangeException();
      }
      if (iVar4 == 0) {
        ThrowIndexOutOfRangeException();
      }
      key = pSVar3->m_Items[1];
      bVar1 = System_String__op_Equality(pSVar3->m_Items[0],"Weapon",(MethodInfo *)0x0);
    } while (!bVar1);
    if ((TypeInfo_GameProgress_QuestHandler->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_QuestHandler);
    }
    __this_00 = TypeInfo_GameProgress_QuestHandler->static_fields->NameToKillWeapon;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__KillWeapon__o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar2 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)key,
                       (MethodInfo_4AA1600 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_KillWeapon_get_Item);
  } while (iVar2 == weapon);
  iVar4 = 4;
label_0592374c:
  System_Collections_Generic_List_Enumerator_object___Dispose
            (&SStack_68,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose
            );
  return iVar4 != 4;
}


// GameProgress.QuestHandler$$CheckDamageConditions
// il2cpp: bool GameProgress_QuestHandler__CheckDamageConditions (GameProgress_QuestHandler_o* __this, System_Collections_Generic_List_StringSetting__o* conditions, int32_t weapon, int32_t damage, const MethodInfo* method);
// 0x5923810
// eh: try 0x5923924..0x5923a5c -> pad 0x5923a79 (+12 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5923a91..0x5923a96 -> pad 0x5923abd cleanup
// eh: try 0x5923ac0..0x5923aca -> pad 0x5923ad2 catch (...) [compiler noexcept guard]
// asm: 36 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5923a61: jmp 0x5923a79
// asm:   0x5923a63: jmp 0x5923a79
// asm:   0x5923a65: jmp 0x5923a79
// asm:   0x5923a67: jmp 0x5923a79
// asm:   0x5923a69: jmp 0x5923a79
// asm:   0x5923a6b: jmp 0x5923a79
// asm:   0x5923a6d: jmp 0x5923a79
// asm:   0x5923a6f: jmp 0x5923a79
// asm:   0x5923a71: jmp 0x5923a79
// asm:   0x5923a73: jmp 0x5923a79
// asm:   0x5923a75: jmp 0x5923a79
// asm:   0x5923a77: jmp 0x5923a79
// asm:   0x5923a79: mov rbx, rax
// asm:   0x5923a7c: cmp edx, 1
// asm:   0x5923a7f: jne 0x5923ac0
// asm:   0x5923a81: mov rdi, rbx
// asm:   0x5923a84: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5923a89: mov rbx, qword ptr [rax]
// asm:   0x5923a8c: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5923a91: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5923a96: lea rax, [rip + 0x196b08b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose
// asm:   0x5923a9d: mov rsi, qword ptr [rax]
// asm:   0x5923aa0: lea rdi, [rsp + 0x10]
// asm:   0x5923aa5: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5923aaa: xor ebp, ebp
// asm:   0x5923aac: test rbx, rbx
// asm:   0x5923aaf: je 0x5923a29
// asm:   0x5923ab5: mov rdi, rbx
// asm:   0x5923ab8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5923abd: mov rbx, rax
// asm:   0x5923ac0: lea rdi, [rsp + 0x30]
// asm:   0x5923ac5: call 0x2fd2980  ; il2cpp_runtime_helper_02fd2980()
// asm:   0x5923aca: mov rdi, rbx
// asm:   0x5923acd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5923ad2: mov rdi, rax
// asm:   0x5923ad5: call 0x2ab61e0  ; __clang_call_terminate()

bool GameProgress_QuestHandler__CheckDamageConditions
               (GameProgress_QuestHandler_o *__this,
               System_Collections_Generic_List_StringSetting__o *conditions,int32_t weapon,int32_t damage,
               MethodInfo *method)

{
  System_String_o *a;
  System_String_o *s;
  System_Collections_Generic_Dictionary_string__KillWeapon__o *__this_00;
  bool bVar1;
  int32_t iVar2;
  System_String_array *pSVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_object__o SStack_68;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (Il2CppMethodInitialized_0754576d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_KillWeapon_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_QuestHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Weapon");
    il2cpp_codegen_initialize_runtime_metadata(&"Damage");
    Il2CppMethodInitialized_0754576d = '\x01';
  }
  SStack_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_68.fields._index = 0;
  SStack_68.fields._version = 0;
  SStack_68.fields._current = (Il2CppObject *)0x0;
  if (conditions == (System_Collections_Generic_List_StringSetting__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
             (System_Collections_Generic_List_object__o *)conditions,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
  SStack_68.fields._current = pIStack_38;
  SStack_68.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
  SStack_68.fields._index = auStack_48._8_4_;
  SStack_68.fields._version = auStack_48._12_4_;
  auStack_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_48._8_8_ = &SStack_68;
  do {
    do {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&SStack_68,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
      if (!bVar1) {
        iVar4 = 6;
        goto label_05923a15;
      }
      if (SStack_68.fields._current == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (SStack_68.fields._current[2].klass == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = System_String__Split
                         ((System_String_o *)SStack_68.fields._current[2].klass,0x3a,0,(MethodInfo *)0x0);
      if (pSVar3 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      iVar4 = (int)pSVar3->max_length;
      if (iVar4 == 0) {
        ThrowIndexOutOfRangeException();
      }
      if (iVar4 == 1) {
        ThrowIndexOutOfRangeException();
      }
      a = pSVar3->m_Items[0];
      s = pSVar3->m_Items[1];
      bVar1 = System_String__op_Equality(a,"Weapon",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_GameProgress_QuestHandler->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_QuestHandler);
        }
        __this_00 = TypeInfo_GameProgress_QuestHandler->static_fields->NameToKillWeapon;
        if (__this_00 == (System_Collections_Generic_Dictionary_string__KillWeapon__o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar2 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (Il2CppObject *)s,
                           (MethodInfo_4AA1600 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_KillWeapon_get_Item);
        if (iVar2 != weapon) goto label_05923a09;
      }
      bVar1 = System_String__op_Equality(a,"Damage",(MethodInfo *)0x0);
    } while (!bVar1);
    iVar2 = System_Int32__Parse(s,(MethodInfo *)0x0);
  } while (iVar2 <= damage);
label_05923a09:
  iVar4 = 5;
label_05923a15:
  System_Collections_Generic_List_Enumerator_object___Dispose
            (&SStack_68,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose
            );
  return iVar4 != 5;
}


// GameProgress.QuestHandler$$CheckSpeedConditions
// il2cpp: bool GameProgress_QuestHandler__CheckSpeedConditions (GameProgress_QuestHandler_o* __this, System_Collections_Generic_List_StringSetting__o* conditions, float speed, const MethodInfo* method);
// 0x5923ae0
// eh: try 0x5923bb3..0x5923c74 -> pad 0x5923c89 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5923ca1..0x5923ca6 -> pad 0x5923cc9 cleanup
// eh: try 0x5923ccc..0x5923cd6 -> pad 0x5923cde catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5923c79: jmp 0x5923c89
// asm:   0x5923c7b: jmp 0x5923c89
// asm:   0x5923c7d: jmp 0x5923c89
// asm:   0x5923c7f: jmp 0x5923c89
// asm:   0x5923c81: jmp 0x5923c89
// asm:   0x5923c83: jmp 0x5923c89
// asm:   0x5923c85: jmp 0x5923c89
// asm:   0x5923c87: jmp 0x5923c89
// asm:   0x5923c89: mov rbx, rax
// asm:   0x5923c8c: cmp edx, 1
// asm:   0x5923c8f: jne 0x5923ccc
// asm:   0x5923c91: mov rdi, rbx
// asm:   0x5923c94: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5923c99: mov rbx, qword ptr [rax]
// asm:   0x5923c9c: mov qword ptr [rsp + 8], rbx
// asm:   0x5923ca1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5923ca6: lea rax, [rip + 0x196ae7b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose
// asm:   0x5923cad: mov rsi, qword ptr [rax]
// asm:   0x5923cb0: lea rdi, [rsp + 0x20]
// asm:   0x5923cb5: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5923cba: xor ebp, ebp
// asm:   0x5923cbc: test rbx, rbx
// asm:   0x5923cbf: je 0x5923c48
// asm:   0x5923cc1: mov rdi, rbx
// asm:   0x5923cc4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5923cc9: mov rbx, rax
// asm:   0x5923ccc: lea rdi, [rsp + 8]
// asm:   0x5923cd1: call 0x2fd29b0  ; il2cpp_runtime_helper_02fd29b0()
// asm:   0x5923cd6: mov rdi, rbx
// asm:   0x5923cd9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5923cde: mov rdi, rax
// asm:   0x5923ce1: call 0x2ab61e0  ; __clang_call_terminate()

bool GameProgress_QuestHandler__CheckSpeedConditions
               (GameProgress_QuestHandler_o *__this,
               System_Collections_Generic_List_StringSetting__o *conditions,float speed,MethodInfo *method)

{
  System_String_o *s;
  bool bVar1;
  int32_t iVar2;
  System_String_array *pSVar3;
  int iVar4;
  undefined1 auStack_60 [16];
  Il2CppObject *pIStack_50;
  System_Collections_Generic_List_Enumerator_object__o SStack_48;
  
  if (Il2CppMethodInitialized_0754576e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Speed");
    Il2CppMethodInitialized_0754576e = '\x01';
  }
  if (conditions == (System_Collections_Generic_List_StringSetting__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,
             (System_Collections_Generic_List_object__o *)conditions,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
  SStack_48.fields._current = pIStack_50;
  SStack_48.fields._list = (System_Collections_Generic_List_T__o *)auStack_60._0_8_;
  SStack_48.fields._index = auStack_60._8_4_;
  SStack_48.fields._version = auStack_60._12_4_;
  auStack_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_60._8_8_ = &SStack_48;
  do {
    do {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&SStack_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
      if (!bVar1) {
        iVar4 = 5;
        goto label_05923c34;
      }
      if (SStack_48.fields._current == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (SStack_48.fields._current[2].klass == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = System_String__Split
                         ((System_String_o *)SStack_48.fields._current[2].klass,0x3a,0,(MethodInfo *)0x0);
      if (pSVar3 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      iVar4 = (int)pSVar3->max_length;
      if (iVar4 == 1) {
        ThrowIndexOutOfRangeException();
      }
      if (iVar4 == 0) {
        ThrowIndexOutOfRangeException();
      }
      s = pSVar3->m_Items[1];
      bVar1 = System_String__op_Equality(pSVar3->m_Items[0],"Speed",(MethodInfo *)0x0);
    } while (!bVar1);
    iVar2 = System_Int32__Parse(s,(MethodInfo *)0x0);
  } while ((float)iVar2 <= speed);
  iVar4 = 4;
label_05923c34:
  System_Collections_Generic_List_Enumerator_object___Dispose
            (&SStack_48,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose
            );
  return iVar4 != 4;
}


// GameProgress.QuestHandler$$RegisterTitanKill
// il2cpp: void GameProgress_QuestHandler__RegisterTitanKill (GameProgress_QuestHandler_o* __this, Characters_BasicTitan_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x5923cf0
// eh: try 0x5923e8a..0x5923faa -> pad 0x5923fb6 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5923fd0..0x5923fd5 -> pad 0x5924013 cleanup
// eh: try 0x5924016..0x5924020 -> pad 0x5924028 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5923e7e: nop 
// asm:   0x5923fac: jmp 0x5923fb8
// asm:   0x5923fae: jmp 0x5923fb8
// asm:   0x5923fb0: jmp 0x5923fb8
// asm:   0x5923fb2: jmp 0x5923fb8
// asm:   0x5923fb4: jmp 0x5923fb8
// asm:   0x5923fb6: jmp 0x5923fb8
// asm:   0x5923fb8: mov r14, rax
// asm:   0x5923fbb: cmp edx, 1
// asm:   0x5923fbe: jne 0x5924016
// asm:   0x5923fc0: mov rdi, r14
// asm:   0x5923fc3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5923fc8: mov r14, qword ptr [rax]
// asm:   0x5923fcb: mov qword ptr [rsp + 0x30], r14
// asm:   0x5923fd0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5923fd5: lea rax, [rip + 0x196a7d4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x5923fdc: mov rsi, qword ptr [rax]
// asm:   0x5923fdf: lea rdi, [rsp + 0x10]
// asm:   0x5923fe4: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5923fe9: test r14, r14
// asm:   0x5923fec: je 0x5923dc4
// asm:   0x5923ff2: mov rdi, r14
// asm:   0x5923ff5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5924013: mov r14, rax
// asm:   0x5924016: lea rdi, [rsp + 0x30]
// asm:   0x592401b: call 0x2fd29e0  ; il2cpp_runtime_helper_02fd29e0()
// asm:   0x5924020: mov rdi, r14
// asm:   0x5924023: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5924028: mov rdi, rax
// asm:   0x592402b: call 0x2ab61e0  ; __clang_call_terminate()

void GameProgress_QuestHandler__RegisterTitanKill
               (GameProgress_QuestHandler_o *__this,Characters_BasicTitan_o *victim,
               GameProgress_KillMethod_o method,MethodInfo *methodInfo)

{
  uint uVar1;
  int32_t val2;
  System_String_array *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_o *a;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  int32_t iVar7;
  ulong uVar8;
  System_Collections_Generic_List_object__o *__this_00;
  ulong uVar9;
  undefined1 auStack_78 [8];
  undefined1 *puStack_70;
  Il2CppObject *pIStack_68;
  undefined1 auStack_58 [16];
  Il2CppObject *pIStack_48;
  System_String_array *pSStack_40;
  ulong uStack_38;
  
  if (Il2CppMethodInitialized_0754576f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"KillTitan");
    Il2CppMethodInitialized_0754576f = '\x01';
  }
  auStack_78 = (undefined1  [8])0x0;
  puStack_70 = (undefined1 *)0x0;
  pIStack_68 = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).TitanKillCategories;
  if (pSVar2 == (System_String_array *)0x0) {
label_05924009:
    ThrowNullReferenceException();
  }
  if (0 < (int)pSVar2->max_length) {
    uVar8 = pSVar2->max_length & 0xffffffff;
    uVar9 = 0;
    pSStack_40 = pSVar2;
    do {
      if (uVar8 <= uVar9) {
        ThrowIndexOutOfRangeException();
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05924009;
      a = pSStack_40->m_Items[uVar9];
      uStack_38 = uVar9;
      bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar3,(Il2CppObject *)a,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ContainsKey);
      if (bVar6) {
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05924009;
        __this_00 = (System_Collections_Generic_List_object__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar3,(Il2CppObject *)a,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_get_Item
                              );
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_05924009;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,__this_00,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
        pIStack_68 = pIStack_48;
        auStack_78 = (undefined1  [8])auStack_58._0_8_;
        puStack_70 = (undefined1 *)auStack_58._8_8_;
        auStack_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        auStack_58._8_8_ = auStack_78;
label_05923e80:
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
        pIVar5 = pIStack_68;
        if (bVar6) {
          if (pIStack_68 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (pIStack_68[3].monitor == (void *)0x0) {
            ThrowNullReferenceException();
          }
          bVar6 = (*(__this->klass->vtable)._9_CheckKillConditions.methodPtr)
                            (__this,*(System_Collections_Generic_List_StringSetting__o **)
                                     ((long)pIStack_68[3].monitor + 0x20),method.fields.Weapon,
                             (__this->klass->vtable)._9_CheckKillConditions.method);
          if (bVar6) {
            bVar6 = System_String__op_Equality(a,"KillTitan",(MethodInfo *)0x0);
            if (bVar6) {
              if (Il2CppMethodInitialized_07545778 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
                Il2CppMethodInitialized_07545778 = '\x01';
              }
              pIVar4 = pIVar5[6].klass;
              if (pIVar4 != (Il2CppClass *)0x0) {
                Settings_TypedSetting_int___set_Value
                          ((Settings_TypedSetting_int__o *)pIVar4,
                           *(int32_t *)((long)&(pIVar4->_1).namespaze + 4) + 1,
                           (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                pIVar4 = pIVar5[6].klass;
                if ((pIVar4 != (Il2CppClass *)0x0) && (pIVar5[4].klass != (Il2CppClass *)0x0)) {
                  iVar7 = *(int32_t *)((long)&(pIVar4->_1).namespaze + 4);
                  val2 = *(int32_t *)((long)&((pIVar5[4].klass)->_1).namespaze + 4);
                  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                  }
                  iVar7 = System_Math__Min_54baeb0(iVar7,val2,(MethodInfo *)0x0);
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pIVar4,iVar7,
                             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                  goto label_05923e80;
                }
              }
              ThrowNullReferenceException();
            }
          }
          goto label_05923e80;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
      }
      uVar9 = uStack_38 + 1;
      uVar1 = (uint)pSStack_40->max_length;
      uVar8 = (ulong)uVar1;
    } while ((long)uVar9 < (long)(int)uVar1);
  }
  return;
}


// GameProgress.QuestHandler$$RegisterHumanKill
// il2cpp: void GameProgress_QuestHandler__RegisterHumanKill (GameProgress_QuestHandler_o* __this, Characters_Human_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x59240f0
// eh: try 0x592428a..0x59243aa -> pad 0x59243b6 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59243d0..0x59243d5 -> pad 0x5924413 cleanup
// eh: try 0x5924416..0x5924420 -> pad 0x5924428 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x592427e: nop 
// asm:   0x59243ac: jmp 0x59243b8
// asm:   0x59243ae: jmp 0x59243b8
// asm:   0x59243b0: jmp 0x59243b8
// asm:   0x59243b2: jmp 0x59243b8
// asm:   0x59243b4: jmp 0x59243b8
// asm:   0x59243b6: jmp 0x59243b8
// asm:   0x59243b8: mov r14, rax
// asm:   0x59243bb: cmp edx, 1
// asm:   0x59243be: jne 0x5924416
// asm:   0x59243c0: mov rdi, r14
// asm:   0x59243c3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59243c8: mov r14, qword ptr [rax]
// asm:   0x59243cb: mov qword ptr [rsp + 0x30], r14
// asm:   0x59243d0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59243d5: lea rax, [rip + 0x196a3d4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x59243dc: mov rsi, qword ptr [rax]
// asm:   0x59243df: lea rdi, [rsp + 0x10]
// asm:   0x59243e4: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59243e9: test r14, r14
// asm:   0x59243ec: je 0x59241c4
// asm:   0x59243f2: mov rdi, r14
// asm:   0x59243f5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5924413: mov r14, rax
// asm:   0x5924416: lea rdi, [rsp + 0x30]
// asm:   0x592441b: call 0x2fd2a10  ; il2cpp_runtime_helper_02fd2a10()
// asm:   0x5924420: mov rdi, r14
// asm:   0x5924423: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5924428: mov rdi, rax
// asm:   0x592442b: call 0x2ab61e0  ; __clang_call_terminate()

void GameProgress_QuestHandler__RegisterHumanKill
               (GameProgress_QuestHandler_o *__this,Characters_Human_o *victim,
               GameProgress_KillMethod_o method,MethodInfo *methodInfo)

{
  uint uVar1;
  int32_t val2;
  System_String_array *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_o *a;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  int32_t iVar7;
  ulong uVar8;
  System_Collections_Generic_List_object__o *__this_00;
  ulong uVar9;
  undefined1 auStack_78 [8];
  undefined1 *puStack_70;
  Il2CppObject *pIStack_68;
  undefined1 auStack_58 [16];
  Il2CppObject *pIStack_48;
  System_String_array *pSStack_40;
  ulong uStack_38;
  
  if (Il2CppMethodInitialized_07545770 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"KillHuman");
    Il2CppMethodInitialized_07545770 = '\x01';
  }
  auStack_78 = (undefined1  [8])0x0;
  puStack_70 = (undefined1 *)0x0;
  pIStack_68 = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).HumanKillCategories;
  if (pSVar2 == (System_String_array *)0x0) {
label_05924409:
    ThrowNullReferenceException();
  }
  if (0 < (int)pSVar2->max_length) {
    uVar8 = pSVar2->max_length & 0xffffffff;
    uVar9 = 0;
    pSStack_40 = pSVar2;
    do {
      if (uVar8 <= uVar9) {
        ThrowIndexOutOfRangeException();
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05924409;
      a = pSStack_40->m_Items[uVar9];
      uStack_38 = uVar9;
      bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar3,(Il2CppObject *)a,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ContainsKey);
      if (bVar6) {
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05924409;
        __this_00 = (System_Collections_Generic_List_object__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar3,(Il2CppObject *)a,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_get_Item
                              );
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_05924409;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,__this_00,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
        pIStack_68 = pIStack_48;
        auStack_78 = (undefined1  [8])auStack_58._0_8_;
        puStack_70 = (undefined1 *)auStack_58._8_8_;
        auStack_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        auStack_58._8_8_ = auStack_78;
label_05924280:
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
        pIVar5 = pIStack_68;
        if (bVar6) {
          if (pIStack_68 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (pIStack_68[3].monitor == (void *)0x0) {
            ThrowNullReferenceException();
          }
          bVar6 = (*(__this->klass->vtable)._9_CheckKillConditions.methodPtr)
                            (__this,*(System_Collections_Generic_List_StringSetting__o **)
                                     ((long)pIStack_68[3].monitor + 0x20),method.fields.Weapon,
                             (__this->klass->vtable)._9_CheckKillConditions.method);
          if (bVar6) {
            bVar6 = System_String__op_Equality(a,"KillHuman",(MethodInfo *)0x0);
            if (bVar6) {
              if (Il2CppMethodInitialized_07545778 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
                Il2CppMethodInitialized_07545778 = '\x01';
              }
              pIVar4 = pIVar5[6].klass;
              if (pIVar4 != (Il2CppClass *)0x0) {
                Settings_TypedSetting_int___set_Value
                          ((Settings_TypedSetting_int__o *)pIVar4,
                           *(int32_t *)((long)&(pIVar4->_1).namespaze + 4) + 1,
                           (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                pIVar4 = pIVar5[6].klass;
                if ((pIVar4 != (Il2CppClass *)0x0) && (pIVar5[4].klass != (Il2CppClass *)0x0)) {
                  iVar7 = *(int32_t *)((long)&(pIVar4->_1).namespaze + 4);
                  val2 = *(int32_t *)((long)&((pIVar5[4].klass)->_1).namespaze + 4);
                  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                  }
                  iVar7 = System_Math__Min_54baeb0(iVar7,val2,(MethodInfo *)0x0);
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pIVar4,iVar7,
                             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                  goto label_05924280;
                }
              }
              ThrowNullReferenceException();
            }
          }
          goto label_05924280;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
      }
      uVar9 = uStack_38 + 1;
      uVar1 = (uint)pSStack_40->max_length;
      uVar8 = (ulong)uVar1;
    } while ((long)uVar9 < (long)(int)uVar1);
  }
  return;
}


// GameProgress.QuestHandler$$RegisterDamage
// il2cpp: void GameProgress_QuestHandler__RegisterDamage (GameProgress_QuestHandler_o* __this, UnityEngine_GameObject_o* victim, GameProgress_KillMethod_o method, int32_t damage, const MethodInfo* method);
// 0x5924430
// eh: try 0x59245da..0x59247e6 -> pad 0x59247f8 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5924812..0x5924817 -> pad 0x5924855 cleanup
// eh: try 0x5924858..0x5924862 -> pad 0x592486a catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59247e8: jmp 0x59247fa
// asm:   0x59247ea: jmp 0x59247fa
// asm:   0x59247ec: jmp 0x59247fa
// asm:   0x59247ee: jmp 0x59247fa
// asm:   0x59247f0: jmp 0x59247fa
// asm:   0x59247f2: jmp 0x59247fa
// asm:   0x59247f4: jmp 0x59247fa
// asm:   0x59247f6: jmp 0x59247fa
// asm:   0x59247f8: jmp 0x59247fa
// asm:   0x59247fa: mov r15, rax
// asm:   0x59247fd: cmp edx, 1
// asm:   0x5924800: jne 0x5924858
// asm:   0x5924802: mov rdi, r15
// asm:   0x5924805: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x592480a: mov rbx, qword ptr [rax]
// asm:   0x592480d: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5924812: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5924817: lea rax, [rip + 0x1969f92]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x592481e: mov rsi, qword ptr [rax]
// asm:   0x5924821: lea rdi, [rsp + 0x10]
// asm:   0x5924826: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x592482b: test rbx, rbx
// asm:   0x592482e: je 0x5924514
// asm:   0x5924834: mov rdi, rbx
// asm:   0x5924837: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5924855: mov r15, rax
// asm:   0x5924858: lea rdi, [rsp + 0x30]
// asm:   0x592485d: call 0x2fd2a40  ; il2cpp_runtime_helper_02fd2a40()
// asm:   0x5924862: mov rdi, r15
// asm:   0x5924865: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x592486a: mov rdi, rax
// asm:   0x592486d: call 0x2ab61e0  ; __clang_call_terminate()

void GameProgress_QuestHandler__RegisterDamage
               (GameProgress_QuestHandler_o *__this,UnityEngine_GameObject_o *victim,
               GameProgress_KillMethod_o method,int32_t damage,MethodInfo *methodInfo)

{
  uint uVar1;
  int32_t iVar2;
  System_String_array *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_String_o *a;
  Il2CppClass *pIVar5;
  Il2CppObject *pIVar6;
  bool bVar7;
  int32_t iVar8;
  ulong uVar9;
  System_Collections_Generic_List_object__o *__this_00;
  ulong uVar10;
  undefined1 auStack_78 [8];
  undefined1 *puStack_70;
  Il2CppObject *pIStack_68;
  undefined1 auStack_58 [16];
  Il2CppObject *pIStack_48;
  System_String_array *pSStack_40;
  ulong uStack_38;
  
  if (Il2CppMethodInitialized_07545771 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"DealDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"HitDamage");
    Il2CppMethodInitialized_07545771 = '\x01';
  }
  auStack_78 = (undefined1  [8])0x0;
  puStack_70 = (undefined1 *)0x0;
  pIStack_68 = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields).DamageCategories;
  if (pSVar3 == (System_String_array *)0x0) {
label_0592484b:
    ThrowNullReferenceException();
  }
  if (0 < (int)pSVar3->max_length) {
    uVar9 = pSVar3->max_length & 0xffffffff;
    uVar10 = 0;
    pSStack_40 = pSVar3;
    do {
      if (uVar9 <= uVar10) {
        ThrowIndexOutOfRangeException();
      }
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0592484b;
      a = pSStack_40->m_Items[uVar10];
      uStack_38 = uVar10;
      bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar4,(Il2CppObject *)a,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ContainsKey);
      if (bVar7) {
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
        if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0592484b;
        __this_00 = (System_Collections_Generic_List_object__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar4,(Il2CppObject *)a,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_get_Item
                              );
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_0592484b;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,__this_00,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
        pIStack_68 = pIStack_48;
        auStack_78 = (undefined1  [8])auStack_58._0_8_;
        puStack_70 = (undefined1 *)auStack_58._8_8_;
        auStack_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        auStack_58._8_8_ = auStack_78;
label_059245d0:
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
        pIVar6 = pIStack_68;
        if (bVar7) {
          if (pIStack_68 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (pIStack_68[3].monitor == (void *)0x0) {
            ThrowNullReferenceException();
          }
          bVar7 = (*(__this->klass->vtable)._10_CheckDamageConditions.methodPtr)
                            (__this,*(System_Collections_Generic_List_StringSetting__o **)
                                     ((long)pIStack_68[3].monitor + 0x20),method.fields.Weapon,damage,
                             (__this->klass->vtable)._10_CheckDamageConditions.method);
          if (bVar7) {
            bVar7 = System_String__op_Equality(a,"HitDamage",(MethodInfo *)0x0);
            if (bVar7) {
              if (Il2CppMethodInitialized_07545778 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
                Il2CppMethodInitialized_07545778 = '\x01';
              }
              pIVar5 = pIVar6[6].klass;
              if (pIVar5 != (Il2CppClass *)0x0) {
                Settings_TypedSetting_int___set_Value
                          ((Settings_TypedSetting_int__o *)pIVar5,
                           *(int32_t *)((long)&(pIVar5->_1).namespaze + 4) + 1,
                           (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                pIVar5 = pIVar6[6].klass;
                if ((pIVar5 != (Il2CppClass *)0x0) && (pIVar6[4].klass != (Il2CppClass *)0x0)) {
                  iVar8 = *(int32_t *)((long)&(pIVar5->_1).namespaze + 4);
                  iVar2 = *(int32_t *)((long)&((pIVar6[4].klass)->_1).namespaze + 4);
                  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                  }
                  iVar8 = System_Math__Min_54baeb0(iVar8,iVar2,(MethodInfo *)0x0);
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pIVar5,iVar8,
                             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                  goto label_059245d0;
                }
              }
              ThrowNullReferenceException();
            }
            bVar7 = System_String__op_Equality(a,"DealDamage",(MethodInfo *)0x0);
            if (bVar7) {
              if (Il2CppMethodInitialized_07545778 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
                Il2CppMethodInitialized_07545778 = '\x01';
              }
              pIVar5 = pIVar6[6].klass;
              if (pIVar5 != (Il2CppClass *)0x0) {
                Settings_TypedSetting_int___set_Value
                          ((Settings_TypedSetting_int__o *)pIVar5,
                           *(int32_t *)((long)&(pIVar5->_1).namespaze + 4) + damage,
                           (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                pIVar5 = pIVar6[6].klass;
                if ((pIVar5 != (Il2CppClass *)0x0) && (pIVar6[4].klass != (Il2CppClass *)0x0)) {
                  iVar8 = *(int32_t *)((long)&(pIVar5->_1).namespaze + 4);
                  iVar2 = *(int32_t *)((long)&((pIVar6[4].klass)->_1).namespaze + 4);
                  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                  }
                  iVar8 = System_Math__Min_54baeb0(iVar8,iVar2,(MethodInfo *)0x0);
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pIVar5,iVar8,
                             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                  goto label_059245d0;
                }
              }
              ThrowNullReferenceException();
            }
          }
          goto label_059245d0;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
      }
      uVar10 = uStack_38 + 1;
      uVar1 = (uint)pSStack_40->max_length;
      uVar9 = (ulong)uVar1;
    } while ((long)uVar10 < (long)(int)uVar1);
  }
  return;
}


// GameProgress.QuestHandler$$RegisterSpeed
// il2cpp: void GameProgress_QuestHandler__RegisterSpeed (GameProgress_QuestHandler_o* __this, float speed, const MethodInfo* method);
// 0x5924880
// eh: try 0x5924a1a..0x5924b3c -> pad 0x5924b48 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5924b62..0x5924b67 -> pad 0x5924ba5 cleanup
// eh: try 0x5924ba8..0x5924bb2 -> pad 0x5924bba catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5924a0e: nop 
// asm:   0x5924b3e: jmp 0x5924b4a
// asm:   0x5924b40: jmp 0x5924b4a
// asm:   0x5924b42: jmp 0x5924b4a
// asm:   0x5924b44: jmp 0x5924b4a
// asm:   0x5924b46: jmp 0x5924b4a
// asm:   0x5924b48: jmp 0x5924b4a
// asm:   0x5924b4a: mov r14, rax
// asm:   0x5924b4d: cmp edx, 1
// asm:   0x5924b50: jne 0x5924ba8
// asm:   0x5924b52: mov rdi, r14
// asm:   0x5924b55: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5924b5a: mov rbp, qword ptr [rax]
// asm:   0x5924b5d: mov qword ptr [rsp + 0x30], rbp
// asm:   0x5924b62: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5924b67: lea rax, [rip + 0x1969c42]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x5924b6e: mov rsi, qword ptr [rax]
// asm:   0x5924b71: lea rdi, [rsp + 0x10]
// asm:   0x5924b76: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5924b7b: test rbp, rbp
// asm:   0x5924b7e: je 0x5924954
// asm:   0x5924b84: mov rdi, rbp
// asm:   0x5924b87: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5924ba5: mov r14, rax
// asm:   0x5924ba8: lea rdi, [rsp + 0x30]
// asm:   0x5924bad: call 0x2fd2a70  ; il2cpp_runtime_helper_02fd2a70()
// asm:   0x5924bb2: mov rdi, r14
// asm:   0x5924bb5: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5924bba: mov rdi, rax
// asm:   0x5924bbd: call 0x2ab61e0  ; __clang_call_terminate()

void GameProgress_QuestHandler__RegisterSpeed
               (GameProgress_QuestHandler_o *__this,float speed,MethodInfo *method)

{
  uint uVar1;
  int32_t val2;
  System_String_array *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_o *a;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  int32_t iVar7;
  ulong uVar8;
  System_Collections_Generic_List_object__o *__this_00;
  ulong uVar9;
  undefined1 auStack_78 [8];
  undefined1 *puStack_70;
  Il2CppObject *pIStack_68;
  undefined1 auStack_58 [16];
  Il2CppObject *pIStack_48;
  System_String_array *pSStack_40;
  ulong uStack_38;
  
  if (Il2CppMethodInitialized_07545772 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"ReachSpeed");
    Il2CppMethodInitialized_07545772 = '\x01';
  }
  auStack_78 = (undefined1  [8])0x0;
  puStack_70 = (undefined1 *)0x0;
  pIStack_68 = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).SpeedCategories;
  if (pSVar2 == (System_String_array *)0x0) {
label_05924b9b:
    ThrowNullReferenceException();
  }
  if (0 < (int)pSVar2->max_length) {
    uVar8 = pSVar2->max_length & 0xffffffff;
    uVar9 = 0;
    pSStack_40 = pSVar2;
    do {
      if (uVar8 <= uVar9) {
        ThrowIndexOutOfRangeException();
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05924b9b;
      a = pSStack_40->m_Items[uVar9];
      uStack_38 = uVar9;
      bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar3,(Il2CppObject *)a,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ContainsKey);
      if (bVar6) {
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05924b9b;
        __this_00 = (System_Collections_Generic_List_object__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar3,(Il2CppObject *)a,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_get_Item
                              );
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_05924b9b;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,__this_00,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
        pIStack_68 = pIStack_48;
        auStack_78 = (undefined1  [8])auStack_58._0_8_;
        puStack_70 = (undefined1 *)auStack_58._8_8_;
        auStack_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        auStack_58._8_8_ = auStack_78;
label_05924a10:
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
        pIVar5 = pIStack_68;
        if (bVar6) {
          if (pIStack_68 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (pIStack_68[3].monitor == (void *)0x0) {
            ThrowNullReferenceException();
          }
          bVar6 = (*(__this->klass->vtable)._11_CheckSpeedConditions.methodPtr)
                            (__this,*(System_Collections_Generic_List_StringSetting__o **)
                                     ((long)pIStack_68[3].monitor + 0x20),speed,
                             (__this->klass->vtable)._11_CheckSpeedConditions.method);
          if (bVar6) {
            bVar6 = System_String__op_Equality(a,"ReachSpeed",(MethodInfo *)0x0);
            if (bVar6) {
              if (Il2CppMethodInitialized_07545778 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
                Il2CppMethodInitialized_07545778 = '\x01';
              }
              pIVar4 = pIVar5[6].klass;
              if (pIVar4 != (Il2CppClass *)0x0) {
                Settings_TypedSetting_int___set_Value
                          ((Settings_TypedSetting_int__o *)pIVar4,
                           *(int32_t *)((long)&(pIVar4->_1).namespaze + 4) + 1,
                           (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                pIVar4 = pIVar5[6].klass;
                if ((pIVar4 != (Il2CppClass *)0x0) && (pIVar5[4].klass != (Il2CppClass *)0x0)) {
                  iVar7 = *(int32_t *)((long)&(pIVar4->_1).namespaze + 4);
                  val2 = *(int32_t *)((long)&((pIVar5[4].klass)->_1).namespaze + 4);
                  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                  }
                  iVar7 = System_Math__Min_54baeb0(iVar7,val2,(MethodInfo *)0x0);
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pIVar4,iVar7,
                             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                  goto label_05924a10;
                }
              }
              ThrowNullReferenceException();
            }
          }
          goto label_05924a10;
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
      }
      uVar9 = uStack_38 + 1;
      uVar1 = (uint)pSStack_40->max_length;
      uVar8 = (ulong)uVar1;
    } while ((long)uVar9 < (long)(int)uVar1);
  }
  return;
}


// GameProgress.QuestHandler$$RegisterInteraction
// il2cpp: void GameProgress_QuestHandler__RegisterInteraction (GameProgress_QuestHandler_o* __this, UnityEngine_GameObject_o* interact, int32_t interactionType, const MethodInfo* method);
// 0x5924bd0
// eh: try 0x5924d8a..0x5924f38 -> pad 0x5924f40 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5924f5e..0x5924f63 -> pad 0x5924fa1 cleanup
// eh: try 0x5924fa4..0x5924fae -> pad 0x5924fb6 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5924f3a: jmp 0x5924f46
// asm:   0x5924f3c: jmp 0x5924f46
// asm:   0x5924f3e: jmp 0x5924f46
// asm:   0x5924f40: jmp 0x5924f46
// asm:   0x5924f42: jmp 0x5924f46
// asm:   0x5924f44: jmp 0x5924f46
// asm:   0x5924f46: mov r14, rax
// asm:   0x5924f49: cmp edx, 1
// asm:   0x5924f4c: jne 0x5924fa4
// asm:   0x5924f4e: mov rdi, r14
// asm:   0x5924f51: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5924f56: mov rbp, qword ptr [rax]
// asm:   0x5924f59: mov qword ptr [rsp + 0x30], rbp
// asm:   0x5924f5e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5924f63: lea rax, [rip + 0x1969846]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x5924f6a: mov rsi, qword ptr [rax]
// asm:   0x5924f6d: lea rdi, [rsp + 0x10]
// asm:   0x5924f72: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5924f77: test rbp, rbp
// asm:   0x5924f7a: je 0x5924cb4
// asm:   0x5924f80: mov rdi, rbp
// asm:   0x5924f83: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5924fa1: mov r14, rax
// asm:   0x5924fa4: lea rdi, [rsp + 0x30]
// asm:   0x5924fa9: call 0x2fd2aa0  ; il2cpp_runtime_helper_02fd2aa0()
// asm:   0x5924fae: mov rdi, r14
// asm:   0x5924fb1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5924fb6: mov rdi, rax
// asm:   0x5924fb9: call 0x2ab61e0  ; __clang_call_terminate()

void GameProgress_QuestHandler__RegisterInteraction
               (GameProgress_QuestHandler_o *__this,UnityEngine_GameObject_o *interact,int32_t interactionType
               ,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  System_String_array *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_String_o *a;
  Il2CppClass *pIVar5;
  Il2CppObject *pIVar6;
  bool bVar7;
  int32_t iVar8;
  ulong uVar9;
  System_Collections_Generic_List_object__o *__this_00;
  ulong uVar10;
  undefined1 auStack_78 [8];
  undefined1 *puStack_70;
  Il2CppObject *pIStack_68;
  undefined1 auStack_58 [16];
  Il2CppObject *pIStack_48;
  System_String_array *pSStack_40;
  ulong uStack_38;
  
  if (Il2CppMethodInitialized_07545773 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"CarryHuman");
    il2cpp_codegen_initialize_runtime_metadata(&"ShareGas");
    Il2CppMethodInitialized_07545773 = '\x01';
  }
  auStack_78 = (undefined1  [8])0x0;
  puStack_70 = (undefined1 *)0x0;
  pIStack_68 = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields).InteractionCategories;
  if (pSVar3 == (System_String_array *)0x0) {
label_05924f97:
    ThrowNullReferenceException();
  }
  if ((int)pSVar3->max_length < 1) {
    return;
  }
  uVar9 = pSVar3->max_length & 0xffffffff;
  uVar10 = 0;
  pSStack_40 = pSVar3;
  do {
    if (uVar9 <= uVar10) {
      ThrowIndexOutOfRangeException();
    }
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05924f97;
    a = pSStack_40->m_Items[uVar10];
    uStack_38 = uVar10;
    bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar4,(Il2CppObject *)a,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ContainsKey);
    if (bVar7) {
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
      if ((pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (__this_00 = (System_Collections_Generic_List_object__o *)
                      System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar4,(Il2CppObject *)a,
                                 (MethodInfo_4AAD450 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_get_Item
                                ), __this_00 == (System_Collections_Generic_List_object__o *)0x0))
      goto label_05924f97;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,__this_00,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
      pIStack_68 = pIStack_48;
      auStack_78 = (undefined1  [8])auStack_58._0_8_;
      puStack_70 = (undefined1 *)auStack_58._8_8_;
      auStack_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      auStack_58._8_8_ = auStack_78;
label_05924d80:
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
      pIVar6 = pIStack_68;
      if (bVar7) {
        bVar7 = System_String__op_Equality(a,"ShareGas",(MethodInfo *)0x0);
        if (bVar7) {
          if (pIVar6 == (Il2CppObject *)0x0) {
label_05924f2c:
            ThrowNullReferenceException();
          }
          if (Il2CppMethodInitialized_07545778 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
            il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
            Il2CppMethodInitialized_07545778 = '\x01';
          }
          pIVar5 = pIVar6[6].klass;
          if (pIVar5 == (Il2CppClass *)0x0) goto label_05924f2c;
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pIVar5,
                     *(int32_t *)((long)&(pIVar5->_1).namespaze + 4) + 1,
                     (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          pIVar5 = pIVar6[6].klass;
          if ((pIVar5 == (Il2CppClass *)0x0) || (pIVar6[4].klass == (Il2CppClass *)0x0)) goto label_05924f2c;
          iVar8 = *(int32_t *)((long)&(pIVar5->_1).namespaze + 4);
          iVar2 = *(int32_t *)((long)&((pIVar6[4].klass)->_1).namespaze + 4);
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          iVar8 = System_Math__Min_54baeb0(iVar8,iVar2,(MethodInfo *)0x0);
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pIVar5,iVar8,
                     (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        }
        else {
          bVar7 = System_String__op_Equality(a,"CarryHuman",(MethodInfo *)0x0);
          if (bVar7) {
            if (pIVar6 != (Il2CppObject *)0x0) {
              if (Il2CppMethodInitialized_07545778 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
                Il2CppMethodInitialized_07545778 = '\x01';
              }
              pIVar5 = pIVar6[6].klass;
              if (pIVar5 != (Il2CppClass *)0x0) {
                Settings_TypedSetting_int___set_Value
                          ((Settings_TypedSetting_int__o *)pIVar5,
                           *(int32_t *)((long)&(pIVar5->_1).namespaze + 4) + 1,
                           (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                pIVar5 = pIVar6[6].klass;
                if ((pIVar5 != (Il2CppClass *)0x0) && (pIVar6[4].klass != (Il2CppClass *)0x0)) {
                  iVar8 = *(int32_t *)((long)&(pIVar5->_1).namespaze + 4);
                  iVar2 = *(int32_t *)((long)&((pIVar6[4].klass)->_1).namespaze + 4);
                  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                  }
                  iVar8 = System_Math__Min_54baeb0(iVar8,iVar2,(MethodInfo *)0x0);
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pIVar5,iVar8,
                             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                  goto label_05924d80;
                }
              }
            }
            ThrowNullReferenceException();
          }
        }
        goto label_05924d80;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
                );
    }
    uVar10 = uStack_38 + 1;
    uVar1 = (uint)pSStack_40->max_length;
    uVar9 = (ulong)uVar1;
    if ((long)(int)uVar1 <= (long)uVar10) {
      return;
    }
  } while( true );
}


// GameProgress.QuestHandler$$.cctor
// il2cpp: void GameProgress_QuestHandler___cctor (const MethodInfo* method);
// 0x5924fc0

void GameProgress_QuestHandler___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__T__o *pSVar1;
  
  if (Il2CppMethodInitialized_07545774 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_QuestHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumToDict_KillWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07545774 = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar1 = Utility_Util__EnumToDict_Int32Enum_
                     ((MethodInfo_377C170 *)MethodInfo_Utility_Util_EnumToDict_KillWeapon);
  TypeInfo_GameProgress_QuestHandler->static_fields->NameToKillWeapon =
       (System_Collections_Generic_Dictionary_string__KillWeapon__o *)pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameProgress_QuestHandler->static_fields->NameToKillWeapon);
  return;
}


