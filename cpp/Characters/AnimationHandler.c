// Type: Characters.AnimationHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/AnimationHandler.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/AnimationHandler.cs
// --------------------------------

// Characters.AnimationHandler$$.ctor
// il2cpp: void Characters_AnimationHandler___ctor (Characters_AnimationHandler_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x429d7b0

void Characters_AnimationHandler___ctor
               (Characters_AnimationHandler_o *__this,UnityEngine_GameObject_o *owner,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o **ppSVar1;
  ushort uVar2;
  ushort uVar3;
  UnityEngine_Object_c *pUVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  uint uVar8;
  System_Collections_Generic_Dictionary_string__float__o *pSVar9;
  System_Collections_Generic_Dictionary_object__object__o *pSVar10;
  long *plVar11;
  UnityEngine_Animation_o *pUVar12;
  UnityEngine_Animator_o *pUVar13;
  System_String_o *pSVar14;
  long *plVar15;
  UnityEngine_RuntimeAnimatorController_o *__this_00;
  UnityEngine_AnimationClip_array *pUVar16;
  UnityEngine_SkinnedMeshRenderer_o *pUVar17;
  undefined8 *puVar18;
  MethodInfo *in_RCX;
  uint uVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  float value;
  UnityEngine_Playables_PlayableGraph_o UVar23;
  undefined1 auVar24 [12];
  UnityEngine_AnimationClip_o *local_78;
  UnityEngine_Animator_o **local_70;
  intptr_t local_68;
  undefined8 uStack_60;
  UnityEngine_GameObject_o *local_58;
  Characters_AnimationHandler_o *local_50;
  System_Collections_Generic_Dictionary_string__string__o **local_48;
  System_Collections_Generic_Dictionary_string__AnimationClip__o **local_40;
  System_Collections_Generic_Dictionary_string__float__o **local_38;
  
  if (g_data_057add1e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_AnimationClip);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_AnimationClip);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponentInChildren_SkinnedMeshRe);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Animation_GetComponent_Animation);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Animator_GetComponent_Animator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add1e = '\x01';
  }
  local_68 = 0;
  uStack_60 = 0;
  pSVar9 = (System_Collections_Generic_Dictionary_string__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9,MethodInfo_Dictionary_2_System_String_System_Single);
  ppSVar1 = &(__this->fields)._animationSpeed;
  (__this->fields)._animationSpeed = pSVar9;
  il2cpp_runtime_helper_022b4080(ppSVar1,pSVar9);
  (__this->fields)._currentAnimation = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._currentAnimation);
  pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_AnimationClip);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar10,MethodInfo_Dictionary_2_System_String_UnityEngine_AnimationClip);
  local_40 = &(__this->fields)._animatorClips;
  (__this->fields)._animatorClips = (System_Collections_Generic_Dictionary_string__AnimationClip__o *)pSVar10;
  il2cpp_runtime_helper_022b4080(local_40,pSVar10);
  plVar11 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)plVar11,MethodInfo_Dictionary_2_System_String_System_String);
  local_48 = &(__this->fields)._animatorStateNames;
  (__this->fields)._animatorStateNames = (System_Collections_Generic_Dictionary_string__string__o *)plVar11;
  il2cpp_runtime_helper_022b4080();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (owner == (UnityEngine_GameObject_o *)0x0) goto label_0429ddbf;
  pUVar12 = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_object_(owner,MethodInfo_Animation_GetComponent_Animation);
  (__this->fields).Animation = pUVar12;
  il2cpp_runtime_helper_022b4080(&__this->fields,pUVar12);
  pUVar13 = (UnityEngine_Animator_o *)UnityEngine_GameObject__GetComponent_object_(owner,MethodInfo_Animator_GetComponent_Animator);
  local_70 = &(__this->fields).Animator;
  (__this->fields).Animator = pUVar13;
  il2cpp_runtime_helper_022b4080(local_70);
  plVar11 = (long *)(__this->fields).Animation;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)plVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  local_58 = owner;
  local_50 = __this;
  local_38 = ppSVar1;
  if ((char)bVar7 == '\0') goto label_0429dc22;
  *(undefined1 *)&(__this->fields)._isLegacy = 1;
  pUVar12 = (__this->fields).Animation;
  if (pUVar12 == (UnityEngine_Animation_o *)0x0) goto label_0429ddbf;
  owner = (UnityEngine_GameObject_o *)UnityEngine_Animation__GetEnumerator(pUVar12,(MethodInfo *)0x0);
  if ((UnityEngine_AnimationClip_o *)owner == (UnityEngine_AnimationClip_o *)0x0) goto label_0429dddb;
  local_78 = (UnityEngine_AnimationClip_o *)0x0;
  do {
    pUVar4 = (UnityEngine_Object_c *)((UnityEngine_AnimationClip_o *)owner)->klass;
    uVar2._0_1_ = (pUVar4->_2).rank;
    uVar2._1_1_ = (pUVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pUVar4->_1).interfaceOffsets;
      lVar20 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar20) == TypeInfo_IEnumerator) {
          in_RCX = (MethodInfo *)(&(pUVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar20));
          goto label_0429da93;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar20);
    }
    in_RCX = (MethodInfo *)il2cpp_runtime_helper_02300d20(owner,TypeInfo_IEnumerator,0);
label_0429da93:
    cVar6 = (*in_RCX->methodPointer)(owner,(MethodInfo *)in_RCX->virtualMethodPointer);
    if (cVar6 == '\0') {
      iVar22 = 5;
      goto label_0429db83;
    }
    pUVar4 = (UnityEngine_Object_c *)((UnityEngine_AnimationClip_o *)owner)->klass;
    uVar3._0_1_ = (pUVar4->_2).rank;
    uVar3._1_1_ = (pUVar4->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar5 = (pUVar4->_1).interfaceOffsets;
      lVar20 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar20) == TypeInfo_IEnumerator) {
          in_RCX = (MethodInfo *)
                   (&(pUVar4->vtable)._0_Equals + (*(int *)((long)&pIVar5->offset + lVar20) + 1));
          goto label_0429db18;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar20);
    }
    in_RCX = (MethodInfo *)il2cpp_runtime_helper_02300d20(owner,TypeInfo_IEnumerator,1);
label_0429db18:
    plVar11 = (long *)(*in_RCX->methodPointer)(owner,(MethodInfo *)in_RCX->virtualMethodPointer);
    if ((System_Collections_Generic_Dictionary_object__object__o *)plVar11 ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0429ddcc;
    if (((System_Collections_Generic_Dictionary_object__object__o *)plVar11)->klass != TypeInfo_AnimationState)
    goto label_0429ddc4;
    pSVar9 = *ppSVar1;
    pSVar14 = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)plVar11,(MethodInfo *)0x0);
    value = UnityEngine_AnimationState__get_speed((UnityEngine_AnimationState_o *)plVar11,(MethodInfo *)0x0);
    if (pSVar9 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) break;
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9,(Il2CppObject *)pSVar14,value,
               MethodInfo_Void_set_Item);
  } while( true );
label_0429ddd1:
  il2cpp_runtime_helper_022b2c90();
  do {
    il2cpp_runtime_helper_022b2ca0();
label_0429dddb:
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar24 = il2cpp_runtime_helper_022fefe0(owner);
      iVar22 = 0;
      if (auVar24._8_4_ != 1) {
        plVar11 = (long *)il2cpp_runtime_helper_023051f0(owner,TypeInfo_IDisposable);
        if (plVar11 == (long *)0x0) goto label_0429dee6;
        lVar20 = *plVar11;
        if ((ulong)*(ushort *)(lVar20 + 0x12e) == 0) goto label_0429debf;
        lVar21 = 0;
        goto label_0429deb0;
      }
      puVar18 = (undefined8 *)__cxa_begin_catch(auVar24._0_8_);
      local_78 = (UnityEngine_AnimationClip_o *)*puVar18;
      __cxa_end_catch();
label_0429db83:
      plVar11 = &TypeInfo_IDisposable;
      plVar15 = (long *)il2cpp_runtime_helper_023051f0();
      if (plVar15 != (long *)0x0) {
        lVar20 = *plVar15;
        in_RCX = (MethodInfo *)0x0;
        if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
          in_RCX = (MethodInfo *)((ulong)*(ushort *)(lVar20 + 0x12e) << 4);
          lVar21 = 0;
          do {
            if (*(long *)(lVar21 + *(long *)(lVar20 + 0xb0)) == TypeInfo_IDisposable) {
              in_RCX = (MethodInfo *)((long)*(int *)(lVar21 + 8 + *(long *)(lVar20 + 0xb0)) * 0x10);
              puVar18 = (undefined8 *)((long)&in_RCX[3].parameters + lVar20);
              goto label_0429dbfd;
            }
            lVar21 = lVar21 + 0x10;
          } while (in_RCX != (MethodInfo *)lVar21);
        }
        puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IDisposable,0);
label_0429dbfd:
        (*(code *)*puVar18)(plVar15);
      }
      owner = (UnityEngine_GameObject_o *)local_78;
    } while (local_78 != (UnityEngine_AnimationClip_o *)0x0);
    if (iVar22 == 5) goto label_0429dd87;
    if (iVar22 != 0) {
      return;
    }
label_0429dc22:
    if (((*local_70 == (UnityEngine_Animator_o *)0x0) ||
        (__this_00 = UnityEngine_Animator__get_runtimeAnimatorController(*local_70,(MethodInfo *)0x0),
        __this_00 == (UnityEngine_RuntimeAnimatorController_o *)0x0)) ||
       (pUVar16 = UnityEngine_RuntimeAnimatorController__get_animationClips(__this_00,(MethodInfo *)0x0),
       pUVar16 == (UnityEngine_AnimationClip_array *)0x0)) goto label_0429ddbf;
    uVar8 = (uint)pUVar16->max_length;
    if ((int)uVar8 < 1) break;
    uVar19 = 0;
    while (uVar19 < uVar8) {
      owner = (UnityEngine_GameObject_o *)pUVar16->m_Items[(int)uVar19];
      if ((UnityEngine_AnimationClip_o *)owner == (UnityEngine_AnimationClip_o *)0x0) goto label_0429ddbf;
      pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)*local_48;
      plVar11 = (long *)UnityEngine_Object__get_name((UnityEngine_Object_o *)owner,(MethodInfo *)0x0);
      pSVar14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)owner,(MethodInfo *)0x0);
      if (pSVar14 == (System_String_o *)0x0) goto label_0429ddbf;
      in_RCX = (MethodInfo *)0x0;
      pSVar14 = System_String__Replace(pSVar14,0x2e,0x5f,(MethodInfo *)0x0);
      if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0429ddbf;
      in_RCX = MethodInfo_Void_set_Item;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar10,(Il2CppObject *)plVar11,(Il2CppObject *)pSVar14,(MethodInfo_3104DF0 *)MethodInfo_Void_set_Item);
      pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)*local_40;
      pSVar14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)owner,(MethodInfo *)0x0);
      plVar11 = (long *)0x0;
      if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0429ddbf;
      in_RCX = MethodInfo_Void_set_Item;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar10,(Il2CppObject *)pSVar14,(Il2CppObject *)owner,(MethodInfo_3104DF0 *)MethodInfo_Void_set_Item);
      plVar11 = (long *)*local_38;
      pSVar14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)owner,(MethodInfo *)0x0);
      if ((System_Collections_Generic_Dictionary_object__object__o *)plVar11 ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0429ddbf;
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)plVar11,(Il2CppObject *)pSVar14,1.0,
                 MethodInfo_Void_set_Item);
      uVar19 = uVar19 + 1;
      uVar8 = (uint)pUVar16->max_length;
      if ((int)uVar8 <= (int)uVar19) goto label_0429dd59;
    }
  } while( true );
label_0429dd59:
  if (*local_70 != (UnityEngine_Animator_o *)0x0) {
    UVar23 = UnityEngine_Animator__get_playableGraph(*local_70,(MethodInfo *)0x0);
    local_68 = UVar23.fields.m_Handle;
    uStack_60 = CONCAT44(uStack_60._4_4_,UVar23.fields.m_Version);
    UVar23.fields._8_8_ = 1;
    UVar23.fields.m_Handle = (intptr_t)&local_68;
    UnityEngine_Playables_PlayableGraph__SetTimeUpdateMode(UVar23,0,in_RCX);
label_0429dd87:
    pUVar17 = (UnityEngine_SkinnedMeshRenderer_o *)
              UnityEngine_GameObject__GetComponentInChildren_object_(local_58,MethodInfo_SkinnedMeshRenderer_GetComponentInChildren_SkinnedMeshRe);
    (local_50->fields).Renderer = pUVar17;
    il2cpp_runtime_helper_022b4080(&(local_50->fields).Renderer,pUVar17);
    return;
  }
label_0429ddbf:
  il2cpp_runtime_helper_022b2c90();
label_0429ddc4:
  il2cpp_runtime_helper_022b2fd0(plVar11);
label_0429ddcc:
  il2cpp_runtime_helper_022b2c90();
  goto label_0429ddd1;
  while (lVar21 = lVar21 + 0x10, (ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21) {
label_0429deb0:
    if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IDisposable) {
      puVar18 = (undefined8 *)(lVar20 + (long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + 0x138);
      goto label_0429dedd;
    }
  }
label_0429debf:
  puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_0429dedd:
  (*(code *)*puVar18)(plVar11,puVar18[1]);
label_0429dee6:
  _Unwind_Resume(auVar24._0_8_);
}


// Characters.AnimationHandler$$GetCurrentAnimation
// il2cpp: System_String_o* Characters_AnimationHandler__GetCurrentAnimation (Characters_AnimationHandler_o* __this, const MethodInfo* method);
// 0x429df10

System_String_o *
Characters_AnimationHandler__GetCurrentAnimation(Characters_AnimationHandler_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  UnityEngine_Animation_o *pUVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  VirtualInvokeData *pVVar8;
  UnityEngine_AnimationState_o *__this_00;
  System_String_o *pSVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  System_Collections_IEnumerator_o *unaff_R13;
  int iVar14;
  undefined1 auVar15 [12];
  long local_38;
  
  if (g_data_057add1f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057add1f = '\x01';
  }
  if ((char)(__this->fields)._isLegacy != '\0') {
    pUVar3 = (__this->fields).Animation;
    if (pUVar3 == (UnityEngine_Animation_o *)0x0) {
label_0429e1be:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      unaff_R13 = UnityEngine_Animation__GetEnumerator(pUVar3,(MethodInfo *)0x0);
      if (unaff_R13 != (System_Collections_IEnumerator_o *)0x0) {
        local_38 = 0;
        do {
          pSVar4 = unaff_R13->klass;
          uVar1._0_1_ = (pSVar4->_2).rank;
          uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar5 = (pSVar4->_1).interfaceOffsets;
            lVar12 = 0;
            do {
              if (*(long *)((long)&pIVar5->interfaceType + lVar12) == TypeInfo_IEnumerator) {
                pVVar8 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
                goto label_0429e003;
              }
              lVar12 = lVar12 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar12);
          }
          pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_0429e003:
          cVar6 = (*pVVar8->methodPtr)(unaff_R13,pVVar8->method);
          if (cVar6 == '\0') {
            iVar14 = 6;
            goto label_0429e0f7;
          }
          pSVar4 = unaff_R13->klass;
          uVar2._0_1_ = (pSVar4->_2).rank;
          uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar5 = (pSVar4->_1).interfaceOffsets;
            lVar12 = 0;
            do {
              if (*(long *)((long)&pIVar5->interfaceType + lVar12) == TypeInfo_IEnumerator) {
                pVVar8 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar12) + 1);
                goto label_0429e088;
              }
              lVar12 = lVar12 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar12);
          }
          pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,1);
label_0429e088:
          __this_00 = (UnityEngine_AnimationState_o *)(*pVVar8->methodPtr)(unaff_R13,pVVar8->method);
          if (__this_00 == (UnityEngine_AnimationState_o *)0x0) {
label_0429e1b4:
            il2cpp_runtime_helper_022b2c90();
label_0429e1b9:
            il2cpp_runtime_helper_022b2c90();
            goto label_0429e1be;
          }
          if (__this_00->klass != TypeInfo_AnimationState) {
            il2cpp_runtime_helper_022b2fd0(__this_00);
            goto label_0429e1b4;
          }
          pUVar3 = (__this->fields).Animation;
          pSVar9 = UnityEngine_AnimationState__get_name(__this_00,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_Animation_o *)0x0) goto label_0429e1b9;
          bVar7 = UnityEngine_Animation__IsPlaying(pUVar3,pSVar9,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            local_38 = 0;
            pSVar9 = UnityEngine_AnimationState__get_name(__this_00,(MethodInfo *)0x0);
            iVar14 = 5;
            goto label_0429e0fa;
          }
        } while( true );
      }
    }
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar15 = il2cpp_runtime_helper_022fefe0();
      iVar14 = 0;
      if (auVar15._8_4_ != 1) {
        plVar10 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
        if (plVar10 == (long *)0x0) goto label_0429e2d6;
        lVar12 = *plVar10;
        if ((ulong)*(ushort *)(lVar12 + 0x12e) == 0) goto label_0429e2af;
        lVar13 = 0;
        goto label_0429e2a0;
      }
      plVar10 = (long *)__cxa_begin_catch(auVar15._0_8_);
      local_38 = *plVar10;
      __cxa_end_catch();
label_0429e0f7:
      pSVar9 = (System_String_o *)0x0;
label_0429e0fa:
      plVar10 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
      if (plVar10 != (long *)0x0) {
        lVar12 = *plVar10;
        if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
          lVar13 = 0;
          do {
            if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
              puVar11 = (undefined8 *)
                        (lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 + 0x138);
              goto label_0429e16d;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13);
        }
        puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_IDisposable,0);
label_0429e16d:
        (*(code *)*puVar11)(plVar10,puVar11[1]);
      }
    } while (local_38 != 0);
    if (iVar14 == 6) {
      return "";
    }
    if (iVar14 != 0) {
      return pSVar9;
    }
  }
  return (__this->fields)._currentAnimation;
  while (lVar13 = lVar13 + 0x10, (ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13) {
label_0429e2a0:
    if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
      puVar11 = (undefined8 *)(lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 + 0x138);
      goto label_0429e2cd;
    }
  }
label_0429e2af:
  puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_IDisposable,0);
label_0429e2cd:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
label_0429e2d6:
  _Unwind_Resume(auVar15._0_8_);
}


// Characters.AnimationHandler$$GetLength
// il2cpp: float Characters_AnimationHandler__GetLength (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x429e300

