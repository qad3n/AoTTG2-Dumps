// Type: CustomLogic.CustomLogicCollisionHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicCollisionHandler.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomLogicCollisionHandler.cs
// --------------------------------

// CustomLogic.CustomLogicCollisionHandler$$RegisterInstance
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__RegisterInstance (CustomLogic_CustomLogicCollisionHandler_o* __this, CustomLogic_CustomLogicComponentInstance_o* classInstance, const MethodInfo* method);
// 0x5b6a820

void CustomLogic_CustomLogicCollisionHandler__RegisterInstance
               (CustomLogic_CustomLogicCollisionHandler_o *__this,
               CustomLogic_CustomLogicComponentInstance_o *classInstance,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  CustomLogic_CustomLogicComponentInstance_array *pCVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_07547317 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_Add);
    Il2CppMethodInitialized_07547317 = '\x01';
  }
  pMVar4 = MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_Add;
  __this_00 = (__this->fields)._classInstances;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar3 = (__this_00->fields)._items;
    if (pCVar3 != (CustomLogic_CustomLogicComponentInstance_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pCVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pCVar3->m_Items[(int)uVar2] = classInstance;
        Il2CppCodeGenWriteBarrier(pCVar3->m_Items + (int)uVar2);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)classInstance,
                 (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionHandler$$GetHit
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__GetHit (CustomLogic_CustomLogicCollisionHandler_o* __this, Characters_BaseCharacter_o* character, System_String_o* name, int32_t damage, System_String_o* type, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x5b6a8c0
// eh: try 0x5b6a9ba..0x5b6aa3a -> pad 0x5b6aa41 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b6aa5b..0x5b6aa60 -> pad 0x5b6aa81 cleanup
// eh: try 0x5b6aa84..0x5b6aa8e -> pad 0x5b6aa96 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6aa3f: jmp 0x5b6aa43
// asm:   0x5b6aa41: jmp 0x5b6aa43
// asm:   0x5b6aa43: mov rbx, rax
// asm:   0x5b6aa46: cmp edx, 1
// asm:   0x5b6aa49: jne 0x5b6aa84
// asm:   0x5b6aa4b: mov rdi, rbx
// asm:   0x5b6aa4e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b6aa53: mov rbx, qword ptr [rax]
// asm:   0x5b6aa56: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5b6aa5b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b6aa60: lea rax, [rip + 0x1722fc9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x5b6aa67: mov rsi, qword ptr [rax]
// asm:   0x5b6aa6a: lea rdi, [rsp + 0x10]
// asm:   0x5b6aa6f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b6aa74: test rbx, rbx
// asm:   0x5b6aa77: je 0x5b6aa26
// asm:   0x5b6aa79: mov rdi, rbx
// asm:   0x5b6aa7c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b6aa81: mov rbx, rax
// asm:   0x5b6aa84: lea rdi, [rsp + 0x30]
// asm:   0x5b6aa89: call 0x2fd7370  ; il2cpp_runtime_helper_02fd7370()
// asm:   0x5b6aa8e: mov rdi, rbx
// asm:   0x5b6aa91: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b6aa96: mov rdi, rax
// asm:   0x5b6aa99: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicCollisionHandler__GetHit
               (CustomLogic_CustomLogicCollisionHandler_o *__this,Characters_BaseCharacter_o *character,
               System_String_o *name,int32_t damage,System_String_o *type,UnityEngine_Vector3_o position,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  Il2CppObject *__this_01;
  bool bVar1;
  CustomLogic_CustomLogicCharacterBuiltin_o *character_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  Characters_BaseCharacter_o *method_00;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  UnityEngine_Vector3_o value;
  MethodInfo *in_stack_ffffffffffffff78;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  undefined8 local_58;
  System_Collections_Generic_List_Enumerator_T__o *local_50;
  undefined1 local_48 [16];
  
  value.fields.z = position.fields.z;
  local_48._8_4_ = in_XMM0_Dc;
  local_48._0_8_ = position.fields._0_8_;
  local_48._12_4_ = in_XMM0_Dd;
  method_00 = character;
  if (Il2CppMethodInitialized_07547318 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    Il2CppMethodInitialized_07547318 = '\x01';
  }
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  character_00 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)method_00);
  __this_00 = (__this->fields)._classInstances;
  if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)
             MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
  local_58 = 0;
  local_50 = &local_78;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_78,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                      );
    __this_01 = local_78.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_78,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
      return;
    }
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    value.fields.x = (float)local_48._0_4_;
    value.fields.y = (float)local_48._4_4_;
    CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_02,value,(MethodInfo *)0x0);
    if ((CustomLogic_CustomLogicComponentInstance_o *)__this_01 ==
        (CustomLogic_CustomLogicComponentInstance_o *)0x0) break;
    CustomLogic_CustomLogicComponentInstance__OnGetHit
              ((CustomLogic_CustomLogicComponentInstance_o *)__this_01,character_00,name,damage,type,__this_02
               ,in_stack_ffffffffffffff78);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionHandler$$GetHooked
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__GetHooked (CustomLogic_CustomLogicCollisionHandler_o* __this, Characters_Human_o* human, UnityEngine_Vector3_o position, bool left, const MethodInfo* method);
// 0x5b6afd0
// eh: try 0x5b6b0c4..0x5b6b13c -> pad 0x5b6b145 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b6b15f..0x5b6b164 -> pad 0x5b6b185 cleanup
// eh: try 0x5b6b188..0x5b6b192 -> pad 0x5b6b19a catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6b141: jmp 0x5b6b147
// asm:   0x5b6b143: jmp 0x5b6b147
// asm:   0x5b6b145: jmp 0x5b6b147
// asm:   0x5b6b147: mov rbx, rax
// asm:   0x5b6b14a: cmp edx, 1
// asm:   0x5b6b14d: jne 0x5b6b188
// asm:   0x5b6b14f: mov rdi, rbx
// asm:   0x5b6b152: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b6b157: mov rbx, qword ptr [rax]
// asm:   0x5b6b15a: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5b6b15f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b6b164: lea rax, [rip + 0x17228c5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x5b6b16b: mov rsi, qword ptr [rax]
// asm:   0x5b6b16e: lea rdi, [rsp + 0x10]
// asm:   0x5b6b173: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b6b178: test rbx, rbx
// asm:   0x5b6b17b: je 0x5b6b128
// asm:   0x5b6b17d: mov rdi, rbx
// asm:   0x5b6b180: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b6b185: mov rbx, rax
// asm:   0x5b6b188: lea rdi, [rsp + 0x30]
// asm:   0x5b6b18d: call 0x2fd73a0  ; il2cpp_runtime_helper_02fd73a0()
// asm:   0x5b6b192: mov rdi, rbx
// asm:   0x5b6b195: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b6b19a: mov rdi, rax
// asm:   0x5b6b19d: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicCollisionHandler__GetHooked
               (CustomLogic_CustomLogicCollisionHandler_o *__this,Characters_Human_o *human,
               UnityEngine_Vector3_o position,bool left,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  Il2CppObject *__this_01;
  bool bVar1;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_02;
  CustomLogic_CustomLogicVector3Builtin_o *__this_03;
  MethodInfo *in_R8;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  UnityEngine_Vector3_o value;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  undefined8 local_58;
  System_Collections_Generic_List_Enumerator_T__o *local_50;
  undefined1 local_48 [16];
  
  value.fields.z = position.fields.z;
  local_48._8_4_ = in_XMM0_Dc;
  local_48._0_8_ = position.fields._0_8_;
  local_48._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_07547319 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    Il2CppMethodInitialized_07547319 = '\x01';
  }
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
  CustomLogic_CustomLogicHumanBuiltin___ctor(__this_02,human,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._classInstances;
  if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)
             MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
  local_58 = 0;
  local_50 = &local_78;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_78,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                      );
    __this_01 = local_78.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_78,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
      return;
    }
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    value.fields.x = (float)local_48._0_4_;
    value.fields.y = (float)local_48._4_4_;
    CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_03,value,(MethodInfo *)0x0);
    if ((CustomLogic_CustomLogicComponentInstance_o *)__this_01 ==
        (CustomLogic_CustomLogicComponentInstance_o *)0x0) break;
    CustomLogic_CustomLogicComponentInstance__OnGetHooked
              ((CustomLogic_CustomLogicComponentInstance_o *)__this_01,__this_02,__this_03,left,in_R8);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionHandler$$OnCollisionEnter
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnCollisionEnter (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collision_o* other, const MethodInfo* method);
// 0x5b6b390
// eh: try 0x5b6b453..0x5b6b496 -> pad 0x5b6b49f (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b6b4b7..0x5b6b4bc -> pad 0x5b6b4db cleanup
// eh: try 0x5b6b4de..0x5b6b4e8 -> pad 0x5b6b4f0 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6b44d: nop dword ptr [rax]
// asm:   0x5b6b49b: jmp 0x5b6b49f
// asm:   0x5b6b49d: jmp 0x5b6b49f
// asm:   0x5b6b49f: mov rbx, rax
// asm:   0x5b6b4a2: cmp edx, 1
// asm:   0x5b6b4a5: jne 0x5b6b4de
// asm:   0x5b6b4a7: mov rdi, rbx
// asm:   0x5b6b4aa: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b6b4af: mov rbx, qword ptr [rax]
// asm:   0x5b6b4b2: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5b6b4b7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b6b4bc: lea rax, [rip + 0x172256d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x5b6b4c3: mov rsi, qword ptr [rax]
// asm:   0x5b6b4c6: mov rdi, rsp
// asm:   0x5b6b4c9: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b6b4ce: test rbx, rbx
// asm:   0x5b6b4d1: je 0x5b6b487
// asm:   0x5b6b4d3: mov rdi, rbx
// asm:   0x5b6b4d6: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b6b4db: mov rbx, rax
// asm:   0x5b6b4de: lea rdi, [rsp + 0x20]
// asm:   0x5b6b4e3: call 0x2fd73d0  ; il2cpp_runtime_helper_02fd73d0()
// asm:   0x5b6b4e8: mov rdi, rbx
// asm:   0x5b6b4eb: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b6b4f0: mov rdi, rax
// asm:   0x5b6b4f3: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicCollisionHandler__OnCollisionEnter
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collision_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  bool bVar1;
  UnityEngine_Collider_o *other_00;
  Il2CppObject *target;
  CustomLogic_BuiltinClassInstance_o *other_01;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  
  if (Il2CppMethodInitialized_0754731a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    Il2CppMethodInitialized_0754731a = '\x01';
  }
  SStack_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  if (other == (UnityEngine_Collision_o *)0x0) {
label_05b6b496:
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)0x0;
  other_00 = UnityEngine_Collision__get_collider(other,(MethodInfo *)0x0);
  target = CustomLogic_CustomLogicCollisionHandler__FindTarget(other_00,method_00);
  other_01 = CustomLogic_CustomLogicCollisionHandler__BuiltinFromTarget(target,method_00);
  if (other_01 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)
    goto label_05b6b496;
    System_Collections_Generic_List_object___GetEnumerator
              (&SStack_48,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    uStack_28 = 0;
    puStack_20 = (undefined1 *)&SStack_48;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                        );
      if (!bVar1) break;
      if ((CustomLogic_CustomLogicComponentInstance_o *)SStack_48.fields._current ==
          (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
        ThrowNullReferenceException();
      }
      CustomLogic_CustomLogicComponentInstance__OnCollisionEnter
                ((CustomLogic_CustomLogicComponentInstance_o *)SStack_48.fields._current,other_01,
                 (CustomLogic_BuiltinClassInstance_o *)0x0,in_RCX);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
  }
  return;
}


