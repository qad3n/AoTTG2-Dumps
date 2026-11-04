// Type: CustomLogic.CustomLogicCollisionHandler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCollisionHandler.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomLogicCollisionHandler.cs
// --------------------------------

// CustomLogic.CustomLogicCollisionHandler$$RegisterInstance
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__RegisterInstance (CustomLogic_CustomLogicCollisionHandler_o* __this, CustomLogic_CustomLogicComponentInstance_o* classInstance, const MethodInfo* method);
// 0x18209d1c0

void CustomLogic_CustomLogicCollisionHandler__RegisterInstance
               (CustomLogic_CustomLogicCollisionHandler_o *__this,
               CustomLogic_CustomLogicComponentInstance_o *classInstance,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  CustomLogic_CustomLogicComponentInstance_array *pCVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_1843468a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_Add);
    Il2CppMethodInitialized_1843468a2 = '\x01';
  }
  pMVar4 = MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_Add;
  __this_00 = (__this->fields)._classInstances;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar3 = (__this_00->fields)._items;
    if (pCVar3 != (CustomLogic_CustomLogicComponentInstance_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if ((uint)pCVar3->max_length <= uVar2) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)classInstance,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        return;
      }
      (__this_00->fields)._size = uVar2 + 1;
      if (uVar2 < (uint)pCVar3->max_length) {
        pCVar3->m_Items[(int)uVar2] = classInstance;
        Il2CppCodeGenWriteBarrier(pCVar3->m_Items + (int)uVar2,classInstance);
        return;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionHandler$$GetHit
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__GetHit (CustomLogic_CustomLogicCollisionHandler_o* __this, Characters_BaseCharacter_o* character, System_String_o* name, int32_t damage, System_String_o* type, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x18209c070
// eh: try 0x18209c16d..0x18209c24e -> pad 0x18333c8d0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18209c17d: nop dword ptr [rax]
// asm:   0x18209c210: mov rdx, qword ptr [rip + 0x1fde6f9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x18209c217: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x18209c21c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18209c221: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x18209c226: test rcx, rcx
// asm:   0x18209c229: jne 0x18209c24e
// asm:   0x18209c24e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333c8d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c8d5: push rbp
// asm:   0x18333c8d6: sub rsp, 0x40
// asm:   0x18333c8da: mov rbp, rdx
// asm:   0x18333c8dd: mov rax, qword ptr [rbp + 0x40]
// asm:   0x18333c8e1: mov rcx, qword ptr [rax]
// asm:   0x18333c8e4: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18333c8e8: movabs rax, 0
// asm:   0x18333c8f2: add rsp, 0x40
// asm:   0x18333c8f6: pop rbp
// asm:   0x18333c8f7: ret 

void CustomLogic_CustomLogicCollisionHandler__GetHit
               (CustomLogic_CustomLogicCollisionHandler_o *__this,Characters_BaseCharacter_o *character,
               System_String_o *name,int32_t damage,System_String_o *type,UnityEngine_Vector3_o *position,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  Il2CppObject *__this_01;
  bool bVar1;
  CustomLogic_CustomLogicCharacterBuiltin_o *character_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  UnityEngine_Vector3_Fields local_68;
  undefined1 local_58 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_48;
  System_Collections_Generic_List_Enumerator_object__o local_40;
  
  if (Il2CppMethodInitialized_1843468a3 == '\0') {
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
    Il2CppMethodInitialized_1843468a3 = '\x01';
  }
  local_40.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  character_00 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._classInstances;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    local_40.fields._list = (System_Collections_Generic_List_T__o *)local_58._0_8_;
    local_40.fields._index = local_58._8_4_;
    local_40.fields._version = local_58._12_4_;
    local_40.fields._current = (Il2CppObject *)local_48;
    local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_58._8_8_ = &local_40;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_40,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                        );
      __this_01 = local_40.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_40,
                   MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose)
        ;
        return;
      }
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_68.x = (position->fields).x;
      local_68.y = (position->fields).y;
      local_68.z = (position->fields).z;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_02,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
      if ((CustomLogic_CustomLogicComponentInstance_o *)__this_01 ==
          (CustomLogic_CustomLogicComponentInstance_o *)0x0) break;
      CustomLogic_CustomLogicComponentInstance__OnGetHit
                ((CustomLogic_CustomLogicComponentInstance_o *)__this_01,character_00,name,damage,type,
                 __this_02,(MethodInfo *)0x0);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionHandler$$GetHooked
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__GetHooked (CustomLogic_CustomLogicCollisionHandler_o* __this, Characters_Human_o* human, UnityEngine_Vector3_o position, bool left, const MethodInfo* method);
// 0x18209c260
// eh: try 0x18209c350..0x18209c55b -> pad 0x183317870 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18209c34f: nop 
// asm:   0x18209c4de: mov rdx, qword ptr [rip + 0x1fde42b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x18209c4e5: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18209c4ea: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18209c4ef: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18209c4f4: test rcx, rcx
// asm:   0x18209c4f7: jne 0x18209c55b
// asm:   0x18209c55b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317870: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317875: push rbp
// asm:   0x183317876: sub rsp, 0x20
// asm:   0x18331787a: mov rbp, rdx
// asm:   0x18331787d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317881: mov rcx, qword ptr [rax]
// asm:   0x183317884: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317888: movabs rax, 0
// asm:   0x183317892: add rsp, 0x20
// asm:   0x183317896: pop rbp
// asm:   0x183317897: ret 

