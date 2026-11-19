// Type: Characters.AnimationHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/AnimationHandler.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/AnimationHandler.cs
// --------------------------------

// Characters.AnimationHandler.<>c$$.cctor
// il2cpp: void Characters_AnimationHandler___c___cctor (const MethodInfo* method);
// 0x5bb28b0

void Characters_AnimationHandler___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075474d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AnimationHandler_c);
    Il2CppMethodInitialized_075474d2 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_AnimationHandler_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Characters_AnimationHandler_c->static_fields->__9 = (Characters_AnimationHandler___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_AnimationHandler_c->static_fields->__9);
  return;
}


// Characters.AnimationHandler.<>c$$.ctor
// il2cpp: void Characters_AnimationHandler___c___ctor (Characters_AnimationHandler___c_o* __this, const MethodInfo* method);
// 0x5bb2920

void Characters_AnimationHandler___c___ctor(Characters_AnimationHandler___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.AnimationHandler.<>c$$<RefreshRenderers>b__19_0
// il2cpp: bool Characters_AnimationHandler___c___RefreshRenderers_b__19_0 (Characters_AnimationHandler___c_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x5bb2930

bool Characters_AnimationHandler___c___RefreshRenderers_b__19_0
               (Characters_AnimationHandler___c_o *__this,UnityEngine_Renderer_o *renderer,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  UnityEngine_Renderer_c *pUVar3;
  
  if (Il2CppMethodInitialized_075474d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    Il2CppMethodInitialized_075474d3 = '\x01';
  }
  if (renderer != (UnityEngine_Renderer_o *)0x0) {
    pUVar3 = renderer->klass;
    bVar1 = (pUVar3->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pUVar3->_2).typeHierarchy[(ulong)bVar2 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer)) {
      return true;
    }
    bVar2 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth;
    if (bVar2 <= bVar1) {
      return (pUVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer;
    }
  }
  return false;
}


// Characters.AnimationHandler.<>c$$<RefreshRenderers>b__19_1
// il2cpp: UnityEngine_Renderer_o* Characters_AnimationHandler___c___RefreshRenderers_b__19_1 (Characters_AnimationHandler___c_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x5bb29c0

UnityEngine_Renderer_o *
Characters_AnimationHandler___c___RefreshRenderers_b__19_1
          (Characters_AnimationHandler___c_o *__this,UnityEngine_Renderer_o *renderer,MethodInfo *method)

{
  return renderer;
}


// Characters.AnimationHandler$$.ctor
// il2cpp: void Characters_AnimationHandler___ctor (Characters_AnimationHandler_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x5bb0750
// eh: try 0x5bb0b0f..0x5bb0f0c -> pad 0x5bb0f27 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5bb0f44..0x5bb0f49 -> pad 0x5bb0f4e cleanup
// eh: try 0x5bb0f51..0x5bb0f5b -> pad 0x5bb0f63 catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bb0afe: nop 
// asm:   0x5bb0cb6: test r15, r15
// asm:   0x5bb0cb9: jne 0x5bb0f11
// asm:   0x5bb0cbf: cmp r14d, 5
// asm:   0x5bb0cc3: je 0x5bb0e50
// asm:   0x5bb0cc9: test r14d, r14d
// asm:   0x5bb0ccc: jne 0x5bb0edc
// asm:   0x5bb0f11: mov rdi, r15
// asm:   0x5bb0f14: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5bb0f19: jmp 0x5bb0f29
// asm:   0x5bb0f1b: jmp 0x5bb0f29
// asm:   0x5bb0f1d: jmp 0x5bb0f29
// asm:   0x5bb0f1f: jmp 0x5bb0f29
// asm:   0x5bb0f21: jmp 0x5bb0f29
// asm:   0x5bb0f23: jmp 0x5bb0f29
// asm:   0x5bb0f25: jmp 0x5bb0f29
// asm:   0x5bb0f27: jmp 0x5bb0f29
// asm:   0x5bb0f29: mov rbp, rax
// asm:   0x5bb0f2c: cmp edx, 1
// asm:   0x5bb0f2f: jne 0x5bb0f51
// asm:   0x5bb0f31: mov rdi, rbp
// asm:   0x5bb0f34: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bb0f39: mov r15, qword ptr [rax]
// asm:   0x5bb0f3c: mov qword ptr [rsp + 0x60], r15
// asm:   0x5bb0f41: xor r14d, r14d
// asm:   0x5bb0f44: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bb0f49: jmp 0x5bb0c34
// asm:   0x5bb0f4e: mov rbp, rax
// asm:   0x5bb0f51: lea rdi, [rsp + 0x60]
// asm:   0x5bb0f56: call 0x2fd87e0  ; il2cpp_runtime_helper_02fd87e0()
// asm:   0x5bb0f5b: mov rdi, rbp
// asm:   0x5bb0f5e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5bb0f63: mov rdi, rax
// asm:   0x5bb0f66: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_AnimationHandler___ctor
               (Characters_AnimationHandler_o *__this,UnityEngine_GameObject_o *owner,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  UnityEngine_AnimationClip_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  bool bVar4;
  uint uVar5;
  System_Collections_Generic_Dictionary_string__float__o *pSVar6;
  System_Collections_Generic_Dictionary_string__AnimationClip__o *__this_01;
  System_Collections_Generic_Dictionary_string__string__o *__this_02;
  System_Collections_Generic_Dictionary_Renderer__bool__o *__this_03;
  Characters_BaseCharacter_o *pCVar7;
  UnityEngine_Animation_o *pUVar8;
  UnityEngine_Animator_o *pUVar9;
  VirtualInvokeData *pVVar10;
  UnityEngine_AnimationState_o *__this_04;
  System_String_o *pSVar11;
  Il2CppObject *pIVar12;
  UnityEngine_RuntimeAnimatorController_o *__this_05;
  UnityEngine_AnimationClip_array *pUVar13;
  System_String_o *pSVar14;
  ulong uVar15;
  uint uVar16;
  System_IDisposable_c *method_00;
  long lVar17;
  float value;
  UnityEngine_Playables_PlayableGraph_o UVar18;
  Il2CppObject *local_a8;
  UnityEngine_Animator_o **local_a0;
  System_Collections_Generic_Dictionary_string__float__o **local_98;
  Il2CppObject *local_90;
  UnityEngine_Playables_PlayableGraph_o local_88;
  Characters_AnimationHandler_Fields *local_70;
  Characters_AnimationHandler_o *local_68;
  Characters_BaseCharacter_o **local_60;
  System_Collections_Generic_Dictionary_string__AnimationClip__o **local_58;
  System_Collections_Generic_Dictionary_string__string__o **local_50;
  undefined8 local_48;
  undefined1 *local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_075474c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AnimationState);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_Renderer_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_AnimationClip);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Animation);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Animator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075474c2 = '\x01';
  }
  local_a8 = (Il2CppObject *)0x0;
  local_90 = (Il2CppObject *)0x0;
  local_88.fields.m_Handle = 0;
  local_88.fields.m_Version = 0;
  local_88.fields._12_4_ = 0;
  pSVar6 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,
             (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  local_98 = &(__this->fields)._animationSpeed;
  (__this->fields)._animationSpeed = pSVar6;
  Il2CppCodeGenWriteBarrier(local_98);
  pSVar6 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,
             (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  (__this->fields)._speedMultipliers = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._speedMultipliers);
  (__this->fields)._currentAnimation = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentAnimation);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_AnimationClip);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_ctor)
  ;
  local_58 = &(__this->fields)._animatorClips;
  (__this->fields)._animatorClips = __this_01;
  Il2CppCodeGenWriteBarrier(local_58);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  local_50 = &(__this->fields)._animatorStateNames;
  (__this->fields)._animatorStateNames = __this_02;
  Il2CppCodeGenWriteBarrier(local_50);
  (__this->fields)._shadowsEnabled = true;
  (__this->fields)._visible = true;
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Renderer_bool);
  System_Collections_Generic_Dictionary_object__bool____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
             (MethodInfo_4A749F0 *)MethodInfo_System_Collections_Generic_Dictionary_Renderer_bool_ctor);
  (__this->fields)._shadowCasters = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._shadowCasters);
  (__this->fields)._skinQuality = 4;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (owner == (UnityEngine_GameObject_o *)0x0) goto label_05bb0eeb;
  pCVar7 = UnityEngine_GameObject__GetComponent_object_
                     (owner,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter
                     );
  local_60 = &(__this->fields).Owner;
  (__this->fields).Owner = pCVar7;
  Il2CppCodeGenWriteBarrier(local_60);
  (__this->fields).OwnerObject = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerObject);
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     (owner,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Animation);
  local_70 = &__this->fields;
  (__this->fields).Animation = pUVar8;
  Il2CppCodeGenWriteBarrier(&local_70->Animation);
  pUVar9 = UnityEngine_GameObject__GetComponent_object_
                     (owner,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Animator);
  local_a0 = &(__this->fields).Animator;
  (__this->fields).Animator = pUVar9;
  Il2CppCodeGenWriteBarrier(local_a0);
  pUVar8 = (__this->fields).Animation;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    (__this->fields)._isLegacy = true;
    pUVar8 = (__this->fields).Animation;
    if (pUVar8 != (UnityEngine_Animation_o *)0x0) {
      local_a8 = (Il2CppObject *)UnityEngine_Animation__GetEnumerator(pUVar8,(MethodInfo *)0x0);
      local_40 = (undefined1 *)&local_a8;
      local_48 = 0;
      local_38 = &local_90;
      do {
        pIVar12 = local_a8;
        if (local_a8 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar1 = local_a8->klass;
        uVar15 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar15 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar17 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar17) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar10 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar17);
              goto label_05bb0b33;
            }
            lVar17 = lVar17 + 0x10;
          } while (uVar15 * 0x10 != lVar17);
        }
        pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_a8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05bb0b33:
        bVar4 = (*pVVar10->methodPtr)(pIVar12,pVVar10->method);
        pIVar12 = local_a8;
        if (!bVar4) {
          method_00 = TypeInfo_System_IDisposable;
          pIVar12 = il2cpp_vm_Object_IsInst(local_a8,(Il2CppClass *)TypeInfo_System_IDisposable);
          local_90 = pIVar12;
          if (pIVar12 == (Il2CppObject *)0x0) goto label_05bb0e50;
          pIVar1 = pIVar12->klass;
          uVar15 = (ulong)(pIVar1->_2).interface_offsets_count;
          if (uVar15 == 0) goto label_05bb0c8f;
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar17 = 0;
          goto label_05bb0c80;
        }
        if (local_a8 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar1 = local_a8->klass;
        uVar15 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar15 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar17 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar17) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar10 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar17) + 1);
              goto label_05bb0bc7;
            }
            lVar17 = lVar17 + 0x10;
          } while (uVar15 * 0x10 != lVar17);
        }
        pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_a8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05bb0bc7:
        __this_04 = (UnityEngine_AnimationState_o *)(*pVVar10->methodPtr)(pIVar12,pVVar10->method);
        if (__this_04 == (UnityEngine_AnimationState_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (__this_04->klass != TypeInfo_UnityEngine_AnimationState) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_04);
        }
        pSVar6 = *local_98;
        pSVar11 = UnityEngine_AnimationState__get_name(__this_04,(MethodInfo *)0x0);
        value = UnityEngine_AnimationState__get_speed(__this_04,(MethodInfo *)0x0);
        if (pSVar6 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_object__float___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,(Il2CppObject *)pSVar11,
                   value,(MethodInfo_4AB5450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
      } while( true );
    }
    goto label_05bb0eeb;
  }
  if (((*local_a0 == (UnityEngine_Animator_o *)0x0) ||
      (__this_05 = UnityEngine_Animator__get_runtimeAnimatorController(*local_a0,(MethodInfo *)0x0),
      __this_05 == (UnityEngine_RuntimeAnimatorController_o *)0x0)) ||
     (local_68 = __this,
     pUVar13 = UnityEngine_RuntimeAnimatorController__get_animationClips(__this_05,(MethodInfo *)0x0),
     pUVar13 == (UnityEngine_AnimationClip_array *)0x0)) goto label_05bb0eeb;
  uVar5 = (uint)pUVar13->max_length;
  if (0 < (int)uVar5) {
    uVar16 = 0;
    do {
      if (uVar5 <= uVar16) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = pUVar13->m_Items[(int)uVar16];
      if (__this_00 == (UnityEngine_AnimationClip_o *)0x0) goto label_05bb0eeb;
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)*local_50;
      pSVar11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
      pSVar14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
      if ((pSVar14 == (System_String_o *)0x0) ||
         (pSVar14 = System_String__Replace(pSVar14,0x2e,0x5f,(MethodInfo *)0x0),
         pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_05bb0eeb;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar3,(Il2CppObject *)pSVar11,(Il2CppObject *)pSVar14,
                 (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                );
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)*local_58;
      pSVar11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05bb0eeb;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar3,(Il2CppObject *)pSVar11,(Il2CppObject *)__this_00,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_set_Item);
      pSVar6 = *local_98;
      pSVar11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
      if (pSVar6 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_05bb0eeb;
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,(Il2CppObject *)pSVar11,1.0,
                 (MethodInfo_4AB5450 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item)
      ;
      uVar16 = uVar16 + 1;
      uVar5 = (uint)pUVar13->max_length;
    } while ((int)uVar16 < (int)uVar5);
  }
  if (*local_a0 == (UnityEngine_Animator_o *)0x0) goto label_05bb0eeb;
  UVar18 = UnityEngine_Animator__get_playableGraph(*local_a0,(MethodInfo *)0x0);
  local_88.fields.m_Handle = UVar18.fields.m_Handle;
  local_88.fields.m_Version = UVar18.fields.m_Version;
  method_00 = (System_IDisposable_c *)0x1;
  UnityEngine_Playables_PlayableGraph__SetTimeUpdateMode(&local_88,1,(MethodInfo *)0x0);
  __this = local_68;
  goto label_05bb0e50;
  while (lVar17 = lVar17 + 0x10, uVar15 * 0x10 != lVar17) {
label_05bb0c80:
    if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar17) == TypeInfo_System_IDisposable) {
      pVVar10 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar17);
      goto label_05bb0cad;
    }
  }