float Characters_AnimationHandler__GetLength
                (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Int32_array *__this_00;
  UnityEngine_Animation_o *__this_01;
  UnityEngine_Animator_o *pUVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  Il2CppObject *b;
  char cVar6;
  bool_conflict bVar7;
  UnityEngine_AnimationState_o *pUVar8;
  UnityEngine_AnimationClip_o *__this_04;
  undefined8 uVar9;
  System_Exception_o *pSVar10;
  System_String_o *pSVar11;
  UnityEngine_Animation_c *pUVar12;
  UnityEngine_Animation_c *stateName;
  UnityEngine_Animation_c *pUVar13;
  VirtualInvokeData *pVVar14;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_05;
  long *plVar15;
  undefined8 *puVar16;
  char extraout_DL;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar17;
  MethodInfo *method_00;
  System_String_o *name_00;
  UnityEngine_Animation_c *pUVar18;
  System_Collections_Generic_Dictionary_object__object__o *__this_06;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar19;
  UnityEngine_Animation_o *pUVar20;
  UnityEngine_Animation_c *__this_07;
  Il2CppRGCTXData *__this_08;
  long lVar21;
  long lVar22;
  long lVar23;
  MethodInfo_310C3F0 **unaff_R12;
  System_Collections_IEnumerator_o *unaff_R13;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float in_XMM1_Da;
  undefined1 auVar29 [12];
  undefined4 in_stack_fffffffffffffea0;
  UnityEngine_AnimationState_o *in_stack_fffffffffffffea8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar30;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_130;
  Il2CppRGCTXData *pIStack_118;
  float fStack_c8;
  
  pSVar11 = name;
  if (g_data_057add20 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AnimationClip_get_Item);
    g_data_057add20 = '\x01';
  }
  if ((char)(__this->fields)._isLegacy == '\0') {
    __this_06 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._animatorClips;
    if ((__this_06 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_04 = (UnityEngine_AnimationClip_o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (__this_06,(Il2CppObject *)name,MethodInfo_AnimationClip_get_Item), pSVar11 = name,
       __this_04 != (UnityEngine_AnimationClip_o *)0x0)) {
      fVar25 = UnityEngine_AnimationClip__get_length(__this_04,(MethodInfo *)0x0);
      return fVar25;
    }
  }
  else {
    __this_06 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Animation;
    if ((__this_06 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pUVar8 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)__this_06,name,(MethodInfo *)0x0),
       pSVar11 = name, pUVar8 != (UnityEngine_AnimationState_o *)0x0)) {
      fVar25 = UnityEngine_AnimationState__get_length(pUVar8,(MethodInfo *)0x0);
      return fVar25;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  name_00 = pSVar11;
  if (g_data_057add21 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    g_data_057add21 = '\x01';
  }
  pSVar19 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&(__this_06->fields)._freeCount;
  if (pSVar19 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    fVar25 = System_Collections_Generic_Dictionary_object__float___get_Item
                       (pSVar19,(Il2CppObject *)pSVar11,MethodInfo_Single_get_Item);
    return fVar25;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar17 = extraout_RDX;
  if (g_data_057add22 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    g_data_057add22 = '\x01';
    pMVar17 = extraout_RDX_00;
  }
  pSVar11 = name_00;
  fVar25 = Characters_AnimationHandler__GetLength((Characters_AnimationHandler_o *)pSVar19,name_00,pMVar17);
  pSVar19 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&(pSVar19->fields)._freeCount;
  if (pSVar19 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    fVar26 = System_Collections_Generic_Dictionary_object__float___get_Item
                       (pSVar19,(Il2CppObject *)name_00,MethodInfo_Single_get_Item);
    return fVar25 / fVar26;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)((long)&(pSVar19->fields)._keys + 4) != '\0') {
    __this_00 = (pSVar19->fields)._buckets;
    if ((__this_00 != (System_Int32_array *)0x0) &&
       (pUVar8 = UnityEngine_Animation__get_Item
                           ((UnityEngine_Animation_o *)__this_00,pSVar11,(MethodInfo *)0x0),
       pUVar8 != (UnityEngine_AnimationState_o *)0x0)) {
      fVar25 = UnityEngine_AnimationState__get_normalizedTime(pUVar8,(MethodInfo *)0x0);
      return fVar25;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar10 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
  pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"GetNormalizedTime only available for legacy animations.");
  System_Exception___ctor_3cf6120(pSVar10,pSVar11,(MethodInfo *)0x0);
  pUVar12 = (UnityEngine_Animation_c *)il2cpp_runtime_helper_023445d0(&MethodInfo_Single_GetNormalizedTime);
  il2cpp_runtime_helper_022b2b10();
  if (*(char *)((long)&(pSVar10->fields)._stackTrace + 4) == '\0') {
    fVar26 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    fVar25 = *(float *)&(pSVar10->fields)._stackTrace;
    pUVar18 = (UnityEngine_Animation_c *)(pSVar10->fields)._helpURL;
    pMVar17 = extraout_RDX_01;
    if (g_data_057add22 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
      g_data_057add22 = '\x01';
      pMVar17 = extraout_RDX_02;
    }
    pUVar12 = pUVar18;
    fVar27 = Characters_AnimationHandler__GetLength
                       ((Characters_AnimationHandler_o *)pSVar10,(System_String_o *)pUVar18,pMVar17);
    pSVar10 = (pSVar10->fields)._innerException;
    pSVar11 = (System_String_o *)0x0;
    if (pSVar10 != (System_Exception_o *)0x0) {
      fVar28 = System_Collections_Generic_Dictionary_object__float___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,
                          (Il2CppObject *)pUVar18,MethodInfo_Single_get_Item);
      return (fVar26 - fVar25) / (fVar27 / fVar28);
    }
  }
  else {
    pSVar11 = (pSVar10->fields)._className;
    if (pSVar11 != (System_String_o *)0x0) {
      pUVar12 = (UnityEngine_Animation_c *)(pSVar10->fields)._helpURL;
      pUVar8 = UnityEngine_Animation__get_Item
                         ((UnityEngine_Animation_o *)pSVar11,(System_String_o *)pUVar12,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_AnimationState_o *)0x0) {
        fVar25 = UnityEngine_AnimationState__get_normalizedTime(pUVar8,(MethodInfo *)0x0);
        return fVar25;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)((long)&pSVar11[2].monitor + 4) == '\0') {
    System_String__op_Equality
              ((System_String_o *)pSVar11[2].klass,(System_String_o *)pUVar12,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  pUVar20 = *(UnityEngine_Animation_o **)&(pSVar11->fields)._stringLength;
  if (pUVar20 != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__IsPlaying(pUVar20,(System_String_o *)pUVar12,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  fVar25 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar18 = pUVar12;
  if (g_data_057add23 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057add23 = '\x01';
  }
  if (*(char *)((long)&pUVar20[2].monitor + 4) == '\0') {
    __this_07 = pUVar20[3].klass;
    if (__this_07 != (UnityEngine_Animation_c *)0x0) {
      pUVar13 = pUVar20[1].klass;
      pUVar18 = pUVar12;
      stateName = (UnityEngine_Animation_c *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_07,
                             (Il2CppObject *)pUVar12,MethodInfo_String_get_Item);
      if (pUVar13 != (UnityEngine_Animation_c *)0x0) {
        UnityEngine_Animator__Play
                  ((UnityEngine_Animator_o *)pUVar13,(System_String_o *)stateName,0,fVar25,(MethodInfo *)0x0);
        pUVar13 = pUVar20[1].klass;
        pUVar18 = stateName;
        if (g_data_057add21 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
          g_data_057add21 = '\x01';
          pUVar18 = stateName;
        }
        __this_07 = (UnityEngine_Animation_c *)pUVar20[1].fields.m_CachedPtr;
        if ((__this_07 != (UnityEngine_Animation_c *)0x0) &&
           (pUVar18 = pUVar12,
           fVar25 = System_Collections_Generic_Dictionary_object__float___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_07,
                               (Il2CppObject *)pUVar12,MethodInfo_Single_get_Item),
           pUVar13 != (UnityEngine_Animation_c *)0x0)) {
          UnityEngine_Animator__set_speed((UnityEngine_Animator_o *)pUVar13,fVar25,(MethodInfo *)0x0);
          goto label_0429e6f6;
        }
      }
    }
  }
  else {
    __this_01 = (UnityEngine_Animation_o *)(pUVar20->fields).m_CachedPtr;
    __this_07 = (UnityEngine_Animation_c *)0x0;
    if (__this_01 != (UnityEngine_Animation_o *)0x0) {
      pUVar18 = pUVar12;
      UnityEngine_Animation__Play(__this_01,(System_String_o *)pUVar12,(MethodInfo *)0x0);
      if ((fVar25 <= 0.0) && (extraout_DL == '\0')) {
label_0429e6f6:
        pUVar20[2].klass = pUVar12;
        il2cpp_runtime_helper_022b4080(pUVar20 + 2,pUVar12);
        fVar25 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        *(float *)&pUVar20[2].monitor = fVar25;
        return fVar25;
      }
      __this_07 = (UnityEngine_Animation_c *)(pUVar20->fields).m_CachedPtr;
      in_XMM1_Da = fVar25;
      if ((__this_07 != (UnityEngine_Animation_c *)0x0) &&
         (pUVar18 = pUVar12,
         pUVar8 = UnityEngine_Animation__get_Item
                            ((UnityEngine_Animation_o *)__this_07,(System_String_o *)pUVar12,(MethodInfo *)0x0
                            ), pUVar8 != (UnityEngine_AnimationState_o *)0x0)) {
        UnityEngine_AnimationState__set_normalizedTime(pUVar8,fVar25,(MethodInfo *)0x0);
        goto label_0429e6f6;
      }
    }
  }
  fStack_c8 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar12 = pUVar18;
  if (g_data_057add24 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057add24 = '\x01';
  }
  if ((__this_07->_1).this_arg.field_0xc == '\0') {
    pUVar12 = (UnityEngine_Animation_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    bVar7 = System_String__op_Inequality
                      ((__this_07->_1).this_arg.data,(System_String_o *)pUVar12,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pUVar12 = (__this_07->_1).this_arg.data;
      fVar25 = Characters_AnimationHandler__GetLength
                         ((Characters_AnimationHandler_o *)__this_07,(System_String_o *)pUVar12,method_00);
      fStack_c8 = fStack_c8 / fVar25;
    }
    __this_08 = (Il2CppRGCTXData *)(__this_07->_1).castClass;
    if (__this_08 != (Il2CppRGCTXData *)0x0) {
      pUVar3 = (UnityEngine_Animator_o *)(__this_07->_1).namespaze;
      pUVar12 = pUVar18;
      pUVar13 = (UnityEngine_Animation_c *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_08,
                           (Il2CppObject *)pUVar18,MethodInfo_String_get_Item);
      if (pUVar3 != (UnityEngine_Animator_o *)0x0) {
        UnityEngine_Animator__CrossFade
                  (pUVar3,(System_String_o *)pUVar13,fStack_c8,0,in_XMM1_Da,(MethodInfo *)0x0);
        pUVar3 = (UnityEngine_Animator_o *)(__this_07->_1).namespaze;
        pUVar12 = pUVar13;
        if (g_data_057add21 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
          g_data_057add21 = '\x01';
          pUVar12 = pUVar13;
        }
        __this_08 = *(Il2CppRGCTXData **)&(__this_07->_1).byval_arg.bits;
        if ((__this_08 != (Il2CppRGCTXData *)0x0) &&
           (pUVar12 = pUVar18,
           fVar25 = System_Collections_Generic_Dictionary_object__float___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_08,
                               (Il2CppObject *)pUVar18,MethodInfo_Single_get_Item), pUVar3 != (UnityEngine_Animator_o *)0x0)
           ) {
          UnityEngine_Animator__set_speed(pUVar3,fVar25,(MethodInfo *)0x0);
          goto label_0429e89b;
        }
      }
    }
  }
  else {
    pUVar20 = (UnityEngine_Animation_o *)(__this_07->_1).name;
    __this_08 = (Il2CppRGCTXData *)0x0;
    if (pUVar20 != (UnityEngine_Animation_o *)0x0) {
      pUVar12 = pUVar18;
      UnityEngine_Animation__CrossFade(pUVar20,(System_String_o *)pUVar18,fStack_c8,(MethodInfo *)0x0);
      if (0.0 < in_XMM1_Da) {
        __this_08 = (Il2CppRGCTXData *)(__this_07->_1).name;
        if ((__this_08 == (Il2CppRGCTXData *)0x0) ||
           (pUVar12 = pUVar18,
           pUVar8 = UnityEngine_Animation__get_Item
                              ((UnityEngine_Animation_o *)__this_08,(System_String_o *)pUVar18,
                               (MethodInfo *)0x0), pUVar8 == (UnityEngine_AnimationState_o *)0x0))
        goto label_0429e8c1;
        UnityEngine_AnimationState__set_normalizedTime(pUVar8,in_XMM1_Da,(MethodInfo *)0x0);
      }
label_0429e89b:
      (__this_07->_1).this_arg.data = pUVar18;
      il2cpp_runtime_helper_022b4080(&(__this_07->_1).this_arg,pUVar18);
      fVar25 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this_07->_1).this_arg.bits = (uint)fVar25;
      return fVar25;
    }
  }
label_0429e8c1:
  fVar25 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057add25 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057add25 = '\x01';
  }
  pMVar17 = (MethodInfo *)0x0;
  if (__this_08[5].method != (MethodInfo *)0x0) {
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_08[5].method,
               (Il2CppObject *)pUVar12,fVar25,MethodInfo_Void_set_Item);
    if (*(char *)((long)__this_08 + 0x3c) == '\0') {
      bVar7 = System_String__op_Equality
                        ((System_String_o *)__this_08[6].method,(System_String_o *)pUVar12,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return extraout_XMM0_Da_02;
      }
      pMVar17 = (MethodInfo *)0x0;
      if (__this_08[3].method != (MethodInfo *)0x0) {
        UnityEngine_Animator__set_speed
                  ((UnityEngine_Animator_o *)__this_08[3].method,fVar25,(MethodInfo *)0x0);
        return extraout_XMM0_Da_03;
      }
    }
    else {
      pMVar17 = __this_08[2].method;
      if ((pMVar17 != (MethodInfo *)0x0) &&
         (pUVar8 = UnityEngine_Animation__get_Item
                             ((UnityEngine_Animation_o *)pMVar17,(System_String_o *)pUVar12,(MethodInfo *)0x0)
         , pUVar8 != (UnityEngine_AnimationState_o *)0x0)) {
        UnityEngine_AnimationState__set_speed(pUVar8,fVar25,(MethodInfo *)0x0);
        return extraout_XMM0_Da_01;
      }
    }
  }
  fVar25 = (float)il2cpp_runtime_helper_022b2c90();
  pIStack_118 = __this_08;
  if (g_data_057add26 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    g_data_057add26 = '\x01';
  }
  if (*(char *)((long)&pMVar17->field7_0x38 + 4) == '\0') goto label_0429ec78;
  pUVar20 = (UnityEngine_Animation_o *)((UnityEngine_Animation_Fields *)&pMVar17->invoker_method)->m_CachedPtr
  ;
  if (pUVar20 == (UnityEngine_Animation_o *)0x0) goto label_0429ed79;
  unaff_R13 = UnityEngine_Animation__GetEnumerator(pUVar20,(MethodInfo *)0x0);
  if (unaff_R13 == (System_Collections_IEnumerator_o *)0x0) goto label_0429ed7e;
  pUVar8 = (UnityEngine_AnimationState_o *)0x0;
  do {
    pSVar4 = unaff_R13->klass;
    uVar1._0_1_ = (pSVar4->_2).rank;
    uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar21 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar21) == TypeInfo_IEnumerator) {
          pVVar14 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar21);
          goto label_0429eaf3;
        }
        lVar21 = lVar21 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar21);
    }
    pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_0429eaf3:
    cVar6 = (*pVVar14->methodPtr)(unaff_R13,pVVar14->method);
    if (cVar6 == '\0') {
      iVar24 = 5;
      unaff_R12 = (MethodInfo_310C3F0 **)pUVar8;
      goto label_0429ebe7;
    }
    pSVar4 = unaff_R13->klass;
    uVar2._0_1_ = (pSVar4->_2).rank;
    uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar21 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar21) == TypeInfo_IEnumerator) {
          pVVar14 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar21) + 1);
          goto label_0429eb78;
        }
        lVar21 = lVar21 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar21);
    }
    pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,1);
label_0429eb78:
    unaff_R12 = (MethodInfo_310C3F0 **)(*pVVar14->methodPtr)(unaff_R13,pVVar14->method);
    if ((UnityEngine_AnimationState_o *)unaff_R12 == (UnityEngine_AnimationState_o *)0x0) {
label_0429ed65:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6a:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6f:
      il2cpp_runtime_helper_022b2c90();
      do {
        il2cpp_runtime_helper_022b2c90();
label_0429ed79:
        do {
          il2cpp_runtime_helper_022b2c90();
label_0429ed7e:
          il2cpp_runtime_helper_022b2c90();
          do {
            auVar29 = il2cpp_runtime_helper_022fefe0(unaff_R12);
            uVar9 = auVar29._0_8_;
            iVar24 = 0;
            if (auVar29._8_4_ != 1) {
              lVar21 = 0;
              goto label_0429eeff;
            }
            puVar16 = (undefined8 *)__cxa_begin_catch(uVar9);
            unaff_R12 = (MethodInfo_310C3F0 **)*puVar16;
            __cxa_end_catch();
label_0429ebe7:
            plVar15 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
            fVar26 = extraout_XMM0_Da_04;
            in_stack_fffffffffffffea8 = (UnityEngine_AnimationState_o *)unaff_R12;
            if (plVar15 != (long *)0x0) {
              lVar21 = *plVar15;
              if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
                lVar22 = 0;
                do {
                  if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar22) == TypeInfo_IDisposable) {
                    puVar16 = (undefined8 *)
                              (lVar21 + (long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar22) * 0x10 + 0x138);
                    goto label_0429ec5d;
                  }
                  lVar22 = lVar22 + 0x10;
                } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar22);
              }
              puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IDisposable,0);
label_0429ec5d:
              fVar26 = (float)(*(code *)*puVar16)(plVar15,puVar16[1]);
            }
          } while ((UnityEngine_AnimationState_o *)unaff_R12 != (UnityEngine_AnimationState_o *)0x0);
          if (iVar24 != 0) {
            return fVar26;
          }
label_0429ec78:
        } while (((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar17->return_type ==
                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
                (__this_05 = System_Collections_Generic_Dictionary_object__float___get_Keys
                                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                        pMVar17->return_type,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys),
                __this_05 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0));
        System_Collections_Generic_Dictionary_KeyCollection_object__float___GetEnumerator
                  (&SStack_130,__this_05,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
        b = SStack_130.fields._currentKey;
        unaff_R12 = &MethodInfo_Void_set_Item;
        pSVar30 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                  SStack_130.fields._dictionary;
        while( true ) {
          do {
            __this_02.fields._dictionary._4_4_ = fVar25;
            __this_02.fields._dictionary._0_4_ = in_stack_fffffffffffffea0;
            __this_02.fields._8_8_ = in_stack_fffffffffffffea8;
            __this_02.fields._currentKey = (Il2CppObject *)pSVar30;
            bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___MoveNext
                              (__this_02,(MethodInfo_3252C30 *)&stack0xfffffffffffffeb0);
            if ((char)bVar7 == '\0') {
              __this_03.fields._dictionary._4_4_ = fVar25;
              __this_03.fields._dictionary._0_4_ = in_stack_fffffffffffffea0;
              __this_03.fields._8_8_ = in_stack_fffffffffffffea8;
              __this_03.fields._currentKey = (Il2CppObject *)pSVar30;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___Dispose
                        (__this_03,(MethodInfo_3252C20 *)&stack0xfffffffffffffeb0);
              return extraout_XMM0_Da_05;
            }
            if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar17->return_type ==
                (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0429ed6f;
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar17->return_type,b,fVar25,
                       MethodInfo_Void_set_Item);
            bVar7 = System_String__op_Equality
                              ((System_String_o *)pMVar17->parameters,(System_String_o *)b,(MethodInfo *)0x0);
          } while ((char)bVar7 == '\0');
          if ((UnityEngine_Animator_o *)pMVar17->name == (UnityEngine_Animator_o *)0x0) break;
          UnityEngine_Animator__set_speed((UnityEngine_Animator_o *)pMVar17->name,fVar25,(MethodInfo *)0x0);
        }
      } while( true );
    }
    if (((UnityEngine_AnimationState_o *)unaff_R12)->klass != TypeInfo_AnimationState) {
      il2cpp_runtime_helper_022b2fd0(unaff_R12);
      goto label_0429ed65;
    }
    pSVar19 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar17->return_type;
    pSVar11 = UnityEngine_AnimationState__get_name
                        ((UnityEngine_AnimationState_o *)unaff_R12,(MethodInfo *)0x0);
    if (pSVar19 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0429ed6a;
    System_Collections_Generic_Dictionary_object__float___set_Item
              (pSVar19,(Il2CppObject *)pSVar11,fVar25,MethodInfo_Void_set_Item);
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)unaff_R12,fVar25,(MethodInfo *)0x0);
  } while( true );
label_0429eeff:
  plVar15 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
  if (plVar15 != (long *)0x0) {
    lVar22 = *plVar15;
    if ((ulong)*(ushort *)(lVar22 + 0x12e) != 0) {
      lVar23 = 0;
      do {
        if (*(long *)(*(long *)(lVar22 + 0xb0) + lVar23) == TypeInfo_IDisposable) {
          puVar16 = (undefined8 *)
                    (lVar22 + (long)*(int *)(*(long *)(lVar22 + 0xb0) + 8 + lVar23) * 0x10 + 0x138);
          goto label_0429ef6d;
        }
        lVar23 = lVar23 + 0x10;
      } while ((ulong)*(ushort *)(lVar22 + 0x12e) << 4 != lVar23);
    }
    puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IDisposable,0);
label_0429ef6d:
    (*(code *)*puVar16)(plVar15,puVar16[1]);
  }
  if (lVar21 == 0) {
    _Unwind_Resume(uVar9);
  }
  uVar9 = il2cpp_runtime_helper_022fefe0(lVar21);
  goto label_0429eeff;
}


// Characters.AnimationHandler$$GetSpeed
// il2cpp: float Characters_AnimationHandler__GetSpeed (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x429e390

