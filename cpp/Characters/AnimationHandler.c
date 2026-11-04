// Type: Characters.AnimationHandler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/AnimationHandler.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/AnimationHandler.cs
// --------------------------------

// Characters.AnimationHandler.<>c$$.cctor
// il2cpp: void Characters_AnimationHandler___c___cctor (const MethodInfo* method);
// 0x18211ef80

void Characters_AnimationHandler___c___cctor(MethodInfo *method)

{
  Characters_AnimationHandler___c_o *__this;
  
  if (Il2CppMethodInitialized_184346b04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AnimationHandler_c);
    Il2CppMethodInitialized_184346b04 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_AnimationHandler_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Characters_AnimationHandler_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_AnimationHandler_c->static_fields->__9,__this);
  return;
}


// Characters.AnimationHandler.<>c$$.ctor
// il2cpp: void Characters_AnimationHandler___c___ctor (Characters_AnimationHandler___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Characters_AnimationHandler___c___ctor(Characters_AnimationHandler___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.AnimationHandler.<>c$$<RefreshRenderers>b__19_0
// il2cpp: bool Characters_AnimationHandler___c___RefreshRenderers_b__19_0 (Characters_AnimationHandler___c_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x18211eec0

bool Characters_AnimationHandler___c___RefreshRenderers_b__19_0
               (Characters_AnimationHandler___c_o *__this,UnityEngine_Renderer_o *renderer,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Renderer_c *pUVar2;
  bool bVar3;
  UnityEngine_Renderer_o *pUVar4;
  
  if (Il2CppMethodInitialized_184346b05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    Il2CppMethodInitialized_184346b05 = '\x01';
  }
  if (renderer != (UnityEngine_Renderer_o *)0x0) {
    pUVar2 = renderer->klass;
    bVar1 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
    if ((bVar1 <= (pUVar2->_2).typeHierarchyDepth) &&
       ((pUVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer)) {
      return true;
    }
    bVar1 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth;
    if (((pUVar2->_2).typeHierarchyDepth < bVar1) ||
       (bVar3 = true,
       (pUVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer))
    {
      bVar3 = false;
    }
    pUVar4 = (UnityEngine_Renderer_o *)0x0;
    if (bVar3) {
      pUVar4 = renderer;
    }
    return pUVar4 != (UnityEngine_Renderer_o *)0x0;
  }
  return false;
}


// Characters.AnimationHandler.<>c$$<RefreshRenderers>b__19_1
// il2cpp: UnityEngine_Renderer_o* Characters_AnimationHandler___c___RefreshRenderers_b__19_1 (Characters_AnimationHandler___c_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x1808e13a0

UnityEngine_Renderer_o*
Characters_AnimationHandler___c___RefreshRenderers_b__19_1(Characters_AnimationHandler___c_o* __this, UnityEngine_Renderer_o* renderer, MethodInfo* method)

{
  return (System_Linq_Expressions_Expression_o *)node;
}


// Characters.AnimationHandler$$.ctor
// il2cpp: void Characters_AnimationHandler___ctor (Characters_AnimationHandler_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x182107f50
// eh: try 0x182108272..0x182108307 -> pad 0x183317c60 catch Il2CppExceptionWrapper
// eh: try 0x182108307..0x18210834a -> pad 0x180026a30 cleanup
// eh: try 0x18210834a..0x1821085d8 -> pad 0x183317c60 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182108327: mov rdx, qword ptr [rip + 0x1fb6daa]  ; TypeInfo_UnityEngine_AnimationState
// asm:   0x18210832e: mov rbx, rsi
// asm:   0x182108331: cmp qword ptr [rax], rdx
// asm:   0x1821083a9: jmp 0x182108520
// asm:   0x1821083ae: lea rcx, [rsp + 0x40]
// asm:   0x1821083b3: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1821083b8: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821083bd: test rcx, rcx
// asm:   0x1821083c0: jne 0x1821085d8
// asm:   0x1821083c6: xor esi, esi
// asm:   0x1821083c8: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x182108403: movss xmm6, dword ptr [rip + 0x12507fd]
// asm:   0x1821085d8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317c60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317c65: push rbp
// asm:   0x183317c66: sub rsp, 0x20
// asm:   0x183317c6a: mov rbp, rdx
// asm:   0x183317c6d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317c71: mov rcx, qword ptr [rax]
// asm:   0x183317c74: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183317c78: movabs rax, 0
// asm:   0x183317c82: add rsp, 0x20
// asm:   0x183317c86: pop rbp
// asm:   0x183317c87: ret 

void Characters_AnimationHandler___ctor
               (Characters_AnimationHandler_o *__this,UnityEngine_GameObject_o *owner,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  UnityEngine_AnimationClip_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  Il2CppObject *__this_01;
  bool bVar5;
  System_Collections_Generic_Dictionary_string__float__o *pSVar6;
  System_Collections_Generic_Dictionary_string__AnimationClip__o *__this_02;
  System_Collections_Generic_Dictionary_string__string__o *__this_03;
  System_Collections_Generic_Dictionary_Renderer__bool__o *__this_04;
  Characters_BaseCharacter_o *pCVar7;
  UnityEngine_Animation_o *pUVar8;
  UnityEngine_Animator_o *pUVar9;
  void *pvVar10;
  VirtualInvokeData *pVVar11;
  UnityEngine_AnimationState_o *pUVar12;
  System_String_o *pSVar13;
  UnityEngine_RuntimeAnimatorController_o *__this_05;
  UnityEngine_AnimationClip_array *pUVar14;
  System_String_o *pSVar15;
  UnityEngine_Playables_PlayableGraph_o *pUVar16;
  ushort uVar17;
  UnityEngine_AnimationState_o *__this_06;
  uint uVar18;
  UnityEngine_AnimationState_o *pUVar19;
  float value;
  Il2CppObject *local_res10 [2];
  Il2CppObject *local_res20;
  UnityEngine_Playables_PlayableGraph_o local_70;
  undefined1 local_60 [16];
  Il2CppObject **local_50;
  
  if (Il2CppMethodInitialized_184346af5 == '\0') {
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
    Il2CppMethodInitialized_184346af5 = '\x01';
  }
  pUVar19 = (UnityEngine_AnimationState_o *)0x0;
  local_res10[0] = (Il2CppObject *)0x0;
  local_res20 = (Il2CppObject *)0x0;
  local_70.fields.m_Handle = 0;
  local_70.fields.m_Version = 0;
  local_70.fields._12_4_ = 0;
  pSVar6 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  (__this->fields)._animationSpeed = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._animationSpeed,pSVar6);
  pSVar6 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  (__this->fields)._speedMultipliers = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._speedMultipliers,pSVar6);
  pSVar13 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._currentAnimation = pSVar13;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentAnimation,pSVar13);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_AnimationClip);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_ctor)
  ;
  (__this->fields)._animatorClips = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._animatorClips,__this_02);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  (__this->fields)._animatorStateNames = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._animatorStateNames,__this_03);
  (__this->fields)._shadowsEnabled = true;
  (__this->fields)._visible = true;
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Renderer_bool);
  System_Collections_Generic_Dictionary_object__bool____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_Renderer_bool_ctor);
  (__this->fields)._shadowCasters = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._shadowCasters,__this_04);
  (__this->fields)._skinQuality = 4;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (owner == (UnityEngine_GameObject_o *)0x0) goto label_1821085b4;
  pCVar7 = UnityEngine_GameObject__GetComponent_object_
                     (owner,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter)
  ;
  (__this->fields).Owner = pCVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Owner,pCVar7);
  (__this->fields).OwnerObject = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerObject,owner);
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     (owner,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Animation);
  (__this->fields).Animation = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Animation,pUVar8);
  pUVar9 = UnityEngine_GameObject__GetComponent_object_
                     (owner,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Animator);
  (__this->fields).Animator = pUVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Animator,pUVar9);
  pUVar8 = (__this->fields).Animation;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    (__this->fields)._isLegacy = true;
    pUVar8 = (__this->fields).Animation;
    if (pUVar8 == (UnityEngine_Animation_o *)0x0) goto label_1821085b4;
    local_res10[0] = (Il2CppObject *)UnityEngine_Animation__GetEnumerator(pUVar8,(MethodInfo *)0x0);
    local_60._0_8_ = 0;
    local_60._8_8_ = local_res10;
    local_50 = &local_res20;
    while( true ) {
      if (local_res10[0] == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar10 = InterfaceInvoker0_Invoke
                          (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res10[0]);
      __this_01 = local_res10[0];
      if ((char)pvVar10 == '\0') break;
      if (local_res10[0] == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = local_res10[0]->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      uVar17 = 0;
      if (uVar1 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        do {
          if (pIVar3[uVar17].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar11 = pIVar2->vtable + (pIVar3[uVar17].offset + 1);
            goto label_1821082f5;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar1);
      }
      pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_res10[0],(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_1821082f5:
      pUVar12 = (UnityEngine_AnimationState_o *)(*pVVar11->methodPtr)(__this_01,pVVar11->method);
      if (pUVar12 == (UnityEngine_AnimationState_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_06 = pUVar19;
      if ((Il2CppClass *)pUVar12->klass == (Il2CppClass *)TypeInfo_UnityEngine_AnimationState) {
        __this_06 = pUVar12;
      }
      if (__this_06 == (UnityEngine_AnimationState_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar12);
      }
      pSVar6 = (__this->fields)._animationSpeed;
      pSVar13 = UnityEngine_AnimationState__get_name(__this_06,(MethodInfo *)0x0);
      value = UnityEngine_AnimationState__get_speed(__this_06,(MethodInfo *)0x0);
      if (pSVar6 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,(Il2CppObject *)pSVar13,value
                 ,(MethodInfo_1488DA0 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item
                );
    }
    local_res20 = il2cpp_vm_Object_IsInst(local_res10[0],(Il2CppClass *)TypeInfo_System_IDisposable);
    if (local_res20 != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res20);
    }
  }
  else {
    pUVar9 = (__this->fields).Animator;
    if (((pUVar9 == (UnityEngine_Animator_o *)0x0) ||
        (__this_05 = UnityEngine_Animator__get_runtimeAnimatorController(pUVar9,(MethodInfo *)0x0),
        __this_05 == (UnityEngine_RuntimeAnimatorController_o *)0x0)) ||
       (pUVar14 = UnityEngine_RuntimeAnimatorController__get_animationClips(__this_05,(MethodInfo *)0x0),
       pUVar14 == (UnityEngine_AnimationClip_array *)0x0)) goto label_1821085b4;
    while (uVar18 = (uint)pUVar19, (int)uVar18 < (int)pUVar14->max_length) {
      if ((uint)pUVar14->max_length <= uVar18) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = pUVar14->m_Items[(int)uVar18];
      if (__this_00 == (UnityEngine_AnimationClip_o *)0x0) goto label_1821085b4;
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._animatorStateNames
      ;
      pSVar13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
      pSVar15 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
      if ((pSVar15 == (System_String_o *)0x0) ||
         (pSVar15 = System_String__Replace(pSVar15,0x2e,0x5f,(MethodInfo *)0x0),
         pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_1821085b4;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar4,(Il2CppObject *)pSVar13,(Il2CppObject *)pSVar15,
                 (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                );
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._animatorClips;
      pSVar13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1821085b4;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar4,(Il2CppObject *)pSVar13,(Il2CppObject *)__this_00,
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_set_Item);
      pSVar6 = (__this->fields)._animationSpeed;
      pSVar13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
      if (pSVar6 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_1821085b4;
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,(Il2CppObject *)pSVar13,1.0,
                 (MethodInfo_1488DA0 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item)
      ;
      pUVar19 = (UnityEngine_AnimationState_o *)(ulonglong)(uVar18 + 1);
    }
    pUVar9 = (__this->fields).Animator;
    if (pUVar9 == (UnityEngine_Animator_o *)0x0) goto label_1821085b4;
    pUVar16 = UnityEngine_Animator__get_playableGraph
                        ((UnityEngine_Playables_PlayableGraph_o *)local_60,pUVar9,(MethodInfo *)0x0);
    local_70.fields.m_Handle = (pUVar16->fields).m_Handle;
    local_70.fields.m_Version = (pUVar16->fields).m_Version;
    local_70.fields._12_4_ = *(undefined4 *)&(pUVar16->fields).field_0xc;
    UnityEngine_Playables_PlayableGraph__SetTimeUpdateMode(&local_70,1,(MethodInfo *)0x0);
  }
  Characters_AnimationHandler__RefreshRenderers(__this,(MethodInfo *)0x0);
  pCVar7 = (__this->fields).Owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pCVar7 = (__this->fields).Owner;
    if (pCVar7 == (Characters_BaseCharacter_o *)0x0) goto label_1821085b4;
    bVar5 = (*(pCVar7->klass->vtable)._69_AlwaysAnimate.methodPtr)
                      (pCVar7,(pCVar7->klass->vtable)._69_AlwaysAnimate.method);
    if (bVar5) {
      if ((__this->fields)._isLegacy == false) {
        pUVar9 = (__this->fields).Animator;
        if (pUVar9 == (UnityEngine_Animator_o *)0x0) {
label_1821085b4:
          ThrowNullReferenceException();
        }
        UnityEngine_Animator__set_cullingMode(pUVar9,0,(MethodInfo *)0x0);
      }
      else {
        pUVar8 = (__this->fields).Animation;
        if (pUVar8 == (UnityEngine_Animation_o *)0x0) goto label_1821085b4;
        UnityEngine_Animation__set_cullingType(pUVar8,0,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Characters.AnimationHandler$$RefreshRenderers
// il2cpp: void Characters_AnimationHandler__RefreshRenderers (Characters_AnimationHandler_o* __this, const MethodInfo* method);
// 0x1821078f0

void Characters_AnimationHandler__RefreshRenderers(Characters_AnimationHandler_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar1;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *source;
  System_Func_Renderer__bool__o *pSVar2;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  UnityEngine_Renderer_array *pUVar3;
  System_Func_Renderer__Renderer__o *__this_01;
  System_Collections_Generic_Dictionary_TKey__TElement__o *value;
  
  if (Il2CppMethodInitialized_184346af6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Characters_AnimationHandler_RefreshRenderers_b__19_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_Renderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToDictionary_Renderer_Renderer_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Renderer_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Renderer_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer_40c10c0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Characters_AnimationHandler_c_RefreshRenderers_b__19_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Characters_AnimationHandler_c_RefreshRenderers_b__19_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AnimationHandler_c);
    Il2CppMethodInitialized_184346af6 = '\x01';
  }
  __this_00 = (__this->fields).OwnerObject;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    source = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                       (__this_00,true,
                        (MethodInfo_6F5750 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer_40c10c0);
    if ((TypeInfo_Characters_AnimationHandler_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_AnimationHandler_c);
    }
    pSVar2 = TypeInfo_Characters_AnimationHandler_c->static_fields->__9__19_0;
    if (pSVar2 == (System_Func_Renderer__bool__o *)0x0) {
      if ((TypeInfo_Characters_AnimationHandler_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_AnimationHandler_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_Characters_AnimationHandler_c->static_fields->__9;
      pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Renderer_bool);
      System_Func_object__bool____ctor
                ((System_Predicate_object__o *)pSVar2,pIVar1,
                 (intptr_t)MethodInfo_Characters_AnimationHandler_c_RefreshRenderers_b__19_0,
                 (MethodInfo_B61EB0 *)0x0);
      TypeInfo_Characters_AnimationHandler_c->static_fields->__9__19_0 = pSVar2;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_AnimationHandler_c->static_fields->__9__19_0,pSVar2);
    }
    source_00 = System_Linq_Enumerable__Where_float_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__bool__o *)pSVar2,
                           (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_Renderer);
    pUVar3 = (UnityEngine_Renderer_array *)
             System_Linq_Enumerable__ToArray_object_
                       (source_00,(MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_Renderer);
    (__this->fields).Renderers = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Renderers,pUVar3);
    pUVar3 = (__this->fields).Renderers;
    if ((TypeInfo_Characters_AnimationHandler_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_AnimationHandler_c);
    }
    __this_01 = TypeInfo_Characters_AnimationHandler_c->static_fields->__9__19_1;
    if (__this_01 == (System_Func_Renderer__Renderer__o *)0x0) {
      if ((TypeInfo_Characters_AnimationHandler_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_AnimationHandler_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_Characters_AnimationHandler_c->static_fields->__9;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Renderer_Renderer);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,pIVar1,
                 (intptr_t)MethodInfo_Characters_AnimationHandler_c_RefreshRenderers_b__19_1,
                 (MethodInfo_16E67D0 *)0x0);
      TypeInfo_Characters_AnimationHandler_c->static_fields->__9__19_1 = __this_01;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_AnimationHandler_c->static_fields->__9__19_1,__this_01);
    }
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Renderer_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)pSVar2,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Characters_AnimationHandler_RefreshRenderers_b__19_2,
               (MethodInfo_B61EB0 *)0x0);
    value = System_Linq_Enumerable__ToDictionary_object__object__bool_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar3,
                       (System_Func_TSource__TKey__o *)__this_01,(System_Func_TSource__TElement__o *)pSVar2,
                       (MethodInfo_6C8950 *)
                       MethodInfo_System_Linq_Enumerable_ToDictionary_Renderer_Renderer_bool);
    (__this->fields)._shadowCasters = (System_Collections_Generic_Dictionary_Renderer__bool__o *)value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._shadowCasters,value);
    Characters_AnimationHandler__ApplyRenderState(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$CastsShadows
// il2cpp: bool Characters_AnimationHandler__CastsShadows (Characters_AnimationHandler_o* __this, UnityEngine_Renderer_o* renderer, bool fallback, const MethodInfo* method);
// 0x182106be0

bool Characters_AnimationHandler__CastsShadows
               (Characters_AnimationHandler_o *__this,UnityEngine_Renderer_o *renderer,bool fallback,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Renderer__bool__o *__this_00;
  bool bVar1;
  bool local_res8 [8];
  
  if (Il2CppMethodInitialized_184346af7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_bool_TryGetValue);
    Il2CppMethodInitialized_184346af7 = '\x01';
  }
  __this_00 = (__this->fields)._shadowCasters;
  local_res8[0] = false;
  if (__this_00 != (System_Collections_Generic_Dictionary_Renderer__bool__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__bool___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)renderer,local_res8,
                       (MethodInfo_1461B50 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Renderer_bool_TryGetValue);
    if (bVar1) {
      fallback = local_res8[0];
    }
    return fallback;
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$GetCurrentAnimation
// il2cpp: System_String_o* Characters_AnimationHandler__GetCurrentAnimation (Characters_AnimationHandler_o* __this, const MethodInfo* method);
// 0x182106fa0
// eh: try 0x182107054..0x18210719b -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18210714e: lea rcx, [rsp + 0x30]
// asm:   0x182107153: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x182107158: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18210715d: test rcx, rcx
// asm:   0x182107160: jne 0x18210719b
// asm:   0x182107162: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x18210719b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

System_String_o *
Characters_AnimationHandler__GetCurrentAnimation(Characters_AnimationHandler_o *__this,MethodInfo *method)

{
  UnityEngine_Animation_o *pUVar1;
  bool bVar2;
  void *pvVar3;
  UnityEngine_AnimationState_o *pUVar4;
  System_String_o *pSVar5;
  UnityEngine_AnimationState_o *__this_00;
  Il2CppObject *local_res18;
  Il2CppObject *local_res20;
  Il2CppObject **local_38;
  Il2CppObject **local_30;
  
  if (Il2CppMethodInitialized_184346af8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AnimationState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346af8 = '\x01';
  }
  local_res18 = (Il2CppObject *)0x0;
  local_res20 = (Il2CppObject *)0x0;
  if ((__this->fields)._isLegacy == false) {
    return (__this->fields)._currentAnimation;
  }
  pUVar1 = (__this->fields).Animation;
  if (pUVar1 == (UnityEngine_Animation_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_res18 = (Il2CppObject *)UnityEngine_Animation__GetEnumerator(pUVar1,(MethodInfo *)0x0);
  local_38 = &local_res18;
  local_30 = &local_res20;
  while( true ) {
    if (local_res18 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar3 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res18);
    if ((char)pvVar3 == '\0') {
      local_res20 = il2cpp_vm_Object_IsInst(local_res18,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (local_res20 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res20);
      }
      return "";
    }
    if (local_res18 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar4 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res18);
    if (pUVar4 == (UnityEngine_AnimationState_o *)0x0) break;
    __this_00 = (UnityEngine_AnimationState_o *)0x0;
    if (pUVar4->klass == TypeInfo_UnityEngine_AnimationState) {
      __this_00 = pUVar4;
    }
    if (__this_00 == (UnityEngine_AnimationState_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
    }
    pUVar1 = (__this->fields).Animation;
    pSVar5 = UnityEngine_AnimationState__get_name(__this_00,(MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_Animation_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = UnityEngine_Animation__IsPlaying(pUVar1,pSVar5,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar5 = UnityEngine_AnimationState__get_name(__this_00,(MethodInfo *)0x0);
      il2cpp_runtime_helper_1806aa210(&local_38);
      return pSVar5;
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$GetLength
// il2cpp: float Characters_AnimationHandler__GetLength (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x182107270

float Characters_AnimationHandler__GetLength
                (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_Animation_o *__this_01;
  UnityEngine_AnimationClip_o *__this_02;
  UnityEngine_AnimationState_o *__this_03;
  float fVar1;
  
  if (Il2CppMethodInitialized_184346af9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_get_Item);
    Il2CppMethodInitialized_184346af9 = '\x01';
  }
  if ((__this->fields)._isLegacy == false) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._animatorClips;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_02 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_00,(Il2CppObject *)name,
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_get_Item);
      if (__this_02 != (UnityEngine_AnimationClip_o *)0x0) {
        fVar1 = UnityEngine_AnimationClip__get_length(__this_02,(MethodInfo *)0x0);
        return fVar1;
      }
    }
  }
  else {
    __this_01 = (__this->fields).Animation;
    if (__this_01 != (UnityEngine_Animation_o *)0x0) {
      __this_03 = UnityEngine_Animation__get_Item(__this_01,name,(MethodInfo *)0x0);
      if (__this_03 != (UnityEngine_AnimationState_o *)0x0) {
        fVar1 = UnityEngine_AnimationState__get_length(__this_03,(MethodInfo *)0x0);
        return fVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$GetSpeed
// il2cpp: float Characters_AnimationHandler__GetSpeed (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821073a0

float Characters_AnimationHandler__GetSpeed
                (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *pSVar1;
  bool bVar2;
  float fVar3;
  UnityEngine_UIElements_TextureId_o local_res8 [2];
  
  if (Il2CppMethodInitialized_184346afa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
    Il2CppMethodInitialized_184346afa = '\x01';
  }
  pSVar1 = (__this->fields)._speedMultipliers;
  local_res8[0].fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
  if (pSVar1 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)name,
                       local_res8,
                       (MethodInfo_1461BD0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_float_TryGetValue);
    pSVar1 = (__this->fields)._animationSpeed;
    if (pSVar1 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      if (bVar2) {
        fVar3 = System_Collections_Generic_Dictionary_object__float___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                           (Il2CppObject *)name,
                           (MethodInfo_1488BA0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
        return fVar3 * (float)local_res8[0].fields.m_Index;
      }
      fVar3 = System_Collections_Generic_Dictionary_object__float___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)name,
                         (MethodInfo_1488BA0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      return fVar3;
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$GetBaseSpeed
// il2cpp: float Characters_AnimationHandler__GetBaseSpeed (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x182106f40

float Characters_AnimationHandler__GetBaseSpeed
                (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  float fVar1;
  
  if (Il2CppMethodInitialized_184346afb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
    Il2CppMethodInitialized_184346afb = '\x01';
  }
  __this_00 = (__this->fields)._animationSpeed;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    fVar1 = System_Collections_Generic_Dictionary_object__float___get_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)name
                       ,(MethodInfo_1488BA0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$GetTotalTime
// il2cpp: float Characters_AnimationHandler__GetTotalTime (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x182107440

float Characters_AnimationHandler__GetTotalTime
                (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = Characters_AnimationHandler__GetLength(__this,name,(MethodInfo *)0x0);
  fVar2 = Characters_AnimationHandler__GetSpeed(__this,name,(MethodInfo *)0x0);
  return fVar1 / fVar2;
}


// Characters.AnimationHandler$$GetNormalizedTime
// il2cpp: float Characters_AnimationHandler__GetNormalizedTime (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x182107310

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
    System_Exception___ctor_1b6abf0(__this_02,message,(MethodInfo *)0x0);
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
// 0x1821071b0

float Characters_AnimationHandler__GetCurrentNormalizedTime
                (Characters_AnimationHandler_o *__this,MethodInfo *method)

{
  System_String_o *name;
  UnityEngine_Animation_o *__this_00;
  UnityEngine_AnimationState_o *__this_01;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((__this->fields)._isLegacy == false) {
    fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    name = (__this->fields)._currentAnimation;
    fVar4 = (__this->fields)._currentAnimationStartTime;
    fVar2 = Characters_AnimationHandler__GetLength(__this,name,(MethodInfo *)0x0);
    fVar3 = Characters_AnimationHandler__GetSpeed(__this,name,(MethodInfo *)0x0);
    return (fVar1 - fVar4) / (fVar2 / fVar3);
  }
  __this_00 = (__this->fields).Animation;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    __this_01 = UnityEngine_Animation__get_Item
                          (__this_00,(__this->fields)._currentAnimation,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
      fVar4 = UnityEngine_AnimationState__get_normalizedTime(__this_01,(MethodInfo *)0x0);
      return fVar4;
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$IsPlaying
// il2cpp: bool Characters_AnimationHandler__IsPlaying (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x182107490

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
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    bVar1 = UnityEngine_Animation__IsPlaying(__this_00,name,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$Play
// il2cpp: void Characters_AnimationHandler__Play (Characters_AnimationHandler_o* __this, System_String_o* name, float startTime, bool reset, const MethodInfo* method);
// 0x1821077b0

void Characters_AnimationHandler__Play
               (Characters_AnimationHandler_o *__this,System_String_o *name,float startTime,bool reset,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_Animator_o *pUVar1;
  UnityEngine_Animation_o *pUVar2;
  System_String_o *stateName;
  UnityEngine_AnimationState_o *__this_01;
  float fVar3;
  
  if (Il2CppMethodInitialized_184346afc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    Il2CppMethodInitialized_184346afc = '\x01';
  }
  if ((__this->fields)._isLegacy == false) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._animatorStateNames;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar1 = (__this->fields).Animator;
      stateName = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_00,(Il2CppObject *)name,
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      if (pUVar1 != (UnityEngine_Animator_o *)0x0) {
        UnityEngine_Animator__Play(pUVar1,stateName,0,startTime,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).Animator;
        fVar3 = Characters_AnimationHandler__GetSpeed(__this,name,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_Animator_o *)0x0) {
          UnityEngine_Animator__set_speed(pUVar1,fVar3,(MethodInfo *)0x0);
          goto label_1821078b0;
        }
      }
    }
  }
  else {
    pUVar2 = (__this->fields).Animation;
    if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
      UnityEngine_Animation__Play(pUVar2,name,(MethodInfo *)0x0);
      if (0.0 < startTime) {
        reset = true;
      }
      if (reset == false) {
label_1821078b0:
        (__this->fields)._currentAnimation = name;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._currentAnimation,name);
        fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        (__this->fields)._currentAnimationStartTime = fVar3;
        return;
      }
      pUVar2 = (__this->fields).Animation;
      if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
        __this_01 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
          UnityEngine_AnimationState__set_normalizedTime(__this_01,startTime,(MethodInfo *)0x0);
          goto label_1821078b0;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$CrossFade
// il2cpp: void Characters_AnimationHandler__CrossFade (Characters_AnimationHandler_o* __this, System_String_o* name, float fade, float startTime, const MethodInfo* method);
// 0x182106c60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182106e4e: mov rdx, rax

void Characters_AnimationHandler__CrossFade
               (Characters_AnimationHandler_o *__this,System_String_o *name,float fade,float startTime,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  UnityEngine_Animation_o *pUVar2;
  bool bVar3;
  System_String_o *pSVar4;
  UnityEngine_AnimationState_o *__this_00;
  UnityEngine_Animator_o *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (Il2CppMethodInitialized_184346afd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    Il2CppMethodInitialized_184346afd = '\x01';
  }
  if ((__this->fields)._isLegacy != false) {
    pUVar2 = (__this->fields).Animation;
    if (pUVar2 == (UnityEngine_Animation_o *)0x0) goto label_182106f36;
    UnityEngine_Animation__CrossFade(pUVar2,name,fade,(MethodInfo *)0x0);
    if (0.0 < startTime) {
      pUVar2 = (__this->fields).Animation;
      if ((pUVar2 == (UnityEngine_Animation_o *)0x0) ||
         (__this_00 = UnityEngine_Animation__get_Item(pUVar2,name,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_AnimationState_o *)0x0)) goto label_182106f36;
      UnityEngine_AnimationState__set_normalizedTime(__this_00,startTime,(MethodInfo *)0x0);
    }
    goto label_182106ee3;
  }
  bVar3 = System_String__op_Equality
                    ((__this->fields)._currentAnimation,
                     (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (bVar3) {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._animatorStateNames;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182106f36;
    pUVar5 = (__this->fields).Animator;
    pSVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar1,(Il2CppObject *)name,
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    if (pUVar5 == (UnityEngine_Animator_o *)0x0) goto label_182106f36;
label_182106e51:
    UnityEngine_Animator__CrossFade(pUVar5,pSVar4,fade,0,startTime,(MethodInfo *)0x0);
  }
  else {
    if ((__this->fields).LegacyCrossFadeTiming == false) {
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._animatorStateNames
      ;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182106f36;
      pUVar5 = (__this->fields).Animator;
      pSVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)name,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      fVar6 = Characters_AnimationHandler__GetLength
                        (__this,(__this->fields)._currentAnimation,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Animator_o *)0x0) goto label_182106f36;
      fade = fade / fVar6;
      goto label_182106e51;
    }
    if (Il2CppMethodInitialized_184346afe == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      Il2CppMethodInitialized_184346afe = '\x01';
    }
    fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._animatorStateNames;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182106f36;
    pUVar5 = (__this->fields).Animator;
    fVar6 = fade - fVar6;
    if (fVar6 <= 0.0) {
      pSVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)name,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      if (pUVar5 == (UnityEngine_Animator_o *)0x0) goto label_182106f36;
      UnityEngine_Animator__Play(pUVar5,pSVar4,0,startTime,(MethodInfo *)0x0);
    }
    else {
      pSVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)name,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      fVar7 = Characters_AnimationHandler__GetSpeed(__this,name,(MethodInfo *)0x0);
      fVar8 = Characters_AnimationHandler__GetLength
                        (__this,(__this->fields)._currentAnimation,(MethodInfo *)0x0);
      fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Animator_o *)0x0) goto label_182106f36;
      UnityEngine_Animator__CrossFade_2eae8a0
                (pUVar5,pSVar4,(fVar7 * fVar6) / fVar8,0,startTime,-fVar9 / fVar6,(MethodInfo *)0x0);
    }
  }
  pUVar5 = (__this->fields).Animator;
  fVar6 = Characters_AnimationHandler__GetSpeed(__this,name,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Animator_o *)0x0) {
label_182106f36:
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__set_speed(pUVar5,fVar6,(MethodInfo *)0x0);
label_182106ee3:
  (__this->fields)._currentAnimation = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentAnimation,name);
  fVar6 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  (__this->fields)._currentAnimationStartTime = fVar6;
  return;
}


// Characters.AnimationHandler$$LegacyCrossFade
// il2cpp: void Characters_AnimationHandler__LegacyCrossFade (Characters_AnimationHandler_o* __this, System_String_o* name, float fade, float startTime, const MethodInfo* method);
// 0x1821074d0

void Characters_AnimationHandler__LegacyCrossFade
               (Characters_AnimationHandler_o *__this,System_String_o *name,float fade,float startTime,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_Animator_o *__this_01;
  System_String_o *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184346afe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    Il2CppMethodInitialized_184346afe = '\x01';
  }
  fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._animatorStateNames;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_01 = (__this->fields).Animator;
    fVar2 = fade - fVar2;
    if (fVar2 <= 0.0) {
      pSVar1 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_00,(Il2CppObject *)name,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      if (__this_01 == (UnityEngine_Animator_o *)0x0) goto label_182107633;
      UnityEngine_Animator__Play(__this_01,pSVar1,0,startTime,(MethodInfo *)0x0);
    }
    else {
      pSVar1 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_00,(Il2CppObject *)name,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      fVar3 = Characters_AnimationHandler__GetSpeed(__this,name,(MethodInfo *)0x0);
      fVar4 = Characters_AnimationHandler__GetLength
                        (__this,(__this->fields)._currentAnimation,(MethodInfo *)0x0);
      fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Animator_o *)0x0) goto label_182107633;
      UnityEngine_Animator__CrossFade_2eae8a0
                (__this_01,pSVar1,(fVar3 * fVar2) / fVar4,0,startTime,-fVar5 / fVar2,(MethodInfo *)0x0);
    }
    return;
  }
label_182107633:
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$SetSpeed
// il2cpp: void Characters_AnimationHandler__SetSpeed (Characters_AnimationHandler_o* __this, System_String_o* name, float speed, const MethodInfo* method);
// 0x182107e50

void Characters_AnimationHandler__SetSpeed
               (Characters_AnimationHandler_o *__this,System_String_o *name,float speed,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if (Il2CppMethodInitialized_184346aff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
    Il2CppMethodInitialized_184346aff = '\x01';
  }
  __this_00 = (__this->fields)._animationSpeed;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)name,speed,
               (MethodInfo_1488DA0 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
    Characters_AnimationHandler__ApplySpeed(__this,name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$SetSpeedMultiplier
// il2cpp: void Characters_AnimationHandler__SetSpeedMultiplier (Characters_AnimationHandler_o* __this, System_String_o* name, float multiplier, const MethodInfo* method);
// 0x182107dd0

void Characters_AnimationHandler__SetSpeedMultiplier
               (Characters_AnimationHandler_o *__this,System_String_o *name,float multiplier,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if (Il2CppMethodInitialized_184346b00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
    Il2CppMethodInitialized_184346b00 = '\x01';
  }
  __this_00 = (__this->fields)._speedMultipliers;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)name,
               multiplier,
               (MethodInfo_1488DA0 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
    Characters_AnimationHandler__ApplySpeed(__this,name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$ApplySpeed
// il2cpp: void Characters_AnimationHandler__ApplySpeed (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x182106b30

void Characters_AnimationHandler__ApplySpeed
               (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  UnityEngine_Animation_o *__this_01;
  bool bVar1;
  UnityEngine_AnimationState_o *__this_02;
  float fVar2;
  
  if ((__this->fields)._isLegacy == false) {
    bVar1 = System_String__op_Equality((__this->fields)._currentAnimation,name,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = (__this->fields).Animator;
      fVar2 = Characters_AnimationHandler__GetSpeed(__this,name,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_Animator_o *)0x0) goto label_182106bd4;
      UnityEngine_Animator__set_speed(__this_00,fVar2,(MethodInfo *)0x0);
    }
    return;
  }
  __this_01 = (__this->fields).Animation;
  if (__this_01 != (UnityEngine_Animation_o *)0x0) {
    __this_02 = UnityEngine_Animation__get_Item(__this_01,name,(MethodInfo *)0x0);
    fVar2 = Characters_AnimationHandler__GetSpeed(__this,name,(MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_speed(__this_02,fVar2,(MethodInfo *)0x0);
      return;
    }
  }
label_182106bd4:
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$SetSpeedAll
// il2cpp: void Characters_AnimationHandler__SetSpeedAll (Characters_AnimationHandler_o* __this, float speed, const MethodInfo* method);
// 0x182107c20
// eh: try 0x182107d10..0x182107dba -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182107d0f: nop 
// asm:   0x182107d82: mov rdx, qword ptr [rip + 0x1f8fb8f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x182107d89: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182107d8e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182107d93: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182107d98: test rcx, rcx
// asm:   0x182107d9b: jne 0x182107dba
// asm:   0x182107dba: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Characters_AnimationHandler__SetSpeedAll
               (Characters_AnimationHandler_o *__this,float speed,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *pSVar1;
  Il2CppObject *name;
  bool bVar2;
  System_Collections_Generic_IEnumerable_TKey__o *source;
  System_Collections_Generic_List_TSource__o *__this_00;
  undefined1 local_50 [16];
  System_String_o *local_40;
  System_Collections_Generic_List_Enumerator_object__o local_38 [2];
  
  if (Il2CppMethodInitialized_184346b01 == '\0') {
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
    Il2CppMethodInitialized_184346b01 = '\x01';
  }
  local_38[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38[0].fields._index = 0;
  local_38[0].fields._version = 0;
  local_38[0].fields._current = (Il2CppObject *)0x0;
  pSVar1 = (__this->fields)._animationSpeed;
  if (pSVar1 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    source = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                        (MethodInfo_13C6500 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Keys);
    __this_00 = System_Linq_Enumerable__ToList_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
    if (__this_00 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_38[0].fields._list = (System_Collections_Generic_List_T__o *)local_50._0_8_;
      local_38[0].fields._index = local_50._8_4_;
      local_38[0].fields._version = local_50._12_4_;
      local_38[0].fields._current = (Il2CppObject *)local_40;
      local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_50._8_8_ = local_38;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (local_38,(MethodInfo_153A2A0 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        name = local_38[0].fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
                     MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
          return;
        }
        if (Il2CppMethodInitialized_184346aff == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
          Il2CppMethodInitialized_184346aff = '\x01';
        }
        pSVar1 = (__this->fields)._animationSpeed;
        if (pSVar1 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__float___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,name,speed,
                   (MethodInfo_1488DA0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
        Characters_AnimationHandler__ApplySpeed(__this,(System_String_o *)name,(MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$SetCullingType
// il2cpp: void Characters_AnimationHandler__SetCullingType (Characters_AnimationHandler_o* __this, bool alwaysAnimate, const MethodInfo* method);
// 0x182107b90

void Characters_AnimationHandler__SetCullingType
               (Characters_AnimationHandler_o *__this,bool alwaysAnimate,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  UnityEngine_Animation_o *__this_01;
  
  if ((__this->fields)._isLegacy == false) {
    __this_00 = (__this->fields).Animator;
    if (__this_00 != (UnityEngine_Animator_o *)0x0) {
      if (!alwaysAnimate) {
        UnityEngine_Animator__set_cullingMode(__this_00,2,(MethodInfo *)0x0);
        return;
      }
      UnityEngine_Animator__set_cullingMode(__this_00,0,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    __this_01 = (__this->fields).Animation;
    if (__this_01 != (UnityEngine_Animation_o *)0x0) {
      if (!alwaysAnimate) {
        UnityEngine_Animation__set_cullingType(__this_01,1,(MethodInfo *)0x0);
        return;
      }
      UnityEngine_Animation__set_cullingType(__this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$OnDistanceUpdate
// il2cpp: void Characters_AnimationHandler__OnDistanceUpdate (Characters_AnimationHandler_o* __this, float distance, const MethodInfo* method);
// 0x182107640

void Characters_AnimationHandler__OnDistanceUpdate
               (Characters_AnimationHandler_o *__this,float distance,MethodInfo *method)

{
  int iVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184346b02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b02 = '\x01';
  }
  pCVar2 = (__this->fields).Owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pCVar2 = (__this->fields).Owner;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    fVar4 = (*(pCVar2->klass->vtable)._65_get_CullRendererDistance.methodPtr)
                      (pCVar2,(pCVar2->klass->vtable)._65_get_CullRendererDistance.method);
    bVar3 = distance < fVar4;
    if ((__this->fields)._visible != bVar3) {
      pCVar2 = (__this->fields).Owner;
      (__this->fields)._visible = bVar3;
      if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto label_1821077a5;
      (pCVar2->fields).IsVisible = bVar3;
      Characters_AnimationHandler__ApplyRenderState(__this,(MethodInfo *)0x0);
    }
    if ((__this->fields)._visible == false) {
      return;
    }
    pCVar2 = (__this->fields).Owner;
    if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
      fVar4 = (*(pCVar2->klass->vtable)._64_get_CullShadowsDistance.methodPtr)
                        (pCVar2,(pCVar2->klass->vtable)._64_get_CullShadowsDistance.method);
      if ((__this->fields)._shadowsEnabled != distance < fVar4) {
        (__this->fields)._shadowsEnabled = distance < fVar4;
        Characters_AnimationHandler__ApplyRenderState(__this,(MethodInfo *)0x0);
      }
      pCVar2 = (__this->fields).Owner;
      if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
        fVar4 = (*(pCVar2->klass->vtable)._63_get_LODQualityLowDistance.methodPtr)
                          (pCVar2,(pCVar2->klass->vtable)._63_get_LODQualityLowDistance.method);
        if (fVar4 < distance) {
          if ((__this->fields)._skinQuality == 1) {
            return;
          }
          (__this->fields)._skinQuality = 1;
        }
        else {
          pCVar2 = (__this->fields).Owner;
          if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto label_1821077a5;
          fVar4 = (*(pCVar2->klass->vtable)._62_get_LODQualityMediumDistance.methodPtr)
                            (pCVar2,(pCVar2->klass->vtable)._62_get_LODQualityMediumDistance.method);
          iVar1 = (__this->fields)._skinQuality;
          if (fVar4 < distance) {
            if (iVar1 == 2) {
              return;
            }
            (__this->fields)._skinQuality = 2;
          }
          else {
            if (iVar1 == 4) {
              return;
            }
            (__this->fields)._skinQuality = 4;
          }
        }
        Characters_AnimationHandler__ApplyRenderState(__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_1821077a5:
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$SetVisible
// il2cpp: void Characters_AnimationHandler__SetVisible (Characters_AnimationHandler_o* __this, bool visible, const MethodInfo* method);
// 0x182107ed0

void Characters_AnimationHandler__SetVisible
               (Characters_AnimationHandler_o *__this,bool visible,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if ((__this->fields)._visible == visible) {
    return;
  }
  pCVar1 = (__this->fields).Owner;
  (__this->fields)._visible = visible;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    (pCVar1->fields).IsVisible = visible;
    Characters_AnimationHandler__ApplyRenderState(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$SetQuality
// il2cpp: void Characters_AnimationHandler__SetQuality (Characters_AnimationHandler_o* __this, int32_t quality, const MethodInfo* method);
// 0x182107c00

void Characters_AnimationHandler__SetQuality
               (Characters_AnimationHandler_o *__this,int32_t quality,MethodInfo *method)

{
  if ((__this->fields)._skinQuality != quality) {
    (__this->fields)._skinQuality = quality;
    Characters_AnimationHandler__ApplyRenderState(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.AnimationHandler$$SetShadows
// il2cpp: void Characters_AnimationHandler__SetShadows (Characters_AnimationHandler_o* __this, bool shadows, const MethodInfo* method);
// 0x182107c10

void Characters_AnimationHandler__SetShadows
               (Characters_AnimationHandler_o *__this,bool shadows,MethodInfo *method)

{
  if ((__this->fields)._shadowsEnabled != shadows) {
    (__this->fields)._shadowsEnabled = shadows;
    Characters_AnimationHandler__ApplyRenderState(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.AnimationHandler$$get_RenderStateVersion
// il2cpp: int32_t Characters_AnimationHandler__get_RenderStateVersion (Characters_AnimationHandler_o* __this, const MethodInfo* method);
// 0x181bf1b70

int32_t
Characters_AnimationHandler__get_RenderStateVersion(Characters_AnimationHandler_o* __this, MethodInfo* method)

{
  return (__this->fields)._renderStateVersion;
}


// Characters.AnimationHandler$$ApplyRenderState
// il2cpp: void Characters_AnimationHandler__ApplyRenderState (Characters_AnimationHandler_o* __this, const MethodInfo* method);
// 0x182106850

void Characters_AnimationHandler__ApplyRenderState(Characters_AnimationHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  UnityEngine_Renderer_array *pUVar3;
  UnityEngine_Object_o *x;
  bool bVar4;
  bool bVar5;
  int32_t iVar6;
  int32_t iVar7;
  uint uVar8;
  
  piVar1 = &(__this->fields)._renderStateVersion;
  *piVar1 = *piVar1 + 1;
  pUVar3 = (__this->fields).Renderers;
  if (pUVar3 != (UnityEngine_Renderer_array *)0x0) {
    uVar8 = 0;
    do {
      if ((int)pUVar3->max_length <= (int)uVar8) {
        return;
      }
      if ((uint)pUVar3->max_length <= uVar8) {
        ThrowIndexOutOfRangeException();
      }
      x = (UnityEngine_Object_o *)pUVar3->m_Items[(int)uVar8];
      if (Il2CppMethodInitialized_184346b03 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
        Il2CppMethodInitialized_184346b03 = '\x01';
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        bVar4 = (__this->fields)._visible == false;
        if (x == (UnityEngine_Object_o *)0x0) break;
        bVar5 = UnityEngine_Renderer__get_forceRenderingOff((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
        if (bVar5 != bVar4) {
          UnityEngine_Renderer__set_forceRenderingOff((UnityEngine_Renderer_o *)x,bVar4,(MethodInfo *)0x0);
        }
        bVar2 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
        if ((bVar2 <= (x->klass->_2).typeHierarchyDepth) &&
           ((x->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
            (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer)) {
          iVar6 = UnityEngine_SkinnedMeshRenderer__get_quality
                            ((UnityEngine_SkinnedMeshRenderer_o *)x,(MethodInfo *)0x0);
          if (iVar6 != (__this->fields)._skinQuality) {
            UnityEngine_SkinnedMeshRenderer__set_quality
                      ((UnityEngine_SkinnedMeshRenderer_o *)x,(__this->fields)._skinQuality,(MethodInfo *)0x0)
            ;
          }
        }
        bVar4 = UnityEngine_Renderer__get_receiveShadows((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
        if (bVar4 != (__this->fields)._shadowsEnabled) {
          UnityEngine_Renderer__set_receiveShadows
                    ((UnityEngine_Renderer_o *)x,(__this->fields)._shadowsEnabled,(MethodInfo *)0x0);
        }
        if ((__this->fields)._shadowsEnabled == false) {
label_182106996:
          iVar6 = 0;
        }
        else {
          bVar4 = Characters_AnimationHandler__CastsShadows
                            (__this,(UnityEngine_Renderer_o *)x,true,(MethodInfo *)0x0);
          if (!bVar4) goto label_182106996;
          iVar6 = 1;
        }
        iVar7 = UnityEngine_Renderer__get_shadowCastingMode((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
        if (iVar7 != iVar6) {
          UnityEngine_Renderer__set_shadowCastingMode((UnityEngine_Renderer_o *)x,iVar6,(MethodInfo *)0x0);
        }
      }
      uVar8 = uVar8 + 1;
    } while( true );
  }
  ThrowNullReferenceException();
}


// Characters.AnimationHandler$$ApplyRenderState
// il2cpp: void Characters_AnimationHandler__ApplyRenderState (Characters_AnimationHandler_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x1821069e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182106b1a: mov rsi, qword ptr [rsp + 0x30]

void Characters_AnimationHandler__ApplyRenderState_21069e0
               (Characters_AnimationHandler_o *__this,UnityEngine_Renderer_o *renderer,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  int value;
  
  if (Il2CppMethodInitialized_184346b03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    Il2CppMethodInitialized_184346b03 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)renderer,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    bVar2 = (__this->fields)._visible == false;
    if (renderer == (UnityEngine_Renderer_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar3 = UnityEngine_Renderer__get_forceRenderingOff(renderer,(MethodInfo *)0x0);
    if (bVar3 != bVar2) {
      UnityEngine_Renderer__set_forceRenderingOff(renderer,bVar2,(MethodInfo *)0x0);
    }
    bVar1 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
    if (((bVar1 <= (renderer->klass->_2).typeHierarchyDepth) &&
        ((renderer->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer)) &&
       (iVar4 = UnityEngine_SkinnedMeshRenderer__get_quality
                          ((UnityEngine_SkinnedMeshRenderer_o *)renderer,(MethodInfo *)0x0),
       iVar4 != (__this->fields)._skinQuality)) {
      UnityEngine_SkinnedMeshRenderer__set_quality
                ((UnityEngine_SkinnedMeshRenderer_o *)renderer,(__this->fields)._skinQuality,(MethodInfo *)0x0
                );
    }
    bVar2 = UnityEngine_Renderer__get_receiveShadows(renderer,(MethodInfo *)0x0);
    if (bVar2 != (__this->fields)._shadowsEnabled) {
      UnityEngine_Renderer__set_receiveShadows(renderer,(__this->fields)._shadowsEnabled,(MethodInfo *)0x0);
    }
    if (((__this->fields)._shadowsEnabled == false) ||
       (bVar2 = Characters_AnimationHandler__CastsShadows(__this,renderer,true,(MethodInfo *)0x0), !bVar2)) {
      value = 0;
    }
    else {
      value = 1;
    }
    iVar4 = UnityEngine_Renderer__get_shadowCastingMode(renderer,(MethodInfo *)0x0);
    if (iVar4 != value) {
      UnityEngine_Renderer__set_shadowCastingMode(renderer,value,(MethodInfo *)0x0);
    }
  }
  return;
}


// Characters.AnimationHandler$$<RefreshRenderers>b__19_2
// il2cpp: bool Characters_AnimationHandler___RefreshRenderers_b__19_2 (Characters_AnimationHandler_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x182107f00

bool Characters_AnimationHandler___RefreshRenderers_b__19_2
               (Characters_AnimationHandler_o *__this,UnityEngine_Renderer_o *renderer,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if (renderer != (UnityEngine_Renderer_o *)0x0) {
    iVar2 = UnityEngine_Renderer__get_shadowCastingMode(renderer,(MethodInfo *)0x0);
    bVar1 = Characters_AnimationHandler__CastsShadows(__this,renderer,iVar2 != 0,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