label_05bb0c8f:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar12,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05bb0cad:
  method_00 = (System_IDisposable_c *)pVVar10->method;
  (*pVVar10->methodPtr)(pIVar12,(MethodInfo *)method_00);
label_05bb0e50:
  Characters_AnimationHandler__RefreshRenderers(__this,(MethodInfo *)method_00);
  pCVar7 = (__this->fields).Owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pCVar7 = *local_60;
    if (pCVar7 == (Characters_BaseCharacter_o *)0x0) goto label_05bb0eeb;
    bVar4 = (*(pCVar7->klass->vtable)._69_AlwaysAnimate.methodPtr)
                      (pCVar7,(pCVar7->klass->vtable)._69_AlwaysAnimate.method);
    if (bVar4) {
      if ((__this->fields)._isLegacy == false) {
        if (*local_a0 == (UnityEngine_Animator_o *)0x0) goto label_05bb0eeb;
        UnityEngine_Animator__set_cullingMode(*local_a0,0,(MethodInfo *)0x0);
      }
      else {
        if (local_70->Animation == (UnityEngine_Animation_o *)0x0) {
label_05bb0eeb:
          ThrowNullReferenceException();
        }
        UnityEngine_Animation__set_cullingType(local_70->Animation,0,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Characters.AnimationHandler$$RefreshRenderers
// il2cpp: void Characters_AnimationHandler__RefreshRenderers (Characters_AnimationHandler_o* __this, const MethodInfo* method);
// 0x5bb0f70
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bb104d: jmp 0x5bb1067
// asm:   0x5bb111c: jmp 0x5bb1136
// asm:   0x5bb11fe: nop 

void Characters_AnimationHandler__RefreshRenderers(Characters_AnimationHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar3;
  System_Object_array *source;
  System_Func_Renderer__bool__o *pSVar4;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  UnityEngine_Renderer_array *pUVar5;
  Characters_AnimationHandler___c_StaticFields *pCVar6;
  System_Func_Renderer__Renderer__o *__this_01;
  System_Collections_Generic_Dictionary_TKey__TElement__o *pSVar7;
  ulong uVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  ulong uVar9;
  
  if (Il2CppMethodInitialized_075474c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Characters_AnimationHandler_RefreshRenderers_b__19_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_Renderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToDictionary_Renderer_Renderer_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Renderer_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Renderer_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer_71ab218);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Characters_AnimationHandler_c_RefreshRenderers_b__19_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Characters_AnimationHandler_c_RefreshRenderers_b__19_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AnimationHandler_c);
    Il2CppMethodInitialized_075474c3 = '\x01';
  }
  __this_00 = (__this->fields).OwnerObject;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    source = UnityEngine_GameObject__GetComponentsInChildren_object_
                       (__this_00,true,
                        (MethodInfo_353C0B0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer_71ab218);
    if ((TypeInfo_Characters_AnimationHandler_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_AnimationHandler_c);
      pCVar6 = TypeInfo_Characters_AnimationHandler_c->static_fields;
      pSVar4 = pCVar6->__9__19_0;
    }
    else {
      pCVar6 = TypeInfo_Characters_AnimationHandler_c->static_fields;
      pSVar4 = pCVar6->__9__19_0;
    }
    if (pSVar4 == (System_Func_Renderer__bool__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Characters_AnimationHandler_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_AnimationHandler_c);
        pCVar6 = TypeInfo_Characters_AnimationHandler_c->static_fields;
      }
      pIVar3 = (Il2CppObject *)pCVar6->__9;
      pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Renderer_bool);
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)pSVar4,pIVar3,
                 (intptr_t)MethodInfo_Characters_AnimationHandler_c_RefreshRenderers_b__19_0,
                 (MethodInfo_4F19300 *)0x0);
      pCVar6 = TypeInfo_Characters_AnimationHandler_c->static_fields;
      pCVar6->__9__19_0 = pSVar4;
      Il2CppCodeGenWriteBarrier(&pCVar6->__9__19_0);
    }
    source_00 = System_Linq_Enumerable__Where_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__bool__o *)pSVar4,
                           (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_Renderer);
    pUVar5 = (UnityEngine_Renderer_array *)
             System_Linq_Enumerable__ToArray_object_
                       (source_00,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_Renderer);
    (__this->fields).Renderers = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Renderers);
    pUVar5 = (__this->fields).Renderers;
    if ((TypeInfo_Characters_AnimationHandler_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_AnimationHandler_c);
      pCVar6 = TypeInfo_Characters_AnimationHandler_c->static_fields;
      __this_01 = pCVar6->__9__19_1;
    }
    else {
      pCVar6 = TypeInfo_Characters_AnimationHandler_c->static_fields;
      __this_01 = pCVar6->__9__19_1;
    }
    if (__this_01 == (System_Func_Renderer__Renderer__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Characters_AnimationHandler_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_AnimationHandler_c);
        pCVar6 = TypeInfo_Characters_AnimationHandler_c->static_fields;
      }
      pIVar3 = (Il2CppObject *)pCVar6->__9;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Renderer_Renderer);
      System_Func_object__object____ctor
                ((System_Func_object__object__o *)__this_01,pIVar3,
                 (intptr_t)MethodInfo_Characters_AnimationHandler_c_RefreshRenderers_b__19_1,
                 (MethodInfo_4F19B50 *)0x0);
      pCVar6 = TypeInfo_Characters_AnimationHandler_c->static_fields;
      pCVar6->__9__19_1 = __this_01;
      Il2CppCodeGenWriteBarrier(&pCVar6->__9__19_1);
    }
    pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Renderer_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)pSVar4,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Characters_AnimationHandler_RefreshRenderers_b__19_2,
               (MethodInfo_4F19300 *)0x0);
    pSVar7 = System_Linq_Enumerable__ToDictionary_object__object__bool_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar5,
                        (System_Func_TSource__TKey__o *)__this_01,(System_Func_TSource__TElement__o *)pSVar4,
                        (MethodInfo_34FED20 *)
                        MethodInfo_System_Linq_Enumerable_ToDictionary_Renderer_Renderer_bool);
    (__this->fields)._shadowCasters = (System_Collections_Generic_Dictionary_Renderer__bool__o *)pSVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._shadowCasters);
    piVar1 = &(__this->fields)._renderStateVersion;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (__this->fields).Renderers;
    if (pUVar5 != (UnityEngine_Renderer_array *)0x0) {
      if (0 < (int)pUVar5->max_length) {
        uVar8 = pUVar5->max_length & 0xffffffff;
        uVar9 = 0;
        method_00 = extraout_RDX;
        do {
          if (uVar8 <= uVar9) {
            ThrowIndexOutOfRangeException();
          }
          Characters_AnimationHandler__ApplyRenderState_5ab2690(__this,pUVar5->m_Items[uVar9],method_00);
          uVar9 = uVar9 + 1;
          uVar2 = (uint)pUVar5->max_length;
          uVar8 = (ulong)uVar2;
          method_00 = extraout_RDX_00;
        } while ((long)uVar9 < (long)(int)uVar2);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$RestoreDefaultShadows
// il2cpp: void Characters_AnimationHandler__RestoreDefaultShadows (Characters_AnimationHandler_o* __this, UnityEngine_Transform_o* root, const MethodInfo* method);
// 0x5bb1300

void Characters_AnimationHandler__RestoreDefaultShadows
               (Characters_AnimationHandler_o *__this,UnityEngine_Transform_o *root,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  System_Collections_Generic_Dictionary_Renderer__bool__o *__this_01;
  bool bVar1;
  uint uVar2;
  ulong in_RAX;
  System_Object_array *pSVar3;
  uint uVar4;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_075474c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer_71a4fd0);
    Il2CppMethodInitialized_075474c4 = '\x01';
  }
  if (root != (UnityEngine_Transform_o *)0x0) {
    pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)root,true,
                        (MethodInfo_34B1260 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer_71a4fd0);
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (uint)pSVar3->max_length;
      if (0 < (int)uVar2) {
        uVar4 = 0;
        do {
          if (uVar2 <= uVar4) {
            ThrowIndexOutOfRangeException();
          }
          __this_00 = (UnityEngine_Renderer_o *)pSVar3->m_Items[(int)uVar4];
          if (Il2CppMethodInitialized_075474c5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_bool_TryGetValue);
            Il2CppMethodInitialized_075474c5 = '\x01';
          }
          uStack_38 = uStack_38 & 0xffffffffffffff;
          __this_01 = (__this->fields)._shadowCasters;
          if (__this_01 == (System_Collections_Generic_Dictionary_Renderer__bool__o *)0x0) goto label_05bb13f7;
          bVar1 = System_Collections_Generic_Dictionary_object__bool___TryGetValue
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                             (Il2CppObject *)__this_00,(bool *)((long)&uStack_38 + 7),
                             (MethodInfo_4A774E0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Renderer_bool_TryGetValue);
          if (__this_00 == (UnityEngine_Renderer_o *)0x0) goto label_05bb13f7;
          UnityEngine_Renderer__set_shadowCastingMode
                    (__this_00,(uint)(uStack_38._7_1_ != '\0' || !bVar1),(MethodInfo *)0x0);
          uVar4 = uVar4 + 1;
          uVar2 = (uint)pSVar3->max_length;
        } while ((int)uVar4 < (int)uVar2);
      }
      return;
    }
  }