// CustomLogic.CustomLogicCollisionHandler$$OnCollisionStay
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnCollisionStay (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collision_o* other, const MethodInfo* method);
// 0x5b6b6b0
// eh: try 0x5b6b773..0x5b6b7b6 -> pad 0x5b6b7bf (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b6b7d7..0x5b6b7dc -> pad 0x5b6b7fb cleanup
// eh: try 0x5b6b7fe..0x5b6b808 -> pad 0x5b6b810 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6b76d: nop dword ptr [rax]
// asm:   0x5b6b7bb: jmp 0x5b6b7bf
// asm:   0x5b6b7bd: jmp 0x5b6b7bf
// asm:   0x5b6b7bf: mov rbx, rax
// asm:   0x5b6b7c2: cmp edx, 1
// asm:   0x5b6b7c5: jne 0x5b6b7fe
// asm:   0x5b6b7c7: mov rdi, rbx
// asm:   0x5b6b7ca: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b6b7cf: mov rbx, qword ptr [rax]
// asm:   0x5b6b7d2: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5b6b7d7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b6b7dc: lea rax, [rip + 0x172224d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x5b6b7e3: mov rsi, qword ptr [rax]
// asm:   0x5b6b7e6: mov rdi, rsp
// asm:   0x5b6b7e9: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b6b7ee: test rbx, rbx
// asm:   0x5b6b7f1: je 0x5b6b7a7
// asm:   0x5b6b7f3: mov rdi, rbx
// asm:   0x5b6b7f6: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b6b7fb: mov rbx, rax
// asm:   0x5b6b7fe: lea rdi, [rsp + 0x20]
// asm:   0x5b6b803: call 0x2fd7400  ; il2cpp_runtime_helper_02fd7400()
// asm:   0x5b6b808: mov rdi, rbx
// asm:   0x5b6b80b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b6b810: mov rdi, rax
// asm:   0x5b6b813: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicCollisionHandler__OnCollisionStay
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collision_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  bool bVar1;
  UnityEngine_Collider_o *other_00;
  Il2CppObject *target;
  CustomLogic_BuiltinClassInstance_o *other_01;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  
  if (Il2CppMethodInitialized_0754731b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    Il2CppMethodInitialized_0754731b = '\x01';
  }
  SStack_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  if (other == (UnityEngine_Collision_o *)0x0) {
label_05b6b7b6:
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)0x0;
  other_00 = UnityEngine_Collision__get_collider(other,(MethodInfo *)0x0);
  target = CustomLogic_CustomLogicCollisionHandler__FindTarget(other_00,method_00);
  other_01 = CustomLogic_CustomLogicCollisionHandler__BuiltinFromTarget(target,method_00);
  if (other_01 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)
    goto label_05b6b7b6;
    System_Collections_Generic_List_object___GetEnumerator
              (&SStack_48,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    uStack_28 = 0;
    puStack_20 = (undefined1 *)&SStack_48;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                        );
      if (!bVar1) break;
      if ((CustomLogic_CustomLogicComponentInstance_o *)SStack_48.fields._current ==
          (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
        ThrowNullReferenceException();
      }
      CustomLogic_CustomLogicComponentInstance__OnCollisionStay
                ((CustomLogic_CustomLogicComponentInstance_o *)SStack_48.fields._current,other_01,
                 (CustomLogic_BuiltinClassInstance_o *)0x0,in_RCX);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
  }
  return;
}