float Characters_AnimationHandler__GetSpeed
                (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Int32_array *__this_00;
  UnityEngine_Animation_o *__this_01;
  UnityEngine_Animator_o *pUVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  Il2CppObject *b;
  char cVar6;
  bool_conflict bVar7;
  UnityEngine_AnimationState_o *pUVar8;
  undefined8 uVar9;
  System_Exception_o *pSVar10;
  System_String_o *pSVar11;
  UnityEngine_Animation_c *pUVar12;
  UnityEngine_Animation_c *stateName;
  UnityEngine_Animation_c *pUVar13;
  VirtualInvokeData *pVVar14;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  long *plVar15;
  undefined8 *puVar16;
  char extraout_DL;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar17;
  MethodInfo *method_00;
  System_String_o *name_00;
  UnityEngine_Animation_c *pUVar18;
  System_Collections_Generic_Dictionary_string__float__o *__this_05;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar19;
  UnityEngine_Animation_o *pUVar20;
  UnityEngine_Animation_c *__this_06;
  Il2CppRGCTXData *__this_07;
  long lVar21;
  long lVar22;
  long lVar23;
  MethodInfo_310C3F0 **unaff_R12;
  System_Collections_IEnumerator_o *unaff_R13;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float in_XMM1_Da;
  undefined1 auVar29 [12];
  undefined4 in_stack_fffffffffffffeb8;
  UnityEngine_AnimationState_o *in_stack_fffffffffffffec0;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar30;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_118;
  Il2CppRGCTXData *pIStack_100;
  float fStack_b0;
  
  pSVar11 = name;
  if (g_data_057add21 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    g_data_057add21 = '\x01';
  }
  __this_05 = (__this->fields)._animationSpeed;
  if (__this_05 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    fVar25 = System_Collections_Generic_Dictionary_object__float___get_Item
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_05,
                        (Il2CppObject *)name,MethodInfo_Single_get_Item);
    return fVar25;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar17 = extraout_RDX;
  if (g_data_057add22 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    g_data_057add22 = '\x01';
    pMVar17 = extraout_RDX_00;
  }
  name_00 = pSVar11;
  fVar25 = Characters_AnimationHandler__GetLength((Characters_AnimationHandler_o *)__this_05,pSVar11,pMVar17);
  pSVar19 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
             &((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&__this_05->fields)->_freeCount;
  if (pSVar19 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    fVar26 = System_Collections_Generic_Dictionary_object__float___get_Item
                       (pSVar19,(Il2CppObject *)pSVar11,MethodInfo_Single_get_Item);
    return fVar25 / fVar26;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)((long)&(pSVar19->fields)._keys + 4) != '\0') {
    __this_00 = (pSVar19->fields)._buckets;
    if ((__this_00 != (System_Int32_array *)0x0) &&
       (pUVar8 = UnityEngine_Animation__get_Item
                           ((UnityEngine_Animation_o *)__this_00,name_00,(MethodInfo *)0x0),
       pUVar8 != (UnityEngine_AnimationState_o *)0x0)) {
      fVar25 = UnityEngine_AnimationState__get_normalizedTime(pUVar8,(MethodInfo *)0x0);
      return fVar25;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar10 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
  pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"GetNormalizedTime only available for legacy animations.");
  System_Exception___ctor_3cf6120(pSVar10,pSVar11,(MethodInfo *)0x0);
  pUVar12 = (UnityEngine_Animation_c *)il2cpp_runtime_helper_023445d0(&MethodInfo_Single_GetNormalizedTime);
  il2cpp_runtime_helper_022b2b10();
  if (*(char *)((long)&(pSVar10->fields)._stackTrace + 4) == '\0') {
    fVar26 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    fVar25 = *(float *)&(pSVar10->fields)._stackTrace;
    pUVar18 = (UnityEngine_Animation_c *)(pSVar10->fields)._helpURL;
    pMVar17 = extraout_RDX_01;
    if (g_data_057add22 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
      g_data_057add22 = '\x01';
      pMVar17 = extraout_RDX_02;
    }
    pUVar12 = pUVar18;
    fVar27 = Characters_AnimationHandler__GetLength
                       ((Characters_AnimationHandler_o *)pSVar10,(System_String_o *)pUVar18,pMVar17);
    pSVar10 = (pSVar10->fields)._innerException;
    pSVar11 = (System_String_o *)0x0;
    if (pSVar10 != (System_Exception_o *)0x0) {
      fVar28 = System_Collections_Generic_Dictionary_object__float___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,
                          (Il2CppObject *)pUVar18,MethodInfo_Single_get_Item);
      return (fVar26 - fVar25) / (fVar27 / fVar28);
    }
  }
  else {
    pSVar11 = (pSVar10->fields)._className;
    if (pSVar11 != (System_String_o *)0x0) {
      pUVar12 = (UnityEngine_Animation_c *)(pSVar10->fields)._helpURL;
      pUVar8 = UnityEngine_Animation__get_Item
                         ((UnityEngine_Animation_o *)pSVar11,(System_String_o *)pUVar12,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_AnimationState_o *)0x0) {
        fVar25 = UnityEngine_AnimationState__get_normalizedTime(pUVar8,(MethodInfo *)0x0);
        return fVar25;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)((long)&pSVar11[2].monitor + 4) == '\0') {
    System_String__op_Equality
              ((System_String_o *)pSVar11[2].klass,(System_String_o *)pUVar12,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  pUVar20 = *(UnityEngine_Animation_o **)&(pSVar11->fields)._stringLength;
  if (pUVar20 != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__IsPlaying(pUVar20,(System_String_o *)pUVar12,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  fVar25 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar18 = pUVar12;
  if (g_data_057add23 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057add23 = '\x01';
  }
  if (*(char *)((long)&pUVar20[2].monitor + 4) == '\0') {
    __this_06 = pUVar20[3].klass;
    if (__this_06 != (UnityEngine_Animation_c *)0x0) {
      pUVar13 = pUVar20[1].klass;
      pUVar18 = pUVar12;
      stateName = (UnityEngine_Animation_c *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,
                             (Il2CppObject *)pUVar12,MethodInfo_String_get_Item);
      if (pUVar13 != (UnityEngine_Animation_c *)0x0) {
        UnityEngine_Animator__Play
                  ((UnityEngine_Animator_o *)pUVar13,(System_String_o *)stateName,0,fVar25,(MethodInfo *)0x0);
        pUVar13 = pUVar20[1].klass;
        pUVar18 = stateName;
        if (g_data_057add21 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
          g_data_057add21 = '\x01';
          pUVar18 = stateName;
        }
        __this_06 = (UnityEngine_Animation_c *)pUVar20[1].fields.m_CachedPtr;
        if ((__this_06 != (UnityEngine_Animation_c *)0x0) &&
           (pUVar18 = pUVar12,
           fVar25 = System_Collections_Generic_Dictionary_object__float___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06,
                               (Il2CppObject *)pUVar12,MethodInfo_Single_get_Item),
           pUVar13 != (UnityEngine_Animation_c *)0x0)) {
          UnityEngine_Animator__set_speed((UnityEngine_Animator_o *)pUVar13,fVar25,(MethodInfo *)0x0);
          goto label_0429e6f6;
        }
      }
    }
  }
  else {
    __this_01 = (UnityEngine_Animation_o *)(pUVar20->fields).m_CachedPtr;
    __this_06 = (UnityEngine_Animation_c *)0x0;
    if (__this_01 != (UnityEngine_Animation_o *)0x0) {
      pUVar18 = pUVar12;
      UnityEngine_Animation__Play(__this_01,(System_String_o *)pUVar12,(MethodInfo *)0x0);
      if ((fVar25 <= 0.0) && (extraout_DL == '\0')) {
label_0429e6f6:
        pUVar20[2].klass = pUVar12;
        il2cpp_runtime_helper_022b4080(pUVar20 + 2,pUVar12);
        fVar25 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        *(float *)&pUVar20[2].monitor = fVar25;
        return fVar25;
      }
      __this_06 = (UnityEngine_Animation_c *)(pUVar20->fields).m_CachedPtr;
      in_XMM1_Da = fVar25;
      if ((__this_06 != (UnityEngine_Animation_c *)0x0) &&
         (pUVar18 = pUVar12,
         pUVar8 = UnityEngine_Animation__get_Item
                            ((UnityEngine_Animation_o *)__this_06,(System_String_o *)pUVar12,(MethodInfo *)0x0
                            ), pUVar8 != (UnityEngine_AnimationState_o *)0x0)) {
        UnityEngine_AnimationState__set_normalizedTime(pUVar8,fVar25,(MethodInfo *)0x0);
        goto label_0429e6f6;
      }
    }
  }
  fStack_b0 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar12 = pUVar18;
  if (g_data_057add24 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057add24 = '\x01';
  }
  if ((__this_06->_1).this_arg.field_0xc == '\0') {
    pUVar12 = (UnityEngine_Animation_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    bVar7 = System_String__op_Inequality
                      ((__this_06->_1).this_arg.data,(System_String_o *)pUVar12,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pUVar12 = (__this_06->_1).this_arg.data;
      fVar25 = Characters_AnimationHandler__GetLength
                         ((Characters_AnimationHandler_o *)__this_06,(System_String_o *)pUVar12,method_00);
      fStack_b0 = fStack_b0 / fVar25;
    }
    __this_07 = (Il2CppRGCTXData *)(__this_06->_1).castClass;
    if (__this_07 != (Il2CppRGCTXData *)0x0) {
      pUVar3 = (UnityEngine_Animator_o *)(__this_06->_1).namespaze;
      pUVar12 = pUVar18;
      pUVar13 = (UnityEngine_Animation_c *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_07,
                           (Il2CppObject *)pUVar18,MethodInfo_String_get_Item);
      if (pUVar3 != (UnityEngine_Animator_o *)0x0) {
        UnityEngine_Animator__CrossFade
                  (pUVar3,(System_String_o *)pUVar13,fStack_b0,0,in_XMM1_Da,(MethodInfo *)0x0);
        pUVar3 = (UnityEngine_Animator_o *)(__this_06->_1).namespaze;
        pUVar12 = pUVar13;
        if (g_data_057add21 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
          g_data_057add21 = '\x01';
          pUVar12 = pUVar13;
        }
        __this_07 = *(Il2CppRGCTXData **)&(__this_06->_1).byval_arg.bits;
        if ((__this_07 != (Il2CppRGCTXData *)0x0) &&
           (pUVar12 = pUVar18,
           fVar25 = System_Collections_Generic_Dictionary_object__float___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_07,
                               (Il2CppObject *)pUVar18,MethodInfo_Single_get_Item), pUVar3 != (UnityEngine_Animator_o *)0x0)
           ) {
          UnityEngine_Animator__set_speed(pUVar3,fVar25,(MethodInfo *)0x0);
          goto label_0429e89b;
        }
      }
    }
  }
  else {
    pUVar20 = (UnityEngine_Animation_o *)(__this_06->_1).name;
    __this_07 = (Il2CppRGCTXData *)0x0;
    if (pUVar20 != (UnityEngine_Animation_o *)0x0) {
      pUVar12 = pUVar18;
      UnityEngine_Animation__CrossFade(pUVar20,(System_String_o *)pUVar18,fStack_b0,(MethodInfo *)0x0);
      if (0.0 < in_XMM1_Da) {
        __this_07 = (Il2CppRGCTXData *)(__this_06->_1).name;
        if ((__this_07 == (Il2CppRGCTXData *)0x0) ||
           (pUVar12 = pUVar18,
           pUVar8 = UnityEngine_Animation__get_Item
                              ((UnityEngine_Animation_o *)__this_07,(System_String_o *)pUVar18,
                               (MethodInfo *)0x0), pUVar8 == (UnityEngine_AnimationState_o *)0x0))
        goto label_0429e8c1;
        UnityEngine_AnimationState__set_normalizedTime(pUVar8,in_XMM1_Da,(MethodInfo *)0x0);
      }
label_0429e89b:
      (__this_06->_1).this_arg.data = pUVar18;
      il2cpp_runtime_helper_022b4080(&(__this_06->_1).this_arg,pUVar18);
      fVar25 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this_06->_1).this_arg.bits = (uint)fVar25;
      return fVar25;
    }
  }
label_0429e8c1:
  fVar25 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057add25 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057add25 = '\x01';
  }
  pMVar17 = (MethodInfo *)0x0;
  if (__this_07[5].method != (MethodInfo *)0x0) {
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_07[5].method,
               (Il2CppObject *)pUVar12,fVar25,MethodInfo_Void_set_Item);
    if (*(char *)((long)__this_07 + 0x3c) == '\0') {
      bVar7 = System_String__op_Equality
                        ((System_String_o *)__this_07[6].method,(System_String_o *)pUVar12,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return extraout_XMM0_Da_02;
      }
      pMVar17 = (MethodInfo *)0x0;
      if (__this_07[3].method != (MethodInfo *)0x0) {
        UnityEngine_Animator__set_speed
                  ((UnityEngine_Animator_o *)__this_07[3].method,fVar25,(MethodInfo *)0x0);
        return extraout_XMM0_Da_03;
      }
    }
    else {
      pMVar17 = __this_07[2].method;
      if ((pMVar17 != (MethodInfo *)0x0) &&
         (pUVar8 = UnityEngine_Animation__get_Item
                             ((UnityEngine_Animation_o *)pMVar17,(System_String_o *)pUVar12,(MethodInfo *)0x0)
         , pUVar8 != (UnityEngine_AnimationState_o *)0x0)) {
        UnityEngine_AnimationState__set_speed(pUVar8,fVar25,(MethodInfo *)0x0);
        return extraout_XMM0_Da_01;
      }
    }
  }
  fVar25 = (float)il2cpp_runtime_helper_022b2c90();
  pIStack_100 = __this_07;
  if (g_data_057add26 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    g_data_057add26 = '\x01';
  }
  if (*(char *)((long)&pMVar17->field7_0x38 + 4) == '\0') goto label_0429ec78;
  pUVar20 = (UnityEngine_Animation_o *)((UnityEngine_Animation_Fields *)&pMVar17->invoker_method)->m_CachedPtr
  ;
  if (pUVar20 == (UnityEngine_Animation_o *)0x0) goto label_0429ed79;
  unaff_R13 = UnityEngine_Animation__GetEnumerator(pUVar20,(MethodInfo *)0x0);
  if (unaff_R13 == (System_Collections_IEnumerator_o *)0x0) goto label_0429ed7e;
  pUVar8 = (UnityEngine_AnimationState_o *)0x0;
  do {
    pSVar4 = unaff_R13->klass;
    uVar1._0_1_ = (pSVar4->_2).rank;
    uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar21 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar21) == TypeInfo_IEnumerator) {
          pVVar14 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar21);
          goto label_0429eaf3;
        }
        lVar21 = lVar21 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar21);
    }
    pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_0429eaf3:
    cVar6 = (*pVVar14->methodPtr)(unaff_R13,pVVar14->method);
    if (cVar6 == '\0') {
      iVar24 = 5;
      unaff_R12 = (MethodInfo_310C3F0 **)pUVar8;
      goto label_0429ebe7;
    }
    pSVar4 = unaff_R13->klass;
    uVar2._0_1_ = (pSVar4->_2).rank;
    uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar21 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar21) == TypeInfo_IEnumerator) {
          pVVar14 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar21) + 1);
          goto label_0429eb78;
        }
        lVar21 = lVar21 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar21);
    }
    pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,1);
label_0429eb78:
    unaff_R12 = (MethodInfo_310C3F0 **)(*pVVar14->methodPtr)(unaff_R13,pVVar14->method);
    if ((UnityEngine_AnimationState_o *)unaff_R12 == (UnityEngine_AnimationState_o *)0x0) {
label_0429ed65:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6a:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6f:
      il2cpp_runtime_helper_022b2c90();
      do {
        il2cpp_runtime_helper_022b2c90();
label_0429ed79:
        do {
          il2cpp_runtime_helper_022b2c90();
label_0429ed7e:
          il2cpp_runtime_helper_022b2c90();
          do {
            auVar29 = il2cpp_runtime_helper_022fefe0(unaff_R12);
            uVar9 = auVar29._0_8_;
            iVar24 = 0;
            if (auVar29._8_4_ != 1) {
              lVar21 = 0;
              goto label_0429eeff;
            }
            puVar16 = (undefined8 *)__cxa_begin_catch(uVar9);
            unaff_R12 = (MethodInfo_310C3F0 **)*puVar16;
            __cxa_end_catch();
label_0429ebe7:
            plVar15 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
            fVar26 = extraout_XMM0_Da_04;
            in_stack_fffffffffffffec0 = (UnityEngine_AnimationState_o *)unaff_R12;
            if (plVar15 != (long *)0x0) {
              lVar21 = *plVar15;
              if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
                lVar22 = 0;
                do {
                  if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar22) == TypeInfo_IDisposable) {
                    puVar16 = (undefined8 *)
                              (lVar21 + (long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar22) * 0x10 + 0x138);
                    goto label_0429ec5d;
                  }
                  lVar22 = lVar22 + 0x10;
                } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar22);
              }
              puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IDisposable,0);
label_0429ec5d:
              fVar26 = (float)(*(code *)*puVar16)(plVar15,puVar16[1]);
            }
          } while ((UnityEngine_AnimationState_o *)unaff_R12 != (UnityEngine_AnimationState_o *)0x0);
          if (iVar24 != 0) {
            return fVar26;
          }
label_0429ec78:
        } while (((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar17->return_type ==
                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
                (__this_04 = System_Collections_Generic_Dictionary_object__float___get_Keys
                                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                        pMVar17->return_type,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys),
                __this_04 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0));
        System_Collections_Generic_Dictionary_KeyCollection_object__float___GetEnumerator
                  (&SStack_118,__this_04,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
        b = SStack_118.fields._currentKey;
        unaff_R12 = &MethodInfo_Void_set_Item;
        pSVar30 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                  SStack_118.fields._dictionary;
        while( true ) {
          do {
            __this_02.fields._dictionary._4_4_ = fVar25;
            __this_02.fields._dictionary._0_4_ = in_stack_fffffffffffffeb8;
            __this_02.fields._8_8_ = in_stack_fffffffffffffec0;
            __this_02.fields._currentKey = (Il2CppObject *)pSVar30;
            bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___MoveNext
                              (__this_02,(MethodInfo_3252C30 *)&stack0xfffffffffffffec8);
            if ((char)bVar7 == '\0') {
              __this_03.fields._dictionary._4_4_ = fVar25;
              __this_03.fields._dictionary._0_4_ = in_stack_fffffffffffffeb8;
              __this_03.fields._8_8_ = in_stack_fffffffffffffec0;
              __this_03.fields._currentKey = (Il2CppObject *)pSVar30;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___Dispose
                        (__this_03,(MethodInfo_3252C20 *)&stack0xfffffffffffffec8);
              return extraout_XMM0_Da_05;
            }
            if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar17->return_type ==
                (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0429ed6f;
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar17->return_type,b,fVar25,
                       MethodInfo_Void_set_Item);
            bVar7 = System_String__op_Equality
                              ((System_String_o *)pMVar17->parameters,(System_String_o *)b,(MethodInfo *)0x0);
          } while ((char)bVar7 == '\0');
          if ((UnityEngine_Animator_o *)pMVar17->name == (UnityEngine_Animator_o *)0x0) break;
          UnityEngine_Animator__set_speed((UnityEngine_Animator_o *)pMVar17->name,fVar25,(MethodInfo *)0x0);
        }
      } while( true );
    }
    if (((UnityEngine_AnimationState_o *)unaff_R12)->klass != TypeInfo_AnimationState) {
      il2cpp_runtime_helper_022b2fd0(unaff_R12);
      goto label_0429ed65;
    }
    pSVar19 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar17->return_type;
    pSVar11 = UnityEngine_AnimationState__get_name
                        ((UnityEngine_AnimationState_o *)unaff_R12,(MethodInfo *)0x0);
    if (pSVar19 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0429ed6a;
    System_Collections_Generic_Dictionary_object__float___set_Item
              (pSVar19,(Il2CppObject *)pSVar11,fVar25,MethodInfo_Void_set_Item);
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)unaff_R12,fVar25,(MethodInfo *)0x0);
  } while( true );
label_0429eeff:
  plVar15 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
  if (plVar15 != (long *)0x0) {
    lVar22 = *plVar15;
    if ((ulong)*(ushort *)(lVar22 + 0x12e) != 0) {
      lVar23 = 0;
      do {
        if (*(long *)(*(long *)(lVar22 + 0xb0) + lVar23) == TypeInfo_IDisposable) {
          puVar16 = (undefined8 *)
                    (lVar22 + (long)*(int *)(*(long *)(lVar22 + 0xb0) + 8 + lVar23) * 0x10 + 0x138);
          goto label_0429ef6d;
        }
        lVar23 = lVar23 + 0x10;
      } while ((ulong)*(ushort *)(lVar22 + 0x12e) << 4 != lVar23);
    }
    puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IDisposable,0);
label_0429ef6d:
    (*(code *)*puVar16)(plVar15,puVar16[1]);
  }
  if (lVar21 == 0) {
    _Unwind_Resume(uVar9);
  }
  uVar9 = il2cpp_runtime_helper_022fefe0(lVar21);
  goto label_0429eeff;
}


// Characters.AnimationHandler$$GetTotalTime
// il2cpp: float Characters_AnimationHandler__GetTotalTime (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x429e3e0

float Characters_AnimationHandler__GetTotalTime
                (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Int32_array *__this_00;
  UnityEngine_Animation_o *__this_01;
  UnityEngine_Animator_o *pUVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  Il2CppObject *b;
  char cVar6;
  bool_conflict bVar7;
  UnityEngine_AnimationState_o *pUVar8;
  undefined8 uVar9;
  System_Exception_o *pSVar10;
  System_String_o *pSVar11;
  UnityEngine_Animation_c *pUVar12;
  UnityEngine_Animation_c *stateName;
  UnityEngine_Animation_c *pUVar13;
  VirtualInvokeData *pVVar14;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_05;
  long *plVar15;
  undefined8 *puVar16;
  char extraout_DL;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar17;
  MethodInfo *method_00;
  UnityEngine_Animation_c *pUVar18;
  System_Collections_Generic_Dictionary_string__float__o *__this_06;
  UnityEngine_Animation_o *pUVar19;
  UnityEngine_Animation_c *__this_07;
  Il2CppRGCTXData *__this_08;
  long lVar20;
  long lVar21;
  long lVar22;
  MethodInfo_310C3F0 **unaff_R12;
  System_Collections_IEnumerator_o *unaff_R13;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float in_XMM1_Da;
  undefined1 auVar28 [12];
  undefined4 in_stack_fffffffffffffed0;
  UnityEngine_AnimationState_o *in_stack_fffffffffffffed8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar29;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_100;
  Il2CppRGCTXData *pIStack_e8;
  float fStack_98;
  
  if (g_data_057add22 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    g_data_057add22 = '\x01';
    method = extraout_RDX;
  }
  pSVar11 = name;
  fVar24 = Characters_AnimationHandler__GetLength(__this,name,method);
  __this_06 = (__this->fields)._animationSpeed;
  if (__this_06 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    fVar25 = System_Collections_Generic_Dictionary_object__float___get_Item
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06,
                        (Il2CppObject *)name,MethodInfo_Single_get_Item);
    return fVar24 / fVar25;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)((long)&((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&__this_06->fields)->
                       _keys + 4) != '\0') {
    __this_00 = ((System_Collections_Generic_Dictionary_TKey__TValue__Fields *)&__this_06->fields)->_buckets;
    if ((__this_00 != (System_Int32_array *)0x0) &&
       (pUVar8 = UnityEngine_Animation__get_Item
                           ((UnityEngine_Animation_o *)__this_00,pSVar11,(MethodInfo *)0x0),
       pUVar8 != (UnityEngine_AnimationState_o *)0x0)) {
      fVar24 = UnityEngine_AnimationState__get_normalizedTime(pUVar8,(MethodInfo *)0x0);
      return fVar24;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar10 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
  pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"GetNormalizedTime only available for legacy animations.");
  System_Exception___ctor_3cf6120(pSVar10,pSVar11,(MethodInfo *)0x0);
  pUVar12 = (UnityEngine_Animation_c *)il2cpp_runtime_helper_023445d0(&MethodInfo_Single_GetNormalizedTime);
  il2cpp_runtime_helper_022b2b10();
  if (*(char *)((long)&(pSVar10->fields)._stackTrace + 4) == '\0') {
    fVar25 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    fVar24 = *(float *)&(pSVar10->fields)._stackTrace;
    pUVar18 = (UnityEngine_Animation_c *)(pSVar10->fields)._helpURL;
    pMVar17 = extraout_RDX_00;
    if (g_data_057add22 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
      g_data_057add22 = '\x01';
      pMVar17 = extraout_RDX_01;
    }
    pUVar12 = pUVar18;
    fVar26 = Characters_AnimationHandler__GetLength
                       ((Characters_AnimationHandler_o *)pSVar10,(System_String_o *)pUVar18,pMVar17);
    pSVar10 = (pSVar10->fields)._innerException;
    pSVar11 = (System_String_o *)0x0;
    if (pSVar10 != (System_Exception_o *)0x0) {
      fVar27 = System_Collections_Generic_Dictionary_object__float___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,
                          (Il2CppObject *)pUVar18,MethodInfo_Single_get_Item);
      return (fVar25 - fVar24) / (fVar26 / fVar27);
    }
  }
  else {
    pSVar11 = (pSVar10->fields)._className;
    if (pSVar11 != (System_String_o *)0x0) {
      pUVar12 = (UnityEngine_Animation_c *)(pSVar10->fields)._helpURL;
      pUVar8 = UnityEngine_Animation__get_Item
                         ((UnityEngine_Animation_o *)pSVar11,(System_String_o *)pUVar12,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_AnimationState_o *)0x0) {
        fVar24 = UnityEngine_AnimationState__get_normalizedTime(pUVar8,(MethodInfo *)0x0);
        return fVar24;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)((long)&pSVar11[2].monitor + 4) == '\0') {
    System_String__op_Equality
              ((System_String_o *)pSVar11[2].klass,(System_String_o *)pUVar12,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  pUVar19 = *(UnityEngine_Animation_o **)&(pSVar11->fields)._stringLength;
  if (pUVar19 != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__IsPlaying(pUVar19,(System_String_o *)pUVar12,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  fVar24 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar18 = pUVar12;
  if (g_data_057add23 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057add23 = '\x01';
  }
  if (*(char *)((long)&pUVar19[2].monitor + 4) == '\0') {
    __this_07 = pUVar19[3].klass;
    if (__this_07 != (UnityEngine_Animation_c *)0x0) {
      pUVar13 = pUVar19[1].klass;
      pUVar18 = pUVar12;
      stateName = (UnityEngine_Animation_c *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_07,
                             (Il2CppObject *)pUVar12,MethodInfo_String_get_Item);
      if (pUVar13 != (UnityEngine_Animation_c *)0x0) {
        UnityEngine_Animator__Play
                  ((UnityEngine_Animator_o *)pUVar13,(System_String_o *)stateName,0,fVar24,(MethodInfo *)0x0);
        pUVar13 = pUVar19[1].klass;
        pUVar18 = stateName;
        if (g_data_057add21 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
          g_data_057add21 = '\x01';
          pUVar18 = stateName;
        }
        __this_07 = (UnityEngine_Animation_c *)pUVar19[1].fields.m_CachedPtr;
        if ((__this_07 != (UnityEngine_Animation_c *)0x0) &&
           (pUVar18 = pUVar12,
           fVar24 = System_Collections_Generic_Dictionary_object__float___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_07,
                               (Il2CppObject *)pUVar12,MethodInfo_Single_get_Item),
           pUVar13 != (UnityEngine_Animation_c *)0x0)) {
          UnityEngine_Animator__set_speed((UnityEngine_Animator_o *)pUVar13,fVar24,(MethodInfo *)0x0);
          goto label_0429e6f6;
        }
      }
    }
  }
  else {
    __this_01 = (UnityEngine_Animation_o *)(pUVar19->fields).m_CachedPtr;
    __this_07 = (UnityEngine_Animation_c *)0x0;
    if (__this_01 != (UnityEngine_Animation_o *)0x0) {
      pUVar18 = pUVar12;
      UnityEngine_Animation__Play(__this_01,(System_String_o *)pUVar12,(MethodInfo *)0x0);
      if ((fVar24 <= 0.0) && (extraout_DL == '\0')) {
label_0429e6f6:
        pUVar19[2].klass = pUVar12;
        il2cpp_runtime_helper_022b4080(pUVar19 + 2,pUVar12);
        fVar24 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        *(float *)&pUVar19[2].monitor = fVar24;
        return fVar24;
      }
      __this_07 = (UnityEngine_Animation_c *)(pUVar19->fields).m_CachedPtr;
      in_XMM1_Da = fVar24;
      if ((__this_07 != (UnityEngine_Animation_c *)0x0) &&
         (pUVar18 = pUVar12,
         pUVar8 = UnityEngine_Animation__get_Item
                            ((UnityEngine_Animation_o *)__this_07,(System_String_o *)pUVar12,(MethodInfo *)0x0
                            ), pUVar8 != (UnityEngine_AnimationState_o *)0x0)) {
        UnityEngine_AnimationState__set_normalizedTime(pUVar8,fVar24,(MethodInfo *)0x0);
        goto label_0429e6f6;
      }
    }
  }
  fStack_98 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar12 = pUVar18;
  if (g_data_057add24 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057add24 = '\x01';
  }
  if ((__this_07->_1).this_arg.field_0xc == '\0') {
    pUVar12 = (UnityEngine_Animation_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    bVar7 = System_String__op_Inequality
                      ((__this_07->_1).this_arg.data,(System_String_o *)pUVar12,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pUVar12 = (__this_07->_1).this_arg.data;
      fVar24 = Characters_AnimationHandler__GetLength
                         ((Characters_AnimationHandler_o *)__this_07,(System_String_o *)pUVar12,method_00);
      fStack_98 = fStack_98 / fVar24;
    }
    __this_08 = (Il2CppRGCTXData *)(__this_07->_1).castClass;
    if (__this_08 != (Il2CppRGCTXData *)0x0) {
      pUVar3 = (UnityEngine_Animator_o *)(__this_07->_1).namespaze;
      pUVar12 = pUVar18;
      pUVar13 = (UnityEngine_Animation_c *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_08,
                           (Il2CppObject *)pUVar18,MethodInfo_String_get_Item);
      if (pUVar3 != (UnityEngine_Animator_o *)0x0) {
        UnityEngine_Animator__CrossFade
                  (pUVar3,(System_String_o *)pUVar13,fStack_98,0,in_XMM1_Da,(MethodInfo *)0x0);
        pUVar3 = (UnityEngine_Animator_o *)(__this_07->_1).namespaze;
        pUVar12 = pUVar13;
        if (g_data_057add21 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
          g_data_057add21 = '\x01';
          pUVar12 = pUVar13;
        }
        __this_08 = *(Il2CppRGCTXData **)&(__this_07->_1).byval_arg.bits;
        if ((__this_08 != (Il2CppRGCTXData *)0x0) &&
           (pUVar12 = pUVar18,
           fVar24 = System_Collections_Generic_Dictionary_object__float___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_08,
                               (Il2CppObject *)pUVar18,MethodInfo_Single_get_Item), pUVar3 != (UnityEngine_Animator_o *)0x0)
           ) {
          UnityEngine_Animator__set_speed(pUVar3,fVar24,(MethodInfo *)0x0);
          goto label_0429e89b;
        }
      }
    }
  }
  else {
    pUVar19 = (UnityEngine_Animation_o *)(__this_07->_1).name;
    __this_08 = (Il2CppRGCTXData *)0x0;
    if (pUVar19 != (UnityEngine_Animation_o *)0x0) {
      pUVar12 = pUVar18;
      UnityEngine_Animation__CrossFade(pUVar19,(System_String_o *)pUVar18,fStack_98,(MethodInfo *)0x0);
      if (0.0 < in_XMM1_Da) {
        __this_08 = (Il2CppRGCTXData *)(__this_07->_1).name;
        if ((__this_08 == (Il2CppRGCTXData *)0x0) ||
           (pUVar12 = pUVar18,
           pUVar8 = UnityEngine_Animation__get_Item
                              ((UnityEngine_Animation_o *)__this_08,(System_String_o *)pUVar18,
                               (MethodInfo *)0x0), pUVar8 == (UnityEngine_AnimationState_o *)0x0))
        goto label_0429e8c1;
        UnityEngine_AnimationState__set_normalizedTime(pUVar8,in_XMM1_Da,(MethodInfo *)0x0);
      }
label_0429e89b:
      (__this_07->_1).this_arg.data = pUVar18;
      il2cpp_runtime_helper_022b4080(&(__this_07->_1).this_arg,pUVar18);
      fVar24 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this_07->_1).this_arg.bits = (uint)fVar24;
      return fVar24;
    }
  }
label_0429e8c1:
  fVar24 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057add25 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057add25 = '\x01';
  }
  pMVar17 = (MethodInfo *)0x0;
  if (__this_08[5].method != (MethodInfo *)0x0) {
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_08[5].method,
               (Il2CppObject *)pUVar12,fVar24,MethodInfo_Void_set_Item);
    if (*(char *)((long)__this_08 + 0x3c) == '\0') {
      bVar7 = System_String__op_Equality
                        ((System_String_o *)__this_08[6].method,(System_String_o *)pUVar12,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return extraout_XMM0_Da_02;
      }
      pMVar17 = (MethodInfo *)0x0;
      if (__this_08[3].method != (MethodInfo *)0x0) {
        UnityEngine_Animator__set_speed
                  ((UnityEngine_Animator_o *)__this_08[3].method,fVar24,(MethodInfo *)0x0);
        return extraout_XMM0_Da_03;
      }
    }
    else {
      pMVar17 = __this_08[2].method;
      if ((pMVar17 != (MethodInfo *)0x0) &&
         (pUVar8 = UnityEngine_Animation__get_Item
                             ((UnityEngine_Animation_o *)pMVar17,(System_String_o *)pUVar12,(MethodInfo *)0x0)
         , pUVar8 != (UnityEngine_AnimationState_o *)0x0)) {
        UnityEngine_AnimationState__set_speed(pUVar8,fVar24,(MethodInfo *)0x0);
        return extraout_XMM0_Da_01;
      }
    }
  }
  fVar24 = (float)il2cpp_runtime_helper_022b2c90();
  pIStack_e8 = __this_08;
  if (g_data_057add26 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    g_data_057add26 = '\x01';
  }
  if (*(char *)((long)&pMVar17->field7_0x38 + 4) == '\0') goto label_0429ec78;
  pUVar19 = (UnityEngine_Animation_o *)((UnityEngine_Animation_Fields *)&pMVar17->invoker_method)->m_CachedPtr
  ;
  if (pUVar19 == (UnityEngine_Animation_o *)0x0) goto label_0429ed79;
  unaff_R13 = UnityEngine_Animation__GetEnumerator(pUVar19,(MethodInfo *)0x0);
  if (unaff_R13 == (System_Collections_IEnumerator_o *)0x0) goto label_0429ed7e;
  pUVar8 = (UnityEngine_AnimationState_o *)0x0;
  do {
    pSVar4 = unaff_R13->klass;
    uVar1._0_1_ = (pSVar4->_2).rank;
    uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar20 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar20) == TypeInfo_IEnumerator) {
          pVVar14 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar20);
          goto label_0429eaf3;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar20);
    }
    pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_0429eaf3:
    cVar6 = (*pVVar14->methodPtr)(unaff_R13,pVVar14->method);
    if (cVar6 == '\0') {
      iVar23 = 5;
      unaff_R12 = (MethodInfo_310C3F0 **)pUVar8;
      goto label_0429ebe7;
    }
    pSVar4 = unaff_R13->klass;
    uVar2._0_1_ = (pSVar4->_2).rank;
    uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar20 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar20) == TypeInfo_IEnumerator) {
          pVVar14 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar20) + 1);
          goto label_0429eb78;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar20);
    }
    pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,1);
