// Type: GameProgress.QuestHandler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/QuestHandler.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/QuestHandler.cs
// --------------------------------

// GameProgress.QuestHandler$$.ctor
// il2cpp: void GameProgress_QuestHandler___ctor (GameProgress_QuestHandler_o* __this, GameProgress_QuestContainer_o* quest, const MethodInfo* method);
// 0x181e39600

void GameProgress_QuestHandler___ctor
               (GameProgress_QuestHandler_o *__this,GameProgress_QuestContainer_o *quest,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Collections_Generic_Dictionary_string__List_QuestItem___o *__this_00;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_184344dd2 == '\0') {
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
    Il2CppMethodInitialized_184344dd2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_List_QuestItem);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ctor
            );
  (__this->fields)._activeQuests = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeQuests,__this_00);
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
  pSVar1 = "KillTitan";
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = "KillTitan";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
      (__this->fields).TitanKillCategories = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).TitanKillCategories,pSVar2);
      pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
      pSVar1 = "KillHuman";
      if (pSVar2 == (System_String_array *)0x0) goto label_181e398bd;
      if ((int)pSVar2->max_length != 0) {
        pSVar2->m_Items[0] = "KillHuman";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
        (__this->fields).HumanKillCategories = pSVar2;
        Il2CppCodeGenWriteBarrier(&(__this->fields).HumanKillCategories,pSVar2);
        pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
        pSVar1 = "DealDamage";
        if (pSVar2 == (System_String_array *)0x0) goto label_181e398bd;
        if ((int)pSVar2->max_length != 0) {
          pSVar2->m_Items[0] = "DealDamage";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
          pSVar1 = "HitDamage";
          if (1 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[1] = "HitDamage";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
            (__this->fields).DamageCategories = pSVar2;
            Il2CppCodeGenWriteBarrier(&(__this->fields).DamageCategories,pSVar2);
            pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
            pSVar1 = "ReachSpeed";
            if (pSVar2 == (System_String_array *)0x0) goto label_181e398bd;
            if ((int)pSVar2->max_length != 0) {
              pSVar2->m_Items[0] = "ReachSpeed";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
              (__this->fields).SpeedCategories = pSVar2;
              Il2CppCodeGenWriteBarrier(&(__this->fields).SpeedCategories,pSVar2);
              pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
              pSVar1 = "ShareGas";
              if (pSVar2 == (System_String_array *)0x0) goto label_181e398bd;
              if ((int)pSVar2->max_length != 0) {
                pSVar2->m_Items[0] = "ShareGas";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                pSVar1 = "CarryPlayer";
                if (1 < (uint)pSVar2->max_length) {
                  pSVar2->m_Items[1] = "CarryPlayer";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                  (__this->fields).InteractionCategories = pSVar2;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).InteractionCategories,pSVar2);
                  System_Object___ctor
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,
                             (MethodInfo *)0x0);
                  if (quest != (GameProgress_QuestContainer_o *)0x0) {
                    (__this->fields)._quest = quest;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._quest,quest);
                    GameProgress_QuestHandler__LoadQuests(__this,(MethodInfo *)0x0);
                    GameProgress_QuestHandler__CacheActiveQuests(__this,(MethodInfo *)0x0);
                  }
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
label_181e398bd:
  ThrowNullReferenceException();
}


// GameProgress.QuestHandler$$ReloadQuests
// il2cpp: void GameProgress_QuestHandler__ReloadQuests (GameProgress_QuestHandler_o* __this, const MethodInfo* method);
// 0x181e39550

void GameProgress_QuestHandler__ReloadQuests(GameProgress_QuestHandler_o *__this,MethodInfo *method)

{
  GameProgress_QuestHandler__LoadQuests(__this,(MethodInfo *)0x0);
  GameProgress_QuestHandler__CacheActiveQuests(__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.QuestHandler$$GetTimeToQuestReset
// il2cpp: System_String_o* GameProgress_QuestHandler__GetTimeToQuestReset (bool daily, const MethodInfo* method);
// 0x181e37f00

System_String_o * GameProgress_QuestHandler__GetTimeToQuestReset(bool daily,MethodInfo *method)

{
  int32_t iVar1;
  System_DateTime_o d1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  int iVar5;
  System_String_o *pSVar6;
  int local_res8 [2];
  System_DateTime_Fields local_res18;
  System_TimeSpan_Fields local_res20;
  
  if (Il2CppMethodInitialized_184344dd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    il2cpp_codegen_initialize_runtime_metadata(&"day");
    il2cpp_codegen_initialize_runtime_metadata(&"hour");
    il2cpp_codegen_initialize_runtime_metadata(&"days");
    il2cpp_codegen_initialize_runtime_metadata(&"hours");
    il2cpp_codegen_initialize_runtime_metadata(&"Resets in: {0} {1}, {2} {3}");
    il2cpp_codegen_initialize_runtime_metadata(&"Resets in: {0} {1}");
    Il2CppMethodInitialized_184344dd3 = '\x01';
  }
  local_res20._ticks = 0;
  if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
  }
  d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  local_res18._dateData = 0;
  System_DateTime___ctor_1b20860((System_DateTime_o *)&local_res18,0x7b2,1,1,(MethodInfo *)0x0);
  local_res20._ticks =
       (int64_t)System_DateTime__op_Subtraction_1b21970
                          (d1,(System_DateTime_o)local_res18._dateData,(MethodInfo *)0x0);
  if (daily) {
    if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
    }
    iVar1 = System_TimeSpan__get_Hours((System_TimeSpan_o *)&local_res20,(MethodInfo *)0x0);
    local_res8[0] = 0x18 - iVar1;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    pSVar4 = "hour";
    if (iVar1 != 0x17) {
      pSVar4 = "hours";
    }
    pSVar4 = System_String__Format_196d440
                       ("Resets in: {0} {1}",pIVar2,(Il2CppObject *)pSVar4,(MethodInfo *)0x0);
    return pSVar4;
  }
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  iVar1 = System_TimeSpan__get_Days((System_TimeSpan_o *)&local_res20,(MethodInfo *)0x0);
  iVar5 = ((iVar1 + -1) / 7) * 7 - (iVar1 + -1);
  iVar1 = System_TimeSpan__get_Hours((System_TimeSpan_o *)&local_res20,(MethodInfo *)0x0);
  args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,4);
  local_res8[0] = iVar5 + 6;
  pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
  if (args != (System_Object_array *)0x0) {
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if ((int)args->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    args->m_Items[0] = pIVar2;
    Il2CppCodeGenWriteBarrier(args->m_Items,pIVar2);
    pSVar4 = "Resets in: {0} {1}, {2} {3}";
    pSVar6 = "day";
    if (iVar5 != -5) {
      pSVar6 = "days";
    }
    if (pSVar6 != (System_String_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar6,(((args->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)pSVar6;
      Il2CppCodeGenWriteBarrier(args->m_Items + 1,pSVar6);
      local_res18._dateData._0_4_ = 0x18 - iVar1;
      pIVar2 = il2cpp_value_box(g_data_184354e08,&local_res18);
      if (pIVar2 != (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
        if (pIVar3 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar2;
        Il2CppCodeGenWriteBarrier(args->m_Items + 2,pIVar2);
        pSVar6 = "hours";
        if (iVar1 == 0x17) {
          pSVar6 = "hour";
        }
        if (pSVar6 != (System_String_o *)0x0) {
          pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar6,(((args->obj).klass)->_1).element_class);
          if (pIVar2 == (Il2CppObject *)0x0) {
            pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
          }
        }
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = (Il2CppObject *)pSVar6;
          Il2CppCodeGenWriteBarrier(args->m_Items + 3,pSVar6);
          pSVar4 = System_String__Format_196ceb0(pSVar4,args,(MethodInfo *)0x0);
          return pSVar4;
        }
        ThrowIndexOutOfRangeException();
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestHandler$$LoadQuests
// il2cpp: void GameProgress_QuestHandler__LoadQuests (GameProgress_QuestHandler_o* __this, const MethodInfo* method);
// 0x181e38270
// eh: try 0x181e38570..0x181e388ce -> pad 0x183334f00 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 49 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e3856d: nop dword ptr [rax]
// asm:   0x181e385db: mov rdx, qword ptr [rip + 0x225952e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x181e385e2: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x181e385e7: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e385ec: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x181e385f1: test rcx, rcx
// asm:   0x181e385f4: jne 0x181e388b3
// asm:   0x181e385fa: xor r12d, r12d
// asm:   0x181e385fd: mov r13, qword ptr [rsp + 0xe0]
// asm:   0x181e38605: mov r14d, dword ptr [rsp + 0xf0]
// asm:   0x181e3860d: mov rdi, qword ptr [rsp + 0x80]
// asm:   0x181e38615: mov r15, qword ptr [rsp + 0x88]
// asm:   0x181e3879e: mov rdx, qword ptr [rip + 0x225936b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x181e387a5: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e387aa: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e387af: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x181e387b4: test rcx, rcx
// asm:   0x181e387b7: jne 0x181e388ce
// asm:   0x181e387bd: xor r12d, r12d
// asm:   0x181e387c0: mov ecx, 3
// asm:   0x181e387c5: mov r13, qword ptr [rsp + 0xe0]
// asm:   0x181e387cd: mov r14d, dword ptr [rsp + 0xf0]
// asm:   0x181e387d5: mov rdi, qword ptr [rsp + 0x80]
// asm:   0x181e387dd: mov rsi, qword ptr [rsp + 0x60]
// asm:   0x181e387e2: mov r15, qword ptr [rsp + 0x88]
// asm:   0x181e388b3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e388ce: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183334f00: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183334f05: push rbp
// asm:   0x183334f06: sub rsp, 0x30
// asm:   0x183334f0a: mov rbp, rdx
// asm:   0x183334f0d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x183334f14: mov rcx, qword ptr [rax]
// asm:   0x183334f17: mov qword ptr [rbp + 0x60], rcx
// asm:   0x183334f1b: movabs rax, 0
// asm:   0x183334f25: add rsp, 0x30
// asm:   0x183334f29: pop rbp
// asm:   0x183334f2a: ret 
// asm:   0x18333c870: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c875: push rbp
// asm:   0x18333c876: sub rsp, 0x30
// asm:   0x18333c87a: mov rbp, rdx
// asm:   0x18333c87d: mov rax, qword ptr [rbp + 0x98]
// asm:   0x18333c884: mov rcx, qword ptr [rax]
// asm:   0x18333c887: mov qword ptr [rbp + 0x48], rcx
// asm:   0x18333c88b: movabs rax, 0
// asm:   0x18333c895: add rsp, 0x30
// asm:   0x18333c899: pop rbp
// asm:   0x18333c89a: ret 

void GameProgress_QuestHandler__LoadQuests(GameProgress_QuestHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameProgress_QuestContainer_o *pGVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  Settings_ListSetting_QuestItem__o *pSVar5;
  bool bVar6;
  int32_t currentDay;
  System_DateTime_o d1;
  GameProgress_QuestContainer_o *pGVar7;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar8;
  Settings_ListSetting_QuestItem__o *pSVar9;
  System_Collections_Generic_List_QuestItem__o *pSVar10;
  Settings_ListSetting_QuestItem__o *pSVar11;
  undefined1 local_a8 [8];
  uint64_t uStack_a0;
  Il2CppObject *local_98;
  undefined1 local_90 [16];
  Il2CppObject *local_80;
  Settings_ListSetting_QuestItem__o *local_78;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_70;
  System_DateTime_Fields local_68;
  System_TimeSpan_Fields local_60;
  Settings_ListSetting_QuestItem__o *local_58;
  GameProgress_QuestContainer_o *local_50;
  
  if (Il2CppMethodInitialized_184344dd4 == '\0') {
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
    Il2CppMethodInitialized_184344dd4 = '\x01';
  }
  local_60._ticks = 0;
  local_a8 = (undefined1  [8])0x0;
  uStack_a0 = 0;
  local_98 = (Il2CppObject *)0x0;
  if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
  }
  d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  local_68._dateData = 0;
  System_DateTime___ctor_1b20860((System_DateTime_o *)&local_68,0x7b2,1,1,(MethodInfo *)0x0);
  local_60._ticks =
       (int64_t)System_DateTime__op_Subtraction_1b21970
                          (d1,(System_DateTime_o)local_68._dateData,(MethodInfo *)0x0);
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  currentDay = System_TimeSpan__get_Days((System_TimeSpan_o *)&local_60,(MethodInfo *)0x0);
  pGVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_QuestContainer);
  local_50 = pGVar7;
  GameProgress_QuestContainer___ctor(pGVar7,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar8 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this_00 = ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar8,"QuestList",false,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_TextAsset->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_TextAsset)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UnityEngine_TextAsset);
    }
    pSVar8 = UnityEngine_TextAsset__ToString((UnityEngine_TextAsset_o *)__this_00,(MethodInfo *)0x0);
    if (pGVar7 != (GameProgress_QuestContainer_o *)0x0) {
      (*(pGVar7->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                (pGVar7,pSVar8,(pGVar7->klass->vtable)._9_DeserializeFromJsonString.method);
      pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_QuestItem);
      Settings_ListSetting_object____ctor_182b940
                ((Settings_ListSetting_T__o *)pSVar9,
                 (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_QuestItem_ctor);
      pGVar2 = (__this->fields)._quest;
      if (((pGVar2 != (GameProgress_QuestContainer_o *)0x0) &&
          (pSVar11 = (pGVar2->fields).DailyQuestItems, pSVar11 != (Settings_ListSetting_QuestItem__o *)0x0))
         && (pSVar3 = (pSVar11->fields)._value, pSVar3 != (System_Collections_Generic_List_T__o *)0x0)) {
        local_58 = pSVar9;
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_90,pSVar3,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
        local_a8 = (undefined1  [8])local_90._0_8_;
        uStack_a0 = local_90._8_8_;
        local_98 = local_80;
        local_78 = (Settings_ListSetting_QuestItem__o *)0x0;
        local_70 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8;
        while( true ) {
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_a8,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
          if (!bVar6) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8,
                       MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
            if ((pSVar9 != (Settings_ListSetting_QuestItem__o *)0x0) &&
               (pSVar4 = (System_Collections_Generic_List_object__o *)(pSVar9->fields)._value,
               pSVar4 != (System_Collections_Generic_List_object__o *)0x0)) {
              pSVar10 = GameProgress_QuestHandler__CreateQuests
                                  (__this,pGVar7,currentDay,true,3 - (pSVar4->fields)._size,(MethodInfo *)0x0)
              ;
              System_Collections_Generic_List_object___AddRange
                        (pSVar4,(System_Collections_Generic_IEnumerable_T__o *)pSVar10,
                         (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_QuestItem_AddRange);
              pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_QuestItem);
              Settings_ListSetting_object____ctor_182b940
                        ((Settings_ListSetting_T__o *)pSVar11,
                         (MethodInfo_182B940 *)MethodInfo_Settings_ListSetting_QuestItem_ctor);
              pGVar2 = (__this->fields)._quest;
              if ((pGVar2 != (GameProgress_QuestContainer_o *)0x0) &&
                 ((pSVar5 = (pGVar2->fields).WeeklyQuestItems,
                  pSVar5 != (Settings_ListSetting_QuestItem__o *)0x0 &&
                  (pSVar3 = (pSVar5->fields)._value, pSVar3 != (System_Collections_Generic_List_T__o *)0x0))))
              {
                local_78 = pSVar11;
                System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_90,pSVar3,
                           (MethodInfo_91F180 *)
                           MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
                local_a8 = (undefined1  [8])local_90._0_8_;
                uStack_a0 = local_90._8_8_;
                local_98 = local_80;
                local_90._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
                local_90._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8;
                while( true ) {
                  bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    ((System_Collections_Generic_List_Enumerator_object__o *)local_a8,
                                     (MethodInfo_153A2A0 *)
                                     MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext)
                  ;
                  if (!bVar6) break;
                  if (local_98 == (Il2CppObject *)0x0) {
                    ThrowNullReferenceException();
                  }
                  if (local_98[7].klass == (Il2CppClass *)0x0) {
                    ThrowNullReferenceException();
                  }
                  if ((*(int *)((longlong)&((local_98[7].klass)->_1).namespaze + 4) + -1) / 7 ==
                      (currentDay + -1) / 7) {
                    if (pSVar11 == (Settings_ListSetting_QuestItem__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar3 = (pSVar11->fields)._value;
                    if (pSVar3 == (System_Collections_Generic_List_T__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    il2cpp_runtime_helper_180012890(pSVar3,local_98,MethodInfo_System_Collections_Generic_List_QuestItem_Add);
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8,
                           MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
                if ((pSVar11 != (Settings_ListSetting_QuestItem__o *)0x0) &&
                   (pSVar4 = (System_Collections_Generic_List_object__o *)(pSVar11->fields)._value,
                   pSVar4 != (System_Collections_Generic_List_object__o *)0x0)) {
                  pSVar10 = GameProgress_QuestHandler__CreateQuests
                                      (__this,pGVar7,currentDay,false,3 - (pSVar4->fields)._size,
                                       (MethodInfo *)0x0);
                  System_Collections_Generic_List_object___AddRange
                            (pSVar4,(System_Collections_Generic_IEnumerable_T__o *)pSVar10,
                             (MethodInfo_93DA30 *)
                             MethodInfo_System_Collections_Generic_List_QuestItem_AddRange);
                  pGVar7 = (__this->fields)._quest;
                  if ((pGVar7 != (GameProgress_QuestContainer_o *)0x0) &&
                     (pSVar5 = (pGVar7->fields).DailyQuestItems,
                     pSVar5 != (Settings_ListSetting_QuestItem__o *)0x0)) {
                    (*(pSVar5->klass->vtable)._10_Copy.methodPtr)
                              (pSVar5,pSVar9,(pSVar5->klass->vtable)._10_Copy.method);
                    pGVar7 = (__this->fields)._quest;
                    if ((pGVar7 != (GameProgress_QuestContainer_o *)0x0) &&
                       (pSVar9 = (pGVar7->fields).WeeklyQuestItems,
                       pSVar9 != (Settings_ListSetting_QuestItem__o *)0x0)) {
                      (*(pSVar9->klass->vtable)._10_Copy.methodPtr)
                                (pSVar9,pSVar11,(pSVar9->klass->vtable)._10_Copy.method);
                      return;
                    }
                  }
                }
              }
            }
            ThrowNullReferenceException();
          }
          if (local_98 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (local_98[7].klass == (Il2CppClass *)0x0) break;
          if (*(int *)((longlong)&((local_98[7].klass)->_1).namespaze + 4) == currentDay) {
            if (pSVar9 == (Settings_ListSetting_QuestItem__o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar3 = (pSVar9->fields)._value;
            if (pSVar3 == (System_Collections_Generic_List_T__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(pSVar3,local_98,MethodInfo_System_Collections_Generic_List_QuestItem_Add);
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestHandler$$CreateQuests
// il2cpp: System_Collections_Generic_List_QuestItem__o* GameProgress_QuestHandler__CreateQuests (GameProgress_QuestHandler_o* __this, GameProgress_QuestContainer_o* defaultQuest, int32_t currentDay, bool daily, int32_t count, const MethodInfo* method);
// 0x181e37c70
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e37dbd: nop dword ptr [rax]
// asm:   0x181e37e23: jmp 0x181e37ec6

System_Collections_Generic_List_QuestItem__o *
GameProgress_QuestHandler__CreateQuests
          (GameProgress_QuestHandler_o *__this,GameProgress_QuestContainer_o *defaultQuest,int32_t currentDay,
          bool daily,int32_t count,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Settings_IntSetting_o *__this_01;
  bool bVar1;
  int32_t index;
  System_Collections_Generic_List_QuestItem__o *__this_02;
  System_Collections_Generic_HashSet_string__o *__this_03;
  GameProgress_QuestItem_o *pGVar2;
  System_String_o *pSVar3;
  GameProgress_QuestItem_o *pGVar4;
  int iVar5;
  Settings_ListSetting_QuestItem__o *pSVar6;
  int iVar7;
  
  if (Il2CppMethodInitialized_184344dd5 == '\0') {
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
    Il2CppMethodInitialized_184344dd5 = '\x01';
  }
  if (defaultQuest != (GameProgress_QuestContainer_o *)0x0) {
    if (daily) {
      pSVar6 = (defaultQuest->fields).DailyQuestItems;
    }
    else {
      pSVar6 = (defaultQuest->fields).WeeklyQuestItems;
    }
    if (pSVar6 != (Settings_ListSetting_QuestItem__o *)0x0) {
      __this_00 = (System_Collections_Generic_List_object__o *)(pSVar6->fields)._value;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_QuestItem)
      ;
      System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_QuestItem_ctor);
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string)
      ;
      System_Collections_Generic_HashSet_object____ctor
                ((System_Collections_Generic_HashSet_object__o *)__this_03,
                 (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
      iVar7 = 0;
      if (0 < count) {
        do {
          iVar5 = 0;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_181e37ef7;
          do {
            index = UnityEngine_Random__RandomRangeInt(0,(__this_00->fields)._size,(MethodInfo *)0x0);
            pGVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               (__this_00,index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_QuestItem_get_Item);
            if ((pGVar2 == (GameProgress_QuestItem_o *)0x0) ||
               (pSVar3 = (*(pGVar2->klass->vtable)._14_GetQuestName.methodPtr)
                                   (pGVar2,(pGVar2->klass->vtable)._14_GetQuestName.method),
               __this_03 == (System_Collections_Generic_HashSet_string__o *)0x0)) goto label_181e37ef7;
            bVar1 = System_Collections_Generic_HashSet_object___Contains
                              ((System_Collections_Generic_HashSet_object__o *)__this_03,
                               (Il2CppObject *)pSVar3,
                               (MethodInfo_1759E40 *)
                               MethodInfo_System_Collections_Generic_HashSet_string_Contains);
            if (!bVar1) {
              pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_QuestItem);
              GameProgress_QuestItem___ctor(pGVar2,(MethodInfo *)0x0);
              pGVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 (__this_00,index,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_QuestItem_get_Item);
              if (pGVar2 == (GameProgress_QuestItem_o *)0x0) goto label_181e37ef7;
              (*(pGVar2->klass->vtable)._10_Copy.methodPtr)
                        (pGVar2,(Settings_BaseSetting_o *)pGVar4,(pGVar2->klass->vtable)._10_Copy.method);
              __this_01 = (pGVar2->fields).DayCreated;
              if ((__this_01 == (Settings_IntSetting_o *)0x0) ||
                 (Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)__this_01,currentDay,
                             (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value),
                 __this_02 == (System_Collections_Generic_List_QuestItem__o *)0x0)) goto label_181e37ef7;
              il2cpp_runtime_helper_180012890(__this_02,pGVar2,MethodInfo_System_Collections_Generic_List_QuestItem_Add);
              pSVar3 = (*(pGVar2->klass->vtable)._14_GetQuestName.methodPtr)
                                 (pGVar2,(pGVar2->klass->vtable)._14_GetQuestName.method);
              System_Collections_Generic_HashSet_object___Add
                        ((System_Collections_Generic_HashSet_object__o *)__this_03,(Il2CppObject *)pSVar3,
                         (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
              break;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < 10);
          iVar7 = iVar7 + 1;
        } while (iVar7 < count);
      }
      return __this_02;
    }
  }
label_181e37ef7:
  ThrowNullReferenceException();
}


// GameProgress.QuestHandler$$CacheActiveQuests
// il2cpp: void GameProgress_QuestHandler__CacheActiveQuests (GameProgress_QuestHandler_o* __this, const MethodInfo* method);
// 0x181e37330
// eh: try 0x181e37430..0x181e375c4 -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e3742f: nop 
// asm:   0x181e37493: mov rdx, qword ptr [rip + 0x225a676]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x181e3749a: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e3749f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e374a4: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e374a9: test rcx, rcx
// asm:   0x181e374ac: jne 0x181e375ae
// asm:   0x181e374b2: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x181e37577: mov rdx, qword ptr [rip + 0x225a592]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x181e3757e: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e37583: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e37588: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e3758d: test rcx, rcx
// asm:   0x181e37590: jne 0x181e375c4
// asm:   0x181e375ae: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e375c4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void GameProgress_QuestHandler__CacheActiveQuests(GameProgress_QuestHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__List_QuestItem___o *__this_00;
  GameProgress_QuestContainer_o *pGVar1;
  Settings_ListSetting_QuestItem__o *pSVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  bool bVar6;
  undefined1 local_38 [16];
  GameProgress_QuestItem_o *local_28;
  undefined1 local_20 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_18;
  GameProgress_QuestItem_o *local_10;
  
  if (Il2CppMethodInitialized_184344dd6 == '\0') {
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
    Il2CppMethodInitialized_184344dd6 = '\x01';
  }
  local_20 = (undefined1  [8])0x0;
  pUStack_18 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_10 = (GameProgress_QuestItem_o *)0x0;
  __this_00 = (__this->fields)._activeQuests;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__List_QuestItem___o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13BF1C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_Clear);
    pGVar1 = (__this->fields)._quest;
    if (((pGVar1 != (GameProgress_QuestContainer_o *)0x0) &&
        (pSVar2 = (pGVar1->fields).DailyQuestItems, pSVar2 != (Settings_ListSetting_QuestItem__o *)0x0)) &&
       (pSVar3 = (pSVar2->fields)._value, pSVar3 != (System_Collections_Generic_List_T__o *)0x0)) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_38,pSVar3,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
      local_20 = (undefined1  [8])local_38._0_8_;
      pUStack_18 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38._8_8_;
      local_10 = local_28;
      local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_38._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20;
      while( true ) {
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_20,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
        if (!bVar6) break;
        if (local_10 == (GameProgress_QuestItem_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar4 = (local_10->fields).Progress;
        if (pSVar4 == (Settings_IntSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar5 = (local_10->fields).Amount;
        if (pSVar5 == (Settings_IntSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pSVar4->fields)._value < (pSVar5->fields)._value) {
          GameProgress_QuestHandler__AddActiveQuest(__this,local_10,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20,
                 MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
      pGVar1 = (__this->fields)._quest;
      if (((pGVar1 != (GameProgress_QuestContainer_o *)0x0) &&
          (pSVar2 = (pGVar1->fields).WeeklyQuestItems, pSVar2 != (Settings_ListSetting_QuestItem__o *)0x0)) &&
         (pSVar3 = (pSVar2->fields)._value, pSVar3 != (System_Collections_Generic_List_T__o *)0x0)) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_38,pSVar3,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
        local_20 = (undefined1  [8])local_38._0_8_;
        pUStack_18 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38._8_8_;
        local_10 = local_28;
        local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_38._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20;
        while( true ) {
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_20,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
          if (!bVar6) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20,
                       MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
            return;
          }
          if (local_10 == (GameProgress_QuestItem_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar4 = (local_10->fields).Progress;
          if (pSVar4 == (Settings_IntSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar5 = (local_10->fields).Amount;
          if (pSVar5 == (Settings_IntSetting_o *)0x0) break;
          if ((pSVar4->fields)._value < (pSVar5->fields)._value) {
            GameProgress_QuestHandler__AddActiveQuest(__this,local_10,(MethodInfo *)0x0);
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
// 0x181e37180

void GameProgress_QuestHandler__AddActiveQuest
               (GameProgress_QuestHandler_o *__this,GameProgress_QuestItem_o *item,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_StringSetting_o *pSVar3;
  System_Collections_Generic_Dictionary_string__List_QuestItem___o *__this_00;
  System_String_o *key;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Object_array *pSVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  System_Collections_Generic_List_QuestItem__o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  
  if (Il2CppMethodInitialized_184344dd7 == '\0') {
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
    Il2CppMethodInitialized_184344dd7 = '\x01';
  }
  if (((item != (GameProgress_QuestItem_o *)0x0) &&
      (pSVar3 = (item->fields).Category, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (__this_00 = (__this->fields)._activeQuests,
     __this_00 != (System_Collections_Generic_Dictionary_string__List_QuestItem___o *)0x0)) {
    key = (pSVar3->fields)._value;
    bVar7 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)key,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ContainsKey);
    if (!bVar7) {
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_QuestItem)
      ;
      System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_QuestItem_ctor);
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181e37315;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar4,(Il2CppObject *)key,(Il2CppObject *)__this_01,
                 (MethodInfo_146B4B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_Add);
    }
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_02 = (System_Collections_Generic_List_object__o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar4,(Il2CppObject *)key,
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_get_Item);
      pMVar6 = MethodInfo_System_Collections_Generic_List_QuestItem_Add;
      if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
        piVar1 = &(__this_02->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this_02->fields)._items;
        if (pSVar5 != (System_Object_array *)0x0) {
          uVar2 = (__this_02->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this_02->fields)._size = uVar2 + 1;
            if ((uint)pSVar5->max_length <= uVar2) {
              ThrowIndexOutOfRangeException();
            }
            pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)item;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_02,(Il2CppObject *)item,
                       (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
          }
          return;
        }
      }
    }
  }
label_181e37315:
  ThrowNullReferenceException();
}


// GameProgress.QuestHandler$$CheckKillConditions
// il2cpp: bool GameProgress_QuestHandler__CheckKillConditions (GameProgress_QuestHandler_o* __this, System_Collections_Generic_List_StringSetting__o* conditions, int32_t weapon, const MethodInfo* method);
// 0x181e37850
// eh: try 0x181e37930..0x181e37a7a -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e37a27: mov rdx, qword ptr [rip + 0x226042a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose
// asm:   0x181e37a2e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e37a33: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e37a38: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e37a3d: test rcx, rcx
// asm:   0x181e37a40: jne 0x181e37a7a
// asm:   0x181e37a7a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool GameProgress_QuestHandler__CheckKillConditions
               (GameProgress_QuestHandler_o *__this,
               System_Collections_Generic_List_StringSetting__o *conditions,int32_t weapon,MethodInfo *method)

{
  System_String_o *key;
  System_Collections_Generic_Dictionary_string__KillWeapon__o *__this_00;
  bool bVar1;
  int32_t iVar2;
  System_String_array *pSVar3;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184344dd8 == '\0') {
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
    Il2CppMethodInitialized_184344dd8 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if (conditions == (System_Collections_Generic_List_StringSetting__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
             (System_Collections_Generic_List_T__o *)conditions,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
  local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
  local_28.fields._index = local_40._8_4_;
  local_28.fields._version = local_40._12_4_;
  local_28.fields._current = local_30;
  local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_40._8_8_ = &local_28;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_28,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                 MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
      return true;
    }
    if (local_28.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (local_28.fields._current[2].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = System_String__Split
                       ((System_String_o *)local_28.fields._current[2].klass,0x3a,0,(MethodInfo *)0x0);
    if (pSVar3 == (System_String_array *)0x0) break;
    if ((int)pSVar3->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if ((uint)pSVar3->max_length < 2) {
      ThrowIndexOutOfRangeException();
    }
    key = pSVar3->m_Items[1];
    bVar1 = System_String__op_Equality(pSVar3->m_Items[0],"Weapon",(MethodInfo *)0x0);
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
                         (Il2CppObject *)key,
                         (MethodInfo_147A530 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_KillWeapon_get_Item);
      if (iVar2 != weapon) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
        return false;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestHandler$$CheckDamageConditions
// il2cpp: bool GameProgress_QuestHandler__CheckDamageConditions (GameProgress_QuestHandler_o* __this, System_Collections_Generic_List_StringSetting__o* conditions, int32_t weapon, int32_t damage, const MethodInfo* method);
// 0x181e375d0
// eh: try 0x181e376c0..0x181e37840 -> pad 0x183315930 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e377f1: mov rdx, qword ptr [rip + 0x2260660]  ; MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose
// asm:   0x181e377f8: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e377fd: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e37802: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e37807: test rcx, rcx
// asm:   0x181e3780a: jne 0x181e37840
// asm:   0x181e37840: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_184344dd9 == '\0') {
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
    Il2CppMethodInitialized_184344dd9 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (conditions == (System_Collections_Generic_List_StringSetting__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
             (System_Collections_Generic_List_T__o *)conditions,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
  local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
  local_48.fields._index = local_60._8_4_;
  local_48.fields._version = local_60._12_4_;
  local_48.fields._current = local_50;
  local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_60._8_8_ = &local_48;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_48,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                 MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
      return true;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (local_48.fields._current[2].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = System_String__Split
                       ((System_String_o *)local_48.fields._current[2].klass,0x3a,0,(MethodInfo *)0x0);
    if (pSVar3 == (System_String_array *)0x0) break;
    if ((int)pSVar3->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if ((uint)pSVar3->max_length < 2) {
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
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)s,
                         (MethodInfo_147A530 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_KillWeapon_get_Item);
      if (iVar2 != weapon) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                   MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
        return false;
      }
    }
    bVar1 = System_String__op_Equality(a,"Damage",(MethodInfo *)0x0);
    if ((bVar1) && (iVar2 = System_Int32__Parse(s,(MethodInfo *)0x0), damage < iVar2)) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                 MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
      return false;
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestHandler$$CheckSpeedConditions
// il2cpp: bool GameProgress_QuestHandler__CheckSpeedConditions (GameProgress_QuestHandler_o* __this, System_Collections_Generic_List_StringSetting__o* conditions, float speed, const MethodInfo* method);
// 0x181e37a80
// eh: try 0x181e37b42..0x181e37c5e -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e37c0d: mov rdx, qword ptr [rip + 0x2260244]  ; MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose
// asm:   0x181e37c14: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e37c19: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e37c1e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e37c23: test rcx, rcx
// asm:   0x181e37c26: jne 0x181e37c5e
// asm:   0x181e37c5e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool GameProgress_QuestHandler__CheckSpeedConditions
               (GameProgress_QuestHandler_o *__this,
               System_Collections_Generic_List_StringSetting__o *conditions,float speed,MethodInfo *method)

{
  System_String_o *s;
  bool bVar1;
  int32_t iVar2;
  System_String_array *pSVar3;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  System_Collections_Generic_List_Enumerator_object__o local_38 [2];
  
  if (Il2CppMethodInitialized_184344dda == '\0') {
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
    Il2CppMethodInitialized_184344dda = '\x01';
  }
  local_38[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38[0].fields._index = 0;
  local_38[0].fields._version = 0;
  local_38[0].fields._current = (Il2CppObject *)0x0;
  if (conditions == (System_Collections_Generic_List_StringSetting__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
             (System_Collections_Generic_List_T__o *)conditions,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
  local_38[0].fields._list = (System_Collections_Generic_List_T__o *)local_50._0_8_;
  local_38[0].fields._index = local_50._8_4_;
  local_38[0].fields._version = local_50._12_4_;
  local_38[0].fields._current = local_40;
  local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_50._8_8_ = local_38;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (local_38,(MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
                 MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
      return true;
    }
    if (local_38[0].fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (local_38[0].fields._current[2].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = System_String__Split
                       ((System_String_o *)local_38[0].fields._current[2].klass,0x3a,0,(MethodInfo *)0x0);
    if (pSVar3 == (System_String_array *)0x0) break;
    if ((int)pSVar3->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if ((uint)pSVar3->max_length < 2) {
      ThrowIndexOutOfRangeException();
    }
    s = pSVar3->m_Items[1];
    bVar1 = System_String__op_Equality(pSVar3->m_Items[0],"Speed",(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = System_Int32__Parse(s,(MethodInfo *)0x0);
      if (speed < (float)iVar2) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
                   MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
        return false;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestHandler$$RegisterTitanKill
// il2cpp: void GameProgress_QuestHandler__RegisterTitanKill (GameProgress_QuestHandler_o* __this, Characters_BasicTitan_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x181e392d0
// eh: try 0x181e39440..0x181e3953b -> pad 0x1833392e0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e3939f: nop 
// asm:   0x181e3943f: nop 
// asm:   0x181e394cd: mov rdx, qword ptr [rip + 0x225863c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x181e394d4: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e394d9: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e394de: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e394e3: test rcx, rcx
// asm:   0x181e394e6: jne 0x181e3953b
// asm:   0x181e394e8: mov r13, qword ptr [rsp + 0xc0]
// asm:   0x181e394f0: mov r14, qword ptr [rsp + 0xb0]
// asm:   0x181e394f8: mov r12, qword ptr [rsp + 0x58]
// asm:   0x181e394fd: mov esi, dword ptr [rsp + 0x20]
// asm:   0x181e3953b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833392e0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833392e5: push rbp
// asm:   0x1833392e6: sub rsp, 0x20
// asm:   0x1833392ea: mov rbp, rdx
// asm:   0x1833392ed: mov rax, qword ptr [rbp + 0x60]
// asm:   0x1833392f1: mov rcx, qword ptr [rax]
// asm:   0x1833392f4: mov qword ptr [rbp + 0x28], rcx
// asm:   0x1833392f8: movabs rax, 0
// asm:   0x183339302: add rsp, 0x20
// asm:   0x183339306: pop rbp
// asm:   0x183339307: ret 

void GameProgress_QuestHandler__RegisterTitanKill
               (GameProgress_QuestHandler_o *__this,Characters_BasicTitan_o *victim,
               GameProgress_KillMethod_o *method,MethodInfo *methodInfo)

{
  uint uVar1;
  System_String_array *pSVar2;
  System_Collections_Generic_Dictionary_string__List_QuestItem___o *__this_00;
  System_String_o *a;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Settings_ListSetting_StringSetting__o *pSVar3;
  Il2CppObject *__this_02;
  bool bVar4;
  System_Collections_Generic_List_T__o *__this_03;
  uint uVar5;
  System_Collections_Generic_List_Enumerator_object__o local_70;
  GameProgress_QuestHandler_o *local_58;
  System_String_array *local_50;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  
  local_58 = __this;
  if (Il2CppMethodInitialized_184344ddb == '\0') {
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
    Il2CppMethodInitialized_184344ddb = '\x01';
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).TitanKillCategories;
  uVar5 = 0;
  local_50 = pSVar2;
  if (pSVar2 != (System_String_array *)0x0) {
    do {
      uVar1 = (uint)pSVar2->max_length;
      if ((int)uVar1 <= (int)uVar5) {
        return;
      }
      if (uVar1 <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (__this->fields)._activeQuests;
      if (__this_00 == (System_Collections_Generic_Dictionary_string__List_QuestItem___o *)0x0) break;
      a = pSVar2->m_Items[(int)uVar5];
      bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)a,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ContainsKey);
      if (bVar4) {
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
        if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        __this_03 = (System_Collections_Generic_List_T__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (__this_01,(Il2CppObject *)a,
                               (MethodInfo_147A5B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_get_Item
                              );
        if (__this_03 == (System_Collections_Generic_List_T__o *)0x0) break;
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  (&local_40,__this_03,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
        local_70.fields._list = local_40.fields._list;
        local_70.fields._index = local_40.fields._index;
        local_70.fields._version = local_40.fields._version;
        local_70.fields._current = local_40.fields._current;
        while( true ) {
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_70,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
          __this_02 = local_70.fields._current;
          if (!bVar4) break;
          if ((GameProgress_QuestItem_o *)local_70.fields._current == (GameProgress_QuestItem_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar3 = ((GameProgress_QuestItem_Fields *)((longlong)local_70.fields._current + 0x10))->Conditions;
          if (pSVar3 == (Settings_ListSetting_StringSetting__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar4 = (*(local_58->klass->vtable)._9_CheckKillConditions.methodPtr)
                            (__this,(System_Collections_Generic_List_StringSetting__o *)
                                    (pSVar3->fields)._value,(method->fields).Weapon,
                             (local_58->klass->vtable)._9_CheckKillConditions.method);
          if (bVar4) {
            bVar4 = System_String__op_Equality(a,"KillTitan",(MethodInfo *)0x0);
            if (bVar4) {
              GameProgress_QuestItem__AddProgress((GameProgress_QuestItem_o *)__this_02,1,(MethodInfo *)0x0);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_70,
                   MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
      }
      uVar5 = uVar5 + 1;
    } while( true );
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestHandler$$RegisterHumanKill
// il2cpp: void GameProgress_QuestHandler__RegisterHumanKill (GameProgress_QuestHandler_o* __this, Characters_Human_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x181e38ba0
// eh: try 0x181e38d10..0x181e38e0b -> pad 0x1833392e0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e38c6f: nop 
// asm:   0x181e38d0f: nop 
// asm:   0x181e38d9d: mov rdx, qword ptr [rip + 0x2258d6c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x181e38da4: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e38da9: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e38dae: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e38db3: test rcx, rcx
// asm:   0x181e38db6: jne 0x181e38e0b
// asm:   0x181e38db8: mov r13, qword ptr [rsp + 0xc0]
// asm:   0x181e38dc0: mov r14, qword ptr [rsp + 0xb0]
// asm:   0x181e38dc8: mov r12, qword ptr [rsp + 0x58]
// asm:   0x181e38dcd: mov esi, dword ptr [rsp + 0x20]
// asm:   0x181e38e0b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833392e0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833392e5: push rbp
// asm:   0x1833392e6: sub rsp, 0x20
// asm:   0x1833392ea: mov rbp, rdx
// asm:   0x1833392ed: mov rax, qword ptr [rbp + 0x60]
// asm:   0x1833392f1: mov rcx, qword ptr [rax]
// asm:   0x1833392f4: mov qword ptr [rbp + 0x28], rcx
// asm:   0x1833392f8: movabs rax, 0
// asm:   0x183339302: add rsp, 0x20
// asm:   0x183339306: pop rbp
// asm:   0x183339307: ret 

void GameProgress_QuestHandler__RegisterHumanKill
               (GameProgress_QuestHandler_o *__this,Characters_Human_o *victim,
               GameProgress_KillMethod_o *method,MethodInfo *methodInfo)

{
  uint uVar1;
  System_String_array *pSVar2;
  System_Collections_Generic_Dictionary_string__List_QuestItem___o *__this_00;
  System_String_o *a;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Settings_ListSetting_StringSetting__o *pSVar3;
  Il2CppObject *__this_02;
  bool bVar4;
  System_Collections_Generic_List_T__o *__this_03;
  uint uVar5;
  System_Collections_Generic_List_Enumerator_object__o local_70;
  GameProgress_QuestHandler_o *local_58;
  System_String_array *local_50;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  
  local_58 = __this;
  if (Il2CppMethodInitialized_184344ddc == '\0') {
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
    Il2CppMethodInitialized_184344ddc = '\x01';
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).HumanKillCategories;
  uVar5 = 0;
  local_50 = pSVar2;
  if (pSVar2 != (System_String_array *)0x0) {
    do {
      uVar1 = (uint)pSVar2->max_length;
      if ((int)uVar1 <= (int)uVar5) {
        return;
      }
      if (uVar1 <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (__this->fields)._activeQuests;
      if (__this_00 == (System_Collections_Generic_Dictionary_string__List_QuestItem___o *)0x0) break;
      a = pSVar2->m_Items[(int)uVar5];
      bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)a,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ContainsKey);
      if (bVar4) {
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
        if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        __this_03 = (System_Collections_Generic_List_T__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (__this_01,(Il2CppObject *)a,
                               (MethodInfo_147A5B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_get_Item
                              );
        if (__this_03 == (System_Collections_Generic_List_T__o *)0x0) break;
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  (&local_40,__this_03,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
        local_70.fields._list = local_40.fields._list;
        local_70.fields._index = local_40.fields._index;
        local_70.fields._version = local_40.fields._version;
        local_70.fields._current = local_40.fields._current;
        while( true ) {
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_70,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
          __this_02 = local_70.fields._current;
          if (!bVar4) break;
          if ((GameProgress_QuestItem_o *)local_70.fields._current == (GameProgress_QuestItem_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar3 = ((GameProgress_QuestItem_Fields *)((longlong)local_70.fields._current + 0x10))->Conditions;
          if (pSVar3 == (Settings_ListSetting_StringSetting__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar4 = (*(local_58->klass->vtable)._9_CheckKillConditions.methodPtr)
                            (__this,(System_Collections_Generic_List_StringSetting__o *)
                                    (pSVar3->fields)._value,(method->fields).Weapon,
                             (local_58->klass->vtable)._9_CheckKillConditions.method);
          if (bVar4) {
            bVar4 = System_String__op_Equality(a,"KillHuman",(MethodInfo *)0x0);
            if (bVar4) {
              GameProgress_QuestItem__AddProgress((GameProgress_QuestItem_o *)__this_02,1,(MethodInfo *)0x0);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_70,
                   MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
      }
      uVar5 = uVar5 + 1;
    } while( true );
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestHandler$$RegisterDamage
// il2cpp: void GameProgress_QuestHandler__RegisterDamage (GameProgress_QuestHandler_o* __this, UnityEngine_GameObject_o* victim, GameProgress_KillMethod_o method, int32_t damage, const MethodInfo* method);
// 0x181e388f0
// eh: try 0x181e38a62..0x181e38b85 -> pad 0x183315f50 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e389bf: nop 
// asm:   0x181e38b21: mov rdx, qword ptr [rip + 0x2258fe8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x181e38b28: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e38b2d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e38b32: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x181e38b37: test rcx, rcx
// asm:   0x181e38b3a: jne 0x181e38b85
// asm:   0x181e38b3c: mov r15d, dword ptr [rsp + 0xe8]
// asm:   0x181e38b44: mov r13, qword ptr [rsp + 0xd0]
// asm:   0x181e38b4c: mov r12, qword ptr [rsp + 0x38]
// asm:   0x181e38b51: mov esi, dword ptr [rsp + 0x30]
// asm:   0x181e38b85: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315f50: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315f55: push rbp
// asm:   0x183315f56: sub rsp, 0x30
// asm:   0x183315f5a: mov rbp, rdx
// asm:   0x183315f5d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183315f61: mov rcx, qword ptr [rax]
// asm:   0x183315f64: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183315f68: movabs rax, 0
// asm:   0x183315f72: add rsp, 0x30
// asm:   0x183315f76: pop rbp
// asm:   0x183315f77: ret 

void GameProgress_QuestHandler__RegisterDamage
               (GameProgress_QuestHandler_o *__this,UnityEngine_GameObject_o *victim,
               GameProgress_KillMethod_o *method,int32_t damage,MethodInfo *methodInfo)

{
  uint uVar1;
  System_String_array *pSVar2;
  System_Collections_Generic_Dictionary_string__List_QuestItem___o *__this_00;
  System_String_o *a;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Settings_ListSetting_StringSetting__o *pSVar3;
  Il2CppObject *__this_02;
  bool bVar4;
  char cVar5;
  System_Collections_Generic_List_T__o *__this_03;
  uint uVar6;
  System_Collections_Generic_List_Enumerator_object__o local_70;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if (Il2CppMethodInitialized_184344ddd == '\0') {
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
    Il2CppMethodInitialized_184344ddd = '\x01';
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).DamageCategories;
  uVar6 = 0;
  if (pSVar2 != (System_String_array *)0x0) {
    do {
      uVar1 = (uint)pSVar2->max_length;
      if ((int)uVar1 <= (int)uVar6) {
        return;
      }
      if (uVar1 <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (__this->fields)._activeQuests;
      if (__this_00 == (System_Collections_Generic_Dictionary_string__List_QuestItem___o *)0x0) break;
      a = pSVar2->m_Items[(int)uVar6];
      bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)a,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ContainsKey);
      if (bVar4) {
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
        if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        __this_03 = (System_Collections_Generic_List_T__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (__this_01,(Il2CppObject *)a,
                               (MethodInfo_147A5B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_get_Item
                              );
        if (__this_03 == (System_Collections_Generic_List_T__o *)0x0) break;
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  (&local_58,__this_03,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
        local_70.fields._list = local_58.fields._list;
        local_70.fields._index = local_58.fields._index;
        local_70.fields._version = local_58.fields._version;
        local_70.fields._current = local_58.fields._current;
        while( true ) {
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_70,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
          __this_02 = local_70.fields._current;
          if (!bVar4) break;
          if ((GameProgress_QuestItem_o *)local_70.fields._current == (GameProgress_QuestItem_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar3 = ((GameProgress_QuestItem_Fields *)((longlong)local_70.fields._current + 0x10))->Conditions;
          if (pSVar3 == (Settings_ListSetting_StringSetting__o *)0x0) {
            ThrowNullReferenceException();
          }
          cVar5 = il2cpp_runtime_helper_180332290(10,__this,(pSVar3->fields)._value,(method->fields).Weapon,damage);
          if (cVar5 != '\0') {
            bVar4 = System_String__op_Equality(a,"HitDamage",(MethodInfo *)0x0);
            if (bVar4) {
              GameProgress_QuestItem__AddProgress((GameProgress_QuestItem_o *)__this_02,1,(MethodInfo *)0x0);
            }
            else {
              bVar4 = System_String__op_Equality(a,"DealDamage",(MethodInfo *)0x0);
              if (bVar4) {
                GameProgress_QuestItem__AddProgress
                          ((GameProgress_QuestItem_o *)__this_02,damage,(MethodInfo *)0x0);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_70,
                   MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
      }
      uVar6 = uVar6 + 1;
    } while( true );
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestHandler$$RegisterSpeed
// il2cpp: void GameProgress_QuestHandler__RegisterSpeed (GameProgress_QuestHandler_o* __this, float speed, const MethodInfo* method);
// 0x181e39050
// eh: try 0x181e391c1..0x181e392c1 -> pad 0x183318f20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e39249: mov rdx, qword ptr [rip + 0x22588c0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x181e39250: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181e39255: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e3925a: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e3925f: test rcx, rcx
// asm:   0x181e39262: jne 0x181e392c1
// asm:   0x181e39264: movss xmm6, dword ptr [rsp + 0xd8]
// asm:   0x181e3926d: mov r14, qword ptr [rsp + 0xd0]
// asm:   0x181e39275: mov r12, qword ptr [rsp + 0x20]
// asm:   0x181e3927a: mov esi, dword ptr [rsp + 0xe8]
// asm:   0x181e39281: mov r13, qword ptr [rsp + 0x28]
// asm:   0x181e392c1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318f20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318f25: push rbp
// asm:   0x183318f26: sub rsp, 0x20
// asm:   0x183318f2a: mov rbp, rdx
// asm:   0x183318f2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183318f31: mov rcx, qword ptr [rax]
// asm:   0x183318f34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183318f38: movabs rax, 0
// asm:   0x183318f42: add rsp, 0x20
// asm:   0x183318f46: pop rbp
// asm:   0x183318f47: ret 

void GameProgress_QuestHandler__RegisterSpeed
               (GameProgress_QuestHandler_o *__this,float speed,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  System_Collections_Generic_Dictionary_string__List_QuestItem___o *__this_00;
  System_String_o *a;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Settings_ListSetting_StringSetting__o *pSVar3;
  Il2CppObject *__this_02;
  bool bVar4;
  System_Collections_Generic_List_T__o *__this_03;
  uint uVar5;
  System_Collections_Generic_List_Enumerator_object__o local_80;
  System_Collections_Generic_List_Enumerator_T__o local_68 [2];
  
  if (Il2CppMethodInitialized_184344dde == '\0') {
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
    Il2CppMethodInitialized_184344dde = '\x01';
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).SpeedCategories;
  uVar5 = 0;
  if (pSVar2 != (System_String_array *)0x0) {
    do {
      uVar1 = (uint)pSVar2->max_length;
      if ((int)uVar1 <= (int)uVar5) {
        return;
      }
      if (uVar1 <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (__this->fields)._activeQuests;
      if (__this_00 == (System_Collections_Generic_Dictionary_string__List_QuestItem___o *)0x0) break;
      a = pSVar2->m_Items[(int)uVar5];
      bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)a,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ContainsKey);
      if (bVar4) {
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
        if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        __this_03 = (System_Collections_Generic_List_T__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (__this_01,(Il2CppObject *)a,
                               (MethodInfo_147A5B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_get_Item
                              );
        if (__this_03 == (System_Collections_Generic_List_T__o *)0x0) break;
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  (local_68,__this_03,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
        local_80.fields._list = local_68[0].fields._list;
        local_80.fields._index = local_68[0].fields._index;
        local_80.fields._version = local_68[0].fields._version;
        local_80.fields._current = local_68[0].fields._current;
        while( true ) {
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_80,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
          __this_02 = local_80.fields._current;
          if (!bVar4) break;
          if ((GameProgress_QuestItem_o *)local_80.fields._current == (GameProgress_QuestItem_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar3 = ((GameProgress_QuestItem_Fields *)((longlong)local_80.fields._current + 0x10))->Conditions;
          if (pSVar3 == (Settings_ListSetting_StringSetting__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar4 = (*(__this->klass->vtable)._11_CheckSpeedConditions.methodPtr)
                            (__this,(System_Collections_Generic_List_StringSetting__o *)
                                    (pSVar3->fields)._value,speed,
                             (__this->klass->vtable)._11_CheckSpeedConditions.method);
          if (bVar4) {
            bVar4 = System_String__op_Equality(a,"ReachSpeed",(MethodInfo *)0x0);
            if (bVar4) {
              GameProgress_QuestItem__AddProgress((GameProgress_QuestItem_o *)__this_02,1,(MethodInfo *)0x0);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_80,
                   MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
      }
      uVar5 = uVar5 + 1;
    } while( true );
  }
  ThrowNullReferenceException();
}


// GameProgress.QuestHandler$$RegisterInteraction
// il2cpp: void GameProgress_QuestHandler__RegisterInteraction (GameProgress_QuestHandler_o* __this, UnityEngine_GameObject_o* interact, int32_t interactionType, const MethodInfo* method);
// 0x181e38e20
// eh: try 0x181e38f70..0x181e38fbb -> pad 0x183318f20 catch Il2CppExceptionWrapper
// eh: try 0x181e38fbb..0x181e38fcd -> pad 0x180354850 cleanup
// eh: try 0x181e38fcd..0x181e3903f -> pad 0x183318f20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e38ecf: nop 
// asm:   0x181e38f6e: nop 
// asm:   0x181e38fbb: jmp 0x181e38fc2
// asm:   0x181e38fe5: mov rdx, qword ptr [rip + 0x2258b24]  ; MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose
// asm:   0x181e38fec: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181e38ff1: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e38ff6: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e38ffb: test rcx, rcx
// asm:   0x181e38ffe: jne 0x181e3903f
// asm:   0x181e39000: mov r13, qword ptr [rsp + 0xc0]
// asm:   0x181e39008: mov r15, qword ptr [rsp + 0x28]
// asm:   0x181e3900d: mov esi, dword ptr [rsp + 0x20]
// asm:   0x181e3903f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318f20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318f25: push rbp
// asm:   0x183318f26: sub rsp, 0x20
// asm:   0x183318f2a: mov rbp, rdx
// asm:   0x183318f2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183318f31: mov rcx, qword ptr [rax]
// asm:   0x183318f34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183318f38: movabs rax, 0
// asm:   0x183318f42: add rsp, 0x20
// asm:   0x183318f46: pop rbp
// asm:   0x183318f47: ret 

void GameProgress_QuestHandler__RegisterInteraction
               (GameProgress_QuestHandler_o *__this,UnityEngine_GameObject_o *interact,int32_t interactionType
               ,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  System_Collections_Generic_Dictionary_string__List_QuestItem___o *__this_00;
  System_String_o *a;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Il2CppObject *__this_02;
  bool bVar3;
  System_Collections_Generic_List_T__o *__this_03;
  uint uVar4;
  System_Collections_Generic_List_Enumerator_object__o local_70;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if (Il2CppMethodInitialized_184344ddf == '\0') {
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
    Il2CppMethodInitialized_184344ddf = '\x01';
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).InteractionCategories;
  uVar4 = 0;
  if (pSVar2 == (System_String_array *)0x0) {
label_181e39045:
    ThrowNullReferenceException();
  }
  do {
    uVar1 = (uint)pSVar2->max_length;
    if ((int)uVar1 <= (int)uVar4) {
      return;
    }
    if (uVar1 <= uVar4) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = (__this->fields)._activeQuests;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__List_QuestItem___o *)0x0)
    goto label_181e39045;
    a = pSVar2->m_Items[(int)uVar4];
    bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)a,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_ContainsKey);
    if (bVar3) {
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
      if ((__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (__this_03 = (System_Collections_Generic_List_T__o *)
                      System_Collections_Generic_Dictionary_object__object___get_Item
                                (__this_01,(Il2CppObject *)a,
                                 (MethodInfo_147A5B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_get_Item
                                ), __this_03 == (System_Collections_Generic_List_T__o *)0x0))
      goto label_181e39045;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                (&local_58,__this_03,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_QuestItem_GetEnumerator);
      local_70.fields._list = local_58.fields._list;
      local_70.fields._index = local_58.fields._index;
      local_70.fields._version = local_58.fields._version;
      local_70.fields._current = local_58.fields._current;
label_181e38f70:
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_70,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_MoveNext);
      __this_02 = local_70.fields._current;
      if (bVar3) {
        bVar3 = System_String__op_Equality(a,"ShareGas",(MethodInfo *)0x0);
        if (!bVar3) break;
        if ((GameProgress_QuestItem_o *)__this_02 == (GameProgress_QuestItem_o *)0x0) {
          ThrowNullReferenceException();
        }
        goto label_181e38fc2;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_70,
                 MethodInfo_System_Collections_Generic_List_Enumerator_QuestItem_Dispose);
    }
    uVar4 = uVar4 + 1;
  } while( true );
  bVar3 = System_String__op_Equality(a,"CarryHuman",(MethodInfo *)0x0);
  if (bVar3) {
    if ((GameProgress_QuestItem_o *)__this_02 == (GameProgress_QuestItem_o *)0x0) {
      ThrowNullReferenceException();
    }
label_181e38fc2:
    GameProgress_QuestItem__AddProgress((GameProgress_QuestItem_o *)__this_02,1,(MethodInfo *)0x0);
  }
  goto label_181e38f70;
}


// GameProgress.QuestHandler$$.cctor
// il2cpp: void GameProgress_QuestHandler___cctor (const MethodInfo* method);
// 0x181e39570

void GameProgress_QuestHandler___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__T__o *value;
  
  if (Il2CppMethodInitialized_184344de0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_QuestHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumToDict_KillWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184344de0 = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  value = Utility_Util__EnumToDict_Int32Enum_
                    ((MethodInfo_869960 *)MethodInfo_Utility_Util_EnumToDict_KillWeapon);
  TypeInfo_GameProgress_QuestHandler->static_fields->NameToKillWeapon =
       (System_Collections_Generic_Dictionary_string__KillWeapon__o *)value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameProgress_QuestHandler->static_fields->NameToKillWeapon,value);
  return;
}