void CustomLogic_CustomLogicCollisionHandler__GetHooked
               (CustomLogic_CustomLogicCollisionHandler_o *__this,Characters_Human_o *human,
               UnityEngine_Vector3_o *position,bool left,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  bool bVar1;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  undefined1 local_res8 [8];
  UnityEngine_Vector3_Fields local_68;
  undefined1 local_58 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_48;
  System_Collections_Generic_List_Enumerator_object__o local_40;
  
  if (Il2CppMethodInitialized_1843468a4 == '\0') {
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
    Il2CppMethodInitialized_1843468a4 = '\x01';
  }
  local_40.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanBuiltin);
  CustomLogic_CustomLogicHumanBuiltin___ctor(__this_01,human,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._classInstances;
  if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
             (System_Collections_Generic_List_T__o *)__this_00,
             (MethodInfo_91F180 *)
             MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
  local_40.fields._list = (System_Collections_Generic_List_T__o *)local_58._0_8_;
  local_40.fields._index = local_58._8_4_;
  local_40.fields._version = local_58._12_4_;
  local_40.fields._current = (Il2CppObject *)local_48;
  local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_58._8_8_ = &local_40;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_40,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                      );
    pIVar4 = local_40.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_40,
                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
      return;
    }
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_68.x = (position->fields).x;
    local_68.y = (position->fields).y;
    local_68.z = (position->fields).z;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_02,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
    if ((CustomLogic_CustomLogicComponentInstance_o *)pIVar4 ==
        (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (Il2CppMethodInitialized_1843468b8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
      il2cpp_codegen_initialize_runtime_metadata(&"OnGetHooked");
      Il2CppMethodInitialized_1843468b8 = '\x01';
    }
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
    if (parameters == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    if (__this_01 != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)__this_01,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = (Il2CppObject *)__this_01;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,__this_01);
    if (__this_02 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)__this_02,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
    }
    if ((uint)parameters->max_length < 2) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[1] = (Il2CppObject *)__this_02;
    Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,__this_02);
    local_res8[0] = left;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
    }
    if ((uint)parameters->max_length < 3) break;
    parameters->m_Items[2] = pIVar2;
    Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar2);
    CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
              ((CustomLogic_CustomLogicComponentInstance_o *)pIVar4,"OnGetHooked",parameters,
               (MethodInfo *)0x0);
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCollisionHandler$$OnCollisionEnter
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnCollisionEnter (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collision_o* other, const MethodInfo* method);
// 0x18209c570
// eh: try 0x18209c640..0x18209c76a -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18209c71e: mov rdx, qword ptr [rip + 0x1fde1eb]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x18209c725: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18209c72a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18209c72f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18209c734: test rcx, rcx
// asm:   0x18209c737: jne 0x18209c76a
// asm:   0x18209c76a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void CustomLogic_CustomLogicCollisionHandler__OnCollisionEnter
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collision_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  bool bVar1;
  UnityEngine_Collider_o *other_00;
  CustomLogic_BuiltinClassInstance_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_60 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_1843468a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    Il2CppMethodInitialized_1843468a5 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (other != (UnityEngine_Collision_o *)0x0) {
    other_00 = UnityEngine_Collision__get_collider(other,(MethodInfo *)0x0);
    obj = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other_00,(MethodInfo *)0x0);
    if (obj != (CustomLogic_BuiltinClassInstance_o *)0x0) {
      __this_00 = (__this->fields)._classInstances;
      if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)
      goto label_18209c770;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
      local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._current = (Il2CppObject *)local_50;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_48,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                          );
        pIVar3 = local_48.fields._current;
        if (!bVar1) break;
        if ((CustomLogic_CustomLogicComponentInstance_o *)local_48.fields._current ==
            (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (Il2CppMethodInitialized_1843468b5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
          il2cpp_codegen_initialize_runtime_metadata(&"OnCollisionEnter");
          Il2CppMethodInitialized_1843468b5 = '\x01';
        }
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
        if (parameters == (System_Object_array *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = (Il2CppObject *)obj;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
        if ((uint)parameters->max_length < 2) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[1] = (Il2CppObject *)0x0;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,(void *)0x0);
        CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                  ((CustomLogic_CustomLogicComponentInstance_o *)pIVar3,"OnCollisionEnter",parameters,
                   (MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    }
    return;
  }
label_18209c770:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionHandler$$OnCollisionStay
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnCollisionStay (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collision_o* other, const MethodInfo* method);
// 0x18209c990
// eh: try 0x18209ca60..0x18209cb8a -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18209cb3e: mov rdx, qword ptr [rip + 0x1fdddcb]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x18209cb45: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18209cb4a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18209cb4f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18209cb54: test rcx, rcx
// asm:   0x18209cb57: jne 0x18209cb8a
// asm:   0x18209cb8a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void CustomLogic_CustomLogicCollisionHandler__OnCollisionStay
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collision_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  bool bVar1;
  UnityEngine_Collider_o *other_00;
  CustomLogic_BuiltinClassInstance_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_60 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_1843468a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    Il2CppMethodInitialized_1843468a6 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (other != (UnityEngine_Collision_o *)0x0) {
    other_00 = UnityEngine_Collision__get_collider(other,(MethodInfo *)0x0);
    obj = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other_00,(MethodInfo *)0x0);
    if (obj != (CustomLogic_BuiltinClassInstance_o *)0x0) {
      __this_00 = (__this->fields)._classInstances;
      if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)
      goto label_18209cb90;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
      local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._current = (Il2CppObject *)local_50;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_48,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                          );
        pIVar3 = local_48.fields._current;
        if (!bVar1) break;
        if ((CustomLogic_CustomLogicComponentInstance_o *)local_48.fields._current ==
            (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (Il2CppMethodInitialized_1843468b4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
          il2cpp_codegen_initialize_runtime_metadata(&"OnCollisionStay");
          Il2CppMethodInitialized_1843468b4 = '\x01';
        }
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
        if (parameters == (System_Object_array *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = (Il2CppObject *)obj;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
        if ((uint)parameters->max_length < 2) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[1] = (Il2CppObject *)0x0;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,(void *)0x0);
        CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                  ((CustomLogic_CustomLogicComponentInstance_o *)pIVar3,"OnCollisionStay",parameters,
                   (MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    }
    return;
  }
label_18209cb90:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionHandler$$OnCollisionExit
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnCollisionExit (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collision_o* other, const MethodInfo* method);
// 0x18209c780
// eh: try 0x18209c850..0x18209c97a -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18209c92e: mov rdx, qword ptr [rip + 0x1fddfdb]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x18209c935: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18209c93a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18209c93f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18209c944: test rcx, rcx
// asm:   0x18209c947: jne 0x18209c97a
// asm:   0x18209c97a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void CustomLogic_CustomLogicCollisionHandler__OnCollisionExit
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collision_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  bool bVar1;
  UnityEngine_Collider_o *other_00;
  CustomLogic_BuiltinClassInstance_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_60 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_1843468a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    Il2CppMethodInitialized_1843468a7 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (other != (UnityEngine_Collision_o *)0x0) {
    other_00 = UnityEngine_Collision__get_collider(other,(MethodInfo *)0x0);
    obj = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other_00,(MethodInfo *)0x0);
    if (obj != (CustomLogic_BuiltinClassInstance_o *)0x0) {
      __this_00 = (__this->fields)._classInstances;
      if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)
      goto label_18209c980;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
      local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._current = (Il2CppObject *)local_50;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_48,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                          );
        pIVar3 = local_48.fields._current;
        if (!bVar1) break;
        if ((CustomLogic_CustomLogicComponentInstance_o *)local_48.fields._current ==
            (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (Il2CppMethodInitialized_1843468b6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
          il2cpp_codegen_initialize_runtime_metadata(&"OnCollisionExit");
          Il2CppMethodInitialized_1843468b6 = '\x01';
        }
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
        if (parameters == (System_Object_array *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = (Il2CppObject *)obj;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
        if ((uint)parameters->max_length < 2) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[1] = (Il2CppObject *)0x0;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,(void *)0x0);
        CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                  ((CustomLogic_CustomLogicComponentInstance_o *)pIVar3,"OnCollisionExit",parameters,
                   (MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    }
    return;
  }
label_18209c980:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionHandler$$OnTriggerEnter
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnTriggerEnter (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x18209cba0
// eh: try 0x18209cc80..0x18209cdaa -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18209cc7c: nop dword ptr [rax]
// asm:   0x18209cd5e: mov rdx, qword ptr [rip + 0x1fddbab]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x18209cd65: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18209cd6a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18209cd6f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18209cd74: test rcx, rcx
// asm:   0x18209cd77: jne 0x18209cdaa
// asm:   0x18209cdaa: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void CustomLogic_CustomLogicCollisionHandler__OnTriggerEnter
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  bool bVar1;
  CustomLogic_BuiltinClassInstance_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  float fVar4;
  undefined1 local_60 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_1843468a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    Il2CppMethodInitialized_1843468a8 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  fVar4 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
  if (fVar4 != (__this->fields)._lastEnterTime) {
    fVar4 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
    (__this->fields)._lastEnterTime = fVar4;
    obj = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,(MethodInfo *)0x0);
    if (obj != (CustomLogic_BuiltinClassInstance_o *)0x0) {
      __this_00 = (__this->fields)._classInstances;
      if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
      local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._current = (Il2CppObject *)local_50;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = &local_48;
      while (bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (&local_48,
                                (MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                               ), pIVar3 = local_48.fields._current, bVar1) {
        if ((CustomLogic_CustomLogicComponentInstance_o *)local_48.fields._current ==
            (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (Il2CppMethodInitialized_1843468b5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
          il2cpp_codegen_initialize_runtime_metadata(&"OnCollisionEnter");
          Il2CppMethodInitialized_1843468b5 = '\x01';
        }
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
        if (parameters == (System_Object_array *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = (Il2CppObject *)obj;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
        if ((uint)parameters->max_length < 2) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[1] = (Il2CppObject *)0x0;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,(void *)0x0);
        CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                  ((CustomLogic_CustomLogicComponentInstance_o *)pIVar3,"OnCollisionEnter",parameters,
                   (MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    }
  }
  return;
}


// CustomLogic.CustomLogicCollisionHandler$$OnTriggerStay
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnTriggerStay (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x18209cfc0
// eh: try 0x18209d080..0x18209d1aa -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18209d07d: nop dword ptr [rax]
// asm:   0x18209d15e: mov rdx, qword ptr [rip + 0x1fdd7ab]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x18209d165: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18209d16a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18209d16f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18209d174: test rcx, rcx
// asm:   0x18209d177: jne 0x18209d1aa
// asm:   0x18209d1aa: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void CustomLogic_CustomLogicCollisionHandler__OnTriggerStay
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  bool bVar1;
  CustomLogic_BuiltinClassInstance_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_60 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_1843468a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    Il2CppMethodInitialized_1843468a9 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  obj = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,(MethodInfo *)0x0);
  if (obj != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
    local_48.fields._index = local_60._8_4_;
    local_48.fields._version = local_60._12_4_;
    local_48.fields._current = (Il2CppObject *)local_50;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = &local_48;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_48,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                        );
      pIVar3 = local_48.fields._current;
      if (!bVar1) break;
      if ((CustomLogic_CustomLogicComponentInstance_o *)local_48.fields._current ==
          (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (Il2CppMethodInitialized_1843468b4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
        il2cpp_codegen_initialize_runtime_metadata(&"OnCollisionStay");
        Il2CppMethodInitialized_1843468b4 = '\x01';
      }
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      if (parameters == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = (Il2CppObject *)obj;
      Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
      if ((uint)parameters->max_length < 2) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[1] = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,(void *)0x0);
      CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                ((CustomLogic_CustomLogicComponentInstance_o *)pIVar3,"OnCollisionStay",parameters,
                 (MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
  }
  return;
}


// CustomLogic.CustomLogicCollisionHandler$$OnTriggerExit
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnTriggerExit (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x18209cdc0
// eh: try 0x18209ce80..0x18209cfaa -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18209ce7d: nop dword ptr [rax]
// asm:   0x18209cf5e: mov rdx, qword ptr [rip + 0x1fdd9ab]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x18209cf65: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18209cf6a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18209cf6f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18209cf74: test rcx, rcx
// asm:   0x18209cf77: jne 0x18209cfaa
// asm:   0x18209cfaa: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void CustomLogic_CustomLogicCollisionHandler__OnTriggerExit
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  bool bVar1;
  CustomLogic_BuiltinClassInstance_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_60 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_1843468aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    Il2CppMethodInitialized_1843468aa = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  obj = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,(MethodInfo *)0x0);
  if (obj != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
    local_48.fields._index = local_60._8_4_;
    local_48.fields._version = local_60._12_4_;
    local_48.fields._current = (Il2CppObject *)local_50;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = &local_48;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_48,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                        );
      pIVar3 = local_48.fields._current;
      if (!bVar1) break;
      if ((CustomLogic_CustomLogicComponentInstance_o *)local_48.fields._current ==
          (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (Il2CppMethodInitialized_1843468b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
        il2cpp_codegen_initialize_runtime_metadata(&"OnCollisionExit");
        Il2CppMethodInitialized_1843468b6 = '\x01';
      }
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      if (parameters == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = (Il2CppObject *)obj;
      Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
      if ((uint)parameters->max_length < 2) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[1] = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,(void *)0x0);
      CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                ((CustomLogic_CustomLogicComponentInstance_o *)pIVar3,"OnCollisionExit",parameters,
                 (MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
  }
  return;
}


// CustomLogic.CustomLogicCollisionHandler$$GetBuiltin
// il2cpp: CustomLogic_BuiltinClassInstance_o* CustomLogic_CustomLogicCollisionHandler__GetBuiltin (UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x18209be70

CustomLogic_BuiltinClassInstance_o *
CustomLogic_CustomLogicCollisionHandler__GetBuiltin(UnityEngine_Collider_o *other,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Characters_BaseCharacter_o *character;
  Map_MapObject_o *obj;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar4;
  
  if (Il2CppMethodInitialized_1843468ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843468ab = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)other,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (other == (UnityEngine_Collider_o *)0x0) {
label_18209c060:
      ThrowNullReferenceException();
    }
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_18209c060;
      pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_18209c060;
        character = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar2,
                               (MethodInfo_6651A0 *)
                               MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          pCVar4 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
          return (CustomLogic_BuiltinClassInstance_o *)pCVar4;
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        obj = Map_MapLoader__FindObjectFromCollider(other,(MethodInfo *)0x0);
        if (obj != (Map_MapObject_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
          if (__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
            pCVar3 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                               (__this,obj,(MethodInfo *)0x0);
            return (CustomLogic_BuiltinClassInstance_o *)pCVar3;
          }
        }
      }
    }
  }
  return (CustomLogic_BuiltinClassInstance_o *)0x0;
}


// CustomLogic.CustomLogicCollisionHandler$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionHandler___ctor (CustomLogic_CustomLogicCollisionHandler_o* __this, const MethodInfo* method);
// 0x18209d270

void CustomLogic_CustomLogicCollisionHandler___ctor
               (CustomLogic_CustomLogicCollisionHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  
  if (Il2CppMethodInitialized_1843468ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_CustomLogicComponentInstance);
    Il2CppMethodInitialized_1843468ac = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicComponentInstance)
  ;
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_ctor
            );
  (__this->fields)._classInstances = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._classInstances,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