label_0429eb78:
    unaff_R12 = (MethodInfo_310C3F0 **)(*pVVar14->methodPtr)(unaff_R13,pVVar14->method);
    if ((UnityEngine_AnimationState_o *)unaff_R12 == (UnityEngine_AnimationState_o *)0x0) {
label_0429ed65:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6a:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6f:
      il2cpp_runtime_helper_022b2c90();
      do {
        il2cpp_runtime_helper_022b2c90();
label_0429ed79:
        do {
          il2cpp_runtime_helper_022b2c90();
label_0429ed7e:
          il2cpp_runtime_helper_022b2c90();
          do {
            auVar28 = il2cpp_runtime_helper_022fefe0(unaff_R12);
            uVar9 = auVar28._0_8_;
            iVar23 = 0;
            if (auVar28._8_4_ != 1) {
              lVar20 = 0;
              goto label_0429eeff;
            }
            puVar16 = (undefined8 *)__cxa_begin_catch(uVar9);
            unaff_R12 = (MethodInfo_310C3F0 **)*puVar16;
            __cxa_end_catch();
label_0429ebe7:
            plVar15 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
            fVar25 = extraout_XMM0_Da_04;
            in_stack_fffffffffffffed8 = (UnityEngine_AnimationState_o *)unaff_R12;
            if (plVar15 != (long *)0x0) {
              lVar20 = *plVar15;
              if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
                lVar21 = 0;
                do {
                  if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IDisposable) {
                    puVar16 = (undefined8 *)
                              (lVar20 + (long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + 0x138);
                    goto label_0429ec5d;
                  }
                  lVar21 = lVar21 + 0x10;
                } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21);
              }
              puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IDisposable,0);
label_0429ec5d:
              fVar25 = (float)(*(code *)*puVar16)(plVar15,puVar16[1]);
            }
          } while ((UnityEngine_AnimationState_o *)unaff_R12 != (UnityEngine_AnimationState_o *)0x0);
          if (iVar23 != 0) {
            return fVar25;
          }
label_0429ec78:
        } while (((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar17->return_type ==
                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
                (__this_05 = System_Collections_Generic_Dictionary_object__float___get_Keys
                                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                        pMVar17->return_type,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys),
                __this_05 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0));
        System_Collections_Generic_Dictionary_KeyCollection_object__float___GetEnumerator
                  (&SStack_100,__this_05,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
        b = SStack_100.fields._currentKey;
        unaff_R12 = &MethodInfo_Void_set_Item;
        pSVar29 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                  SStack_100.fields._dictionary;
        while( true ) {
          do {
            __this_03.fields._dictionary._4_4_ = fVar24;
            __this_03.fields._dictionary._0_4_ = in_stack_fffffffffffffed0;
            __this_03.fields._8_8_ = in_stack_fffffffffffffed8;
            __this_03.fields._currentKey = (Il2CppObject *)pSVar29;
            bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___MoveNext
                              (__this_03,(MethodInfo_3252C30 *)&stack0xfffffffffffffee0);
            if ((char)bVar7 == '\0') {
              __this_04.fields._dictionary._4_4_ = fVar24;
              __this_04.fields._dictionary._0_4_ = in_stack_fffffffffffffed0;
              __this_04.fields._8_8_ = in_stack_fffffffffffffed8;
              __this_04.fields._currentKey = (Il2CppObject *)pSVar29;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___Dispose
                        (__this_04,(MethodInfo_3252C20 *)&stack0xfffffffffffffee0);
              return extraout_XMM0_Da_05;
            }
            if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar17->return_type ==
                (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0429ed6f;
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar17->return_type,b,fVar24,
                       MethodInfo_Void_set_Item);
            bVar7 = System_String__op_Equality
                              ((System_String_o *)pMVar17->parameters,(System_String_o *)b,(MethodInfo *)0x0);
          } while ((char)bVar7 == '\0');
          if ((UnityEngine_Animator_o *)pMVar17->name == (UnityEngine_Animator_o *)0x0) break;
          UnityEngine_Animator__set_speed((UnityEngine_Animator_o *)pMVar17->name,fVar24,(MethodInfo *)0x0);
        }
      } while( true );
    }
    if (((UnityEngine_AnimationState_o *)unaff_R12)->klass != TypeInfo_AnimationState) {
      il2cpp_runtime_helper_022b2fd0(unaff_R12);
      goto label_0429ed65;
    }
    __this_02 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar17->return_type;
    pSVar11 = UnityEngine_AnimationState__get_name
                        ((UnityEngine_AnimationState_o *)unaff_R12,(MethodInfo *)0x0);
    if (__this_02 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0429ed6a;
    System_Collections_Generic_Dictionary_object__float___set_Item
              (__this_02,(Il2CppObject *)pSVar11,fVar24,MethodInfo_Void_set_Item);
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)unaff_R12,fVar24,(MethodInfo *)0x0);
  } while( true );
label_0429eeff:
  plVar15 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
  if (plVar15 != (long *)0x0) {
    lVar21 = *plVar15;
    if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
      lVar22 = 0;
      do {
        if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar22) == TypeInfo_IDisposable) {
          puVar16 = (undefined8 *)
                    (lVar21 + (long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar22) * 0x10 + 0x138);
          goto label_0429ef6d;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar22);
    }
    puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IDisposable,0);
label_0429ef6d:
    (*(code *)*puVar16)(plVar15,puVar16[1]);
  }
  if (lVar20 == 0) {
    _Unwind_Resume(uVar9);
  }
  uVar9 = il2cpp_runtime_helper_022fefe0(lVar20);
  goto label_0429eeff;
}


// Characters.AnimationHandler$$GetNormalizedTime
// il2cpp: float Characters_AnimationHandler__GetNormalizedTime (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x429e450

float Characters_AnimationHandler__GetNormalizedTime
                (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  UnityEngine_Animation_o *__this_00;
  UnityEngine_Animator_o *pUVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  Il2CppObject *b;
  char cVar6;
  bool_conflict bVar7;
  UnityEngine_AnimationState_o *pUVar8;
  undefined8 uVar9;
  System_Exception_o *pSVar10;
  System_String_o *pSVar11;
  UnityEngine_Animation_c *pUVar12;
  UnityEngine_Animation_c *stateName;
  UnityEngine_Animation_c *pUVar13;
  VirtualInvokeData *pVVar14;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  long *plVar15;
  undefined8 *puVar16;
  char extraout_DL;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar17;
  MethodInfo *method_00;
  UnityEngine_Animation_c *pUVar18;
  UnityEngine_Animation_o *pUVar19;
  UnityEngine_Animation_c *__this_05;
  Il2CppRGCTXData *__this_06;
  long lVar20;
  long lVar21;
  long lVar22;
  MethodInfo_310C3F0 **unaff_R12;
  System_Collections_IEnumerator_o *unaff_R13;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float fVar27;
  float extraout_XMM0_Da_05;
  float in_XMM1_Da;
  undefined1 auVar28 [12];
  undefined4 in_stack_fffffffffffffee8;
  UnityEngine_AnimationState_o *in_stack_fffffffffffffef0;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar29;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_e8;
  Il2CppRGCTXData *pIStack_d0;
  float fStack_80;
  
  if ((char)(__this->fields)._isLegacy != '\0') {
    pUVar19 = (__this->fields).Animation;
    if ((pUVar19 != (UnityEngine_Animation_o *)0x0) &&
       (pUVar8 = UnityEngine_Animation__get_Item(pUVar19,name,(MethodInfo *)0x0),
       pUVar8 != (UnityEngine_AnimationState_o *)0x0)) {
      fVar24 = UnityEngine_AnimationState__get_normalizedTime(pUVar8,(MethodInfo *)0x0);
      return fVar24;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar10 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
  pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"GetNormalizedTime only available for legacy animations.");
  System_Exception___ctor_3cf6120(pSVar10,pSVar11,(MethodInfo *)0x0);
  pUVar12 = (UnityEngine_Animation_c *)il2cpp_runtime_helper_023445d0(&MethodInfo_Single_GetNormalizedTime);
  il2cpp_runtime_helper_022b2b10();
  if (*(char *)((long)&(pSVar10->fields)._stackTrace + 4) == '\0') {
    fVar27 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    fVar24 = *(float *)&(pSVar10->fields)._stackTrace;
    pUVar18 = (UnityEngine_Animation_c *)(pSVar10->fields)._helpURL;
    pMVar17 = extraout_RDX;
    if (g_data_057add22 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
      g_data_057add22 = '\x01';
      pMVar17 = extraout_RDX_00;
    }
    pUVar12 = pUVar18;
    fVar25 = Characters_AnimationHandler__GetLength
                       ((Characters_AnimationHandler_o *)pSVar10,(System_String_o *)pUVar18,pMVar17);
    pSVar10 = (pSVar10->fields)._innerException;
    pSVar11 = (System_String_o *)0x0;
    if (pSVar10 != (System_Exception_o *)0x0) {
      fVar26 = System_Collections_Generic_Dictionary_object__float___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,
                          (Il2CppObject *)pUVar18,MethodInfo_Single_get_Item);
      return (fVar27 - fVar24) / (fVar25 / fVar26);
    }
  }
  else {
    pSVar11 = (pSVar10->fields)._className;
    if (pSVar11 != (System_String_o *)0x0) {
      pUVar12 = (UnityEngine_Animation_c *)(pSVar10->fields)._helpURL;
      pUVar8 = UnityEngine_Animation__get_Item
                         ((UnityEngine_Animation_o *)pSVar11,(System_String_o *)pUVar12,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_AnimationState_o *)0x0) {
        fVar24 = UnityEngine_AnimationState__get_normalizedTime(pUVar8,(MethodInfo *)0x0);
        return fVar24;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)((long)&pSVar11[2].monitor + 4) == '\0') {
    System_String__op_Equality
              ((System_String_o *)pSVar11[2].klass,(System_String_o *)pUVar12,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  pUVar19 = *(UnityEngine_Animation_o **)&(pSVar11->fields)._stringLength;
  if (pUVar19 != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__IsPlaying(pUVar19,(System_String_o *)pUVar12,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  fVar24 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar18 = pUVar12;
  if (g_data_057add23 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057add23 = '\x01';
  }
  if (*(char *)((long)&pUVar19[2].monitor + 4) == '\0') {
    __this_05 = pUVar19[3].klass;
    if (__this_05 != (UnityEngine_Animation_c *)0x0) {
      pUVar13 = pUVar19[1].klass;
      pUVar18 = pUVar12;
      stateName = (UnityEngine_Animation_c *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_05,
                             (Il2CppObject *)pUVar12,MethodInfo_String_get_Item);
      if (pUVar13 != (UnityEngine_Animation_c *)0x0) {
        UnityEngine_Animator__Play
                  ((UnityEngine_Animator_o *)pUVar13,(System_String_o *)stateName,0,fVar24,(MethodInfo *)0x0);
        pUVar13 = pUVar19[1].klass;
        pUVar18 = stateName;
        if (g_data_057add21 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
          g_data_057add21 = '\x01';
          pUVar18 = stateName;
        }
        __this_05 = (UnityEngine_Animation_c *)pUVar19[1].fields.m_CachedPtr;
        if ((__this_05 != (UnityEngine_Animation_c *)0x0) &&
           (pUVar18 = pUVar12,
           fVar24 = System_Collections_Generic_Dictionary_object__float___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_05,
                               (Il2CppObject *)pUVar12,MethodInfo_Single_get_Item),
           pUVar13 != (UnityEngine_Animation_c *)0x0)) {
          UnityEngine_Animator__set_speed((UnityEngine_Animator_o *)pUVar13,fVar24,(MethodInfo *)0x0);
          goto label_0429e6f6;
        }
      }
    }
  }
  else {
    __this_00 = (UnityEngine_Animation_o *)(pUVar19->fields).m_CachedPtr;
    __this_05 = (UnityEngine_Animation_c *)0x0;
    if (__this_00 != (UnityEngine_Animation_o *)0x0) {
      pUVar18 = pUVar12;
      UnityEngine_Animation__Play(__this_00,(System_String_o *)pUVar12,(MethodInfo *)0x0);
      if ((fVar24 <= 0.0) && (extraout_DL == '\0')) {
label_0429e6f6:
        pUVar19[2].klass = pUVar12;
        il2cpp_runtime_helper_022b4080(pUVar19 + 2,pUVar12);
        fVar24 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        *(float *)&pUVar19[2].monitor = fVar24;
        return fVar24;
      }
      __this_05 = (UnityEngine_Animation_c *)(pUVar19->fields).m_CachedPtr;
      in_XMM1_Da = fVar24;
      if ((__this_05 != (UnityEngine_Animation_c *)0x0) &&
         (pUVar18 = pUVar12,
         pUVar8 = UnityEngine_Animation__get_Item
                            ((UnityEngine_Animation_o *)__this_05,(System_String_o *)pUVar12,(MethodInfo *)0x0
                            ), pUVar8 != (UnityEngine_AnimationState_o *)0x0)) {
        UnityEngine_AnimationState__set_normalizedTime(pUVar8,fVar24,(MethodInfo *)0x0);
        goto label_0429e6f6;
      }
    }
  }
  fStack_80 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar12 = pUVar18;
  if (g_data_057add24 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057add24 = '\x01';
  }
  if ((__this_05->_1).this_arg.field_0xc == '\0') {
    pUVar12 = (UnityEngine_Animation_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    bVar7 = System_String__op_Inequality
                      ((__this_05->_1).this_arg.data,(System_String_o *)pUVar12,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pUVar12 = (__this_05->_1).this_arg.data;
      fVar24 = Characters_AnimationHandler__GetLength
                         ((Characters_AnimationHandler_o *)__this_05,(System_String_o *)pUVar12,method_00);
      fStack_80 = fStack_80 / fVar24;
    }
    __this_06 = (Il2CppRGCTXData *)(__this_05->_1).castClass;
    if (__this_06 != (Il2CppRGCTXData *)0x0) {
      pUVar3 = (UnityEngine_Animator_o *)(__this_05->_1).namespaze;
      pUVar12 = pUVar18;
      pUVar13 = (UnityEngine_Animation_c *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,
                           (Il2CppObject *)pUVar18,MethodInfo_String_get_Item);
      if (pUVar3 != (UnityEngine_Animator_o *)0x0) {
        UnityEngine_Animator__CrossFade
                  (pUVar3,(System_String_o *)pUVar13,fStack_80,0,in_XMM1_Da,(MethodInfo *)0x0);
        pUVar3 = (UnityEngine_Animator_o *)(__this_05->_1).namespaze;
        pUVar12 = pUVar13;
        if (g_data_057add21 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
          g_data_057add21 = '\x01';
          pUVar12 = pUVar13;
        }
        __this_06 = *(Il2CppRGCTXData **)&(__this_05->_1).byval_arg.bits;
        if ((__this_06 != (Il2CppRGCTXData *)0x0) &&
           (pUVar12 = pUVar18,
           fVar24 = System_Collections_Generic_Dictionary_object__float___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06,
                               (Il2CppObject *)pUVar18,MethodInfo_Single_get_Item), pUVar3 != (UnityEngine_Animator_o *)0x0)
           ) {
          UnityEngine_Animator__set_speed(pUVar3,fVar24,(MethodInfo *)0x0);
          goto label_0429e89b;
        }
      }
    }
  }
  else {
    pUVar19 = (UnityEngine_Animation_o *)(__this_05->_1).name;
    __this_06 = (Il2CppRGCTXData *)0x0;
    if (pUVar19 != (UnityEngine_Animation_o *)0x0) {
      pUVar12 = pUVar18;
      UnityEngine_Animation__CrossFade(pUVar19,(System_String_o *)pUVar18,fStack_80,(MethodInfo *)0x0);
      if (0.0 < in_XMM1_Da) {
        __this_06 = (Il2CppRGCTXData *)(__this_05->_1).name;
        if ((__this_06 == (Il2CppRGCTXData *)0x0) ||
           (pUVar12 = pUVar18,
           pUVar8 = UnityEngine_Animation__get_Item
                              ((UnityEngine_Animation_o *)__this_06,(System_String_o *)pUVar18,
                               (MethodInfo *)0x0), pUVar8 == (UnityEngine_AnimationState_o *)0x0))
        goto label_0429e8c1;
        UnityEngine_AnimationState__set_normalizedTime(pUVar8,in_XMM1_Da,(MethodInfo *)0x0);
      }
label_0429e89b:
      (__this_05->_1).this_arg.data = pUVar18;
      il2cpp_runtime_helper_022b4080(&(__this_05->_1).this_arg,pUVar18);
      fVar24 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this_05->_1).this_arg.bits = (uint)fVar24;
      return fVar24;
    }
  }
label_0429e8c1:
  fVar24 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057add25 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057add25 = '\x01';
  }
  pMVar17 = (MethodInfo *)0x0;
  if (__this_06[5].method != (MethodInfo *)0x0) {
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06[5].method,
               (Il2CppObject *)pUVar12,fVar24,MethodInfo_Void_set_Item);
    if (*(char *)((long)__this_06 + 0x3c) == '\0') {
      bVar7 = System_String__op_Equality
                        ((System_String_o *)__this_06[6].method,(System_String_o *)pUVar12,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return extraout_XMM0_Da_02;
      }
      pMVar17 = (MethodInfo *)0x0;
      if (__this_06[3].method != (MethodInfo *)0x0) {
        UnityEngine_Animator__set_speed
                  ((UnityEngine_Animator_o *)__this_06[3].method,fVar24,(MethodInfo *)0x0);
        return extraout_XMM0_Da_03;
      }
    }
    else {
      pMVar17 = __this_06[2].method;
      if ((pMVar17 != (MethodInfo *)0x0) &&
         (pUVar8 = UnityEngine_Animation__get_Item
                             ((UnityEngine_Animation_o *)pMVar17,(System_String_o *)pUVar12,(MethodInfo *)0x0)
         , pUVar8 != (UnityEngine_AnimationState_o *)0x0)) {
        UnityEngine_AnimationState__set_speed(pUVar8,fVar24,(MethodInfo *)0x0);
        return extraout_XMM0_Da_01;
      }
    }
  }
  fVar24 = (float)il2cpp_runtime_helper_022b2c90();
  pIStack_d0 = __this_06;
  if (g_data_057add26 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    g_data_057add26 = '\x01';
  }
  if (*(char *)((long)&pMVar17->field7_0x38 + 4) == '\0') goto label_0429ec78;
  pUVar19 = (UnityEngine_Animation_o *)((UnityEngine_Animation_Fields *)&pMVar17->invoker_method)->m_CachedPtr
  ;
  if (pUVar19 == (UnityEngine_Animation_o *)0x0) goto label_0429ed79;
  unaff_R13 = UnityEngine_Animation__GetEnumerator(pUVar19,(MethodInfo *)0x0);
  if (unaff_R13 == (System_Collections_IEnumerator_o *)0x0) goto label_0429ed7e;
  pUVar8 = (UnityEngine_AnimationState_o *)0x0;
  do {
    pSVar4 = unaff_R13->klass;
    uVar1._0_1_ = (pSVar4->_2).rank;
    uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar20 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar20) == TypeInfo_IEnumerator) {
          pVVar14 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar20);
          goto label_0429eaf3;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar20);
    }
    pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_0429eaf3:
    cVar6 = (*pVVar14->methodPtr)(unaff_R13,pVVar14->method);
    if (cVar6 == '\0') {
      iVar23 = 5;
      unaff_R12 = (MethodInfo_310C3F0 **)pUVar8;
      goto label_0429ebe7;
    }
    pSVar4 = unaff_R13->klass;
    uVar2._0_1_ = (pSVar4->_2).rank;
    uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar20 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar20) == TypeInfo_IEnumerator) {
          pVVar14 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar20) + 1);
          goto label_0429eb78;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar20);
    }
    pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,1);