// CustomLogic.CustomLogicCollisionHandler$$OnCollisionExit
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnCollisionExit (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collision_o* other, const MethodInfo* method);
// 0x5b6b9c0
// eh: try 0x5b6ba83..0x5b6bac6 -> pad 0x5b6bacf (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b6bae7..0x5b6baec -> pad 0x5b6bb0b cleanup
// eh: try 0x5b6bb0e..0x5b6bb18 -> pad 0x5b6bb20 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6ba7d: nop dword ptr [rax]
// asm:   0x5b6bacb: jmp 0x5b6bacf
// asm:   0x5b6bacd: jmp 0x5b6bacf
// asm:   0x5b6bacf: mov rbx, rax
// asm:   0x5b6bad2: cmp edx, 1
// asm:   0x5b6bad5: jne 0x5b6bb0e
// asm:   0x5b6bad7: mov rdi, rbx
// asm:   0x5b6bada: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b6badf: mov rbx, qword ptr [rax]
// asm:   0x5b6bae2: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5b6bae7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b6baec: lea rax, [rip + 0x1721f3d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x5b6baf3: mov rsi, qword ptr [rax]
// asm:   0x5b6baf6: mov rdi, rsp
// asm:   0x5b6baf9: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b6bafe: test rbx, rbx
// asm:   0x5b6bb01: je 0x5b6bab7
// asm:   0x5b6bb03: mov rdi, rbx
// asm:   0x5b6bb06: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b6bb0b: mov rbx, rax
// asm:   0x5b6bb0e: lea rdi, [rsp + 0x20]
// asm:   0x5b6bb13: call 0x2fd7430  ; il2cpp_runtime_helper_02fd7430()
// asm:   0x5b6bb18: mov rdi, rbx
// asm:   0x5b6bb1b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b6bb20: mov rdi, rax
// asm:   0x5b6bb23: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicCollisionHandler__OnCollisionExit
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collision_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  bool bVar1;
  UnityEngine_Collider_o *other_00;
  Il2CppObject *target;
  CustomLogic_BuiltinClassInstance_o *other_01;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  
  if (Il2CppMethodInitialized_0754731c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    Il2CppMethodInitialized_0754731c = '\x01';
  }
  SStack_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  if (other == (UnityEngine_Collision_o *)0x0) {
label_05b6bac6:
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)0x0;
  other_00 = UnityEngine_Collision__get_collider(other,(MethodInfo *)0x0);
  target = CustomLogic_CustomLogicCollisionHandler__FindTarget(other_00,method_00);
  other_01 = CustomLogic_CustomLogicCollisionHandler__BuiltinFromTarget(target,method_00);
  if (other_01 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)
    goto label_05b6bac6;
    System_Collections_Generic_List_object___GetEnumerator
              (&SStack_48,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    uStack_28 = 0;
    puStack_20 = (undefined1 *)&SStack_48;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                        );
      if (!bVar1) break;
      if ((CustomLogic_CustomLogicComponentInstance_o *)SStack_48.fields._current ==
          (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
        ThrowNullReferenceException();
      }
      CustomLogic_CustomLogicComponentInstance__OnCollisionExit
                ((CustomLogic_CustomLogicComponentInstance_o *)SStack_48.fields._current,other_01,
                 (CustomLogic_BuiltinClassInstance_o *)0x0,in_RCX);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
  }
  return;
}