label_05bb13f7:
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$CastsShadows
// il2cpp: bool Characters_AnimationHandler__CastsShadows (Characters_AnimationHandler_o* __this, UnityEngine_Renderer_o* renderer, bool fallback, const MethodInfo* method);
// 0x5bb1410

bool Characters_AnimationHandler__CastsShadows
               (Characters_AnimationHandler_o *__this,UnityEngine_Renderer_o *renderer,bool fallback,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Renderer__bool__o *__this_00;
  bool bVar1;
  bool bVar2;
  bool bStack_19;
  
  if (Il2CppMethodInitialized_075474c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_bool_TryGetValue);
    Il2CppMethodInitialized_075474c5 = '\x01';
  }
  bStack_19 = false;
  __this_00 = (__this->fields)._shadowCasters;
  if (__this_00 == (System_Collections_Generic_Dictionary_Renderer__bool__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__bool___TryGetValue
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                     (Il2CppObject *)renderer,&bStack_19,
                     (MethodInfo_4A774E0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Renderer_bool_TryGetValue);
  bVar2 = bStack_19 != false;
  if (!bVar1) {
    bVar2 = fallback;
  }
  return bVar2;
}


// Characters.AnimationHandler$$GetCurrentAnimation
// il2cpp: System_String_o* Characters_AnimationHandler__GetCurrentAnimation (Characters_AnimationHandler_o* __this, const MethodInfo* method);
// 0x5bb1490
// eh: try 0x5bb157f..0x5bb1775 -> pad 0x5bb1794 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5bb17ac..0x5bb17b1 -> pad 0x5bb17b9 cleanup
// eh: try 0x5bb17bc..0x5bb17c6 -> pad 0x5bb17ce catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bb156d: nop dword ptr [rax]
// asm:   0x5bb177a: mov rdi, r14
// asm:   0x5bb177d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5bb1782: jmp 0x5bb1794
// asm:   0x5bb1784: jmp 0x5bb1794
// asm:   0x5bb1786: jmp 0x5bb1794
// asm:   0x5bb1788: jmp 0x5bb1794
// asm:   0x5bb178a: jmp 0x5bb1794
// asm:   0x5bb178c: jmp 0x5bb1794
// asm:   0x5bb178e: jmp 0x5bb1794
// asm:   0x5bb1790: jmp 0x5bb1794
// asm:   0x5bb1792: jmp 0x5bb1794
// asm:   0x5bb1794: mov r14, rax
// asm:   0x5bb1797: cmp edx, 1
// asm:   0x5bb179a: jne 0x5bb17bc
// asm:   0x5bb179c: mov rdi, r14
// asm:   0x5bb179f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bb17a4: mov r14, qword ptr [rax]
// asm:   0x5bb17a7: mov qword ptr [rsp + 0x10], r14
// asm:   0x5bb17ac: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bb17b1: xor r13d, r13d
// asm:   0x5bb17b4: jmp 0x5bb16a4
// asm:   0x5bb17b9: mov r14, rax
// asm:   0x5bb17bc: lea rdi, [rsp + 0x10]
// asm:   0x5bb17c1: call 0x2fd8880  ; il2cpp_runtime_helper_02fd8880()
// asm:   0x5bb17c6: mov rdi, r14
// asm:   0x5bb17c9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5bb17ce: mov rdi, rax
// asm:   0x5bb17d1: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
Characters_AnimationHandler__GetCurrentAnimation(Characters_AnimationHandler_o *__this,MethodInfo *method)

{
  UnityEngine_Animation_o *pUVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  UnityEngine_AnimationState_o *__this_00;
  System_String_o *pSVar6;
  Il2CppObject *pIVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  Il2CppObject *local_58;
  Il2CppObject *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_075474c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AnimationState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075474c6 = '\x01';
  }
  local_50 = (Il2CppObject *)0x0;
  if ((__this->fields)._isLegacy != false) {
    pUVar1 = (__this->fields).Animation;
    if (pUVar1 == (UnityEngine_Animation_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_58 = (Il2CppObject *)UnityEngine_Animation__GetEnumerator(pUVar1,(MethodInfo *)0x0);
    local_40 = (undefined1 *)&local_58;
    local_48 = 0;
    local_38 = &local_50;
    do {
      pIVar7 = local_58;
      if (local_58 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = local_58->klass;
      uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar9 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar9) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
            goto label_05bb15a3;
          }
          lVar9 = lVar9 + 0x10;
        } while (uVar8 * 0x10 != lVar9);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05bb15a3:
      bVar4 = (*pVVar5->methodPtr)(pIVar7,pVVar5->method);
      pIVar7 = local_58;
      if (!bVar4) {
        iVar10 = 6;
        pSVar6 = (System_String_o *)0x0;
        goto label_05bb16a7;
      }
      if (local_58 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = local_58->klass;
      uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar9 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar9) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar9) + 1);
            goto label_05bb1637;
          }
          lVar9 = lVar9 + 0x10;
        } while (uVar8 * 0x10 != lVar9);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05bb1637:
      __this_00 = (UnityEngine_AnimationState_o *)(*pVVar5->methodPtr)(pIVar7,pVVar5->method);
      if (__this_00 == (UnityEngine_AnimationState_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (__this_00->klass != TypeInfo_UnityEngine_AnimationState) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00);
      }
      pUVar1 = (__this->fields).Animation;
      pSVar6 = UnityEngine_AnimationState__get_name(__this_00,(MethodInfo *)0x0);
      if (pUVar1 == (UnityEngine_Animation_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar4 = UnityEngine_Animation__IsPlaying(pUVar1,pSVar6,(MethodInfo *)0x0);
    } while (!bVar4);
    pSVar6 = UnityEngine_AnimationState__get_name(__this_00,(MethodInfo *)0x0);
    iVar10 = 5;
label_05bb16a7:
    pIVar7 = il2cpp_vm_Object_IsInst(local_58,(Il2CppClass *)TypeInfo_System_IDisposable);
    if (pIVar7 != (Il2CppObject *)0x0) {
      pIVar2 = pIVar7->klass;
      uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
      local_50 = pIVar7;
      if (uVar8 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar9 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar9) == TypeInfo_System_IDisposable)
          {
            pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
            goto label_05bb171d;
          }
          lVar9 = lVar9 + 0x10;
        } while (uVar8 * 0x10 != lVar9);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05bb171d:
      (*pVVar5->methodPtr)(pIVar7,pVVar5->method);
    }
    if (iVar10 == 6) {
      return "";
    }
    if (iVar10 != 0) {
      return pSVar6;
    }
  }
  return (__this->fields)._currentAnimation;
}