label_0429eb78:
    unaff_R12 = (MethodInfo_310C3F0 **)(*pVVar14->methodPtr)(unaff_R13,pVVar14->method);
    if ((UnityEngine_AnimationState_o *)unaff_R12 == (UnityEngine_AnimationState_o *)0x0) {
label_0429ed65:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6a:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6f:
      il2cpp_runtime_helper_022b2c90();
      do {
        il2cpp_runtime_helper_022b2c90();
label_0429ed79:
        do {
          il2cpp_runtime_helper_022b2c90();
label_0429ed7e:
          il2cpp_runtime_helper_022b2c90();
          do {
            auVar28 = il2cpp_runtime_helper_022fefe0(unaff_R12);
            uVar9 = auVar28._0_8_;
            iVar23 = 0;
            if (auVar28._8_4_ != 1) {
              lVar20 = 0;
              goto label_0429eeff;
            }
            puVar16 = (undefined8 *)__cxa_begin_catch(uVar9);
            unaff_R12 = (MethodInfo_310C3F0 **)*puVar16;
            __cxa_end_catch();
label_0429ebe7:
            plVar15 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
            fVar27 = extraout_XMM0_Da_04;
            in_stack_fffffffffffffef0 = (UnityEngine_AnimationState_o *)unaff_R12;
            if (plVar15 != (long *)0x0) {
              lVar20 = *plVar15;
              if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
                lVar21 = 0;
                do {
                  if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IDisposable) {
                    puVar16 = (undefined8 *)
                              (lVar20 + (long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + 0x138);
                    goto label_0429ec5d;
                  }
                  lVar21 = lVar21 + 0x10;
                } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21);
              }
              puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IDisposable,0);
label_0429ec5d:
              fVar27 = (float)(*(code *)*puVar16)(plVar15,puVar16[1]);
            }
          } while ((UnityEngine_AnimationState_o *)unaff_R12 != (UnityEngine_AnimationState_o *)0x0);
          if (iVar23 != 0) {
            return fVar27;
          }
label_0429ec78:
        } while (((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar17->return_type ==
                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
                (__this_04 = System_Collections_Generic_Dictionary_object__float___get_Keys
                                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                        pMVar17->return_type,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys),
                __this_04 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0));
        System_Collections_Generic_Dictionary_KeyCollection_object__float___GetEnumerator
                  (&SStack_e8,__this_04,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
        b = SStack_e8.fields._currentKey;
        unaff_R12 = &MethodInfo_Void_set_Item;
        pSVar29 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                  SStack_e8.fields._dictionary;
        while( true ) {
          do {
            __this_02.fields._dictionary._4_4_ = fVar24;
            __this_02.fields._dictionary._0_4_ = in_stack_fffffffffffffee8;
            __this_02.fields._8_8_ = in_stack_fffffffffffffef0;
            __this_02.fields._currentKey = (Il2CppObject *)pSVar29;
            bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___MoveNext
                              (__this_02,(MethodInfo_3252C30 *)&stack0xfffffffffffffef8);
            if ((char)bVar7 == '\0') {
              __this_03.fields._dictionary._4_4_ = fVar24;
              __this_03.fields._dictionary._0_4_ = in_stack_fffffffffffffee8;
              __this_03.fields._8_8_ = in_stack_fffffffffffffef0;
              __this_03.fields._currentKey = (Il2CppObject *)pSVar29;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___Dispose
                        (__this_03,(MethodInfo_3252C20 *)&stack0xfffffffffffffef8);
              return extraout_XMM0_Da_05;
            }
            if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar17->return_type ==
                (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0429ed6f;
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar17->return_type,b,fVar24,
                       MethodInfo_Void_set_Item);
            bVar7 = System_String__op_Equality
                              ((System_String_o *)pMVar17->parameters,(System_String_o *)b,(MethodInfo *)0x0);
          } while ((char)bVar7 == '\0');
          if ((UnityEngine_Animator_o *)pMVar17->name == (UnityEngine_Animator_o *)0x0) break;
          UnityEngine_Animator__set_speed((UnityEngine_Animator_o *)pMVar17->name,fVar24,(MethodInfo *)0x0);
        }
      } while( true );
    }
    if (((UnityEngine_AnimationState_o *)unaff_R12)->klass != TypeInfo_AnimationState) {
      il2cpp_runtime_helper_022b2fd0(unaff_R12);
      goto label_0429ed65;
    }
    __this_01 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar17->return_type;
    pSVar11 = UnityEngine_AnimationState__get_name
                        ((UnityEngine_AnimationState_o *)unaff_R12,(MethodInfo *)0x0);
    if (__this_01 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0429ed6a;
    System_Collections_Generic_Dictionary_object__float___set_Item
              (__this_01,(Il2CppObject *)pSVar11,fVar24,MethodInfo_Void_set_Item);
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)unaff_R12,fVar24,(MethodInfo *)0x0);
  } while( true );
label_0429eeff:
  plVar15 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
  if (plVar15 != (long *)0x0) {
    lVar21 = *plVar15;
    if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
      lVar22 = 0;
      do {
        if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar22) == TypeInfo_IDisposable) {
          puVar16 = (undefined8 *)
                    (lVar21 + (long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar22) * 0x10 + 0x138);
          goto label_0429ef6d;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar22);
    }
    puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IDisposable,0);
label_0429ef6d:
    (*(code *)*puVar16)(plVar15,puVar16[1]);
  }
  if (lVar20 == 0) {
    _Unwind_Resume(uVar9);
  }
  uVar9 = il2cpp_runtime_helper_022fefe0(lVar20);
  goto label_0429eeff;
}


// Characters.AnimationHandler$$GetCurrentNormalizedTime
// il2cpp: float Characters_AnimationHandler__GetCurrentNormalizedTime (Characters_AnimationHandler_o* __this, const MethodInfo* method);
// 0x429e4d0

float Characters_AnimationHandler__GetCurrentNormalizedTime
                (Characters_AnimationHandler_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  UnityEngine_Animation_o *__this_01;
  UnityEngine_Animator_o *pUVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  Il2CppObject *b;
  char cVar6;
  bool_conflict bVar7;
  UnityEngine_AnimationState_o *pUVar8;
  UnityEngine_Animation_c *pUVar9;
  VirtualInvokeData *pVVar10;
  System_String_o *key;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_05;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  char extraout_DL;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar14;
  MethodInfo *method_00;
  UnityEngine_Animation_c *pUVar15;
  UnityEngine_Animation_c *pUVar16;
  UnityEngine_Animation_o *pUVar17;
  UnityEngine_Animation_c *__this_06;
  Il2CppRGCTXData *__this_07;
  long lVar18;
  long lVar19;
  long lVar20;
  MethodInfo_310C3F0 **unaff_R12;
  System_Collections_IEnumerator_o *unaff_R13;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float fVar25;
  float extraout_XMM0_Da_05;
  float in_XMM1_Da;
  undefined1 auVar26 [12];
  undefined4 in_stack_fffffffffffffef0;
  UnityEngine_AnimationState_o *in_stack_fffffffffffffef8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar27;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_e0;
  Il2CppRGCTXData *pIStack_c8;
  float fStack_78;
  
  if ((char)(__this->fields)._isLegacy == '\0') {
    fVar25 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    fVar22 = (__this->fields)._currentAnimationStartTime;
    pUVar15 = (UnityEngine_Animation_c *)(__this->fields)._currentAnimation;
    pMVar14 = extraout_RDX;
    if (g_data_057add22 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
      g_data_057add22 = '\x01';
      pMVar14 = extraout_RDX_00;
    }
    method = (MethodInfo *)pUVar15;
    fVar23 = Characters_AnimationHandler__GetLength(__this,(System_String_o *)pUVar15,pMVar14);
    __this_00 = (__this->fields)._animationSpeed;
    pUVar17 = (UnityEngine_Animation_o *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      fVar24 = System_Collections_Generic_Dictionary_object__float___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                          (Il2CppObject *)pUVar15,MethodInfo_Single_get_Item);
      return (fVar25 - fVar22) / (fVar23 / fVar24);
    }
  }
  else {
    pUVar17 = (__this->fields).Animation;
    if (pUVar17 != (UnityEngine_Animation_o *)0x0) {
      method = (MethodInfo *)(__this->fields)._currentAnimation;
      pUVar8 = UnityEngine_Animation__get_Item(pUVar17,(System_String_o *)method,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_AnimationState_o *)0x0) {
        fVar22 = UnityEngine_AnimationState__get_normalizedTime(pUVar8,(MethodInfo *)0x0);
        return fVar22;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)((long)&pUVar17[2].monitor + 4) == '\0') {
    System_String__op_Equality
              ((System_String_o *)pUVar17[2].klass,(System_String_o *)method,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  pUVar17 = (UnityEngine_Animation_o *)(pUVar17->fields).m_CachedPtr;
  if (pUVar17 != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__IsPlaying(pUVar17,(System_String_o *)method,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar15 = (UnityEngine_Animation_c *)method;
  if (g_data_057add23 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057add23 = '\x01';
  }
  if (*(char *)((long)&pUVar17[2].monitor + 4) == '\0') {
    __this_06 = pUVar17[3].klass;
    if (__this_06 != (UnityEngine_Animation_c *)0x0) {
      pUVar16 = pUVar17[1].klass;
      pUVar15 = (UnityEngine_Animation_c *)method;
      pUVar9 = (UnityEngine_Animation_c *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,
                          (Il2CppObject *)method,MethodInfo_String_get_Item);
      if (pUVar16 != (UnityEngine_Animation_c *)0x0) {
        UnityEngine_Animator__Play
                  ((UnityEngine_Animator_o *)pUVar16,(System_String_o *)pUVar9,0,fVar22,(MethodInfo *)0x0);
        pUVar16 = pUVar17[1].klass;
        pUVar15 = pUVar9;
        if (g_data_057add21 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
          g_data_057add21 = '\x01';
          pUVar15 = pUVar9;
        }
        __this_06 = (UnityEngine_Animation_c *)pUVar17[1].fields.m_CachedPtr;
        if ((__this_06 != (UnityEngine_Animation_c *)0x0) &&
           (pUVar15 = (UnityEngine_Animation_c *)method,
           fVar22 = System_Collections_Generic_Dictionary_object__float___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06,
                               (Il2CppObject *)method,MethodInfo_Single_get_Item), pUVar16 != (UnityEngine_Animation_c *)0x0
           )) {
          UnityEngine_Animator__set_speed((UnityEngine_Animator_o *)pUVar16,fVar22,(MethodInfo *)0x0);
          goto label_0429e6f6;
        }
      }
    }
  }
  else {
    __this_01 = (UnityEngine_Animation_o *)(pUVar17->fields).m_CachedPtr;
    __this_06 = (UnityEngine_Animation_c *)0x0;
    if (__this_01 != (UnityEngine_Animation_o *)0x0) {
      pUVar15 = (UnityEngine_Animation_c *)method;
      UnityEngine_Animation__Play(__this_01,(System_String_o *)method,(MethodInfo *)0x0);
      if ((fVar22 <= 0.0) && (extraout_DL == '\0')) {
label_0429e6f6:
        pUVar17[2].klass = (UnityEngine_Animation_c *)method;
        il2cpp_runtime_helper_022b4080(pUVar17 + 2,method);
        fVar22 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        *(float *)&pUVar17[2].monitor = fVar22;
        return fVar22;
      }
      __this_06 = (UnityEngine_Animation_c *)(pUVar17->fields).m_CachedPtr;
      in_XMM1_Da = fVar22;
      if ((__this_06 != (UnityEngine_Animation_c *)0x0) &&
         (pUVar15 = (UnityEngine_Animation_c *)method,
         pUVar8 = UnityEngine_Animation__get_Item
                            ((UnityEngine_Animation_o *)__this_06,(System_String_o *)method,(MethodInfo *)0x0)
         , pUVar8 != (UnityEngine_AnimationState_o *)0x0)) {
        UnityEngine_AnimationState__set_normalizedTime(pUVar8,fVar22,(MethodInfo *)0x0);
        goto label_0429e6f6;
      }
    }
  }
  fStack_78 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar16 = pUVar15;
  if (g_data_057add24 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057add24 = '\x01';
  }
  if ((__this_06->_1).this_arg.field_0xc == '\0') {
    pUVar16 = (UnityEngine_Animation_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    bVar7 = System_String__op_Inequality
                      ((__this_06->_1).this_arg.data,(System_String_o *)pUVar16,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pUVar16 = (__this_06->_1).this_arg.data;
      fVar22 = Characters_AnimationHandler__GetLength
                         ((Characters_AnimationHandler_o *)__this_06,(System_String_o *)pUVar16,method_00);
      fStack_78 = fStack_78 / fVar22;
    }
    __this_07 = (Il2CppRGCTXData *)(__this_06->_1).castClass;
    if (__this_07 != (Il2CppRGCTXData *)0x0) {
      pUVar3 = (UnityEngine_Animator_o *)(__this_06->_1).namespaze;
      pUVar16 = pUVar15;
      pUVar9 = (UnityEngine_Animation_c *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)__this_07,
                          (Il2CppObject *)pUVar15,MethodInfo_String_get_Item);
      if (pUVar3 != (UnityEngine_Animator_o *)0x0) {
        UnityEngine_Animator__CrossFade
                  (pUVar3,(System_String_o *)pUVar9,fStack_78,0,in_XMM1_Da,(MethodInfo *)0x0);
        pUVar3 = (UnityEngine_Animator_o *)(__this_06->_1).namespaze;
        pUVar16 = pUVar9;
        if (g_data_057add21 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
          g_data_057add21 = '\x01';
          pUVar16 = pUVar9;
        }
        __this_07 = *(Il2CppRGCTXData **)&(__this_06->_1).byval_arg.bits;
        if ((__this_07 != (Il2CppRGCTXData *)0x0) &&
           (pUVar16 = pUVar15,
           fVar22 = System_Collections_Generic_Dictionary_object__float___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_07,
                               (Il2CppObject *)pUVar15,MethodInfo_Single_get_Item), pUVar3 != (UnityEngine_Animator_o *)0x0)
           ) {
          UnityEngine_Animator__set_speed(pUVar3,fVar22,(MethodInfo *)0x0);
          goto label_0429e89b;
        }
      }
    }
  }
  else {
    pUVar17 = (UnityEngine_Animation_o *)(__this_06->_1).name;
    __this_07 = (Il2CppRGCTXData *)0x0;
    if (pUVar17 != (UnityEngine_Animation_o *)0x0) {
      pUVar16 = pUVar15;
      UnityEngine_Animation__CrossFade(pUVar17,(System_String_o *)pUVar15,fStack_78,(MethodInfo *)0x0);
      if (0.0 < in_XMM1_Da) {
        __this_07 = (Il2CppRGCTXData *)(__this_06->_1).name;
        if ((__this_07 == (Il2CppRGCTXData *)0x0) ||
           (pUVar16 = pUVar15,
           pUVar8 = UnityEngine_Animation__get_Item
                              ((UnityEngine_Animation_o *)__this_07,(System_String_o *)pUVar15,
                               (MethodInfo *)0x0), pUVar8 == (UnityEngine_AnimationState_o *)0x0))
        goto label_0429e8c1;
        UnityEngine_AnimationState__set_normalizedTime(pUVar8,in_XMM1_Da,(MethodInfo *)0x0);
      }
label_0429e89b:
      (__this_06->_1).this_arg.data = pUVar15;
      il2cpp_runtime_helper_022b4080(&(__this_06->_1).this_arg,pUVar15);
      fVar22 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this_06->_1).this_arg.bits = (uint)fVar22;
      return fVar22;
    }
  }
label_0429e8c1:
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057add25 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057add25 = '\x01';
  }
  pMVar14 = (MethodInfo *)0x0;
  if (__this_07[5].method != (MethodInfo *)0x0) {
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_07[5].method,
               (Il2CppObject *)pUVar16,fVar22,MethodInfo_Void_set_Item);
    if (*(char *)((long)__this_07 + 0x3c) == '\0') {
      bVar7 = System_String__op_Equality
                        ((System_String_o *)__this_07[6].method,(System_String_o *)pUVar16,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return extraout_XMM0_Da_02;
      }
      pMVar14 = (MethodInfo *)0x0;
      if (__this_07[3].method != (MethodInfo *)0x0) {
        UnityEngine_Animator__set_speed
                  ((UnityEngine_Animator_o *)__this_07[3].method,fVar22,(MethodInfo *)0x0);
        return extraout_XMM0_Da_03;
      }
    }
    else {
      pMVar14 = __this_07[2].method;
      if ((pMVar14 != (MethodInfo *)0x0) &&
         (pUVar8 = UnityEngine_Animation__get_Item
                             ((UnityEngine_Animation_o *)pMVar14,(System_String_o *)pUVar16,(MethodInfo *)0x0)
         , pUVar8 != (UnityEngine_AnimationState_o *)0x0)) {
        UnityEngine_AnimationState__set_speed(pUVar8,fVar22,(MethodInfo *)0x0);
        return extraout_XMM0_Da_01;
      }
    }
  }
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  pIStack_c8 = __this_07;
  if (g_data_057add26 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    g_data_057add26 = '\x01';
  }
  if (*(char *)((long)&pMVar14->field7_0x38 + 4) == '\0') goto label_0429ec78;
  pUVar17 = (UnityEngine_Animation_o *)((UnityEngine_Animation_Fields *)&pMVar14->invoker_method)->m_CachedPtr
  ;
  if (pUVar17 == (UnityEngine_Animation_o *)0x0) goto label_0429ed79;
  unaff_R13 = UnityEngine_Animation__GetEnumerator(pUVar17,(MethodInfo *)0x0);
  if (unaff_R13 == (System_Collections_IEnumerator_o *)0x0) goto label_0429ed7e;
  pUVar8 = (UnityEngine_AnimationState_o *)0x0;
  do {
    pSVar4 = unaff_R13->klass;
    uVar1._0_1_ = (pSVar4->_2).rank;
    uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar18 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar18) == TypeInfo_IEnumerator) {
          pVVar10 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar18);
          goto label_0429eaf3;
        }
        lVar18 = lVar18 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar18);
    }
    pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_0429eaf3:
    cVar6 = (*pVVar10->methodPtr)(unaff_R13,pVVar10->method);
    if (cVar6 == '\0') {
      iVar21 = 5;
      unaff_R12 = (MethodInfo_310C3F0 **)pUVar8;
      goto label_0429ebe7;
    }
    pSVar4 = unaff_R13->klass;
    uVar2._0_1_ = (pSVar4->_2).rank;
    uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar18 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar18) == TypeInfo_IEnumerator) {
          pVVar10 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar18) + 1);
          goto label_0429eb78;
        }
        lVar18 = lVar18 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar18);
    }
    pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,1);