// CustomLogic.CustomLogicCollisionHandler$$OnTriggerEnter
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnTriggerEnter (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x5b6bcd0
// eh: try 0x5b6be03..0x5b6be46 -> pad 0x5b6be4f (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b6be67..0x5b6be6c -> pad 0x5b6be8b cleanup
// eh: try 0x5b6be8e..0x5b6be98 -> pad 0x5b6bea0 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6bdfe: nop 
// asm:   0x5b6be4b: jmp 0x5b6be4f
// asm:   0x5b6be4d: jmp 0x5b6be4f
// asm:   0x5b6be4f: mov rbx, rax
// asm:   0x5b6be52: cmp edx, 1
// asm:   0x5b6be55: jne 0x5b6be8e
// asm:   0x5b6be57: mov rdi, rbx
// asm:   0x5b6be5a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b6be5f: mov rbx, qword ptr [rax]
// asm:   0x5b6be62: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5b6be67: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b6be6c: lea rax, [rip + 0x1721bbd]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x5b6be73: mov rsi, qword ptr [rax]
// asm:   0x5b6be76: mov rdi, rsp
// asm:   0x5b6be79: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b6be7e: test rbx, rbx
// asm:   0x5b6be81: je 0x5b6be37
// asm:   0x5b6be83: mov rdi, rbx
// asm:   0x5b6be86: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b6be8b: mov rbx, rax
// asm:   0x5b6be8e: lea rdi, [rsp + 0x20]
// asm:   0x5b6be93: call 0x2fd7460  ; il2cpp_runtime_helper_02fd7460()
// asm:   0x5b6be98: mov rdi, rbx
// asm:   0x5b6be9b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b6bea0: mov rdi, rax
// asm:   0x5b6bea3: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicCollisionHandler__OnTriggerEnter
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  float *pfVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  bool bVar3;
  MethodInfo *pMVar4;
  CustomLogic_BuiltinClassInstance_o *other_00;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  float fVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_28;
  undefined1 *local_20;
  
  pMVar4 = (MethodInfo *)other;
  if (Il2CppMethodInitialized_0754731d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    Il2CppMethodInitialized_0754731d = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pMVar4 = (MethodInfo *)CustomLogic_CustomLogicCollisionHandler__FindTarget(other,pMVar4);
  if (pMVar4 != (MethodInfo *)0x0) {
    fVar5 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
    pfVar1 = &(__this->fields)._enterStepTime;
    if ((fVar5 != *pfVar1) || (NAN(fVar5) || NAN(*pfVar1))) {
      fVar5 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
      (__this->fields)._enterStepTime = fVar5;
      pSVar2 = (__this->fields)._enteredThisStep;
      if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05b6be46;
      System_Collections_Generic_HashSet_object___Clear
                (pSVar2,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_object_Clear);
    }
    pSVar2 = (__this->fields)._enteredThisStep;
    if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) {
label_05b6be46:
      ThrowNullReferenceException();
    }
    method_00 = pMVar4;
    bVar3 = System_Collections_Generic_HashSet_object___Add
                      (pSVar2,(Il2CppObject *)pMVar4,
                       (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_object_Add);
    if (bVar3) {
      other_00 = CustomLogic_CustomLogicCollisionHandler__BuiltinFromTarget((Il2CppObject *)pMVar4,method_00);
      if (other_00 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
        __this_00 = (__this->fields)._classInstances;
        if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)
        goto label_05b6be46;
        System_Collections_Generic_List_object___GetEnumerator
                  (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                   (MethodInfo_395E050 *)
                   MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
        local_28 = 0;
        local_20 = (undefined1 *)&local_48;
        while( true ) {
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                            );
          if (!bVar3) break;
          if ((CustomLogic_CustomLogicComponentInstance_o *)local_48.fields._current ==
              (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
            ThrowNullReferenceException();
          }
          CustomLogic_CustomLogicComponentInstance__OnCollisionEnter
                    ((CustomLogic_CustomLogicComponentInstance_o *)local_48.fields._current,other_00,
                     (CustomLogic_BuiltinClassInstance_o *)0x0,in_RCX);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose)
        ;
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicCollisionHandler$$OnTriggerStay
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnTriggerStay (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x5b6c0c0
// eh: try 0x5b6c173..0x5b6c1b6 -> pad 0x5b6c1bf (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b6c1d7..0x5b6c1dc -> pad 0x5b6c1fb cleanup
// eh: try 0x5b6c1fe..0x5b6c208 -> pad 0x5b6c210 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6c1bb: jmp 0x5b6c1bf
// asm:   0x5b6c1bd: jmp 0x5b6c1bf
// asm:   0x5b6c1bf: mov rbx, rax
// asm:   0x5b6c1c2: cmp edx, 1
// asm:   0x5b6c1c5: jne 0x5b6c1fe
// asm:   0x5b6c1c7: mov rdi, rbx
// asm:   0x5b6c1ca: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b6c1cf: mov rbx, qword ptr [rax]
// asm:   0x5b6c1d2: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5b6c1d7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b6c1dc: lea rax, [rip + 0x172184d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x5b6c1e3: mov rsi, qword ptr [rax]
// asm:   0x5b6c1e6: mov rdi, rsp
// asm:   0x5b6c1e9: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b6c1ee: test rbx, rbx
// asm:   0x5b6c1f1: je 0x5b6c1a7
// asm:   0x5b6c1f3: mov rdi, rbx
// asm:   0x5b6c1f6: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b6c1fb: mov rbx, rax
// asm:   0x5b6c1fe: lea rdi, [rsp + 0x20]
// asm:   0x5b6c203: call 0x2fd7490  ; il2cpp_runtime_helper_02fd7490()
// asm:   0x5b6c208: mov rdi, rbx
// asm:   0x5b6c20b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b6c210: mov rdi, rax
// asm:   0x5b6c213: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicCollisionHandler__OnTriggerStay
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  bool bVar1;
  Il2CppObject *target;
  CustomLogic_BuiltinClassInstance_o *other_00;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_28;
  undefined1 *local_20;
  
  method_00 = (MethodInfo *)other;
  if (Il2CppMethodInitialized_0754731e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    Il2CppMethodInitialized_0754731e = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  target = CustomLogic_CustomLogicCollisionHandler__FindTarget(other,method_00);
  other_00 = CustomLogic_CustomLogicCollisionHandler__BuiltinFromTarget(target,method_00);
  if (other_00 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    local_28 = 0;
    local_20 = (undefined1 *)&local_48;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                        );
      if (!bVar1) break;
      if ((CustomLogic_CustomLogicComponentInstance_o *)local_48.fields._current ==
          (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
        ThrowNullReferenceException();
      }
      CustomLogic_CustomLogicComponentInstance__OnCollisionStay
                ((CustomLogic_CustomLogicComponentInstance_o *)local_48.fields._current,other_00,
                 (CustomLogic_BuiltinClassInstance_o *)0x0,in_RCX);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
  }
  return;
}


// CustomLogic.CustomLogicCollisionHandler$$OnTriggerExit
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnTriggerExit (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x5b6c220
// eh: try 0x5b6c2d3..0x5b6c316 -> pad 0x5b6c31f (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b6c337..0x5b6c33c -> pad 0x5b6c35b cleanup
// eh: try 0x5b6c35e..0x5b6c368 -> pad 0x5b6c370 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6c31b: jmp 0x5b6c31f
// asm:   0x5b6c31d: jmp 0x5b6c31f
// asm:   0x5b6c31f: mov rbx, rax
// asm:   0x5b6c322: cmp edx, 1
// asm:   0x5b6c325: jne 0x5b6c35e
// asm:   0x5b6c327: mov rdi, rbx
// asm:   0x5b6c32a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b6c32f: mov rbx, qword ptr [rax]
// asm:   0x5b6c332: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5b6c337: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b6c33c: lea rax, [rip + 0x17216ed]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x5b6c343: mov rsi, qword ptr [rax]
// asm:   0x5b6c346: mov rdi, rsp
// asm:   0x5b6c349: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b6c34e: test rbx, rbx
// asm:   0x5b6c351: je 0x5b6c307
// asm:   0x5b6c353: mov rdi, rbx
// asm:   0x5b6c356: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b6c35b: mov rbx, rax
// asm:   0x5b6c35e: lea rdi, [rsp + 0x20]
// asm:   0x5b6c363: call 0x2fd74c0  ; il2cpp_runtime_helper_02fd74c0()
// asm:   0x5b6c368: mov rdi, rbx
// asm:   0x5b6c36b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b6c370: mov rdi, rax
// asm:   0x5b6c373: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicCollisionHandler__OnTriggerExit
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  bool bVar1;
  Il2CppObject *target;
  CustomLogic_BuiltinClassInstance_o *other_00;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_28;
  undefined1 *local_20;
  
  method_00 = (MethodInfo *)other;
  if (Il2CppMethodInitialized_0754731f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    Il2CppMethodInitialized_0754731f = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  target = CustomLogic_CustomLogicCollisionHandler__FindTarget(other,method_00);
  other_00 = CustomLogic_CustomLogicCollisionHandler__BuiltinFromTarget(target,method_00);
  if (other_00 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    local_28 = 0;
    local_20 = (undefined1 *)&local_48;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                        );
      if (!bVar1) break;
      if ((CustomLogic_CustomLogicComponentInstance_o *)local_48.fields._current ==
          (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
        ThrowNullReferenceException();
      }
      CustomLogic_CustomLogicComponentInstance__OnCollisionExit
                ((CustomLogic_CustomLogicComponentInstance_o *)local_48.fields._current,other_00,
                 (CustomLogic_BuiltinClassInstance_o *)0x0,in_RCX);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
  }
  return;
}


// CustomLogic.CustomLogicCollisionHandler$$GetBuiltin
// il2cpp: CustomLogic_BuiltinClassInstance_o* CustomLogic_CustomLogicCollisionHandler__GetBuiltin (UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x5b6b500

CustomLogic_BuiltinClassInstance_o *
CustomLogic_CustomLogicCollisionHandler__GetBuiltin(UnityEngine_Collider_o *other,MethodInfo *method)

{
  Il2CppObject *target;
  CustomLogic_BuiltinClassInstance_o *pCVar1;
  
  target = CustomLogic_CustomLogicCollisionHandler__FindTarget(other,method);
  pCVar1 = CustomLogic_CustomLogicCollisionHandler__BuiltinFromTarget(target,method);
  return pCVar1;
}


// CustomLogic.CustomLogicCollisionHandler$$FindTarget
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionHandler__FindTarget (UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x5b6beb0

Il2CppObject *
CustomLogic_CustomLogicCollisionHandler__FindTarget(UnityEngine_Collider_o *other,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Characters_BaseCharacter_o *x;
  Map_MapObject_o *pMVar3;
  
  if (Il2CppMethodInitialized_07547320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547320 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)other,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (Il2CppObject *)0x0;
  }
  if (((other == (UnityEngine_Collider_o *)0x0) ||
      (pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
      pUVar2 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0),
     pUVar2 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  x = UnityEngine_Component__GetComponent_object_
                ((UnityEngine_Component_o *)pUVar2,
                 (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (Il2CppObject *)x;
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pMVar3 = Map_MapLoader__FindObjectFromCollider(other,(MethodInfo *)0x0);
  return (Il2CppObject *)pMVar3;
}


// CustomLogic.CustomLogicCollisionHandler$$BuiltinFromTarget
// il2cpp: CustomLogic_BuiltinClassInstance_o* CustomLogic_CustomLogicCollisionHandler__BuiltinFromTarget (Il2CppObject* target, const MethodInfo* method);
// 0x5b6bfb0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6c086: lea rbx, [rip + 0x170ae83]  ; TypeInfo_CustomLogic_CustomLogicManager
// asm:   0x5b6c08d: mov rdi, qword ptr [rbx]
// asm:   0x5b6c090: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x5b6c097: jne 0x5b6c0a1

CustomLogic_BuiltinClassInstance_o *
CustomLogic_CustomLogicCollisionHandler__BuiltinFromTarget(Il2CppObject *target,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  CustomLogic_CustomLogicEvaluator_o *__this;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar4;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar5;
  Map_MapObject_c *extraout_RDX;
  Map_MapObject_c *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07547321 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObject);
    Il2CppMethodInitialized_07547321 = '\x01';
  }
  if (target != (Il2CppObject *)0x0) {
    pIVar3 = target->klass;
    bVar1 = (pIVar3->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_Characters_BaseCharacter->_2).typeHierarchyDepth;
    method_01 = (MethodInfo *)(ulong)bVar2;
    if ((bVar2 <= bVar1) &&
       ((pIVar3->_2).typeHierarchy[(long)&method_01[-1].field_0x57] ==
        (Il2CppClass *)TypeInfo_Characters_BaseCharacter)) {
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar4 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin
                         ((Characters_BaseCharacter_o *)target,method_01);
      return (CustomLogic_BuiltinClassInstance_o *)pCVar4;
    }
    bVar2 = (TypeInfo_Map_MapObject->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Map_MapObject)) {
      method_00 = TypeInfo_Map_MapObject;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        method_00 = extraout_RDX;
      }
      __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pCVar5 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this,(Map_MapObject_o *)target,(MethodInfo *)method_00);
        return (CustomLogic_BuiltinClassInstance_o *)pCVar5;
      }
    }
  }
  return (CustomLogic_BuiltinClassInstance_o *)0x0;
}


// CustomLogic.CustomLogicCollisionHandler$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionHandler___ctor (CustomLogic_CustomLogicCollisionHandler_o* __this, const MethodInfo* method);
// 0x5b6c490

void CustomLogic_CustomLogicCollisionHandler___ctor
               (CustomLogic_CustomLogicCollisionHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  
  if (Il2CppMethodInitialized_07547322 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_CustomLogicComponentInstance);
    Il2CppMethodInitialized_07547322 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicComponentInstance)
  ;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)
             MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_ctor);
  (__this->fields)._classInstances = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._classInstances);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_object);
  System_Collections_Generic_HashSet_object____ctor
            (__this_01,(MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_object_ctor);
  (__this->fields)._enteredThisStep = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._enteredThisStep);
  (__this->fields)._enterStepTime = -1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


