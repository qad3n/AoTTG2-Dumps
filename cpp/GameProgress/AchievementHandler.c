// Type: GameProgress.AchievementHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/GameProgress/AchievementHandler.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/AchievementHandler.cs
// --------------------------------

// GameProgress.AchievementHandler.<>c$$.cctor
// il2cpp: void GameProgress_AchievementHandler___c___cctor (const MethodInfo* method);
// 0x591c0f0

void GameProgress_AchievementHandler___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754572a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_AchievementHandler_c);
    Il2CppMethodInitialized_0754572a = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_AchievementHandler_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_GameProgress_AchievementHandler_c->static_fields->__9 =
       (GameProgress_AchievementHandler___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameProgress_AchievementHandler_c->static_fields->__9);
  return;
}


// GameProgress.AchievementHandler.<>c$$.ctor
// il2cpp: void GameProgress_AchievementHandler___c___ctor (GameProgress_AchievementHandler___c_o* __this, const MethodInfo* method);
// 0x591c160

void GameProgress_AchievementHandler___c___ctor
               (GameProgress_AchievementHandler___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameProgress.AchievementHandler.<>c$$<CacheActiveAchievements>b__4_0
// il2cpp: System_String_o* GameProgress_AchievementHandler___c___CacheActiveAchievements_b__4_0 (GameProgress_AchievementHandler___c_o* __this, GameProgress_AchievementItem_o* x, const MethodInfo* method);
// 0x591c170

System_String_o *
GameProgress_AchievementHandler___c___CacheActiveAchievements_b__4_0
          (GameProgress_AchievementHandler___c_o *__this,GameProgress_AchievementItem_o *x,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (x == (GameProgress_AchievementItem_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = (*(x->klass->vtable)._14_GetQuestName.methodPtr)(x,(x->klass->vtable)._14_GetQuestName.method);
  return pSVar1;
}


// GameProgress.AchievementHandler$$.ctor
// il2cpp: void GameProgress_AchievementHandler___ctor (GameProgress_AchievementHandler_o* __this, GameProgress_AchievementContainer_o* achievement, const MethodInfo* method);
// 0x591ab50

void GameProgress_AchievementHandler___ctor
               (GameProgress_AchievementHandler_o *__this,GameProgress_AchievementContainer_o *achievement,
               MethodInfo *method)

{
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_07545727 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_QuestHandler);
    Il2CppMethodInitialized_07545727 = '\x01';
    method = extraout_RDX;
  }
  if ((TypeInfo_GameProgress_QuestHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_QuestHandler);
    method = extraout_RDX_00;
  }
  GameProgress_QuestHandler___ctor
            ((GameProgress_QuestHandler_o *)__this,(GameProgress_QuestContainer_o *)0x0,method);
  (__this->fields)._achievement = achievement;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._achievement);
  GameProgress_AchievementHandler__LoadAchievements(__this,(MethodInfo *)achievement);
  GameProgress_AchievementHandler__CacheActiveAchievements(__this,(MethodInfo *)achievement);
  return;
}


// GameProgress.AchievementHandler$$ReloadAchievements
// il2cpp: void GameProgress_AchievementHandler__ReloadAchievements (GameProgress_AchievementHandler_o* __this, const MethodInfo* method);
// 0x591aeb0

void GameProgress_AchievementHandler__ReloadAchievements
               (GameProgress_AchievementHandler_o *__this,MethodInfo *method)

{
  GameProgress_AchievementHandler__LoadAchievements(__this,method);
  GameProgress_AchievementHandler__CacheActiveAchievements(__this,method);
  return;
}