label_0429eb78:
    unaff_R12 = (MethodInfo_310C3F0 **)(*pVVar10->methodPtr)(unaff_R13,pVVar10->method);
    if ((UnityEngine_AnimationState_o *)unaff_R12 == (UnityEngine_AnimationState_o *)0x0) {
label_0429ed65:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6a:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6f:
      il2cpp_runtime_helper_022b2c90();
      do {
        il2cpp_runtime_helper_022b2c90();
label_0429ed79:
        do {
          il2cpp_runtime_helper_022b2c90();
label_0429ed7e:
          il2cpp_runtime_helper_022b2c90();
          do {
            auVar26 = il2cpp_runtime_helper_022fefe0(unaff_R12);
            uVar13 = auVar26._0_8_;
            iVar21 = 0;
            if (auVar26._8_4_ != 1) {
              lVar18 = 0;
              goto label_0429eeff;
            }
            puVar12 = (undefined8 *)__cxa_begin_catch(uVar13);
            unaff_R12 = (MethodInfo_310C3F0 **)*puVar12;
            __cxa_end_catch();
label_0429ebe7:
            plVar11 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
            fVar25 = extraout_XMM0_Da_04;
            in_stack_fffffffffffffef8 = (UnityEngine_AnimationState_o *)unaff_R12;
            if (plVar11 != (long *)0x0) {
              lVar18 = *plVar11;
              if ((ulong)*(ushort *)(lVar18 + 0x12e) != 0) {
                lVar19 = 0;
                do {
                  if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar19) == TypeInfo_IDisposable) {
                    puVar12 = (undefined8 *)
                              (lVar18 + (long)*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
                    goto label_0429ec5d;
                  }
                  lVar19 = lVar19 + 0x10;
                } while ((ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar19);
              }
              puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_0429ec5d:
              fVar25 = (float)(*(code *)*puVar12)(plVar11,puVar12[1]);
            }
          } while ((UnityEngine_AnimationState_o *)unaff_R12 != (UnityEngine_AnimationState_o *)0x0);
          if (iVar21 != 0) {
            return fVar25;
          }
label_0429ec78:
        } while (((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar14->return_type ==
                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
                (__this_05 = System_Collections_Generic_Dictionary_object__float___get_Keys
                                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                        pMVar14->return_type,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys),
                __this_05 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0));
        System_Collections_Generic_Dictionary_KeyCollection_object__float___GetEnumerator
                  (&SStack_e0,__this_05,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
        b = SStack_e0.fields._currentKey;
        unaff_R12 = &MethodInfo_Void_set_Item;
        pSVar27 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                  SStack_e0.fields._dictionary;
        while( true ) {
          do {
            __this_03.fields._dictionary._4_4_ = fVar22;
            __this_03.fields._dictionary._0_4_ = in_stack_fffffffffffffef0;
            __this_03.fields._8_8_ = in_stack_fffffffffffffef8;
            __this_03.fields._currentKey = (Il2CppObject *)pSVar27;
            bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___MoveNext
                              (__this_03,(MethodInfo_3252C30 *)&stack0xffffffffffffff00);
            if ((char)bVar7 == '\0') {
              __this_04.fields._dictionary._4_4_ = fVar22;
              __this_04.fields._dictionary._0_4_ = in_stack_fffffffffffffef0;
              __this_04.fields._8_8_ = in_stack_fffffffffffffef8;
              __this_04.fields._currentKey = (Il2CppObject *)pSVar27;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___Dispose
                        (__this_04,(MethodInfo_3252C20 *)&stack0xffffffffffffff00);
              return extraout_XMM0_Da_05;
            }
            if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar14->return_type ==
                (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0429ed6f;
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar14->return_type,b,fVar22,
                       MethodInfo_Void_set_Item);
            bVar7 = System_String__op_Equality
                              ((System_String_o *)pMVar14->parameters,(System_String_o *)b,(MethodInfo *)0x0);
          } while ((char)bVar7 == '\0');
          if ((UnityEngine_Animator_o *)pMVar14->name == (UnityEngine_Animator_o *)0x0) break;
          UnityEngine_Animator__set_speed((UnityEngine_Animator_o *)pMVar14->name,fVar22,(MethodInfo *)0x0);
        }
      } while( true );
    }
    if (((UnityEngine_AnimationState_o *)unaff_R12)->klass != TypeInfo_AnimationState) {
      il2cpp_runtime_helper_022b2fd0(unaff_R12);
      goto label_0429ed65;
    }
    __this_02 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar14->return_type;
    key = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)unaff_R12,(MethodInfo *)0x0);
    if (__this_02 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0429ed6a;
    System_Collections_Generic_Dictionary_object__float___set_Item
              (__this_02,(Il2CppObject *)key,fVar22,MethodInfo_Void_set_Item);
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)unaff_R12,fVar22,(MethodInfo *)0x0);
  } while( true );
label_0429eeff:
  plVar11 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
  if (plVar11 != (long *)0x0) {
    lVar19 = *plVar11;
    if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
      lVar20 = 0;
      do {
        if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar20) == TypeInfo_IDisposable) {
          puVar12 = (undefined8 *)
                    (lVar19 + (long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar20) * 0x10 + 0x138);
          goto label_0429ef6d;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar20);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_0429ef6d:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  if (lVar18 == 0) {
    _Unwind_Resume(uVar13);
  }
  uVar13 = il2cpp_runtime_helper_022fefe0(lVar18);
  goto label_0429eeff;
}


// Characters.AnimationHandler$$IsPlaying
// il2cpp: bool Characters_AnimationHandler__IsPlaying (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x429e5a0

bool_conflict
Characters_AnimationHandler__IsPlaying
          (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  UnityEngine_Animation_o *__this_00;
  UnityEngine_Animator_o *pUVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  Il2CppObject *b;
  char cVar6;
  bool_conflict bVar7;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  bool_conflict extraout_EAX_02;
  bool_conflict extraout_EAX_03;
  UnityEngine_AnimationState_o *pUVar8;
  UnityEngine_Animation_c *pUVar9;
  VirtualInvokeData *pVVar10;
  System_String_o *key;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  char extraout_DL;
  MethodInfo *method_00;
  UnityEngine_Animation_c *animation;
  UnityEngine_Animation_c *pUVar14;
  UnityEngine_Animation_o *pUVar15;
  UnityEngine_Animation_c *__this_05;
  Il2CppRGCTXData *__this_06;
  MethodInfo *__this_07;
  long lVar16;
  long lVar17;
  long lVar18;
  MethodInfo_310C3F0 **unaff_R12;
  System_Collections_IEnumerator_o *unaff_R13;
  int iVar19;
  float fVar20;
  float in_XMM1_Da;
  undefined1 auVar21 [12];
  undefined4 in_stack_ffffffffffffff18;
  UnityEngine_AnimationState_o *in_stack_ffffffffffffff20;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar22;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_b8;
  Il2CppRGCTXData *pIStack_a0;
  float fStack_50;
  
  if ((char)(__this->fields)._isLegacy == '\0') {
    bVar7 = System_String__op_Equality((__this->fields)._currentAnimation,name,(MethodInfo *)0x0);
    return bVar7;
  }
  pUVar15 = (__this->fields).Animation;
  if (pUVar15 != (UnityEngine_Animation_o *)0x0) {
    bVar7 = UnityEngine_Animation__IsPlaying(pUVar15,name,(MethodInfo *)0x0);
    return bVar7;
  }
  fVar20 = (float)il2cpp_runtime_helper_022b2c90();
  animation = (UnityEngine_Animation_c *)name;
  if (g_data_057add23 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057add23 = '\x01';
  }
  if (*(char *)((long)&pUVar15[2].monitor + 4) == '\0') {
    __this_05 = pUVar15[3].klass;
    if (__this_05 != (UnityEngine_Animation_c *)0x0) {
      pUVar14 = pUVar15[1].klass;
      animation = (UnityEngine_Animation_c *)name;
      pUVar9 = (UnityEngine_Animation_c *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)__this_05,
                          (Il2CppObject *)name,MethodInfo_String_get_Item);
      if (pUVar14 != (UnityEngine_Animation_c *)0x0) {
        UnityEngine_Animator__Play
                  ((UnityEngine_Animator_o *)pUVar14,(System_String_o *)pUVar9,0,fVar20,(MethodInfo *)0x0);
        pUVar14 = pUVar15[1].klass;
        animation = pUVar9;
        if (g_data_057add21 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
          g_data_057add21 = '\x01';
          animation = pUVar9;
        }
        __this_05 = (UnityEngine_Animation_c *)pUVar15[1].fields.m_CachedPtr;
        if ((__this_05 != (UnityEngine_Animation_c *)0x0) &&
           (animation = (UnityEngine_Animation_c *)name,
           fVar20 = System_Collections_Generic_Dictionary_object__float___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_05,
                               (Il2CppObject *)name,MethodInfo_Single_get_Item), pUVar14 != (UnityEngine_Animation_c *)0x0))
        {
          UnityEngine_Animator__set_speed((UnityEngine_Animator_o *)pUVar14,fVar20,(MethodInfo *)0x0);
          goto label_0429e6f6;
        }
      }
    }
  }
  else {
    __this_00 = (UnityEngine_Animation_o *)(pUVar15->fields).m_CachedPtr;
    __this_05 = (UnityEngine_Animation_c *)0x0;
    if (__this_00 != (UnityEngine_Animation_o *)0x0) {
      animation = (UnityEngine_Animation_c *)name;
      UnityEngine_Animation__Play(__this_00,name,(MethodInfo *)0x0);
      if ((fVar20 <= 0.0) && (extraout_DL == '\0')) {
label_0429e6f6:
        pUVar15[2].klass = (UnityEngine_Animation_c *)name;
        il2cpp_runtime_helper_022b4080(pUVar15 + 2,name);
        fVar20 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        *(float *)&pUVar15[2].monitor = fVar20;
        return extraout_EAX;
      }
      __this_05 = (UnityEngine_Animation_c *)(pUVar15->fields).m_CachedPtr;
      in_XMM1_Da = fVar20;
      if ((__this_05 != (UnityEngine_Animation_c *)0x0) &&
         (animation = (UnityEngine_Animation_c *)name,
         pUVar8 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)__this_05,name,(MethodInfo *)0x0)
         , pUVar8 != (UnityEngine_AnimationState_o *)0x0)) {
        UnityEngine_AnimationState__set_normalizedTime(pUVar8,fVar20,(MethodInfo *)0x0);
        goto label_0429e6f6;
      }
    }
  }
  fStack_50 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar14 = animation;
  if (g_data_057add24 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057add24 = '\x01';
  }
  if ((__this_05->_1).this_arg.field_0xc == '\0') {
    pUVar14 = (UnityEngine_Animation_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    bVar7 = System_String__op_Inequality
                      ((__this_05->_1).this_arg.data,(System_String_o *)pUVar14,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pUVar14 = (__this_05->_1).this_arg.data;
      fVar20 = Characters_AnimationHandler__GetLength
                         ((Characters_AnimationHandler_o *)__this_05,(System_String_o *)pUVar14,method_00);
      fStack_50 = fStack_50 / fVar20;
    }
    __this_06 = (Il2CppRGCTXData *)(__this_05->_1).castClass;
    if (__this_06 != (Il2CppRGCTXData *)0x0) {
      pUVar3 = (UnityEngine_Animator_o *)(__this_05->_1).namespaze;
      pUVar14 = animation;
      pUVar9 = (UnityEngine_Animation_c *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,
                          (Il2CppObject *)animation,MethodInfo_String_get_Item);
      if (pUVar3 != (UnityEngine_Animator_o *)0x0) {
        UnityEngine_Animator__CrossFade
                  (pUVar3,(System_String_o *)pUVar9,fStack_50,0,in_XMM1_Da,(MethodInfo *)0x0);
        pUVar3 = (UnityEngine_Animator_o *)(__this_05->_1).namespaze;
        pUVar14 = pUVar9;
        if (g_data_057add21 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
          g_data_057add21 = '\x01';
          pUVar14 = pUVar9;
        }
        __this_06 = *(Il2CppRGCTXData **)&(__this_05->_1).byval_arg.bits;
        if ((__this_06 != (Il2CppRGCTXData *)0x0) &&
           (pUVar14 = animation,
           fVar20 = System_Collections_Generic_Dictionary_object__float___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06,
                               (Il2CppObject *)animation,MethodInfo_Single_get_Item),
           pUVar3 != (UnityEngine_Animator_o *)0x0)) {
          UnityEngine_Animator__set_speed(pUVar3,fVar20,(MethodInfo *)0x0);
          goto label_0429e89b;
        }
      }
    }
  }
  else {
    pUVar15 = (UnityEngine_Animation_o *)(__this_05->_1).name;
    __this_06 = (Il2CppRGCTXData *)0x0;
    if (pUVar15 != (UnityEngine_Animation_o *)0x0) {
      pUVar14 = animation;
      UnityEngine_Animation__CrossFade(pUVar15,(System_String_o *)animation,fStack_50,(MethodInfo *)0x0);
      if (0.0 < in_XMM1_Da) {
        __this_06 = (Il2CppRGCTXData *)(__this_05->_1).name;
        if ((__this_06 == (Il2CppRGCTXData *)0x0) ||
           (pUVar14 = animation,
           pUVar8 = UnityEngine_Animation__get_Item
                              ((UnityEngine_Animation_o *)__this_06,(System_String_o *)animation,
                               (MethodInfo *)0x0), pUVar8 == (UnityEngine_AnimationState_o *)0x0))
        goto label_0429e8c1;
        UnityEngine_AnimationState__set_normalizedTime(pUVar8,in_XMM1_Da,(MethodInfo *)0x0);
      }
label_0429e89b:
      (__this_05->_1).this_arg.data = animation;
      il2cpp_runtime_helper_022b4080(&(__this_05->_1).this_arg,animation);
      fVar20 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this_05->_1).this_arg.bits = (uint)fVar20;
      return extraout_EAX_00;
    }
  }
label_0429e8c1:
  fVar20 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057add25 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057add25 = '\x01';
  }
  __this_07 = (MethodInfo *)0x0;
  if (__this_06[5].method != (MethodInfo *)0x0) {
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06[5].method,
               (Il2CppObject *)pUVar14,fVar20,MethodInfo_Void_set_Item);
    if (*(char *)((long)__this_06 + 0x3c) == '\0') {
      bVar7 = System_String__op_Equality
                        ((System_String_o *)__this_06[6].method,(System_String_o *)pUVar14,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return bVar7;
      }
      __this_07 = (MethodInfo *)0x0;
      if (__this_06[3].method != (MethodInfo *)0x0) {
        UnityEngine_Animator__set_speed
                  ((UnityEngine_Animator_o *)__this_06[3].method,fVar20,(MethodInfo *)0x0);
        return extraout_EAX_02;
      }
    }
    else {
      __this_07 = __this_06[2].method;
      if ((__this_07 != (MethodInfo *)0x0) &&
         (pUVar8 = UnityEngine_Animation__get_Item
                             ((UnityEngine_Animation_o *)__this_07,(System_String_o *)pUVar14,
                              (MethodInfo *)0x0), pUVar8 != (UnityEngine_AnimationState_o *)0x0)) {
        UnityEngine_AnimationState__set_speed(pUVar8,fVar20,(MethodInfo *)0x0);
        return extraout_EAX_01;
      }
    }
  }
  fVar20 = (float)il2cpp_runtime_helper_022b2c90();
  pIStack_a0 = __this_06;
  if (g_data_057add26 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    g_data_057add26 = '\x01';
  }
  if (*(char *)((long)&__this_07->field7_0x38 + 4) == '\0') goto label_0429ec78;
  pUVar15 = (UnityEngine_Animation_o *)
            ((UnityEngine_Animation_Fields *)&__this_07->invoker_method)->m_CachedPtr;
  if (pUVar15 == (UnityEngine_Animation_o *)0x0) goto label_0429ed79;
  unaff_R13 = UnityEngine_Animation__GetEnumerator(pUVar15,(MethodInfo *)0x0);
  if (unaff_R13 == (System_Collections_IEnumerator_o *)0x0) goto label_0429ed7e;
  pUVar8 = (UnityEngine_AnimationState_o *)0x0;
  do {
    pSVar4 = unaff_R13->klass;
    uVar1._0_1_ = (pSVar4->_2).rank;
    uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar16) == TypeInfo_IEnumerator) {
          pVVar10 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar16);
          goto label_0429eaf3;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar16);
    }
    pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_0429eaf3:
    cVar6 = (*pVVar10->methodPtr)(unaff_R13,pVVar10->method);
    if (cVar6 == '\0') {
      iVar19 = 5;
      unaff_R12 = (MethodInfo_310C3F0 **)pUVar8;
      goto label_0429ebe7;
    }
    pSVar4 = unaff_R13->klass;
    uVar2._0_1_ = (pSVar4->_2).rank;
    uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar16) == TypeInfo_IEnumerator) {
          pVVar10 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar16) + 1);
          goto label_0429eb78;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar16);
    }
    pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,1);
label_0429eb78:
    unaff_R12 = (MethodInfo_310C3F0 **)(*pVVar10->methodPtr)(unaff_R13,pVVar10->method);
    if ((UnityEngine_AnimationState_o *)unaff_R12 == (UnityEngine_AnimationState_o *)0x0) {
label_0429ed65:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6a:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6f:
      il2cpp_runtime_helper_022b2c90();
      do {
        il2cpp_runtime_helper_022b2c90();
label_0429ed79:
        do {
          il2cpp_runtime_helper_022b2c90();
label_0429ed7e:
          il2cpp_runtime_helper_022b2c90();
          do {
            auVar21 = il2cpp_runtime_helper_022fefe0(unaff_R12);
            uVar13 = auVar21._0_8_;
            iVar19 = 0;
            if (auVar21._8_4_ != 1) {
              lVar16 = 0;
              goto label_0429eeff;
            }
            puVar12 = (undefined8 *)__cxa_begin_catch(uVar13);
            unaff_R12 = (MethodInfo_310C3F0 **)*puVar12;
            __cxa_end_catch();
label_0429ebe7:
            plVar11 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
            bVar7 = 0;
            in_stack_ffffffffffffff20 = (UnityEngine_AnimationState_o *)unaff_R12;
            if (plVar11 != (long *)0x0) {
              lVar16 = *plVar11;
              if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
                lVar17 = 0;
                do {
                  if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IDisposable) {
                    puVar12 = (undefined8 *)
                              (lVar16 + (long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 + 0x138);
                    goto label_0429ec5d;
                  }
                  lVar17 = lVar17 + 0x10;
                } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
              }
              puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_0429ec5d:
              bVar7 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            }
          } while ((UnityEngine_AnimationState_o *)unaff_R12 != (UnityEngine_AnimationState_o *)0x0);
          if (iVar19 != 0) {
            return bVar7;
          }
label_0429ec78:
        } while (((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_07->return_type ==
                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
                (__this_04 = System_Collections_Generic_Dictionary_object__float___get_Keys
                                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                        __this_07->return_type,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys),
                __this_04 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0));
        System_Collections_Generic_Dictionary_KeyCollection_object__float___GetEnumerator
                  (&SStack_b8,__this_04,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
        b = SStack_b8.fields._currentKey;
        unaff_R12 = &MethodInfo_Void_set_Item;
        pSVar22 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                  SStack_b8.fields._dictionary;
        while( true ) {
          do {
            __this_02.fields._dictionary._4_4_ = fVar20;
            __this_02.fields._dictionary._0_4_ = in_stack_ffffffffffffff18;
            __this_02.fields._8_8_ = in_stack_ffffffffffffff20;
            __this_02.fields._currentKey = (Il2CppObject *)pSVar22;
            bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___MoveNext
                              (__this_02,(MethodInfo_3252C30 *)&stack0xffffffffffffff28);
            if ((char)bVar7 == '\0') {
              __this_03.fields._dictionary._4_4_ = fVar20;
              __this_03.fields._dictionary._0_4_ = in_stack_ffffffffffffff18;
              __this_03.fields._8_8_ = in_stack_ffffffffffffff20;
              __this_03.fields._currentKey = (Il2CppObject *)pSVar22;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___Dispose
                        (__this_03,(MethodInfo_3252C20 *)&stack0xffffffffffffff28);
              return extraout_EAX_03;
            }
            if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_07->return_type ==
                (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0429ed6f;
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_07->return_type,b,
                       fVar20,MethodInfo_Void_set_Item);
            bVar7 = System_String__op_Equality
                              ((System_String_o *)__this_07->parameters,(System_String_o *)b,(MethodInfo *)0x0
                              );
          } while ((char)bVar7 == '\0');
          if ((UnityEngine_Animator_o *)__this_07->name == (UnityEngine_Animator_o *)0x0) break;
          UnityEngine_Animator__set_speed((UnityEngine_Animator_o *)__this_07->name,fVar20,(MethodInfo *)0x0);
        }
      } while( true );
    }
    if (((UnityEngine_AnimationState_o *)unaff_R12)->klass != TypeInfo_AnimationState) {
      il2cpp_runtime_helper_022b2fd0(unaff_R12);
      goto label_0429ed65;
    }
    __this_01 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_07->return_type;
    key = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)unaff_R12,(MethodInfo *)0x0);
    if (__this_01 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0429ed6a;
    System_Collections_Generic_Dictionary_object__float___set_Item
              (__this_01,(Il2CppObject *)key,fVar20,MethodInfo_Void_set_Item);
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)unaff_R12,fVar20,(MethodInfo *)0x0);
  } while( true );
label_0429eeff:
  plVar11 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
  if (plVar11 != (long *)0x0) {
    lVar17 = *plVar11;
    if ((ulong)*(ushort *)(lVar17 + 0x12e) != 0) {
      lVar18 = 0;
      do {
        if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar18) == TypeInfo_IDisposable) {
          puVar12 = (undefined8 *)
                    (lVar17 + (long)*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar18) * 0x10 + 0x138);
          goto label_0429ef6d;
        }
        lVar18 = lVar18 + 0x10;
      } while ((ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar18);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_0429ef6d:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  if (lVar16 == 0) {
    _Unwind_Resume(uVar13);
  }
  uVar13 = il2cpp_runtime_helper_022fefe0(lVar16);
  goto label_0429eeff;
}


// Characters.AnimationHandler$$Play
// il2cpp: void Characters_AnimationHandler__Play (Characters_AnimationHandler_o* __this, System_String_o* name, float startTime, bool reset, const MethodInfo* method);
// 0x429e5d0