// Characters.AnimationHandler$$GetLength
// il2cpp: float Characters_AnimationHandler__GetLength (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5bb17e0

float Characters_AnimationHandler__GetLength
                (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  UnityEngine_AnimationState_o *__this_02;
  UnityEngine_AnimationClip_o *__this_03;
  float fVar1;
  
  if (Il2CppMethodInitialized_075474c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_get_Item);
    Il2CppMethodInitialized_075474c7 = '\x01';
  }
  if ((__this->fields)._isLegacy == false) {
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._animatorClips;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_03 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_01,(Il2CppObject *)name,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_get_Item);
      if (__this_03 != (UnityEngine_AnimationClip_o *)0x0) {
        fVar1 = UnityEngine_AnimationClip__get_length(__this_03,(MethodInfo *)0x0);
        return fVar1;
      }
    }
  }
  else {
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (UnityEngine_Animation_o *)0x0) {
      __this_02 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_AnimationState_o *)0x0) {
        fVar1 = UnityEngine_AnimationState__get_length(__this_02,(MethodInfo *)0x0);
        return fVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$GetSpeed
// il2cpp: float Characters_AnimationHandler__GetSpeed (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5bb1870

float Characters_AnimationHandler__GetSpeed
                (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *pSVar1;
  bool bVar2;
  uint in_EAX;
  float fVar3;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_075474c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
    Il2CppMethodInitialized_075474c8 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  pSVar1 = (__this->fields)._speedMultipliers;
  if (pSVar1 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__float___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)name,
                       (float *)((long)&uStack_18 + 4),
                       (MethodInfo_4AB7350 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_float_TryGetValue);
    pSVar1 = (__this->fields)._animationSpeed;
    if (bVar2) {
      if (pSVar1 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        fVar3 = System_Collections_Generic_Dictionary_object__float___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                           (Il2CppObject *)name,
                           (MethodInfo_4AB53E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
        return fVar3 * uStack_18._4_4_;
      }
    }
    else if (pSVar1 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      fVar3 = System_Collections_Generic_Dictionary_object__float___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)name,
                         (MethodInfo_4AB53E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      return fVar3;
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$GetBaseSpeed
// il2cpp: float Characters_AnimationHandler__GetBaseSpeed (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5bb1920

float Characters_AnimationHandler__GetBaseSpeed
                (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  float fVar1;
  
  if (Il2CppMethodInitialized_075474c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
    Il2CppMethodInitialized_075474c9 = '\x01';
  }
  __this_00 = (__this->fields)._animationSpeed;
  if (__this_00 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = System_Collections_Generic_Dictionary_object__float___get_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)name,
                     (MethodInfo_4AB53E0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
  return fVar1;
}


// Characters.AnimationHandler$$GetTotalTime
// il2cpp: float Characters_AnimationHandler__GetTotalTime (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5bb1970

float Characters_AnimationHandler__GetTotalTime
                (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  MethodInfo *method_00;
  float fVar1;
  float fVar2;
  
  fVar1 = Characters_AnimationHandler__GetLength(__this,name,method);
  fVar2 = Characters_AnimationHandler__GetSpeed(__this,name,method_00);
  return fVar1 / fVar2;
}


// Characters.AnimationHandler$$GetNormalizedTime
// il2cpp: float Characters_AnimationHandler__GetNormalizedTime (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5bb19b0

float Characters_AnimationHandler__GetNormalizedTime
                (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_AnimationState_o *__this_01;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  float fVar1;
  
  if ((__this->fields)._isLegacy == false) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"GetNormalizedTime only available for legacy animations.");
    System_Exception___ctor_54fa440(__this_02,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_Characters_AnimationHandler_GetNormalizedTime);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
  }
  __this_00 = (__this->fields).Animation;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
      fVar1 = UnityEngine_AnimationState__get_normalizedTime(__this_01,(MethodInfo *)0x0);
      return fVar1;
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$GetCurrentNormalizedTime
// il2cpp: float Characters_AnimationHandler__GetCurrentNormalizedTime (Characters_AnimationHandler_o* __this, const MethodInfo* method);
// 0x5bb1a30

float Characters_AnimationHandler__GetCurrentNormalizedTime
                (Characters_AnimationHandler_o *__this,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((__this->fields)._isLegacy == false) {
    fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    name = (__this->fields)._currentAnimation;
    fVar1 = (__this->fields)._currentAnimationStartTime;
    fVar3 = Characters_AnimationHandler__GetLength(__this,name,method_00);
    fVar4 = Characters_AnimationHandler__GetSpeed(__this,name,method_01);
    return (fVar2 - fVar1) / (fVar3 / fVar4);
  }
  __this_00 = (__this->fields).Animation;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    __this_01 = UnityEngine_Animation__get_Item
                          (__this_00,(__this->fields)._currentAnimation,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
      fVar1 = UnityEngine_AnimationState__get_normalizedTime(__this_01,(MethodInfo *)0x0);
      return fVar1;
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$IsPlaying
// il2cpp: bool Characters_AnimationHandler__IsPlaying (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5ba8860

bool Characters_AnimationHandler__IsPlaying
               (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  bool bVar1;
  
  if ((__this->fields)._isLegacy == false) {
    bVar1 = System_String__op_Equality((__this->fields)._currentAnimation,name,(MethodInfo *)0x0);
    return bVar1;
  }
  __this_00 = (__this->fields).Animation;
  if (__this_00 == (UnityEngine_Animation_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Animation__IsPlaying(__this_00,name,(MethodInfo *)0x0);
  return bVar1;
}


// Characters.AnimationHandler$$Play
// il2cpp: void Characters_AnimationHandler__Play (Characters_AnimationHandler_o* __this, System_String_o* name, float startTime, bool reset, const MethodInfo* method);
// 0x5bb1ac0

void Characters_AnimationHandler__Play
               (Characters_AnimationHandler_o *__this,System_String_o *name,float startTime,bool reset,
               MethodInfo *method)

{
  UnityEngine_Animation_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_Animator_o *pUVar2;
  UnityEngine_AnimationState_o *__this_01;
  System_String_o *stateName;
  MethodInfo *method_00;
  float fVar3;
  
  if (Il2CppMethodInitialized_075474ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    Il2CppMethodInitialized_075474ca = '\x01';
  }
  if ((__this->fields)._isLegacy == false) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._animatorStateNames;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar2 = (__this->fields).Animator;
      stateName = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_00,(Il2CppObject *)name,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      if (pUVar2 != (UnityEngine_Animator_o *)0x0) {
        UnityEngine_Animator__Play(pUVar2,stateName,0,startTime,(MethodInfo *)0x0);
        pUVar2 = (__this->fields).Animator;
        fVar3 = Characters_AnimationHandler__GetSpeed(__this,name,method_00);
        if (pUVar2 != (UnityEngine_Animator_o *)0x0) {
          UnityEngine_Animator__set_speed(pUVar2,fVar3,(MethodInfo *)0x0);
          goto label_05bb1baf;
        }
      }
    }
  }
  else {
    pUVar1 = (__this->fields).Animation;
    if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
      UnityEngine_Animation__Play(pUVar1,name,(MethodInfo *)0x0);
      if ((startTime <= 0.0) && (!reset)) {
label_05bb1baf:
        (__this->fields)._currentAnimation = name;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._currentAnimation);
        fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        (__this->fields)._currentAnimationStartTime = fVar3;
        return;
      }
      pUVar1 = (__this->fields).Animation;
      if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
        __this_01 = UnityEngine_Animation__get_Item(pUVar1,name,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
          UnityEngine_AnimationState__set_normalizedTime(__this_01,startTime,(MethodInfo *)0x0);
          goto label_05bb1baf;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$CrossFade
// il2cpp: void Characters_AnimationHandler__CrossFade (Characters_AnimationHandler_o* __this, System_String_o* name, float fade, float startTime, const MethodInfo* method);
// 0x5bb1be0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bb1cd6: mov rdi, r15
// asm:   0x5bb1cd9: mov rsi, rax
// asm:   0x5bb1cdc: movss xmm0, dword ptr [rsp]
// asm:   0x5bb1ce1: jmp 0x5bb1d4a

void Characters_AnimationHandler__CrossFade
               (Characters_AnimationHandler_o *__this,System_String_o *name,float fade,float startTime,
               MethodInfo *method)

{
  UnityEngine_Animation_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  UnityEngine_AnimationState_o *__this_00;
  System_String_o *stateName;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_02;
  UnityEngine_Animator_o *pUVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_075474cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    Il2CppMethodInitialized_075474cb = '\x01';
  }
  if ((__this->fields)._isLegacy != false) {
    pUVar1 = (__this->fields).Animation;
    if (pUVar1 == (UnityEngine_Animation_o *)0x0) goto label_05bb1d9f;
    UnityEngine_Animation__CrossFade(pUVar1,name,fade,(MethodInfo *)0x0);
    if (0.0 < startTime) {
      pUVar1 = (__this->fields).Animation;
      if ((pUVar1 == (UnityEngine_Animation_o *)0x0) ||
         (__this_00 = UnityEngine_Animation__get_Item(pUVar1,name,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_AnimationState_o *)0x0)) goto label_05bb1d9f;
      UnityEngine_AnimationState__set_normalizedTime(__this_00,startTime,(MethodInfo *)0x0);
    }
    goto label_05bb1d77;
  }
  bVar3 = System_String__op_Equality
                    ((__this->fields)._currentAnimation,
                     (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar3) {
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._animatorStateNames;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05bb1d9f;
    pUVar4 = (__this->fields).Animator;
    stateName = System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar2,(Il2CppObject *)name,
                           (MethodInfo_4AAD450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    if (pUVar4 == (UnityEngine_Animator_o *)0x0) goto label_05bb1d9f;
label_05bb1d4a:
    UnityEngine_Animator__CrossFade(pUVar4,stateName,fade,0,startTime,(MethodInfo *)0x0);
    method_02 = extraout_RDX_00;
  }
  else {
    if ((__this->fields).LegacyCrossFadeTiming == false) {
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._animatorStateNames
      ;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05bb1d9f;
      pUVar4 = (__this->fields).Animator;
      stateName = System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar2,(Il2CppObject *)name,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      fVar5 = Characters_AnimationHandler__GetLength(__this,(__this->fields)._currentAnimation,method_01);
      if (pUVar4 == (UnityEngine_Animator_o *)0x0) goto label_05bb1d9f;
      fade = fade / fVar5;
      goto label_05bb1d4a;
    }
    Characters_AnimationHandler__LegacyCrossFade(__this,name,fade,startTime,method_00);
    method_02 = extraout_RDX;
  }
  pUVar4 = (__this->fields).Animator;
  fVar5 = Characters_AnimationHandler__GetSpeed(__this,name,method_02);
  if (pUVar4 == (UnityEngine_Animator_o *)0x0) {
label_05bb1d9f:
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__set_speed(pUVar4,fVar5,(MethodInfo *)0x0);
label_05bb1d77:
  (__this->fields)._currentAnimation = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentAnimation);
  fVar5 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._currentAnimationStartTime = fVar5;
  return;
}


// Characters.AnimationHandler$$LegacyCrossFade
// il2cpp: void Characters_AnimationHandler__LegacyCrossFade (Characters_AnimationHandler_o* __this, System_String_o* name, float fade, float startTime, const MethodInfo* method);
// 0x5bb1db0

void Characters_AnimationHandler__LegacyCrossFade
               (Characters_AnimationHandler_o *__this,System_String_o *name,float fade,float startTime,
               MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_075474cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    Il2CppMethodInitialized_075474cc = '\x01';
  }
  fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = fade - fVar2;
  __this_00 = (__this->fields).Animator;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._animatorStateNames;
  if (fVar2 <= 0.0) {
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar1 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_01,(Il2CppObject *)name,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      if (__this_00 != (UnityEngine_Animator_o *)0x0) {
        UnityEngine_Animator__Play(__this_00,pSVar1,0,startTime,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar1 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (__this_01,(Il2CppObject *)name,
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    fVar3 = Characters_AnimationHandler__GetSpeed(__this,name,method_00);
    fVar4 = Characters_AnimationHandler__GetLength(__this,(__this->fields)._currentAnimation,method_01);
    fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Animator_o *)0x0) {
      UnityEngine_Animator__CrossFade_68ab510
                (__this_00,pSVar1,(fVar3 * fVar2) / fVar4,0,startTime,-fVar5 / fVar2,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$SetSpeed
// il2cpp: void Characters_AnimationHandler__SetSpeed (Characters_AnimationHandler_o* __this, System_String_o* name, float speed, const MethodInfo* method);
// 0x5bb1ef0

void Characters_AnimationHandler__SetSpeed
               (Characters_AnimationHandler_o *__this,System_String_o *name,float speed,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075474cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
    Il2CppMethodInitialized_075474cd = '\x01';
  }
  __this_00 = (__this->fields)._animationSpeed;
  if (__this_00 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__float___set_Item
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)name,speed,
             (MethodInfo_4AB5450 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
  Characters_AnimationHandler__ApplySpeed(__this,name,method_00);
  return;
}


// Characters.AnimationHandler$$SetSpeedMultiplier
// il2cpp: void Characters_AnimationHandler__SetSpeedMultiplier (Characters_AnimationHandler_o* __this, System_String_o* name, float multiplier, const MethodInfo* method);
// 0x5bb1ff0

void Characters_AnimationHandler__SetSpeedMultiplier
               (Characters_AnimationHandler_o *__this,System_String_o *name,float multiplier,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075474ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
    Il2CppMethodInitialized_075474ce = '\x01';
  }
  __this_00 = (__this->fields)._speedMultipliers;
  if (__this_00 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__float___set_Item
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)name,
             multiplier,
             (MethodInfo_4AB5450 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
  Characters_AnimationHandler__ApplySpeed(__this,name,method_00);
  return;
}


// Characters.AnimationHandler$$ApplySpeed
// il2cpp: void Characters_AnimationHandler__ApplySpeed (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5bb1f60

void Characters_AnimationHandler__ApplySpeed
               (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_Animator_o *__this_01;
  bool bVar1;
  UnityEngine_AnimationState_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar2;
  
  if ((__this->fields)._isLegacy == false) {
    bVar1 = System_String__op_Equality((__this->fields)._currentAnimation,name,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    __this_01 = (__this->fields).Animator;
    fVar2 = Characters_AnimationHandler__GetSpeed(__this,name,method_01);
    if (__this_01 != (UnityEngine_Animator_o *)0x0) {
      UnityEngine_Animator__set_speed(__this_01,fVar2,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (UnityEngine_Animation_o *)0x0) {
      __this_02 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
      fVar2 = Characters_AnimationHandler__GetSpeed(__this,name,method_00);
      if (__this_02 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__set_speed(__this_02,fVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$SetSpeedAll
// il2cpp: void Characters_AnimationHandler__SetSpeedAll (Characters_AnimationHandler_o* __this, float speed, const MethodInfo* method);
// 0x5bb2060
// eh: try 0x5bb2154..0x5bb21cc -> pad 0x5bb21d3 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5bb21ed..0x5bb21f2 -> pad 0x5bb2213 cleanup
// eh: try 0x5bb2216..0x5bb2220 -> pad 0x5bb2228 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bb214d: nop dword ptr [rax]
// asm:   0x5bb21d1: jmp 0x5bb21d5
// asm:   0x5bb21d3: jmp 0x5bb21d5
// asm:   0x5bb21d5: mov rbx, rax
// asm:   0x5bb21d8: cmp edx, 1
// asm:   0x5bb21db: jne 0x5bb2216
// asm:   0x5bb21dd: mov rdi, rbx
// asm:   0x5bb21e0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bb21e5: mov rbx, qword ptr [rax]
// asm:   0x5bb21e8: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5bb21ed: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bb21f2: lea rax, [rip + 0x16dc8ff]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5bb21f9: mov rsi, qword ptr [rax]
// asm:   0x5bb21fc: lea rdi, [rsp + 0x10]
// asm:   0x5bb2201: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5bb2206: test rbx, rbx
// asm:   0x5bb2209: je 0x5bb21b9
// asm:   0x5bb220b: mov rdi, rbx
// asm:   0x5bb220e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5bb2213: mov rbx, rax
// asm:   0x5bb2216: lea rdi, [rsp + 0x30]
// asm:   0x5bb221b: call 0x2fd8920  ; il2cpp_runtime_helper_02fd8920()
// asm:   0x5bb2220: mov rdi, rbx
// asm:   0x5bb2223: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5bb2228: mov rdi, rax
// asm:   0x5bb222b: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_AnimationHandler__SetSpeedAll
               (Characters_AnimationHandler_o *__this,float speed,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *pSVar1;
  Il2CppObject *name;
  bool bVar2;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  System_Collections_Generic_List_TSource__o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  System_Collections_Generic_List_Enumerator_T__o *local_30;
  
  if (Il2CppMethodInitialized_075474cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    Il2CppMethodInitialized_075474cf = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pSVar1 = (__this->fields)._animationSpeed;
  if (pSVar1 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    source = System_Collections_Generic_Dictionary_object__float___get_Keys
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                        (MethodInfo_4AB5080 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Keys);
    __this_00 = System_Linq_Enumerable__ToList_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
    if (__this_00 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_38 = 0;
      local_30 = &local_58;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        name = local_58.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
          return;
        }
        if (Il2CppMethodInitialized_075474cd == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
          Il2CppMethodInitialized_075474cd = '\x01';
        }
        pSVar1 = (__this->fields)._animationSpeed;
        if (pSVar1 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__float___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,name,speed,
                   (MethodInfo_4AB5450 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
        Characters_AnimationHandler__ApplySpeed(__this,(System_String_o *)name,method_00);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$SetCullingType
// il2cpp: void Characters_AnimationHandler__SetCullingType (Characters_AnimationHandler_o* __this, bool alwaysAnimate, const MethodInfo* method);
// 0x5bb1240

void Characters_AnimationHandler__SetCullingType
               (Characters_AnimationHandler_o *__this,bool alwaysAnimate,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_Animator_o *__this_01;
  
  if ((__this->fields)._isLegacy == false) {
    __this_01 = (__this->fields).Animator;
    if (alwaysAnimate) {
      if (__this_01 != (UnityEngine_Animator_o *)0x0) {
        UnityEngine_Animator__set_cullingMode(__this_01,0,(MethodInfo *)0x0);
        return;
      }
    }
    else if (__this_01 != (UnityEngine_Animator_o *)0x0) {
      UnityEngine_Animator__set_cullingMode(__this_01,2,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    __this_00 = (__this->fields).Animation;
    if (alwaysAnimate) {
      if (__this_00 != (UnityEngine_Animation_o *)0x0) {
        UnityEngine_Animation__set_cullingType(__this_00,0,(MethodInfo *)0x0);
        return;
      }
    }
    else if (__this_00 != (UnityEngine_Animation_o *)0x0) {
      UnityEngine_Animation__set_cullingType(__this_00,1,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$OnDistanceUpdate
// il2cpp: void Characters_AnimationHandler__OnDistanceUpdate (Characters_AnimationHandler_o* __this, float distance, const MethodInfo* method);
// 0x5bb2230
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bb2427: jmp 0x5bb2503
// asm:   0x5bb24b3: jmp 0x5bb2503

void Characters_AnimationHandler__OnDistanceUpdate
               (Characters_AnimationHandler_o *__this,float distance,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  Characters_BaseCharacter_o *pCVar4;
  UnityEngine_Renderer_array *pUVar5;
  bool bVar6;
  char cVar7;
  ulong uVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *pMVar9;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  ulong uVar10;
  float fVar11;
  
  if (Il2CppMethodInitialized_075474d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075474d0 = '\x01';
  }
  pCVar4 = (__this->fields).Owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    pCVar4 = (__this->fields).Owner;
    if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_05bb2512;
    fVar11 = (*(pCVar4->klass->vtable)._65_get_CullRendererDistance.methodPtr)
                       (pCVar4,(pCVar4->klass->vtable)._65_get_CullRendererDistance.method);
    cVar7 = distance < fVar11;
    if ((__this->fields)._visible != (bool)cVar7) {
      (__this->fields)._visible = (bool)cVar7;
      pCVar4 = (__this->fields).Owner;
      if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_05bb2512;
      (pCVar4->fields).IsVisible = (bool)cVar7;
      piVar1 = &(__this->fields)._renderStateVersion;
      *piVar1 = *piVar1 + 1;
      pUVar5 = (__this->fields).Renderers;
      if (pUVar5 == (UnityEngine_Renderer_array *)0x0) goto label_05bb2512;
      if (0 < (int)pUVar5->max_length) {
        uVar8 = pUVar5->max_length & 0xffffffff;
        uVar10 = 0;
        pMVar9 = extraout_RDX;
        do {
          if (uVar8 <= uVar10) goto label_05bb250d;
          Characters_AnimationHandler__ApplyRenderState_5ab2690(__this,pUVar5->m_Items[uVar10],pMVar9);
          uVar10 = uVar10 + 1;
          uVar2 = (uint)pUVar5->max_length;
          uVar8 = (ulong)uVar2;
          pMVar9 = extraout_RDX_00;
        } while ((long)uVar10 < (long)(int)uVar2);
        cVar7 = (__this->fields)._visible;
      }
    }
    if (cVar7 != '\0') {
      pCVar4 = (__this->fields).Owner;
      if (pCVar4 != (Characters_BaseCharacter_o *)0x0) {
        fVar11 = (*(pCVar4->klass->vtable)._64_get_CullShadowsDistance.methodPtr)
                           (pCVar4,(pCVar4->klass->vtable)._64_get_CullShadowsDistance.method);
        if ((__this->fields)._shadowsEnabled != distance < fVar11) {
          (__this->fields)._shadowsEnabled = distance < fVar11;
          piVar1 = &(__this->fields)._renderStateVersion;
          *piVar1 = *piVar1 + 1;
          pUVar5 = (__this->fields).Renderers;
          if (pUVar5 == (UnityEngine_Renderer_array *)0x0) goto label_05bb2512;
          if (0 < (int)pUVar5->max_length) {
            uVar8 = pUVar5->max_length & 0xffffffff;
            uVar10 = 0;
            pMVar9 = extraout_RDX_01;
            do {
              if (uVar8 <= uVar10) goto label_05bb250d;
              Characters_AnimationHandler__ApplyRenderState_5ab2690(__this,pUVar5->m_Items[uVar10],pMVar9);
              uVar10 = uVar10 + 1;
              uVar2 = (uint)pUVar5->max_length;
              uVar8 = (ulong)uVar2;
              pMVar9 = extraout_RDX_02;
            } while ((long)uVar10 < (long)(int)uVar2);
          }
        }
        pCVar4 = (__this->fields).Owner;
        if (pCVar4 != (Characters_BaseCharacter_o *)0x0) {
          fVar11 = (*(pCVar4->klass->vtable)._63_get_LODQualityLowDistance.methodPtr)
                             (pCVar4,(pCVar4->klass->vtable)._63_get_LODQualityLowDistance.method);
          if (distance <= fVar11) {
            pCVar4 = (__this->fields).Owner;
            if (pCVar4 != (Characters_BaseCharacter_o *)0x0) {
              fVar11 = (*(pCVar4->klass->vtable)._62_get_LODQualityMediumDistance.methodPtr)
                                 (pCVar4,(pCVar4->klass->vtable)._62_get_LODQualityMediumDistance.method);
              iVar3 = (__this->fields)._skinQuality;
              if (distance <= fVar11) {
                if (iVar3 == 4) {
                  return;
                }
                (__this->fields)._skinQuality = 4;
                piVar1 = &(__this->fields)._renderStateVersion;
                *piVar1 = *piVar1 + 1;
                pUVar5 = (__this->fields).Renderers;
                if (pUVar5 != (UnityEngine_Renderer_array *)0x0) {
                  if ((int)pUVar5->max_length < 1) {
                    return;
                  }
                  uVar8 = pUVar5->max_length & 0xffffffff;
                  uVar10 = 0;
                  pMVar9 = extraout_RDX_05;
                  while (uVar10 < uVar8) {
                    Characters_AnimationHandler__ApplyRenderState_5ab2690
                              (__this,pUVar5->m_Items[uVar10],pMVar9);
                    uVar10 = uVar10 + 1;
                    uVar2 = (uint)pUVar5->max_length;
                    uVar8 = (ulong)uVar2;
                    pMVar9 = extraout_RDX_07;
                    if ((long)(int)uVar2 <= (long)uVar10) {
                      return;
                    }
                  }
                  goto label_05bb250d;
                }
              }
              else {
                if (iVar3 == 2) {
                  return;
                }
                (__this->fields)._skinQuality = 2;
                piVar1 = &(__this->fields)._renderStateVersion;
                *piVar1 = *piVar1 + 1;
                pUVar5 = (__this->fields).Renderers;
                if (pUVar5 != (UnityEngine_Renderer_array *)0x0) {
                  if ((int)pUVar5->max_length < 1) {
                    return;
                  }
                  uVar8 = pUVar5->max_length & 0xffffffff;
                  uVar10 = 0;
                  pMVar9 = extraout_RDX_05;
                  while (uVar10 < uVar8) {
                    Characters_AnimationHandler__ApplyRenderState_5ab2690
                              (__this,pUVar5->m_Items[uVar10],pMVar9);
                    uVar10 = uVar10 + 1;
                    uVar2 = (uint)pUVar5->max_length;
                    uVar8 = (ulong)uVar2;
                    pMVar9 = extraout_RDX_06;
                    if ((long)(int)uVar2 <= (long)uVar10) {
                      return;
                    }
                  }
label_05bb250d:
                  ThrowIndexOutOfRangeException();
                }
              }
            }
          }
          else {
            if ((__this->fields)._skinQuality == 1) {
              return;
            }
            (__this->fields)._skinQuality = 1;
            piVar1 = &(__this->fields)._renderStateVersion;
            *piVar1 = *piVar1 + 1;
            pUVar5 = (__this->fields).Renderers;
            if (pUVar5 != (UnityEngine_Renderer_array *)0x0) {
              if ((int)pUVar5->max_length < 1) {
                return;
              }
              uVar8 = pUVar5->max_length & 0xffffffff;
              uVar10 = 0;
              pMVar9 = extraout_RDX_03;
              while (uVar10 < uVar8) {
                Characters_AnimationHandler__ApplyRenderState_5ab2690(__this,pUVar5->m_Items[uVar10],pMVar9);
                uVar10 = uVar10 + 1;
                uVar2 = (uint)pUVar5->max_length;
                uVar8 = (ulong)uVar2;
                pMVar9 = extraout_RDX_04;
                if ((long)(int)uVar2 <= (long)uVar10) {
                  return;
                }
              }
              goto label_05bb250d;
            }
          }
        }
      }
label_05bb2512:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Characters.AnimationHandler$$SetVisible
// il2cpp: void Characters_AnimationHandler__SetVisible (Characters_AnimationHandler_o* __this, bool visible, const MethodInfo* method);
// 0x5bb2520

void Characters_AnimationHandler__SetVisible
               (Characters_AnimationHandler_o *__this,bool visible,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Characters_BaseCharacter_o *pCVar3;
  UnityEngine_Renderer_array *pUVar4;
  ulong uVar5;
  MethodInfo *extraout_RDX;
  ulong uVar6;
  
  if ((__this->fields)._visible == visible) {
    return;
  }
  (__this->fields)._visible = visible;
  pCVar3 = (__this->fields).Owner;
  if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
    (pCVar3->fields).IsVisible = visible;
    piVar1 = &(__this->fields)._renderStateVersion;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (__this->fields).Renderers;
    if (pUVar4 != (UnityEngine_Renderer_array *)0x0) {
      if ((int)pUVar4->max_length < 1) {
        return;
      }
      uVar5 = pUVar4->max_length & 0xffffffff;
      uVar6 = 0;
      do {
        if (uVar5 <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        Characters_AnimationHandler__ApplyRenderState_5ab2690(__this,pUVar4->m_Items[uVar6],method);
        uVar6 = uVar6 + 1;
        uVar2 = (uint)pUVar4->max_length;
        uVar5 = (ulong)uVar2;
        method = extraout_RDX;
      } while ((long)uVar6 < (long)(int)uVar2);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$SetQuality
// il2cpp: void Characters_AnimationHandler__SetQuality (Characters_AnimationHandler_o* __this, int32_t quality, const MethodInfo* method);
// 0x5bb2610

void Characters_AnimationHandler__SetQuality
               (Characters_AnimationHandler_o *__this,int32_t quality,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Renderer_array *pUVar3;
  ulong uVar4;
  MethodInfo *extraout_RDX;
  ulong uVar5;
  
  if ((__this->fields)._skinQuality != quality) {
    (__this->fields)._skinQuality = quality;
    piVar1 = &(__this->fields)._renderStateVersion;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (__this->fields).Renderers;
    if (pUVar3 == (UnityEngine_Renderer_array *)0x0) {
      ThrowNullReferenceException();
    }
    if (0 < (int)pUVar3->max_length) {
      uVar4 = pUVar3->max_length & 0xffffffff;
      uVar5 = 0;
      do {
        if (uVar4 <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        Characters_AnimationHandler__ApplyRenderState_5ab2690(__this,pUVar3->m_Items[uVar5],method);
        uVar5 = uVar5 + 1;
        uVar2 = (uint)pUVar3->max_length;
        uVar4 = (ulong)uVar2;
        method = extraout_RDX;
      } while ((long)uVar5 < (long)(int)uVar2);
    }
  }
  return;
}


// Characters.AnimationHandler$$SetShadows
// il2cpp: void Characters_AnimationHandler__SetShadows (Characters_AnimationHandler_o* __this, bool shadows, const MethodInfo* method);
// 0x5bb25a0

void Characters_AnimationHandler__SetShadows
               (Characters_AnimationHandler_o *__this,bool shadows,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Renderer_array *pUVar3;
  ulong uVar4;
  MethodInfo *extraout_RDX;
  ulong uVar5;
  
  if ((__this->fields)._shadowsEnabled != shadows) {
    (__this->fields)._shadowsEnabled = shadows;
    piVar1 = &(__this->fields)._renderStateVersion;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (__this->fields).Renderers;
    if (pUVar3 == (UnityEngine_Renderer_array *)0x0) {
      ThrowNullReferenceException();
    }
    if (0 < (int)pUVar3->max_length) {
      uVar4 = pUVar3->max_length & 0xffffffff;
      uVar5 = 0;
      do {
        if (uVar4 <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        Characters_AnimationHandler__ApplyRenderState_5ab2690(__this,pUVar3->m_Items[uVar5],method);
        uVar5 = uVar5 + 1;
        uVar2 = (uint)pUVar3->max_length;
        uVar4 = (ulong)uVar2;
        method = extraout_RDX;
      } while ((long)uVar5 < (long)(int)uVar2);
    }
  }
  return;
}


// Characters.AnimationHandler$$get_RenderStateVersion
// il2cpp: int32_t Characters_AnimationHandler__get_RenderStateVersion (Characters_AnimationHandler_o* __this, const MethodInfo* method);
// 0x5bb2680

int32_t Characters_AnimationHandler__get_RenderStateVersion
                  (Characters_AnimationHandler_o *__this,MethodInfo *method)

{
  return (__this->fields)._renderStateVersion;
}


// Characters.AnimationHandler$$ApplyRenderState
// il2cpp: void Characters_AnimationHandler__ApplyRenderState (Characters_AnimationHandler_o* __this, const MethodInfo* method);
// 0x5bb12a0

void Characters_AnimationHandler__ApplyRenderState(Characters_AnimationHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Renderer_array *pUVar3;
  ulong uVar4;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  ulong uVar5;
  
  piVar1 = &(__this->fields)._renderStateVersion;
  *piVar1 = *piVar1 + 1;
  pUVar3 = (__this->fields).Renderers;
  if (pUVar3 == (UnityEngine_Renderer_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (0 < (int)pUVar3->max_length) {
    uVar4 = pUVar3->max_length & 0xffffffff;
    uVar5 = 0;
    do {
      if (uVar4 <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      Characters_AnimationHandler__ApplyRenderState_5ab2690(__this,pUVar3->m_Items[uVar5],in_RDX);
      uVar5 = uVar5 + 1;
      uVar2 = (uint)pUVar3->max_length;
      uVar4 = (ulong)uVar2;
      in_RDX = extraout_RDX;
    } while ((long)uVar5 < (long)(int)uVar2);
  }
  return;
}


// Characters.AnimationHandler$$ApplyRenderState
// il2cpp: void Characters_AnimationHandler__ApplyRenderState (Characters_AnimationHandler_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x5bb2690

void Characters_AnimationHandler__ApplyRenderState_5ab2690
               (Characters_AnimationHandler_o *__this,UnityEngine_Renderer_o *renderer,MethodInfo *method)

{
  byte bVar1;
  int value;
  System_Collections_Generic_Dictionary_Renderer__bool__o *__this_00;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  uint uVar5;
  ulong in_RAX;
  char value_00;
  uint value_01;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_075474d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    Il2CppMethodInitialized_075474d1 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)renderer,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if (renderer == (UnityEngine_Renderer_o *)0x0) {
label_05bb2811:
      ThrowNullReferenceException();
    }
    bVar2 = (__this->fields)._visible;
    bVar3 = UnityEngine_Renderer__get_forceRenderingOff(renderer,(MethodInfo *)0x0);
    if ((bool)(bVar2 ^ 1U) != bVar3) {
      UnityEngine_Renderer__set_forceRenderingOff(renderer,bVar2 == false,(MethodInfo *)0x0);
    }
    bVar1 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
    if ((bVar1 <= (renderer->klass->_2).typeHierarchyDepth) &&
       ((renderer->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer)) {
      iVar4 = UnityEngine_SkinnedMeshRenderer__get_quality
                        ((UnityEngine_SkinnedMeshRenderer_o *)renderer,(MethodInfo *)0x0);
      value = (__this->fields)._skinQuality;
      if (iVar4 != value) {
        UnityEngine_SkinnedMeshRenderer__set_quality
                  ((UnityEngine_SkinnedMeshRenderer_o *)renderer,value,(MethodInfo *)0x0);
      }
    }
    value_01 = 0;
    bVar2 = UnityEngine_Renderer__get_receiveShadows(renderer,(MethodInfo *)0x0);
    value_00 = (__this->fields)._shadowsEnabled;
    if ((bool)value_00 != bVar2) {
      UnityEngine_Renderer__set_receiveShadows(renderer,(bool)value_00,(MethodInfo *)0x0);
      value_00 = (__this->fields)._shadowsEnabled;
    }
    if (value_00 != '\0') {
      if (Il2CppMethodInitialized_075474c5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_bool_TryGetValue);
        Il2CppMethodInitialized_075474c5 = '\x01';
      }
      uStack_28 = uStack_28 & 0xffffffffffffff;
      __this_00 = (__this->fields)._shadowCasters;
      if (__this_00 == (System_Collections_Generic_Dictionary_Renderer__bool__o *)0x0) goto label_05bb2811;
      bVar2 = System_Collections_Generic_Dictionary_object__bool___TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)renderer,(bool *)((long)&uStack_28 + 7),
                         (MethodInfo_4A774E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Renderer_bool_TryGetValue);
      value_01 = (uint)(!bVar2 || uStack_28._7_1_ != '\0');
    }
    uVar5 = UnityEngine_Renderer__get_shadowCastingMode(renderer,(MethodInfo *)0x0);
    if (uVar5 != value_01) {
      UnityEngine_Renderer__set_shadowCastingMode(renderer,value_01,(MethodInfo *)0x0);
    }
  }
  return;
}


// Characters.AnimationHandler$$<RefreshRenderers>b__19_2
// il2cpp: bool Characters_AnimationHandler___RefreshRenderers_b__19_2 (Characters_AnimationHandler_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x5bb2820

bool Characters_AnimationHandler___RefreshRenderers_b__19_2
               (Characters_AnimationHandler_o *__this,UnityEngine_Renderer_o *renderer,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Renderer__bool__o *__this_00;
  bool bVar1;
  int32_t iVar2;
  ulong in_RAX;
  bool bVar3;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (renderer != (UnityEngine_Renderer_o *)0x0) {
    iVar2 = UnityEngine_Renderer__get_shadowCastingMode(renderer,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_075474c5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_bool_TryGetValue);
      Il2CppMethodInitialized_075474c5 = '\x01';
    }
    uStack_28 = uStack_28 & 0xffffffffffffff;
    __this_00 = (__this->fields)._shadowCasters;
    if (__this_00 != (System_Collections_Generic_Dictionary_Renderer__bool__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary_object__bool___TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)renderer,(bool *)((long)&uStack_28 + 7),
                         (MethodInfo_4A774E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Renderer_bool_TryGetValue);
      bVar3 = uStack_28._7_1_ != '\0';
      if (!bVar1) {
        bVar3 = iVar2 != 0;
      }
      return bVar3;
    }
  }
  ThrowNullReferenceException();
}