// GameProgress.AchievementHandler$$LoadAchievements
// il2cpp: void GameProgress_AchievementHandler__LoadAchievements (GameProgress_AchievementHandler_o* __this, const MethodInfo* method);
// 0x591aed0
// eh: try 0x591b0d4..0x591b505 -> pad 0x591b533 (+25 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x591b54b..0x591b550 -> pad 0x591b56f cleanup
// eh: try 0x591b572..0x591b57c -> pad 0x591b5da catch (...) [compiler noexcept guard]
// eh: try 0x591b59b..0x591b5a0 -> pad 0x591b5c5 cleanup
// eh: try 0x591b5c8..0x591b5d2 -> pad 0x591b5da catch (...) [compiler noexcept guard]
// asm: 67 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x591b0ce: nop 
// asm:   0x591b505: jmp 0x591b57e
// asm:   0x591b507: jmp 0x591b57e
// asm:   0x591b509: jmp 0x591b533
// asm:   0x591b50b: jmp 0x591b533
// asm:   0x591b50d: jmp 0x591b57e
// asm:   0x591b50f: jmp 0x591b533
// asm:   0x591b511: jmp 0x591b57e
// asm:   0x591b513: jmp 0x591b57e
// asm:   0x591b515: jmp 0x591b57e
// asm:   0x591b517: jmp 0x591b57e
// asm:   0x591b519: jmp 0x591b57e
// asm:   0x591b51b: jmp 0x591b57e
// asm:   0x591b51d: jmp 0x591b57e
// asm:   0x591b51f: jmp 0x591b57e
// asm:   0x591b521: jmp 0x591b57e
// asm:   0x591b523: jmp 0x591b57e
// asm:   0x591b525: jmp 0x591b57e
// asm:   0x591b527: jmp 0x591b57e
// asm:   0x591b529: jmp 0x591b533
// asm:   0x591b52b: jmp 0x591b533
// asm:   0x591b52d: jmp 0x591b57e
// asm:   0x591b52f: jmp 0x591b533
// asm:   0x591b531: jmp 0x591b57e
// asm:   0x591b533: mov r12, rax
// asm:   0x591b536: cmp edx, 1
// asm:   0x591b539: jne 0x591b572
// asm:   0x591b53b: mov rdi, r12
// asm:   0x591b53e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x591b543: mov rbx, qword ptr [rax]
// asm:   0x591b546: mov qword ptr [rsp + 0x28], rbx
// asm:   0x591b54b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x591b550: lea rax, [rip + 0x1972089]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose
// asm:   0x591b557: mov rsi, qword ptr [rax]
// asm:   0x591b55a: lea rdi, [rsp + 0x10]
// asm:   0x591b55f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x591b564: test rbx, rbx
// asm:   0x591b567: je 0x591b144
// asm:   0x591b56d: jmp 0x591b5bd
// asm:   0x591b56f: mov r12, rax
// asm:   0x591b572: lea rdi, [rsp + 0x28]
// asm:   0x591b577: call 0x2fd23d0  ; il2cpp_runtime_helper_02fd23d0()
// asm:   0x591b57c: jmp 0x591b5d2
// asm:   0x591b57e: mov r12, rax
// asm:   0x591b581: mov rbp, qword ptr [rsp + 8]
// asm:   0x591b586: cmp edx, 1
// asm:   0x591b589: jne 0x591b5c8
// asm:   0x591b58b: mov rdi, r12
// asm:   0x591b58e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x591b593: mov rbx, qword ptr [rax]
// asm:   0x591b596: mov qword ptr [rsp + 0x28], rbx
// asm:   0x591b59b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x591b5a0: lea rax, [rip + 0x1972039]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose
// asm:   0x591b5a7: mov rsi, qword ptr [rax]
// asm:   0x591b5aa: lea rdi, [rsp + 0x10]
// asm:   0x591b5af: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x591b5b4: test rbx, rbx
// asm:   0x591b5b7: je 0x591b45c
// asm:   0x591b5bd: mov rdi, rbx
// asm:   0x591b5c0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x591b5c5: mov r12, rax
// asm:   0x591b5c8: lea rdi, [rsp + 0x28]
// asm:   0x591b5cd: call 0x2fd2400  ; il2cpp_runtime_helper_02fd2400()
// asm:   0x591b5d2: mov rdi, r12
// asm:   0x591b5d5: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x591b5da: mov rdi, rax
// asm:   0x591b5dd: call 0x2ab61e0  ; __clang_call_terminate()