void Characters_AnimationHandler__Play
               (Characters_AnimationHandler_o *__this,System_String_o *name,float startTime,
               bool_conflict reset,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  UnityEngine_Animation_o *pUVar3;
  UnityEngine_Animator_o *pUVar4;
  System_Int32_array *__this_00;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar5;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  Il2CppObject *b;
  char cVar8;
  bool_conflict bVar9;
  UnityEngine_AnimationState_o *pUVar10;
  System_String_o *pSVar11;
  System_String_o *stateName;
  VirtualInvokeData *pVVar12;
  System_String_o *pSVar13;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_05;
  Il2CppRGCTXData *__this_06;
  MethodInfo *__this_07;
  long lVar17;
  long lVar18;
  long lVar19;
  MethodInfo_310C3F0 **unaff_R12;
  System_Collections_IEnumerator_o *unaff_R13;
  int iVar20;
  float fVar21;
  float in_XMM1_Da;
  undefined1 auVar22 [12];
  undefined4 in_stack_ffffffffffffff20;
  UnityEngine_AnimationState_o *in_stack_ffffffffffffff28;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar23;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_b0;
  Il2CppRGCTXData *pIStack_98;
  float fStack_48;
  
  pSVar13 = name;
  if (g_data_057add23 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057add23 = '\x01';
  }
  if ((char)(__this->fields)._isLegacy == '\0') {
    __this_05 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._animatorStateNames;
    if (__this_05 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar4 = (__this->fields).Animator;
      pSVar13 = name;
      pSVar11 = (System_String_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_05,(Il2CppObject *)name,MethodInfo_String_get_Item);
      if (pUVar4 != (UnityEngine_Animator_o *)0x0) {
        UnityEngine_Animator__Play(pUVar4,pSVar11,0,startTime,(MethodInfo *)0x0);
        pUVar4 = (__this->fields).Animator;
        pSVar13 = pSVar11;
        if (g_data_057add21 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
          g_data_057add21 = '\x01';
          pSVar13 = pSVar11;
        }
        __this_05 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (__this->fields)._animationSpeed;
        if ((__this_05 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
           (pSVar13 = name,
           fVar21 = System_Collections_Generic_Dictionary_object__float___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_05,
                               (Il2CppObject *)name,MethodInfo_Single_get_Item), pUVar4 != (UnityEngine_Animator_o *)0x0)) {
          UnityEngine_Animator__set_speed(pUVar4,fVar21,(MethodInfo *)0x0);
          goto label_0429e6f6;
        }
      }
    }
  }
  else {
    pUVar3 = (__this->fields).Animation;
    __this_05 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
    if (pUVar3 != (UnityEngine_Animation_o *)0x0) {
      pSVar13 = name;
      UnityEngine_Animation__Play(pUVar3,name,(MethodInfo *)0x0);
      if ((startTime <= 0.0) && ((char)reset == '\0')) {
label_0429e6f6:
        (__this->fields)._currentAnimation = name;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._currentAnimation,name);
        fVar21 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        (__this->fields)._currentAnimationStartTime = fVar21;
        return;
      }
      __this_05 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Animation;
      in_XMM1_Da = startTime;
      if ((__this_05 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (pSVar13 = name,
         pUVar10 = UnityEngine_Animation__get_Item
                             ((UnityEngine_Animation_o *)__this_05,name,(MethodInfo *)0x0),
         pUVar10 != (UnityEngine_AnimationState_o *)0x0)) {
        UnityEngine_AnimationState__set_normalizedTime(pUVar10,startTime,(MethodInfo *)0x0);
        goto label_0429e6f6;
      }
    }
  }
  fStack_48 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar11 = pSVar13;
  if (g_data_057add24 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057add24 = '\x01';
  }
  if (*(char *)((long)&(__this_05->fields)._keys + 4) == '\0') {
    pSVar11 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    bVar9 = System_String__op_Inequality
                      ((System_String_o *)(__this_05->fields)._comparer,pSVar11,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pSVar11 = (System_String_o *)(__this_05->fields)._comparer;
      fVar21 = Characters_AnimationHandler__GetLength
                         ((Characters_AnimationHandler_o *)__this_05,pSVar11,method_00);
      fStack_48 = fStack_48 / fVar21;
    }
    __this_06 = (Il2CppRGCTXData *)(__this_05->fields)._syncRoot;
    if (__this_06 != (Il2CppRGCTXData *)0x0) {
      pSVar5 = (__this_05->fields)._entries;
      pSVar11 = pSVar13;
      stateName = (System_String_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,
                             (Il2CppObject *)pSVar13,MethodInfo_String_get_Item);
      if (pSVar5 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        UnityEngine_Animator__CrossFade
                  ((UnityEngine_Animator_o *)pSVar5,stateName,fStack_48,0,in_XMM1_Da,(MethodInfo *)0x0);
        pSVar5 = (__this_05->fields)._entries;
        pSVar11 = stateName;
        if (g_data_057add21 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
          g_data_057add21 = '\x01';
          pSVar11 = stateName;
        }
        __this_06 = *(Il2CppRGCTXData **)&(__this_05->fields)._freeCount;
        if ((__this_06 != (Il2CppRGCTXData *)0x0) &&
           (pSVar11 = pSVar13,
           fVar21 = System_Collections_Generic_Dictionary_object__float___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06,
                               (Il2CppObject *)pSVar13,MethodInfo_Single_get_Item),
           pSVar5 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
          UnityEngine_Animator__set_speed((UnityEngine_Animator_o *)pSVar5,fVar21,(MethodInfo *)0x0);
          goto label_0429e89b;
        }
      }
    }
  }
  else {
    __this_00 = (__this_05->fields)._buckets;
    __this_06 = (Il2CppRGCTXData *)0x0;
    if (__this_00 != (System_Int32_array *)0x0) {
      pSVar11 = pSVar13;
      UnityEngine_Animation__CrossFade
                ((UnityEngine_Animation_o *)__this_00,pSVar13,fStack_48,(MethodInfo *)0x0);
      if (0.0 < in_XMM1_Da) {
        __this_06 = (Il2CppRGCTXData *)(__this_05->fields)._buckets;
        if ((__this_06 == (Il2CppRGCTXData *)0x0) ||
           (pSVar11 = pSVar13,
           pUVar10 = UnityEngine_Animation__get_Item
                               ((UnityEngine_Animation_o *)__this_06,pSVar13,(MethodInfo *)0x0),
           pUVar10 == (UnityEngine_AnimationState_o *)0x0)) goto label_0429e8c1;
        UnityEngine_AnimationState__set_normalizedTime(pUVar10,in_XMM1_Da,(MethodInfo *)0x0);
      }
label_0429e89b:
      (__this_05->fields)._comparer = (System_Collections_Generic_IEqualityComparer_TKey__o *)pSVar13;
      il2cpp_runtime_helper_022b4080(&(__this_05->fields)._comparer,pSVar13);
      fVar21 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      *(float *)&(__this_05->fields)._keys = fVar21;
      return;
    }
  }
label_0429e8c1:
  fVar21 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057add25 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057add25 = '\x01';
  }
  __this_07 = (MethodInfo *)0x0;
  if (__this_06[5].method != (MethodInfo *)0x0) {
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06[5].method,
               (Il2CppObject *)pSVar11,fVar21,MethodInfo_Void_set_Item);
    if (*(char *)((long)__this_06 + 0x3c) == '\0') {
      bVar9 = System_String__op_Equality((System_String_o *)__this_06[6].method,pSVar11,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      __this_07 = (MethodInfo *)0x0;
      if (__this_06[3].method != (MethodInfo *)0x0) {
        UnityEngine_Animator__set_speed
                  ((UnityEngine_Animator_o *)__this_06[3].method,fVar21,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_07 = __this_06[2].method;
      if ((__this_07 != (MethodInfo *)0x0) &&
         (pUVar10 = UnityEngine_Animation__get_Item
                              ((UnityEngine_Animation_o *)__this_07,pSVar11,(MethodInfo *)0x0),
         pUVar10 != (UnityEngine_AnimationState_o *)0x0)) {
        UnityEngine_AnimationState__set_speed(pUVar10,fVar21,(MethodInfo *)0x0);
        return;
      }
    }
  }
  fVar21 = (float)il2cpp_runtime_helper_022b2c90();
  pIStack_98 = __this_06;
  if (g_data_057add26 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    g_data_057add26 = '\x01';
  }
  if (*(char *)((long)&__this_07->field7_0x38 + 4) == '\0') goto label_0429ec78;
  pUVar3 = (UnityEngine_Animation_o *)
           ((UnityEngine_Animation_Fields *)&__this_07->invoker_method)->m_CachedPtr;
  if (pUVar3 == (UnityEngine_Animation_o *)0x0) goto label_0429ed79;
  unaff_R13 = UnityEngine_Animation__GetEnumerator(pUVar3,(MethodInfo *)0x0);
  if (unaff_R13 == (System_Collections_IEnumerator_o *)0x0) goto label_0429ed7e;
  pUVar10 = (UnityEngine_AnimationState_o *)0x0;
  do {
    pSVar6 = unaff_R13->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar17) == TypeInfo_IEnumerator) {
          pVVar12 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar17);
          goto label_0429eaf3;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar17);
    }
    pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_0429eaf3:
    cVar8 = (*pVVar12->methodPtr)(unaff_R13,pVVar12->method);
    if (cVar8 == '\0') {
      iVar20 = 5;
      unaff_R12 = (MethodInfo_310C3F0 **)pUVar10;
      goto label_0429ebe7;
    }
    pSVar6 = unaff_R13->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar17) == TypeInfo_IEnumerator) {
          pVVar12 = pSVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar17) + 1);
          goto label_0429eb78;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar17);
    }
    pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,1);
label_0429eb78:
    unaff_R12 = (MethodInfo_310C3F0 **)(*pVVar12->methodPtr)(unaff_R13,pVVar12->method);
    if ((UnityEngine_AnimationState_o *)unaff_R12 == (UnityEngine_AnimationState_o *)0x0) {
label_0429ed65:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6a:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6f:
      il2cpp_runtime_helper_022b2c90();
      do {
        il2cpp_runtime_helper_022b2c90();
label_0429ed79:
        do {
          il2cpp_runtime_helper_022b2c90();
label_0429ed7e:
          il2cpp_runtime_helper_022b2c90();
          do {
            auVar22 = il2cpp_runtime_helper_022fefe0(unaff_R12);
            uVar16 = auVar22._0_8_;
            iVar20 = 0;
            if (auVar22._8_4_ != 1) {
              lVar17 = 0;
              goto label_0429eeff;
            }
            puVar15 = (undefined8 *)__cxa_begin_catch(uVar16);
            unaff_R12 = (MethodInfo_310C3F0 **)*puVar15;
            __cxa_end_catch();
label_0429ebe7:
            plVar14 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
            in_stack_ffffffffffffff28 = (UnityEngine_AnimationState_o *)unaff_R12;
            if (plVar14 != (long *)0x0) {
              lVar17 = *plVar14;
              if ((ulong)*(ushort *)(lVar17 + 0x12e) != 0) {
                lVar18 = 0;
                do {
                  if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar18) == TypeInfo_IDisposable) {
                    puVar15 = (undefined8 *)
                              (lVar17 + (long)*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar18) * 0x10 + 0x138);
                    goto label_0429ec5d;
                  }
                  lVar18 = lVar18 + 0x10;
                } while ((ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar18);
              }
              puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_IDisposable,0);
label_0429ec5d:
              (*(code *)*puVar15)(plVar14,puVar15[1]);
            }
          } while ((UnityEngine_AnimationState_o *)unaff_R12 != (UnityEngine_AnimationState_o *)0x0);
          if (iVar20 != 0) {
            return;
          }
label_0429ec78:
        } while (((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_07->return_type ==
                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
                (__this_04 = System_Collections_Generic_Dictionary_object__float___get_Keys
                                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                        __this_07->return_type,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys),
                __this_04 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0));
        System_Collections_Generic_Dictionary_KeyCollection_object__float___GetEnumerator
                  (&SStack_b0,__this_04,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
        b = SStack_b0.fields._currentKey;
        unaff_R12 = &MethodInfo_Void_set_Item;
        pSVar23 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                  SStack_b0.fields._dictionary;
        while( true ) {
          do {
            __this_02.fields._dictionary._4_4_ = fVar21;
            __this_02.fields._dictionary._0_4_ = in_stack_ffffffffffffff20;
            __this_02.fields._8_8_ = in_stack_ffffffffffffff28;
            __this_02.fields._currentKey = (Il2CppObject *)pSVar23;
            bVar9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___MoveNext
                              (__this_02,(MethodInfo_3252C30 *)&stack0xffffffffffffff30);
            if ((char)bVar9 == '\0') {
              __this_03.fields._dictionary._4_4_ = fVar21;
              __this_03.fields._dictionary._0_4_ = in_stack_ffffffffffffff20;
              __this_03.fields._8_8_ = in_stack_ffffffffffffff28;
              __this_03.fields._currentKey = (Il2CppObject *)pSVar23;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___Dispose
                        (__this_03,(MethodInfo_3252C20 *)&stack0xffffffffffffff30);
              return;
            }
            if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_07->return_type ==
                (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0429ed6f;
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_07->return_type,b,
                       fVar21,MethodInfo_Void_set_Item);
            bVar9 = System_String__op_Equality
                              ((System_String_o *)__this_07->parameters,(System_String_o *)b,(MethodInfo *)0x0
                              );
          } while ((char)bVar9 == '\0');
          if ((UnityEngine_Animator_o *)__this_07->name == (UnityEngine_Animator_o *)0x0) break;
          UnityEngine_Animator__set_speed((UnityEngine_Animator_o *)__this_07->name,fVar21,(MethodInfo *)0x0);
        }
      } while( true );
    }
    if (((UnityEngine_AnimationState_o *)unaff_R12)->klass != TypeInfo_AnimationState) {
      il2cpp_runtime_helper_022b2fd0(unaff_R12);
      goto label_0429ed65;
    }
    __this_01 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_07->return_type;
    pSVar13 = UnityEngine_AnimationState__get_name
                        ((UnityEngine_AnimationState_o *)unaff_R12,(MethodInfo *)0x0);
    if (__this_01 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0429ed6a;
    System_Collections_Generic_Dictionary_object__float___set_Item
              (__this_01,(Il2CppObject *)pSVar13,fVar21,MethodInfo_Void_set_Item);
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)unaff_R12,fVar21,(MethodInfo *)0x0);
  } while( true );
label_0429eeff:
  plVar14 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
  if (plVar14 != (long *)0x0) {
    lVar18 = *plVar14;
    if ((ulong)*(ushort *)(lVar18 + 0x12e) != 0) {
      lVar19 = 0;
      do {
        if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar19) == TypeInfo_IDisposable) {
          puVar15 = (undefined8 *)
                    (lVar18 + (long)*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
          goto label_0429ef6d;
        }
        lVar19 = lVar19 + 0x10;
      } while ((ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar19);
    }
    puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_IDisposable,0);
label_0429ef6d:
    (*(code *)*puVar15)(plVar14,puVar15[1]);
  }
  if (lVar17 == 0) {
    _Unwind_Resume(uVar16);
  }
  uVar16 = il2cpp_runtime_helper_022fefe0(lVar17);
  goto label_0429eeff;
}


// Characters.AnimationHandler$$CrossFade
// il2cpp: void Characters_AnimationHandler__CrossFade (Characters_AnimationHandler_o* __this, System_String_o* name, float fade, float startTime, const MethodInfo* method);
// 0x429e720

void Characters_AnimationHandler__CrossFade
               (Characters_AnimationHandler_o *__this,System_String_o *name,float fade,float startTime,
               MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  UnityEngine_Animation_o *__this_00;
  UnityEngine_Animator_o *pUVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  Il2CppObject *b;
  char cVar6;
  bool_conflict bVar7;
  UnityEngine_AnimationState_o *pUVar8;
  System_String_o *stateName;
  VirtualInvokeData *pVVar9;
  System_String_o *pSVar10;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  MethodInfo *method_00;
  Il2CppRGCTXData *__this_05;
  UnityEngine_Animation_Fields __this_06;
  long lVar14;
  long lVar15;
  long lVar16;
  MethodInfo_310C3F0 **unaff_R12;
  System_Collections_IEnumerator_o *unaff_R13;
  int iVar17;
  float fVar18;
  undefined1 auVar19 [12];
  undefined4 in_stack_ffffffffffffff48;
  UnityEngine_AnimationState_o *in_stack_ffffffffffffff50;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar20;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_88;
  Il2CppRGCTXData *pIStack_70;
  float local_20;
  
  pSVar10 = name;
  if (g_data_057add24 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057add24 = '\x01';
  }
  if ((char)(__this->fields)._isLegacy == '\0') {
    pSVar10 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    bVar7 = System_String__op_Inequality((__this->fields)._currentAnimation,pSVar10,(MethodInfo *)0x0);
    local_20 = fade;
    if ((char)bVar7 != '\0') {
      pSVar10 = (__this->fields)._currentAnimation;
      local_20 = Characters_AnimationHandler__GetLength(__this,pSVar10,method_00);
      local_20 = fade / local_20;
    }
    __this_05 = (Il2CppRGCTXData *)(__this->fields)._animatorStateNames;
    if (__this_05 != (Il2CppRGCTXData *)0x0) {
      pUVar3 = (__this->fields).Animator;
      pSVar10 = name;
      stateName = (System_String_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_05,
                             (Il2CppObject *)name,MethodInfo_String_get_Item);
      if (pUVar3 != (UnityEngine_Animator_o *)0x0) {
        UnityEngine_Animator__CrossFade(pUVar3,stateName,local_20,0,startTime,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).Animator;
        pSVar10 = stateName;
        if (g_data_057add21 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
          g_data_057add21 = '\x01';
          pSVar10 = stateName;
        }
        __this_05 = (Il2CppRGCTXData *)(__this->fields)._animationSpeed;
        if ((__this_05 != (Il2CppRGCTXData *)0x0) &&
           (pSVar10 = name,
           fVar18 = System_Collections_Generic_Dictionary_object__float___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_05,
                               (Il2CppObject *)name,MethodInfo_Single_get_Item), pUVar3 != (UnityEngine_Animator_o *)0x0)) {
          UnityEngine_Animator__set_speed(pUVar3,fVar18,(MethodInfo *)0x0);
          goto label_0429e89b;
        }
      }
    }
  }
  else {
    __this_00 = (__this->fields).Animation;
    __this_05 = (Il2CppRGCTXData *)0x0;
    if (__this_00 != (UnityEngine_Animation_o *)0x0) {
      pSVar10 = name;
      UnityEngine_Animation__CrossFade(__this_00,name,fade,(MethodInfo *)0x0);
      if (0.0 < startTime) {
        __this_05 = (Il2CppRGCTXData *)(__this->fields).Animation;
        if ((__this_05 == (Il2CppRGCTXData *)0x0) ||
           (pSVar10 = name,
           pUVar8 = UnityEngine_Animation__get_Item
                              ((UnityEngine_Animation_o *)__this_05,name,(MethodInfo *)0x0),
           pUVar8 == (UnityEngine_AnimationState_o *)0x0)) goto label_0429e8c1;
        UnityEngine_AnimationState__set_normalizedTime(pUVar8,startTime,(MethodInfo *)0x0);
      }
label_0429e89b:
      (__this->fields)._currentAnimation = name;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._currentAnimation,name);
      fVar18 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this->fields)._currentAnimationStartTime = fVar18;
      return;
    }
  }
label_0429e8c1:
  fVar18 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057add25 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057add25 = '\x01';
  }
  __this_06.m_CachedPtr = 0;
  if (__this_05[5].method != (MethodInfo *)0x0) {
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_05[5].method,
               (Il2CppObject *)pSVar10,fVar18,MethodInfo_Void_set_Item);
    if (*(char *)((long)__this_05 + 0x3c) == '\0') {
      bVar7 = System_String__op_Equality((System_String_o *)__this_05[6].method,pSVar10,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      __this_06.m_CachedPtr = 0;
      if (__this_05[3].method != (MethodInfo *)0x0) {
        UnityEngine_Animator__set_speed
                  ((UnityEngine_Animator_o *)__this_05[3].method,fVar18,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_06.m_CachedPtr = (intptr_t)__this_05[2].method;
      if ((__this_06.m_CachedPtr != 0) &&
         (pUVar8 = UnityEngine_Animation__get_Item
                             ((UnityEngine_Animation_o *)__this_06.m_CachedPtr,pSVar10,(MethodInfo *)0x0),
         pUVar8 != (UnityEngine_AnimationState_o *)0x0)) {
        UnityEngine_AnimationState__set_speed(pUVar8,fVar18,(MethodInfo *)0x0);
        return;
      }
    }
  }
  fVar18 = (float)il2cpp_runtime_helper_022b2c90();
  pIStack_70 = __this_05;
  if (g_data_057add26 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    g_data_057add26 = '\x01';
  }
  if (*(char *)(__this_06.m_CachedPtr + 0x3c) == '\0') goto label_0429ec78;
  if (*(UnityEngine_Animation_o **)(__this_06.m_CachedPtr + 0x10) == (UnityEngine_Animation_o *)0x0)
  goto label_0429ed79;
  unaff_R13 = UnityEngine_Animation__GetEnumerator
                        (*(UnityEngine_Animation_o **)(__this_06.m_CachedPtr + 0x10),(MethodInfo *)0x0);
  if (unaff_R13 == (System_Collections_IEnumerator_o *)0x0) goto label_0429ed7e;
  pUVar8 = (UnityEngine_AnimationState_o *)0x0;
  do {
    pSVar4 = unaff_R13->klass;
    uVar1._0_1_ = (pSVar4->_2).rank;
    uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar14) == TypeInfo_IEnumerator) {
          pVVar9 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar14);
          goto label_0429eaf3;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar14);
    }
    pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_0429eaf3:
    cVar6 = (*pVVar9->methodPtr)(unaff_R13,pVVar9->method);
    if (cVar6 == '\0') {
      iVar17 = 5;
      unaff_R12 = (MethodInfo_310C3F0 **)pUVar8;
      goto label_0429ebe7;
    }
    pSVar4 = unaff_R13->klass;
    uVar2._0_1_ = (pSVar4->_2).rank;
    uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar14) == TypeInfo_IEnumerator) {
          pVVar9 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar14) + 1);
          goto label_0429eb78;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar14);
    }
    pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,1);