void GameProgress_AchievementHandler__LoadAchievements
               (GameProgress_AchievementHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Settings_ListSetting_AchievementItem__o *pSVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  System_Object_array *pSVar7;
  MethodInfo *pMVar8;
  Il2CppObject *pIVar9;
  bool bVar10;
  Settings_ListSetting_AchievementItem__o *pSVar11;
  System_Collections_Generic_Dictionary_string__AchievementItem__o *__this_00;
  Il2CppObject *pIVar12;
  GameProgress_AchievementContainer_o *pGVar13;
  UnityEngine_Object_o *__this_01;
  System_String_o *pSVar14;
  GameProgress_AchievementItem_o *pGVar15;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  Il2CppObject *local_58;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  Settings_ListSetting_AchievementItem__o *local_38;
  
  if (Il2CppMethodInitialized_07545728 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_AchievementContainer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AchievementItem_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AchievementItem_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AchievementItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AchievementItem_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_AchievementItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_AchievementItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_AchievementItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AchievementItem_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AchievementItem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_TextAsset);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_TypedSetting_List_AchievementItem_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"AchievementList");
    Il2CppMethodInitialized_07545728 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (Il2CppObject *)0x0;
  pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_AchievementItem);
  Settings_ListSetting_object____ctor_515d6d0
            ((Settings_ListSetting_T__o *)pSVar11,
             (MethodInfo_515D6D0 *)MethodInfo_Settings_ListSetting_AchievementItem_ctor);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_AchievementItem)
  ;
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_AchievementItem_ctor);
  pGVar13 = (__this->fields)._achievement;
  if (((pGVar13 != (GameProgress_AchievementContainer_o *)0x0) &&
      (pSVar4 = (pGVar13->fields).AchievementItems, pSVar4 != (Settings_ListSetting_AchievementItem__o *)0x0))
     && (pSVar5 = (System_Collections_Generic_List_object__o *)(pSVar4->fields)._value,
        pSVar5 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_50,pSVar5,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_AchievementItem_GetEnumerator)
    ;
    local_58 = local_40;
    local_68 = (undefined1  [8])local_50._0_8_;
    puStack_60 = (undefined1 *)local_50._8_8_;
    local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_50._8_8_ = local_68;
    local_38 = pSVar11;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__AchievementItem__o *)0x0) {
      bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                         ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                          (MethodInfo_4C45C50 *)
                          MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext);
      if (bVar10) {
        if (local_58 != (Il2CppObject *)0x0) {
          (*local_58->klass->vtable[0xe].methodPtr)(local_58,local_58->klass->vtable[0xe].method);
          ThrowNullReferenceException();
        }
label_0591b4c7:
        ThrowNullReferenceException();
      }
    }
    else {
      while( true ) {
        bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                            (MethodInfo_4C45C50 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext);
        pIVar9 = local_58;
        if (!bVar10) break;
        if (local_58 == (Il2CppObject *)0x0) goto label_0591b4c7;
        pIVar12 = (Il2CppObject *)
                  (*local_58->klass->vtable[0xe].methodPtr)(local_58,local_58->klass->vtable[0xe].method);
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,pIVar12,pIVar9,
                   (MethodInfo_4AAD4E0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_AchievementItem_Add);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose);
    pGVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_GameProgress_AchievementContainer);
    if (Il2CppMethodInitialized_07545726 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_AchievementItem_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_AchievementItem);
      Il2CppMethodInitialized_07545726 = '\x01';
    }
    pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_AchievementItem);
    Settings_ListSetting_object____ctor_515d6d0
              ((Settings_ListSetting_T__o *)pSVar11,
               (MethodInfo_515D6D0 *)MethodInfo_Settings_ListSetting_AchievementItem_ctor);
    (pGVar13->fields).AchievementItems = pSVar11;
    Il2CppCodeGenWriteBarrier(&(pGVar13->fields).AchievementItems);
    Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)pGVar13,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar14 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    __this_01 = ApplicationManagers_ResourceManager__LoadAsset
                          (pSVar14,"AchievementList",false,false,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Object_o *)0x0) {
      bVar2 = (TypeInfo_UnityEngine_TextAsset->_2).typeHierarchyDepth;
      if (((__this_01->klass->_2).typeHierarchyDepth < bVar2) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_UnityEngine_TextAsset)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_01);
      }
      pSVar14 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)__this_01,(MethodInfo *)0x0);
      (*(pGVar13->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                (pGVar13,pSVar14,(pGVar13->klass->vtable)._9_DeserializeFromJsonString.method);
      pSVar11 = (pGVar13->fields).AchievementItems;
      if ((pSVar11 != (Settings_ListSetting_AchievementItem__o *)0x0) &&
         (pSVar5 = (System_Collections_Generic_List_object__o *)(pSVar11->fields)._value,
         pSVar5 != (System_Collections_Generic_List_object__o *)0x0)) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_50,pSVar5,
                   (MethodInfo_395E050 *)
                   MethodInfo_System_Collections_Generic_List_AchievementItem_GetEnumerator);
        local_58 = local_40;
        local_68 = (undefined1  [8])local_50._0_8_;
        puStack_60 = (undefined1 *)local_50._8_8_;
        local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_50._8_8_ = local_68;
        if (__this_00 == (System_Collections_Generic_Dictionary_string__AchievementItem__o *)0x0) {
          bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext);
          if (bVar10) {
            if (local_58 != (Il2CppObject *)0x0) {
              (*local_58->klass->vtable[0xe].methodPtr)(local_58,local_58->klass->vtable[0xe].method);
              ThrowNullReferenceException();
            }
label_0591b4d6:
            ThrowNullReferenceException();
          }
        }
        else {
          while( true ) {
            bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext
                               );
            pIVar9 = local_58;
            if (!bVar10) break;
            if (local_58 == (Il2CppObject *)0x0) goto label_0591b4d6;
            pIVar12 = (Il2CppObject *)
                      (*local_58->klass->vtable[0xe].methodPtr)(local_58,local_58->klass->vtable[0xe].method);
            bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                               ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,pIVar12,
                                (MethodInfo_4AAD6F0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_AchievementItem_ContainsKey
                               );
            if (bVar10) {
              pIVar12 = (Il2CppObject *)
                        (*pIVar9->klass->vtable[0xe].methodPtr)(pIVar9,pIVar9->klass->vtable[0xe].method);
              pGVar15 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                                   pIVar12,(MethodInfo_4AAD450 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_string_AchievementItem_get_Item
                                  );
              if (pGVar15 == (GameProgress_AchievementItem_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar6 = (pGVar15->fields).Progress;
              if (pSVar6 == (Settings_IntSetting_o *)0x0) {
                ThrowNullReferenceException();
              }
              if (pIVar9[6].klass == (Il2CppClass *)0x0) {
                ThrowNullReferenceException();
              }
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)pIVar9[6].klass,(pSVar6->fields)._value,
                         (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            }
            if (pIVar9[8].monitor == (Settings_TypedSetting_bool__o *)0x0) {
              ThrowNullReferenceException();
            }
            Settings_TypedSetting_bool___set_Value
                      (pIVar9[8].monitor,false,
                       (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
            pMVar8 = MethodInfo_System_Collections_Generic_List_AchievementItem_Add;
            if (local_38 == (Settings_ListSetting_AchievementItem__o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar5 = (System_Collections_Generic_List_object__o *)(local_38->fields)._value;
            if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
label_0591b492:
              ThrowNullReferenceException();
            }
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar7 = (pSVar5->fields)._items;
            if (pSVar7 == (System_Object_array *)0x0) goto label_0591b492;
            uVar3 = (pSVar5->fields)._size;
            if (uVar3 < (uint)pSVar7->max_length) {
              (pSVar5->fields)._size = uVar3 + 1;
              pSVar7->m_Items[(int)uVar3] = pIVar9;
              Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar3);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar5,pIVar9,(MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose);
        pGVar13 = (__this->fields)._achievement;
        if (pGVar13 != (GameProgress_AchievementContainer_o *)0x0) {
          pSVar11 = (pGVar13->fields).AchievementItems;
          if (pSVar11 != (Settings_ListSetting_AchievementItem__o *)0x0) {
            (*(pSVar11->klass->vtable)._10_Copy.methodPtr)
                      (pSVar11,local_38,(pSVar11->klass->vtable)._10_Copy.method);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.AchievementHandler$$CacheActiveAchievements
// il2cpp: void GameProgress_AchievementHandler__CacheActiveAchievements (GameProgress_AchievementHandler_o* __this, const MethodInfo* method);
// 0x591b5f0
// eh: try 0x591b83f..0x591bcd2 -> pad 0x591bd03 (+33 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x591bcd8..0x591bce2 -> pad 0x591bdc0 catch (...) [compiler noexcept guard]
// eh: try 0x591bd34..0x591bd39 -> pad 0x591bd58 cleanup
// eh: try 0x591bd5b..0x591bd65 -> pad 0x591bdc0 catch (...) [compiler noexcept guard]
// eh: try 0x591bd81..0x591bd86 -> pad 0x591bdab cleanup
// eh: try 0x591bdae..0x591bdb8 -> pad 0x591bdc0 catch (...) [compiler noexcept guard]
// asm: 92 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x591b9ee: nop 
// asm:   0x591ba4d: jmp 0x591ba6f
// asm:   0x591bc2a: jmp 0x591bc30
// asm:   0x591bc2c: jmp 0x591bc30
// asm:   0x591bc2e: jmp 0x591bc30
// asm:   0x591bc30: mov rbp, rdx
// asm:   0x591bc33: mov rbx, rax
// asm:   0x591bc36: cmp ebp, 1
// asm:   0x591bc39: jne 0x591bcd8
// asm:   0x591bc3f: mov rdi, rbx
// asm:   0x591bc42: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x591bc47: mov r12, qword ptr [rax]
// asm:   0x591bc4a: mov qword ptr [rsp + 8], r12
// asm:   0x591bc4f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x591bc54: xor ebx, ebx
// asm:   0x591bc56: jmp 0x591bba3
// asm:   0x591bc88: mov rdi, r12
// asm:   0x591bc8b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x591bcd2: mov rbp, rdx
// asm:   0x591bcd5: mov rbx, rax
// asm:   0x591bcd8: lea rdi, [rsp + 8]
// asm:   0x591bcdd: call 0x2fd2460  ; il2cpp_runtime_helper_02fd2460()
// asm:   0x591bce2: jmp 0x591bd1f
// asm:   0x591bce4: jmp 0x591bd69
// asm:   0x591bce9: jmp 0x591bd69
// asm:   0x591bceb: jmp 0x591bd69
// asm:   0x591bced: jmp 0x591bd69
// asm:   0x591bcef: jmp 0x591bd19
// asm:   0x591bcf1: jmp 0x591bd19
// asm:   0x591bcf3: jmp 0x591bd19
// asm:   0x591bcf5: jmp 0x591bd19
// asm:   0x591bcf7: jmp 0x591bd19
// asm:   0x591bcf9: jmp 0x591bd19
// asm:   0x591bcfb: jmp 0x591bd69
// asm:   0x591bcfd: jmp 0x591bd69
// asm:   0x591bcff: jmp 0x591bd69
// asm:   0x591bd01: jmp 0x591bd69
// asm:   0x591bd03: jmp 0x591bd69
// asm:   0x591bd05: jmp 0x591bd69
// asm:   0x591bd07: jmp 0x591bd69
// asm:   0x591bd09: jmp 0x591bd69
// asm:   0x591bd0b: jmp 0x591bd19
// asm:   0x591bd0d: jmp 0x591bd19
// asm:   0x591bd0f: jmp 0x591bd19
// asm:   0x591bd11: jmp 0x591bd19
// asm:   0x591bd13: jmp 0x591bd19
// asm:   0x591bd15: jmp 0x591bd19
// asm:   0x591bd17: jmp 0x591bd19
// asm:   0x591bd19: mov rbp, rdx
// asm:   0x591bd1c: mov rbx, rax
// asm:   0x591bd1f: cmp ebp, 1
// asm:   0x591bd22: jne 0x591bd5b
// asm:   0x591bd24: mov rdi, rbx
// asm:   0x591bd27: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x591bd2c: mov rbx, qword ptr [rax]
// asm:   0x591bd2f: mov qword ptr [rsp + 0x68], rbx
// asm:   0x591bd34: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x591bd39: lea rax, [rip + 0x1973fe8]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_AchievementItem_Dispo
// asm:   0x591bd40: mov rsi, qword ptr [rax]
// asm:   0x591bd43: lea rdi, [rsp + 0x40]
// asm:   0x591bd48: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x591bd4d: test rbx, rbx
// asm:   0x591bd50: je 0x591bc6f
// asm:   0x591bd56: jmp 0x591bda3
// asm:   0x591bd58: mov rbx, rax
// asm:   0x591bd5b: lea rdi, [rsp + 0x68]
// asm:   0x591bd60: call 0x2fd2490  ; il2cpp_runtime_helper_02fd2490()
// asm:   0x591bd65: jmp 0x591bdb8
// asm:   0x591bd67: jmp 0x591bd69
// asm:   0x591bd69: mov rbx, rax
// asm:   0x591bd6c: cmp edx, 1
// asm:   0x591bd6f: jne 0x591bdae
// asm:   0x591bd71: mov rdi, rbx
// asm:   0x591bd74: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x591bd79: mov rbx, qword ptr [rax]
// asm:   0x591bd7c: mov qword ptr [rsp + 8], rbx
// asm:   0x591bd81: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x591bd86: lea rax, [rip + 0x1971853]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose
// asm:   0x591bd8d: mov rsi, qword ptr [rax]
// asm:   0x591bd90: lea rdi, [rsp + 0x20]
// asm:   0x591bd95: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x591bd9a: test rbx, rbx
// asm:   0x591bd9d: je 0x591b985
// asm:   0x591bda3: mov rdi, rbx
// asm:   0x591bda6: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x591bdab: mov rbx, rax
// asm:   0x591bdae: lea rdi, [rsp + 8]
// asm:   0x591bdb3: call 0x2fd2430  ; il2cpp_runtime_helper_02fd2430()
// asm:   0x591bdb8: mov rdi, rbx
// asm:   0x591bdbb: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x591bdc0: mov rdi, rax
// asm:   0x591bdc3: call 0x2ab61e0  ; __clang_call_terminate()

void GameProgress_AchievementHandler__CacheActiveAchievements
               (GameProgress_AchievementHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  GameProgress_AchievementContainer_o *pGVar3;
  Settings_ListSetting_AchievementItem__o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  System_Object_array *pSVar6;
  Il2CppObject *object;
  Settings_IntSetting_o *pSVar7;
  Settings_IntSetting_o *pSVar8;
  bool bVar9;
  System_Collections_Generic_Dictionary_string__List_AchievementItem___o *__this_01;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  System_Collections_Generic_List_AchievementItem__o *__this_02;
  System_Collections_Generic_List_object__o *pSVar12;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_03;
  Il2CppObject *source;
  GameProgress_AchievementHandler___c_StaticFields *pGVar13;
  System_Func_AchievementItem__string__o *__this_04;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_05;
  MethodInfo *method_00;
  GameProgress_QuestItem_o *pGVar14;
  MethodInfo *pMVar15;
  undefined1 local_a0 [16];
  GameProgress_QuestItem_o *local_90;
  undefined1 local_88 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_80;
  GameProgress_QuestItem_o *local_78;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  GameProgress_QuestItem_o *local_58;
  GameProgress_AchievementHandler_o *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07545729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_AchievementItem_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_AchievementItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_AchievementItem_Dispo
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_AchievementItem_MoveN
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_AchievementItem_get_C
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_AchievementItem_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_List_AchievementItem_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AchievementItem_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AchievementItem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AchievementItem_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AchievementItem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_TypedSetting_List_AchievementItem_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_GameProgress_AchievementHandler_c_CacheActiveAchievements_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_AchievementHandler_c);
    Il2CppMethodInitialized_07545729 = '\x01';
  }
  local_88 = (undefined1  [8])0x0;
  pSStack_80 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_78 = (GameProgress_QuestItem_o *)0x0;
  local_68 = (undefined1  [8])0x0;
  uStack_60._0_4_ = 0;
  uStack_60._4_4_ = 0;
  local_58 = (GameProgress_QuestItem_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._activeQuests;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear
              (__this_00,
               (MethodInfo_4AAD690 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_List_QuestItem_Clear);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
               (MethodInfo_4AAC8D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_ctor);
    pGVar3 = (__this->fields)._achievement;
    if (((pGVar3 != (GameProgress_AchievementContainer_o *)0x0) &&
        (pSVar4 = (pGVar3->fields).AchievementItems, pSVar4 != (Settings_ListSetting_AchievementItem__o *)0x0)
        ) && (pSVar12 = (System_Collections_Generic_List_object__o *)(pSVar4->fields)._value,
             local_48 = __this, pSVar12 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_a0,pSVar12,
                 (MethodInfo_395E050 *)
                 MethodInfo_System_Collections_Generic_List_AchievementItem_GetEnumerator);
      local_78 = local_90;
      local_88 = (undefined1  [8])local_a0._0_8_;
      pSStack_80 = (System_Collections_Generic_List_Enumerator_object__o *)local_a0._8_8_;
      local_a0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_a0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_88;
      if (__this_01 == (System_Collections_Generic_Dictionary_string__List_AchievementItem___o *)0x0) {
        pMVar15 = MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext;
        bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext);
        if (bVar9) {
          if (local_78 != (GameProgress_QuestItem_o *)0x0) {
            pSVar5 = (local_78->fields).Category;
            if (pSVar5 != (Settings_StringSetting_o *)0x0) {
              pSVar11 = (pSVar5->fields)._value;
              pSVar10 = GameProgress_QuestItem__GetConditionsHash(local_78,pMVar15);
              System_String__Concat_52f0320(pSVar11,pSVar10,(MethodInfo *)0x0);
              ThrowNullReferenceException();
            }
label_0591bcb2:
            ThrowNullReferenceException();
          }
label_0591bca4:
          ThrowNullReferenceException();
        }
      }
      else {
        while (pMVar15 = MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext,
              bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext
                                ), pGVar14 = local_78, bVar9) {
          if (local_78 == (GameProgress_QuestItem_o *)0x0) goto label_0591bca4;
          pSVar5 = (local_78->fields).Category;
          if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_0591bcb2;
          pSVar11 = (pSVar5->fields)._value;
          pSVar10 = GameProgress_QuestItem__GetConditionsHash(local_78,pMVar15);
          pSVar11 = System_String__Concat_52f0320(pSVar11,pSVar10,(MethodInfo *)0x0);
          bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                             (Il2CppObject *)pSVar11,
                             (MethodInfo_4AAD6F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_ContainsKey
                            );
          if (!bVar9) {
            __this_02 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AchievementItem);
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_List_object__o *)__this_02,
                       (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_AchievementItem_ctor);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                       (Il2CppObject *)pSVar11,(Il2CppObject *)__this_02,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_Add);
          }
          pSVar12 = (System_Collections_Generic_List_object__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                               (Il2CppObject *)pSVar11,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_get_Item
                              );
          pMVar15 = MethodInfo_System_Collections_Generic_List_AchievementItem_Add;
          if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) {
label_0591bc7e:
            ThrowNullReferenceException();
          }
          piVar1 = &(pSVar12->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (pSVar12->fields)._items;
          if (pSVar6 == (System_Object_array *)0x0) goto label_0591bc7e;
          uVar2 = (pSVar12->fields)._size;
          if (uVar2 < (uint)pSVar6->max_length) {
            (pSVar12->fields)._size = uVar2 + 1;
            pSVar6->m_Items[(int)uVar2] = (Il2CppObject *)pGVar14;
            Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar12,(Il2CppObject *)pGVar14,
                       (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose);
      if ((__this_01 != (System_Collections_Generic_Dictionary_string__List_AchievementItem___o *)0x0) &&
         (__this_03 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                                 (MethodInfo_4AAD0F0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_get_Keys
                                ),
         __this_03 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
        System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_a0,
                   __this_03,
                   (MethodInfo_511A520 *)
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_List_AchievementItem_GetEnumerator
                  );
        local_58 = local_90;
        local_68 = (undefined1  [8])local_a0._0_8_;
        uStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)local_a0._8_8_;
        local_40 = 0;
        local_38 = local_68;
        do {
          bVar9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *
                             )local_68,
                             (MethodInfo_4CE7080 *)
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_AchievementItem_MoveN
                            );
          if (!bVar9) {
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       local_68,(MethodInfo_4CE7070 *)
                                MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_AchievementItem_Dispo
                      );
            return;
          }
          source = System_Collections_Generic_Dictionary_object__object___get_Item
                             ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                              (Il2CppObject *)local_58,
                              (MethodInfo_4AAD450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_List_AchievementItem_get_Item
                             );
          if ((TypeInfo_GameProgress_AchievementHandler_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_AchievementHandler_c);
            pGVar13 = TypeInfo_GameProgress_AchievementHandler_c->static_fields;
            __this_04 = pGVar13->__9__4_0;
          }
          else {
            pGVar13 = TypeInfo_GameProgress_AchievementHandler_c->static_fields;
            __this_04 = pGVar13->__9__4_0;
          }
          if (__this_04 == (System_Func_AchievementItem__string__o *)0x0) {
            if ((((Il2CppClass *)TypeInfo_GameProgress_AchievementHandler_c)->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_AchievementHandler_c);
              pGVar13 = TypeInfo_GameProgress_AchievementHandler_c->static_fields;
            }
            object = (Il2CppObject *)pGVar13->__9;
            __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_AchievementItem_string);
            System_Func_object__object____ctor
                      ((System_Func_object__object__o *)__this_04,object,
                       (intptr_t)MethodInfo_GameProgress_AchievementHandler_c_CacheActiveAchievements_b__4_0,
                       (MethodInfo_4F19B50 *)0x0);
            pGVar13 = TypeInfo_GameProgress_AchievementHandler_c->static_fields;
            pGVar13->__9__4_0 = __this_04;
            Il2CppCodeGenWriteBarrier(&pGVar13->__9__4_0);
          }
          source_00 = System_Linq_Enumerable__OrderBy_object__object_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                 (System_Func_TSource__TKey__o *)__this_04,
                                 (MethodInfo_34F1E50 *)
                                 MethodInfo_System_Linq_Enumerable_OrderBy_AchievementItem_string);
          __this_05 = System_Linq_Enumerable__ToList_object_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                                 (MethodInfo_35011B0 *)
                                 MethodInfo_System_Linq_Enumerable_ToList_AchievementItem);
          if (__this_05 == (System_Collections_Generic_List_TSource__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_a0,
                     (System_Collections_Generic_List_object__o *)__this_05,
                     (MethodInfo_395E050 *)
                     MethodInfo_System_Collections_Generic_List_AchievementItem_GetEnumerator);
          local_78 = local_90;
          local_88 = (undefined1  [8])local_a0._0_8_;
          pSStack_80 = (System_Collections_Generic_List_Enumerator_object__o *)local_a0._8_8_;
          local_a0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_a0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_88;
          do {
            bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext)
            ;
            if (!bVar9) {
              pGVar14 = (GameProgress_QuestItem_o *)0x0;
              goto label_0591bba5;
            }
            if (local_78 == (GameProgress_QuestItem_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar7 = (local_78->fields).Progress;
            if (pSVar7 == (Settings_IntSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar8 = (local_78->fields).Amount;
            if (pSVar8 == (Settings_IntSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
          } while ((pSVar8->fields)._value <= (pSVar7->fields)._value);
          pGVar14 = local_78;
label_0591bba5:
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_Dispose);
          if (pGVar14 != (GameProgress_QuestItem_o *)0x0) {
            if ((*(uint64_t *)((char *)pGVar14 + 0x88)) == (Settings_TypedSetting_bool__o *)0x0) {
              ThrowNullReferenceException();
            }
            Settings_TypedSetting_bool___set_Value
                      ((*(uint64_t *)((char *)pGVar14 + 0x88)),true,
                       (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
            GameProgress_QuestHandler__AddActiveQuest
                      ((GameProgress_QuestHandler_o *)local_48,pGVar14,method_00);
          }
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