label_0429eb78:
    unaff_R12 = (MethodInfo_310C3F0 **)(*pVVar9->methodPtr)(unaff_R13,pVVar9->method);
    if ((UnityEngine_AnimationState_o *)unaff_R12 == (UnityEngine_AnimationState_o *)0x0) {
label_0429ed65:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6a:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6f:
      il2cpp_runtime_helper_022b2c90();
      do {
        il2cpp_runtime_helper_022b2c90();
label_0429ed79:
        do {
          il2cpp_runtime_helper_022b2c90();
label_0429ed7e:
          il2cpp_runtime_helper_022b2c90();
          do {
            auVar19 = il2cpp_runtime_helper_022fefe0(unaff_R12);
            uVar13 = auVar19._0_8_;
            iVar17 = 0;
            if (auVar19._8_4_ != 1) {
              lVar14 = 0;
              goto label_0429eeff;
            }
            puVar12 = (undefined8 *)__cxa_begin_catch(uVar13);
            unaff_R12 = (MethodInfo_310C3F0 **)*puVar12;
            __cxa_end_catch();
label_0429ebe7:
            plVar11 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
            in_stack_ffffffffffffff50 = (UnityEngine_AnimationState_o *)unaff_R12;
            if (plVar11 != (long *)0x0) {
              lVar14 = *plVar11;
              if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
                lVar15 = 0;
                do {
                  if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
                    puVar12 = (undefined8 *)
                              (lVar14 + (long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
                    goto label_0429ec5d;
                  }
                  lVar15 = lVar15 + 0x10;
                } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
              }
              puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_0429ec5d:
              (*(code *)*puVar12)(plVar11,puVar12[1]);
            }
          } while ((UnityEngine_AnimationState_o *)unaff_R12 != (UnityEngine_AnimationState_o *)0x0);
          if (iVar17 != 0) {
            return;
          }
label_0429ec78:
        } while ((*(System_Collections_Generic_Dictionary_TKey__TValue__o **)(__this_06.m_CachedPtr + 0x28) ==
                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
                (__this_04 = System_Collections_Generic_Dictionary_object__float___get_Keys
                                       (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                                         (__this_06.m_CachedPtr + 0x28),MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys),
                __this_04 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0));
        System_Collections_Generic_Dictionary_KeyCollection_object__float___GetEnumerator
                  (&SStack_88,__this_04,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
        b = SStack_88.fields._currentKey;
        unaff_R12 = &MethodInfo_Void_set_Item;
        pSVar20 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                  SStack_88.fields._dictionary;
        while( true ) {
          do {
            __this_02.fields._dictionary._4_4_ = fVar18;
            __this_02.fields._dictionary._0_4_ = in_stack_ffffffffffffff48;
            __this_02.fields._8_8_ = in_stack_ffffffffffffff50;
            __this_02.fields._currentKey = (Il2CppObject *)pSVar20;
            bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___MoveNext
                              (__this_02,(MethodInfo_3252C30 *)&stack0xffffffffffffff58);
            if ((char)bVar7 == '\0') {
              __this_03.fields._dictionary._4_4_ = fVar18;
              __this_03.fields._dictionary._0_4_ = in_stack_ffffffffffffff48;
              __this_03.fields._8_8_ = in_stack_ffffffffffffff50;
              __this_03.fields._currentKey = (Il2CppObject *)pSVar20;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___Dispose
                        (__this_03,(MethodInfo_3252C20 *)&stack0xffffffffffffff58);
              return;
            }
            if (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)(__this_06.m_CachedPtr + 0x28) ==
                (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0429ed6f;
            System_Collections_Generic_Dictionary_object__float___set_Item
                      (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                        (__this_06.m_CachedPtr + 0x28),b,fVar18,MethodInfo_Void_set_Item);
            bVar7 = System_String__op_Equality
                              (*(System_String_o **)(__this_06.m_CachedPtr + 0x30),(System_String_o *)b,
                               (MethodInfo *)0x0);
          } while ((char)bVar7 == '\0');
          if (*(UnityEngine_Animator_o **)(__this_06.m_CachedPtr + 0x18) == (UnityEngine_Animator_o *)0x0)
          break;
          UnityEngine_Animator__set_speed
                    (*(UnityEngine_Animator_o **)(__this_06.m_CachedPtr + 0x18),fVar18,(MethodInfo *)0x0);
        }
      } while( true );
    }
    if (((UnityEngine_AnimationState_o *)unaff_R12)->klass != TypeInfo_AnimationState) {
      il2cpp_runtime_helper_022b2fd0(unaff_R12);
      goto label_0429ed65;
    }
    __this_01 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(__this_06.m_CachedPtr + 0x28);
    pSVar10 = UnityEngine_AnimationState__get_name
                        ((UnityEngine_AnimationState_o *)unaff_R12,(MethodInfo *)0x0);
    if (__this_01 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0429ed6a;
    System_Collections_Generic_Dictionary_object__float___set_Item
              (__this_01,(Il2CppObject *)pSVar10,fVar18,MethodInfo_Void_set_Item);
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)unaff_R12,fVar18,(MethodInfo *)0x0);
  } while( true );
label_0429eeff:
  plVar11 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
  if (plVar11 != (long *)0x0) {
    lVar15 = *plVar11;
    if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
      lVar16 = 0;
      do {
        if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_IDisposable) {
          puVar12 = (undefined8 *)
                    (lVar15 + (long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) * 0x10 + 0x138);
          goto label_0429ef6d;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_0429ef6d:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  if (lVar14 == 0) {
    _Unwind_Resume(uVar13);
  }
  uVar13 = il2cpp_runtime_helper_022fefe0(lVar14);
  goto label_0429eeff;
}


// Characters.AnimationHandler$$SetSpeed
// il2cpp: void Characters_AnimationHandler__SetSpeed (Characters_AnimationHandler_o* __this, System_String_o* name, float speed, const MethodInfo* method);
// 0x429e8d0

void Characters_AnimationHandler__SetSpeed
               (Characters_AnimationHandler_o *__this,System_String_o *name,float speed,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  UnityEngine_Animator_o *__this_01;
  UnityEngine_Animation_o *__this_02;
  System_Collections_IEnumerator_c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar5;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  Il2CppObject *b;
  char cVar6;
  bool_conflict bVar7;
  UnityEngine_AnimationState_o *pUVar8;
  VirtualInvokeData *pVVar9;
  System_String_o *key;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_05;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  UnityEngine_Animation_o *__this_06;
  long lVar13;
  long lVar14;
  long lVar15;
  MethodInfo_310C3F0 **unaff_R12;
  System_Collections_IEnumerator_o *unaff_R13;
  int iVar16;
  float value;
  undefined1 auVar17 [12];
  undefined4 in_stack_ffffffffffffff70;
  UnityEngine_AnimationState_o *in_stack_ffffffffffffff78;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar18;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_60;
  Il2CppRGCTXData *pIStack_48;
  
  if (g_data_057add25 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057add25 = '\x01';
  }
  __this_00 = (__this->fields)._animationSpeed;
  __this_06 = (UnityEngine_Animation_o *)0x0;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)name,speed,
               MethodInfo_Void_set_Item);
    if ((char)(__this->fields)._isLegacy == '\0') {
      bVar7 = System_String__op_Equality((__this->fields)._currentAnimation,name,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      __this_01 = (__this->fields).Animator;
      __this_06 = (UnityEngine_Animation_o *)0x0;
      if (__this_01 != (UnityEngine_Animator_o *)0x0) {
        UnityEngine_Animator__set_speed(__this_01,speed,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_06 = (__this->fields).Animation;
      if ((__this_06 != (UnityEngine_Animation_o *)0x0) &&
         (pUVar8 = UnityEngine_Animation__get_Item(__this_06,name,(MethodInfo *)0x0),
         pUVar8 != (UnityEngine_AnimationState_o *)0x0)) {
        UnityEngine_AnimationState__set_speed(pUVar8,speed,(MethodInfo *)0x0);
        return;
      }
    }
  }
  value = (float)il2cpp_runtime_helper_022b2c90();
  pIStack_48 = (Il2CppRGCTXData *)__this;
  if (g_data_057add26 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    g_data_057add26 = '\x01';
  }
  if (*(char *)((long)&__this_06[2].monitor + 4) == '\0') goto label_0429ec78;
  __this_02 = (UnityEngine_Animation_o *)(__this_06->fields).m_CachedPtr;
  if (__this_02 == (UnityEngine_Animation_o *)0x0) goto label_0429ed79;
  unaff_R13 = UnityEngine_Animation__GetEnumerator(__this_02,(MethodInfo *)0x0);
  if (unaff_R13 == (System_Collections_IEnumerator_o *)0x0) goto label_0429ed7e;
  pUVar8 = (UnityEngine_AnimationState_o *)0x0;
  do {
    pSVar3 = unaff_R13->klass;
    uVar1._0_1_ = (pSVar3->_2).rank;
    uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar13) == TypeInfo_IEnumerator) {
          pVVar9 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar13);
          goto label_0429eaf3;
        }
        lVar13 = lVar13 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar13);
    }
    pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_0429eaf3:
    cVar6 = (*pVVar9->methodPtr)(unaff_R13,pVVar9->method);
    if (cVar6 == '\0') {
      iVar16 = 5;
      unaff_R12 = (MethodInfo_310C3F0 **)pUVar8;
      goto label_0429ebe7;
    }
    pSVar3 = unaff_R13->klass;
    uVar2._0_1_ = (pSVar3->_2).rank;
    uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar13) == TypeInfo_IEnumerator) {
          pVVar9 = pSVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar13) + 1);
          goto label_0429eb78;
        }
        lVar13 = lVar13 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar13);
    }
    pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,1);
label_0429eb78:
    unaff_R12 = (MethodInfo_310C3F0 **)(*pVVar9->methodPtr)(unaff_R13,pVVar9->method);
    if ((UnityEngine_AnimationState_o *)unaff_R12 == (UnityEngine_AnimationState_o *)0x0) {
label_0429ed65:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6a:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6f:
      il2cpp_runtime_helper_022b2c90();
      do {
        il2cpp_runtime_helper_022b2c90();
label_0429ed79:
        do {
          il2cpp_runtime_helper_022b2c90();
label_0429ed7e:
          il2cpp_runtime_helper_022b2c90();
          do {
            auVar17 = il2cpp_runtime_helper_022fefe0(unaff_R12);
            uVar12 = auVar17._0_8_;
            iVar16 = 0;
            if (auVar17._8_4_ != 1) {
              lVar13 = 0;
              goto label_0429eeff;
            }
            puVar11 = (undefined8 *)__cxa_begin_catch(uVar12);
            unaff_R12 = (MethodInfo_310C3F0 **)*puVar11;
            __cxa_end_catch();
label_0429ebe7:
            plVar10 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
            in_stack_ffffffffffffff78 = (UnityEngine_AnimationState_o *)unaff_R12;
            if (plVar10 != (long *)0x0) {
              lVar13 = *plVar10;
              if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
                lVar14 = 0;
                do {
                  if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
                    puVar11 = (undefined8 *)
                              (lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
                    goto label_0429ec5d;
                  }
                  lVar14 = lVar14 + 0x10;
                } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
              }
              puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_IDisposable,0);
label_0429ec5d:
              (*(code *)*puVar11)(plVar10,puVar11[1]);
            }
          } while ((UnityEngine_AnimationState_o *)unaff_R12 != (UnityEngine_AnimationState_o *)0x0);
          if (iVar16 != 0) {
            return;
          }
label_0429ec78:
          pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06[1].fields.m_CachedPtr;
        } while ((pSVar5 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
                (__this_05 = System_Collections_Generic_Dictionary_object__float___get_Keys
                                       (pSVar5,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys),
                __this_05 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0));
        System_Collections_Generic_Dictionary_KeyCollection_object__float___GetEnumerator
                  (&local_60,__this_05,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
        b = local_60.fields._currentKey;
        unaff_R12 = &MethodInfo_Void_set_Item;
        pSVar18 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                  local_60.fields._dictionary;
        while( true ) {
          do {
            __this_03.fields._dictionary._4_4_ = value;
            __this_03.fields._dictionary._0_4_ = in_stack_ffffffffffffff70;
            __this_03.fields._8_8_ = in_stack_ffffffffffffff78;
            __this_03.fields._currentKey = (Il2CppObject *)pSVar18;
            bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___MoveNext
                              (__this_03,(MethodInfo_3252C30 *)&stack0xffffffffffffff80);
            if ((char)bVar7 == '\0') {
              __this_04.fields._dictionary._4_4_ = value;
              __this_04.fields._dictionary._0_4_ = in_stack_ffffffffffffff70;
              __this_04.fields._8_8_ = in_stack_ffffffffffffff78;
              __this_04.fields._currentKey = (Il2CppObject *)pSVar18;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___Dispose
                        (__this_04,(MethodInfo_3252C20 *)&stack0xffffffffffffff80);
              return;
            }
            pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06[1].fields.m_CachedPtr;
            if (pSVar5 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0429ed6f;
            System_Collections_Generic_Dictionary_object__float___set_Item(pSVar5,b,value,MethodInfo_Void_set_Item);
            bVar7 = System_String__op_Equality
                              ((System_String_o *)__this_06[2].klass,(System_String_o *)b,(MethodInfo *)0x0);
          } while ((char)bVar7 == '\0');
          if (__this_06[1].klass == (UnityEngine_Animation_c *)0x0) break;
          UnityEngine_Animator__set_speed
                    ((UnityEngine_Animator_o *)__this_06[1].klass,value,(MethodInfo *)0x0);
        }
      } while( true );
    }
    if (((UnityEngine_AnimationState_o *)unaff_R12)->klass != TypeInfo_AnimationState) {
      il2cpp_runtime_helper_022b2fd0(unaff_R12);
      goto label_0429ed65;
    }
    pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06[1].fields.m_CachedPtr;
    key = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)unaff_R12,(MethodInfo *)0x0);
    if (pSVar5 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0429ed6a;
    System_Collections_Generic_Dictionary_object__float___set_Item
              (pSVar5,(Il2CppObject *)key,value,MethodInfo_Void_set_Item);
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)unaff_R12,value,(MethodInfo *)0x0);
  } while( true );
label_0429eeff:
  plVar10 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
  if (plVar10 != (long *)0x0) {
    lVar14 = *plVar10;
    if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
          puVar11 = (undefined8 *)
                    (lVar14 + (long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
          goto label_0429ef6d;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_IDisposable,0);
label_0429ef6d:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  if (lVar13 == 0) {
    _Unwind_Resume(uVar12);
  }
  uVar12 = il2cpp_runtime_helper_022fefe0(lVar13);
  goto label_0429eeff;
}


// Characters.AnimationHandler$$SetSpeedAll
// il2cpp: void Characters_AnimationHandler__SetSpeedAll (Characters_AnimationHandler_o* __this, float speed, const MethodInfo* method);
// 0x429e9a0

void Characters_AnimationHandler__SetSpeedAll
               (Characters_AnimationHandler_o *__this,float speed,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  UnityEngine_Animation_o *__this_00;
  System_Collections_IEnumerator_c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Collections_Generic_Dictionary_string__float__o *pSVar5;
  UnityEngine_Animator_o *__this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  Il2CppObject *b;
  char cVar6;
  bool_conflict bVar7;
  VirtualInvokeData *pVVar8;
  System_String_o *key;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  MethodInfo_310C3F0 **unaff_R12;
  System_Collections_IEnumerator_o *unaff_R13;
  int iVar15;
  undefined1 auVar16 [12];
  undefined4 in_stack_ffffffffffffff88;
  UnityEngine_AnimationState_o *in_stack_ffffffffffffff90;
  UnityEngine_AnimationState_o *pUVar17;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar18;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_48;
  
  if (g_data_057add26 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationState);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    g_data_057add26 = '\x01';
  }
  if ((char)(__this->fields)._isLegacy == '\0') goto label_0429ec78;
  __this_00 = (__this->fields).Animation;
  if (__this_00 == (UnityEngine_Animation_o *)0x0) goto label_0429ed79;
  unaff_R13 = UnityEngine_Animation__GetEnumerator(__this_00,(MethodInfo *)0x0);
  if (unaff_R13 == (System_Collections_IEnumerator_o *)0x0) goto label_0429ed7e;
  pUVar17 = (UnityEngine_AnimationState_o *)0x0;
  do {
    pSVar3 = unaff_R13->klass;
    uVar1._0_1_ = (pSVar3->_2).rank;
    uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_IEnumerator) {
          pVVar8 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar12);
          goto label_0429eaf3;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar12);
    }
    pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_0429eaf3:
    cVar6 = (*pVVar8->methodPtr)(unaff_R13,pVVar8->method);
    if (cVar6 == '\0') {
      iVar15 = 5;
      unaff_R12 = (MethodInfo_310C3F0 **)pUVar17;
      goto label_0429ebe7;
    }
    pSVar3 = unaff_R13->klass;
    uVar2._0_1_ = (pSVar3->_2).rank;
    uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_IEnumerator) {
          pVVar8 = pSVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar12) + 1);
          goto label_0429eb78;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar12);
    }
    pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,1);
label_0429eb78:
    unaff_R12 = (MethodInfo_310C3F0 **)(*pVVar8->methodPtr)(unaff_R13,pVVar8->method);
    if ((UnityEngine_AnimationState_o *)unaff_R12 == (UnityEngine_AnimationState_o *)0x0) {
label_0429ed65:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6a:
      il2cpp_runtime_helper_022b2c90();
label_0429ed6f:
      il2cpp_runtime_helper_022b2c90();
      do {
        il2cpp_runtime_helper_022b2c90();
label_0429ed79:
        do {
          il2cpp_runtime_helper_022b2c90();
label_0429ed7e:
          il2cpp_runtime_helper_022b2c90();
          do {
            auVar16 = il2cpp_runtime_helper_022fefe0(unaff_R12);
            uVar11 = auVar16._0_8_;
            iVar15 = 0;
            if (auVar16._8_4_ != 1) {
              lVar12 = 0;
              goto label_0429eeff;
            }
            puVar10 = (undefined8 *)__cxa_begin_catch(uVar11);
            unaff_R12 = (MethodInfo_310C3F0 **)*puVar10;
            __cxa_end_catch();
label_0429ebe7:
            plVar9 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
            in_stack_ffffffffffffff90 = (UnityEngine_AnimationState_o *)unaff_R12;
            if (plVar9 != (long *)0x0) {
              lVar12 = *plVar9;
              if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
                lVar13 = 0;
                do {
                  if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
                    puVar10 = (undefined8 *)
                              (lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 + 0x138);
                    goto label_0429ec5d;
                  }
                  lVar13 = lVar13 + 0x10;
                } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13);
              }
              puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IDisposable,0);
label_0429ec5d:
              (*(code *)*puVar10)(plVar9,puVar10[1]);
            }
          } while ((UnityEngine_AnimationState_o *)unaff_R12 != (UnityEngine_AnimationState_o *)0x0);
          if (iVar15 != 0) {
            return;
          }
label_0429ec78:
          pSVar5 = (__this->fields)._animationSpeed;
        } while ((pSVar5 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) ||
                (__this_04 = System_Collections_Generic_Dictionary_object__float___get_Keys
                                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                                        MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys),
                __this_04 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0));
        System_Collections_Generic_Dictionary_KeyCollection_object__float___GetEnumerator
                  (&SStack_48,__this_04,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
        b = SStack_48.fields._currentKey;
        unaff_R12 = &MethodInfo_Void_set_Item;
        pSVar18 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                  SStack_48.fields._dictionary;
        while( true ) {
          do {
            __this_02.fields._dictionary._4_4_ = speed;
            __this_02.fields._dictionary._0_4_ = in_stack_ffffffffffffff88;
            __this_02.fields._8_8_ = in_stack_ffffffffffffff90;
            __this_02.fields._currentKey = (Il2CppObject *)pSVar18;
            bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___MoveNext
                              (__this_02,(MethodInfo_3252C30 *)&stack0xffffffffffffff98);
            if ((char)bVar7 == '\0') {
              __this_03.fields._dictionary._4_4_ = speed;
              __this_03.fields._dictionary._0_4_ = in_stack_ffffffffffffff88;
              __this_03.fields._8_8_ = in_stack_ffffffffffffff90;
              __this_03.fields._currentKey = (Il2CppObject *)pSVar18;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___Dispose
                        (__this_03,(MethodInfo_3252C20 *)&stack0xffffffffffffff98);
              return;
            }
            pSVar5 = (__this->fields)._animationSpeed;
            if (pSVar5 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_0429ed6f;
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,b,speed,MethodInfo_Void_set_Item);
            bVar7 = System_String__op_Equality
                              ((__this->fields)._currentAnimation,(System_String_o *)b,(MethodInfo *)0x0);
          } while ((char)bVar7 == '\0');
          __this_01 = (__this->fields).Animator;
          if (__this_01 == (UnityEngine_Animator_o *)0x0) break;
          UnityEngine_Animator__set_speed(__this_01,speed,(MethodInfo *)0x0);
        }
      } while( true );
    }
    if (((UnityEngine_AnimationState_o *)unaff_R12)->klass != TypeInfo_AnimationState) {
      il2cpp_runtime_helper_022b2fd0(unaff_R12);
      goto label_0429ed65;
    }
    pSVar5 = (__this->fields)._animationSpeed;
    key = UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)unaff_R12,(MethodInfo *)0x0);
    if (pSVar5 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_0429ed6a;
    System_Collections_Generic_Dictionary_object__float___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,(Il2CppObject *)key,speed,
               MethodInfo_Void_set_Item);
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)unaff_R12,speed,(MethodInfo *)0x0);
  } while( true );
label_0429eeff:
  plVar9 = (long *)il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_IDisposable);
  if (plVar9 != (long *)0x0) {
    lVar13 = *plVar9;
    if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
          puVar10 = (undefined8 *)
                    (lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
          goto label_0429ef6d;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IDisposable,0);
label_0429ef6d:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  if (lVar12 == 0) {
    _Unwind_Resume(uVar11);
  }
  uVar11 = il2cpp_runtime_helper_022fefe0(lVar12);
  goto label_0429eeff;
}


// Characters.AnimationHandler$$SetCullingType
// il2cpp: void Characters_AnimationHandler__SetCullingType (Characters_AnimationHandler_o* __this, bool alwaysAnimate, const MethodInfo* method);
// 0x429efa0

void Characters_AnimationHandler__SetCullingType
               (Characters_AnimationHandler_o *__this,bool_conflict alwaysAnimate,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_Animator_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int32_t quality;
  Characters_AnimationHandler_o *__this_02;
  float fVar1;
  
  if ((char)(__this->fields)._isLegacy == '\0') {
    __this_01 = (__this->fields).Animator;
    if (__this_01 != (UnityEngine_Animator_o *)0x0) {
      if ((char)alwaysAnimate != '\0') {
        UnityEngine_Animator__set_cullingMode(__this_01,0,(MethodInfo *)0x0);
        return;
      }
      UnityEngine_Animator__set_cullingMode(__this_01,2,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (UnityEngine_Animation_o *)0x0) {
      if ((char)alwaysAnimate != '\0') {
        UnityEngine_Animation__set_cullingType(__this_00,0,(MethodInfo *)0x0);
        return;
      }
      UnityEngine_Animation__set_cullingType(__this_00,1,(MethodInfo *)0x0);
      return;
    }
  }
  __this_02 = (Characters_AnimationHandler_o *)0x0;
  fVar1 = (float)il2cpp_runtime_helper_022b2c90();
  quality = 1;
  if (fVar1 <= 1000.0) {
    quality = (fVar1 <= 500.0) + 2 + (uint)(fVar1 <= 500.0);
  }
  Characters_AnimationHandler__SetQuality(__this_02,quality,method_00);
  Characters_AnimationHandler__SetShadows(__this_02,(uint)(fVar1 < 1000.0),method_01);
  return;
}


// Characters.AnimationHandler$$OnDistanceUpdate
// il2cpp: void Characters_AnimationHandler__OnDistanceUpdate (Characters_AnimationHandler_o* __this, float distance, const MethodInfo* method);
// 0x429f000

void Characters_AnimationHandler__OnDistanceUpdate
               (Characters_AnimationHandler_o *__this,float distance,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  int32_t quality;
  
  quality = 1;
  if (distance <= 1000.0) {
    quality = (distance <= 500.0) + 2 + (uint)(distance <= 500.0);
  }
  Characters_AnimationHandler__SetQuality(__this,quality,in_RDX);
  Characters_AnimationHandler__SetShadows(__this,(uint)(distance < 1000.0),method_00);
  return;
}


// Characters.AnimationHandler$$SetQuality
// il2cpp: void Characters_AnimationHandler__SetQuality (Characters_AnimationHandler_o* __this, int32_t quality, const MethodInfo* method);
// 0x429f060

void Characters_AnimationHandler__SetQuality
               (Characters_AnimationHandler_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_SkinnedMeshRenderer_o *pUVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  uint uVar5;
  long lVar6;
  
  if (g_data_057add27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add27 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).Renderer;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar5 = 0;
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pUVar2 = (__this->fields).Renderer;
  if (pUVar2 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
    uVar5 = 0;
    iVar4 = UnityEngine_SkinnedMeshRenderer__get_quality(pUVar2,(MethodInfo *)0x0);
    if (iVar4 == quality) {
      return;
    }
    pUVar2 = (__this->fields).Renderer;
    if (pUVar2 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
      UnityEngine_SkinnedMeshRenderer__set_quality(pUVar2,quality,(MethodInfo *)0x0);
      return;
    }
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add28 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add28 = '\x01';
  }
  pUVar1 = *(UnityEngine_Object_o **)(lVar6 + 0x20);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  if (*(UnityEngine_Renderer_o **)(lVar6 + 0x20) != (UnityEngine_Renderer_o *)0x0) {
    bVar3 = UnityEngine_Renderer__get_receiveShadows
                      (*(UnityEngine_Renderer_o **)(lVar6 + 0x20),(MethodInfo *)0x0);
    if ((byte)((byte)bVar3 ^ (byte)uVar5) != 1) {
      return;
    }
    if (*(UnityEngine_Renderer_o **)(lVar6 + 0x20) != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_receiveShadows
                (*(UnityEngine_Renderer_o **)(lVar6 + 0x20),uVar5 & 0xff,(MethodInfo *)0x0);
      if (*(UnityEngine_Renderer_o **)(lVar6 + 0x20) != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__set_shadowCastingMode
                  (*(UnityEngine_Renderer_o **)(lVar6 + 0x20),(uint)((byte)uVar5 != 0),(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.AnimationHandler$$SetShadows
// il2cpp: void Characters_AnimationHandler__SetShadows (Characters_AnimationHandler_o* __this, bool shadows, const MethodInfo* method);
// 0x429f0f0

void Characters_AnimationHandler__SetShadows
               (Characters_AnimationHandler_o *__this,bool_conflict shadows,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Renderer_o *pUVar1;
  bool_conflict bVar2;
  
  if (g_data_057add28 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add28 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).Renderer;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  pUVar1 = (UnityEngine_Renderer_o *)(__this->fields).Renderer;
  if (pUVar1 != (UnityEngine_Renderer_o *)0x0) {
    bVar2 = UnityEngine_Renderer__get_receiveShadows(pUVar1,(MethodInfo *)0x0);
    if ((byte)((byte)bVar2 ^ (byte)shadows) != 1) {
      return;
    }
    pUVar1 = (UnityEngine_Renderer_o *)(__this->fields).Renderer;
    if (pUVar1 != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_receiveShadows(pUVar1,shadows & 0xff,(MethodInfo *)0x0);
      pUVar1 = (UnityEngine_Renderer_o *)(__this->fields).Renderer;
      if (pUVar1 != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__set_shadowCastingMode(pUVar1,(uint)((byte)shadows != 0),(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


