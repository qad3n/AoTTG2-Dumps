// Type: Characters.AnimationHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/AnimationHandler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/AnimationHandler.cs  [CHANGED since prior version]
// --------------------------------

// Characters.AnimationHandler$$.ctor
// il2cpp: void Characters_AnimationHandler___ctor (Characters_AnimationHandler_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x3f91210

/* WARNING: Removing unreachable block (ram,0x03f91679) */
/* WARNING: Removing unreachable block (ram,0x03f91840) */

void Characters_AnimationHandler___ctor
               (Characters_AnimationHandler_o *__this,UnityEngine_GameObject_o *owner,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o **ppSVar1;
  UnityEngine_Animator_o **ppUVar2;
  ushort uVar3;
  ushort uVar4;
  System_Collections_IEnumerator_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  UnityEngine_AnimationClip_o *__this_00;
  char cVar7;
  bool_conflict bVar8;
  uint uVar9;
  System_Collections_Generic_Dictionary_string__float__o *pSVar10;
  System_Collections_Generic_Dictionary_object__object__o *pSVar11;
  UnityEngine_Animation_o *pUVar12;
  UnityEngine_Animator_o *pUVar13;
  System_Collections_IEnumerator_o *pSVar14;
  VirtualInvokeData *pVVar15;
  UnityEngine_AnimationState_o *__this_01;
  System_String_o *pSVar16;
  long *plVar17;
  undefined8 *puVar18;
  UnityEngine_RuntimeAnimatorController_o *__this_02;
  UnityEngine_AnimationClip_array *pUVar19;
  System_String_o *pSVar20;
  UnityEngine_SkinnedMeshRenderer_o *pUVar21;
  MethodInfo *in_RCX;
  uint uVar22;
  long lVar23;
  long lVar24;
  float value;
  UnityEngine_Playables_PlayableGraph_o UVar25;
  intptr_t local_68;
  undefined8 uStack_60;
  UnityEngine_GameObject_o *local_58;
  Characters_AnimationHandler_o *local_50;
  System_Collections_Generic_Dictionary_string__string__o **local_48;
  System_Collections_Generic_Dictionary_string__AnimationClip__o **local_40;
  System_Collections_Generic_Dictionary_string__float__o **local_38;
  
  if (DAT_05703fb1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnimationState);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_Animation);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__AnimationClip);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__float);
    il2cpp_init_method_metadata(&MethodInfo_SkinnedMeshRenderer_GetComponentInChildren_Skinn);
    il2cpp_init_method_metadata(&MethodInfo_Animation_GetComponent_Animation);
    il2cpp_init_method_metadata(&MethodInfo_Animator_GetComponent_Animator);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703fb1 = '\x01';
  }
  local_68 = 0;
  uStack_60 = 0;
  pSVar10 = (System_Collections_Generic_Dictionary_string__float__o *)
            il2cpp_runtime_glue(TypeInfo_Dictionary_string__float);
  System_Collections_Generic_Dictionary<object__float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,MethodInfo_Dictionary_2_System_String_System_Single);
  ppSVar1 = &(__this->fields)._animationSpeed;
  (__this->fields)._animationSpeed = pSVar10;
  il2cpp_runtime_glue(ppSVar1,pSVar10);
  (__this->fields)._currentAnimation = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields)._currentAnimation);
  pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
            il2cpp_runtime_glue(TypeInfo_Dictionary_string__AnimationClip);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar11,MethodInfo_Dictionary_2_System_String_UnityEngine_Animation);
  local_40 = &(__this->fields)._animatorClips;
  (__this->fields)._animatorClips =
       (System_Collections_Generic_Dictionary_string__AnimationClip__o *)pSVar11;
  il2cpp_runtime_glue(local_40,pSVar11);
  pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
            il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar11,MethodInfo_Dictionary_2_System_String_System_String);
  local_48 = &(__this->fields)._animatorStateNames;
  (__this->fields)._animatorStateNames =
       (System_Collections_Generic_Dictionary_string__string__o *)pSVar11;
  il2cpp_runtime_glue();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (owner != (UnityEngine_GameObject_o *)0x0) {
    pUVar12 = (UnityEngine_Animation_o *)
              UnityEngine_GameObject__GetComponent<object>(owner,MethodInfo_Animation_GetComponent_Animation);
    (__this->fields).Animation = pUVar12;
    il2cpp_runtime_glue(&__this->fields,pUVar12);
    pUVar13 = (UnityEngine_Animator_o *)
              UnityEngine_GameObject__GetComponent<object>(owner,MethodInfo_Animator_GetComponent_Animator);
    ppUVar2 = &(__this->fields).Animator;
    (__this->fields).Animator = pUVar13;
    il2cpp_runtime_glue(ppUVar2);
    pUVar12 = (__this->fields).Animation;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    local_58 = owner;
    local_50 = __this;
    local_38 = ppSVar1;
    if ((char)bVar8 == '\0') {
      if (((*ppUVar2 != (UnityEngine_Animator_o *)0x0) &&
          (__this_02 = UnityEngine_Animator__get_runtimeAnimatorController
                                 (*ppUVar2,(MethodInfo *)0x0),
          __this_02 != (UnityEngine_RuntimeAnimatorController_o *)0x0)) &&
         (pUVar19 = UnityEngine_RuntimeAnimatorController__get_animationClips
                              (__this_02,(MethodInfo *)0x0),
         pUVar19 != (UnityEngine_AnimationClip_array *)0x0)) {
        uVar9 = (uint)pUVar19->max_length;
        if (0 < (int)uVar9) {
          uVar22 = 0;
          do {
            if (uVar9 <= uVar22) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            __this_00 = pUVar19->m_Items[(int)uVar22];
            if (__this_00 == (UnityEngine_AnimationClip_o *)0x0) goto LAB_03f9181f;
            pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)*local_48;
            pSVar16 = UnityEngine_Object__get_name
                                ((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
            pSVar20 = UnityEngine_Object__get_name
                                ((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
            if ((pSVar20 == (System_String_o *)0x0) ||
               (pSVar20 = System_String__Replace(pSVar20,0x2e,0x5f,(MethodInfo *)0x0),
               pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
            goto LAB_03f9181f;
            System_Collections_Generic_Dictionary<object__object>__set_Item
                      (pSVar11,(Il2CppObject *)pSVar16,(Il2CppObject *)pSVar20,MethodInfo_Void_set_Item);
            pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)*local_40;
            pSVar16 = UnityEngine_Object__get_name
                                ((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
            if (pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto LAB_03f9181f;
            in_RCX = MethodInfo_Void_set_Item;
            System_Collections_Generic_Dictionary<object__object>__set_Item
                      (pSVar11,(Il2CppObject *)pSVar16,(Il2CppObject *)__this_00,
                       (MethodInfo_308C840 *)MethodInfo_Void_set_Item);
            pSVar10 = *local_38;
            pSVar16 = UnityEngine_Object__get_name
                                ((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
            if (pSVar10 == (System_Collections_Generic_Dictionary_string__float__o *)0x0)
            goto LAB_03f9181f;
            System_Collections_Generic_Dictionary<object__float>__set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,
                       (Il2CppObject *)pSVar16,1.0,MethodInfo_Void_set_Item);
            uVar22 = uVar22 + 1;
            uVar9 = (uint)pUVar19->max_length;
          } while ((int)uVar22 < (int)uVar9);
        }
        if (*ppUVar2 != (UnityEngine_Animator_o *)0x0) {
          UVar25 = UnityEngine_Animator__get_playableGraph(*ppUVar2,(MethodInfo *)0x0);
          local_68 = UVar25.fields.m_Handle;
          uStack_60 = CONCAT44(uStack_60._4_4_,UVar25.fields.m_Version);
          UVar25.fields._8_8_ = 1;
          UVar25.fields.m_Handle = (intptr_t)&local_68;
          UnityEngine_Playables_PlayableGraph__SetTimeUpdateMode(UVar25,0,in_RCX);
          goto LAB_03f917e7;
        }
      }
    }
    else {
      *(undefined1 *)&(__this->fields)._isLegacy = 1;
      pUVar12 = (__this->fields).Animation;
      if (pUVar12 != (UnityEngine_Animation_o *)0x0) {
        pSVar14 = UnityEngine_Animation__GetEnumerator(pUVar12,(MethodInfo *)0x0);
        if (pSVar14 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        do {
          pSVar5 = pSVar14->klass;
          uVar3._0_1_ = (pSVar5->_2).rank;
          uVar3._1_1_ = (pSVar5->_2).minimumAlignment;
          if ((ulong)uVar3 != 0) {
            pIVar6 = (pSVar5->_1).interfaceOffsets;
            lVar23 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar23) == TypeInfo_IEnumerator) {
                pVVar15 = pSVar5->vtable + *(int *)((long)&pIVar6->offset + lVar23);
                goto LAB_03f914f3;
              }
              lVar23 = lVar23 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar23);
          }
          pVVar15 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar14,TypeInfo_IEnumerator,0);
LAB_03f914f3:
          cVar7 = (*pVVar15->methodPtr)(pSVar14,pVVar15->method);
          if (cVar7 == '\0') {
            plVar17 = (long *)il2cpp_runtime_glue();
            if (plVar17 == (long *)0x0) goto LAB_03f917e7;
            lVar23 = *plVar17;
            if ((ulong)*(ushort *)(lVar23 + 0x12e) == 0) goto LAB_03f9163f;
            lVar24 = 0;
            goto LAB_03f91630;
          }
          pSVar5 = pSVar14->klass;
          uVar4._0_1_ = (pSVar5->_2).rank;
          uVar4._1_1_ = (pSVar5->_2).minimumAlignment;
          if ((ulong)uVar4 != 0) {
            pIVar6 = (pSVar5->_1).interfaceOffsets;
            lVar23 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar23) == TypeInfo_IEnumerator) {
                pVVar15 = pSVar5->vtable + (*(int *)((long)&pIVar6->offset + lVar23) + 1);
                goto LAB_03f91578;
              }
              lVar23 = lVar23 + 0x10;
            } while ((ulong)uVar4 << 4 != lVar23);
          }
          pVVar15 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar14,TypeInfo_IEnumerator,1);
LAB_03f91578:
          __this_01 = (UnityEngine_AnimationState_o *)(*pVVar15->methodPtr)(pSVar14,pVVar15->method)
          ;
          if (__this_01 == (UnityEngine_AnimationState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (__this_01->klass != TypeInfo_AnimationState) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(__this_01);
          }
          pSVar10 = *ppSVar1;
          pSVar16 = UnityEngine_AnimationState__get_name(__this_01,(MethodInfo *)0x0);
          value = UnityEngine_AnimationState__get_speed(__this_01,(MethodInfo *)0x0);
          if (pSVar10 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__float>__set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,
                     (Il2CppObject *)pSVar16,value,MethodInfo_Void_set_Item);
        } while( true );
      }
    }
  }
LAB_03f9181f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
  while (lVar24 = lVar24 + 0x10, (ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar24) {
LAB_03f91630:
    if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar24) == TypeInfo_IDisposable) {
      puVar18 = (undefined8 *)
                (lVar23 + (long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar24) * 0x10 + 0x138);
      goto LAB_03f9165d;
    }
  }
LAB_03f9163f:
  puVar18 = (undefined8 *)il2cpp_runtime_glue(plVar17,TypeInfo_IDisposable,0);
LAB_03f9165d:
  (*(code *)*puVar18)(plVar17);
LAB_03f917e7:
  pUVar21 = (UnityEngine_SkinnedMeshRenderer_o *)
            UnityEngine_GameObject__GetComponentInChildren<object>(local_58,MethodInfo_SkinnedMeshRenderer_GetComponentInChildren_Skinn);
  (local_50->fields).Renderer = pUVar21;
  il2cpp_runtime_glue(&(local_50->fields).Renderer,pUVar21);
  return;
}


// Characters.AnimationHandler$$GetCurrentAnimation
// il2cpp: System_String_o* Characters_AnimationHandler__GetCurrentAnimation (Characters_AnimationHandler_o* __this, const MethodInfo* method);
// 0x3f91970

/* WARNING: Removing unreachable block (ram,0x03f91c28) */

System_String_o *
Characters_AnimationHandler__GetCurrentAnimation
          (Characters_AnimationHandler_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  UnityEngine_Animation_o *pUVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  UnityEngine_AnimationState_o *__this_00;
  System_String_o *pSVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  
  if (DAT_05703fb2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnimationState);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&"");
    DAT_05703fb2 = '\x01';
  }
  if ((char)(__this->fields)._isLegacy != '\0') {
    pUVar3 = (__this->fields).Animation;
    if (pUVar3 == (UnityEngine_Animation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar8 = UnityEngine_Animation__GetEnumerator(pUVar3,(MethodInfo *)0x0);
    if (pSVar8 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    do {
      pSVar4 = pSVar8->klass;
      uVar1._0_1_ = (pSVar4->_2).rank;
      uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar5 = (pSVar4->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IEnumerator) {
            pVVar9 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar13);
            goto LAB_03f91a63;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar13);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar8,TypeInfo_IEnumerator,0);
LAB_03f91a63:
      cVar6 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
      if (cVar6 == '\0') {
        iVar15 = 6;
        pSVar10 = (System_String_o *)0x0;
        goto LAB_03f91b5a;
      }
      pSVar4 = pSVar8->klass;
      uVar2._0_1_ = (pSVar4->_2).rank;
      uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar5 = (pSVar4->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IEnumerator) {
            pVVar9 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar13) + 1);
            goto LAB_03f91ae8;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar13);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar8,TypeInfo_IEnumerator,1);
LAB_03f91ae8:
      __this_00 = (UnityEngine_AnimationState_o *)(*pVVar9->methodPtr)(pSVar8,pVVar9->method);
      if (__this_00 == (UnityEngine_AnimationState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (__this_00->klass != TypeInfo_AnimationState) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_00);
      }
      pUVar3 = (__this->fields).Animation;
      pSVar10 = UnityEngine_AnimationState__get_name(__this_00,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Animation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar7 = UnityEngine_Animation__IsPlaying(pUVar3,pSVar10,(MethodInfo *)0x0);
    } while ((char)bVar7 == '\0');
    pSVar10 = UnityEngine_AnimationState__get_name(__this_00,(MethodInfo *)0x0);
    iVar15 = 5;
LAB_03f91b5a:
    plVar11 = (long *)il2cpp_runtime_glue(pSVar8,TypeInfo_IDisposable);
    if (plVar11 != (long *)0x0) {
      lVar13 = *plVar11;
      if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
            puVar12 = (undefined8 *)
                      (lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + 0x138
                      );
            goto LAB_03f91bcd;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
      }
      puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar11,TypeInfo_IDisposable,0);
LAB_03f91bcd:
      (*(code *)*puVar12)(plVar11,puVar12[1]);
    }
    if (iVar15 == 6) {
      return "";
    }
    if (iVar15 != 0) {
      return pSVar10;
    }
  }
  return (__this->fields)._currentAnimation;
}


// Characters.AnimationHandler$$GetLength
// il2cpp: float Characters_AnimationHandler__GetLength (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3f91d60

float Characters_AnimationHandler__GetLength
                (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  UnityEngine_AnimationState_o *__this_02;
  UnityEngine_AnimationClip_o *__this_03;
  float fVar1;
  
  if (DAT_05703fb3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AnimationClip_get_Item);
    DAT_05703fb3 = '\x01';
  }
  if ((char)(__this->fields)._isLegacy == '\0') {
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._animatorClips;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_03 = (UnityEngine_AnimationClip_o *)
                  System_Collections_Generic_Dictionary<object__object>__get_Item
                            (__this_01,(Il2CppObject *)name,MethodInfo_AnimationClip_get_Item);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AnimationHandler$$GetSpeed
// il2cpp: float Characters_AnimationHandler__GetSpeed (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3f91df0

float Characters_AnimationHandler__GetSpeed
                (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  float fVar1;
  
  if (DAT_05703fb4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    DAT_05703fb4 = '\x01';
  }
  __this_00 = (__this->fields)._animationSpeed;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    fVar1 = System_Collections_Generic_Dictionary<object__float>__get_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)name,MethodInfo_Single_get_Item);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AnimationHandler$$GetTotalTime
// il2cpp: float Characters_AnimationHandler__GetTotalTime (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3f91e40

float Characters_AnimationHandler__GetTotalTime
                (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  MethodInfo *extraout_RDX;
  float fVar1;
  float fVar2;
  
  if (DAT_05703fb5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    DAT_05703fb5 = '\x01';
    method = extraout_RDX;
  }
  fVar1 = Characters_AnimationHandler__GetLength(__this,name,method);
  __this_00 = (__this->fields)._animationSpeed;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    fVar2 = System_Collections_Generic_Dictionary<object__float>__get_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)name,MethodInfo_Single_get_Item);
    return fVar1 / fVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AnimationHandler$$GetNormalizedTime
// il2cpp: float Characters_AnimationHandler__GetNormalizedTime (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3f91eb0

float Characters_AnimationHandler__GetNormalizedTime
                (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_AnimationState_o *__this_01;
  undefined8 uVar1;
  System_Exception_o *__this_02;
  System_String_o *message;
  float fVar2;
  
  if ((char)(__this->fields)._isLegacy == '\0') {
    uVar1 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this_02 = (System_Exception_o *)il2cpp_runtime_glue(uVar1);
    message = (System_String_o *)il2cpp_init_method_metadata(&"GetNormalizedTime only available for legacy animations.");
    System_Exception___ctor(__this_02,message,(MethodInfo *)0x0);
    uVar1 = il2cpp_init_method_metadata(&MethodInfo_Single_GetNormalizedTime);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_02,uVar1);
  }
  __this_00 = (__this->fields).Animation;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
      fVar2 = UnityEngine_AnimationState__get_normalizedTime(__this_01,(MethodInfo *)0x0);
      return fVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AnimationHandler$$GetCurrentNormalizedTime
// il2cpp: float Characters_AnimationHandler__GetCurrentNormalizedTime (Characters_AnimationHandler_o* __this, const MethodInfo* method);
// 0x3f91f30

float Characters_AnimationHandler__GetCurrentNormalizedTime
                (Characters_AnimationHandler_o *__this,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  UnityEngine_AnimationState_o *__this_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((char)(__this->fields)._isLegacy == '\0') {
    fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    fVar1 = (__this->fields)._currentAnimationStartTime;
    name = (__this->fields)._currentAnimation;
    method_00 = extraout_RDX;
    if (DAT_05703fb5 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
      DAT_05703fb5 = '\x01';
      method_00 = extraout_RDX_00;
    }
    fVar3 = Characters_AnimationHandler__GetLength(__this,name,method_00);
    __this_01 = (__this->fields)._animationSpeed;
    if (__this_01 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      fVar4 = System_Collections_Generic_Dictionary<object__float>__get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                         (Il2CppObject *)name,MethodInfo_Single_get_Item);
      return (fVar2 - fVar1) / (fVar3 / fVar4);
    }
  }
  else {
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (UnityEngine_Animation_o *)0x0) {
      __this_02 = UnityEngine_Animation__get_Item
                            (__this_00,(__this->fields)._currentAnimation,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_AnimationState_o *)0x0) {
        fVar1 = UnityEngine_AnimationState__get_normalizedTime(__this_02,(MethodInfo *)0x0);
        return fVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AnimationHandler$$IsPlaying
// il2cpp: bool Characters_AnimationHandler__IsPlaying (Characters_AnimationHandler_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3f92000

bool_conflict
Characters_AnimationHandler__IsPlaying
          (Characters_AnimationHandler_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  bool_conflict bVar1;
  
  if ((char)(__this->fields)._isLegacy == '\0') {
    bVar1 = System_String__op_Equality((__this->fields)._currentAnimation,name,(MethodInfo *)0x0);
    return bVar1;
  }
  __this_00 = (__this->fields).Animation;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    bVar1 = UnityEngine_Animation__IsPlaying(__this_00,name,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AnimationHandler$$Play
// il2cpp: void Characters_AnimationHandler__Play (Characters_AnimationHandler_o* __this, System_String_o* name, float startTime, bool reset, const MethodInfo* method);
// 0x3f92030

void Characters_AnimationHandler__Play
               (Characters_AnimationHandler_o *__this,System_String_o *name,float startTime,
               bool_conflict reset,MethodInfo *method)

{
  UnityEngine_Animation_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_Animator_o *pUVar2;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  UnityEngine_AnimationState_o *__this_02;
  System_String_o *stateName;
  float fVar3;
  
  if (DAT_05703fb6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    DAT_05703fb6 = '\x01';
  }
  if ((char)(__this->fields)._isLegacy == '\0') {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._animatorStateNames;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar2 = (__this->fields).Animator;
      stateName = (System_String_o *)
                  System_Collections_Generic_Dictionary<object__object>__get_Item
                            (__this_00,(Il2CppObject *)name,MethodInfo_String_get_Item);
      if (pUVar2 != (UnityEngine_Animator_o *)0x0) {
        UnityEngine_Animator__Play(pUVar2,stateName,0,startTime,(MethodInfo *)0x0);
        pUVar2 = (__this->fields).Animator;
        if (DAT_05703fb4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
          DAT_05703fb4 = '\x01';
        }
        __this_01 = (__this->fields)._animationSpeed;
        if (__this_01 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
          fVar3 = System_Collections_Generic_Dictionary<object__float>__get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                             (Il2CppObject *)name,MethodInfo_Single_get_Item);
          if (pUVar2 != (UnityEngine_Animator_o *)0x0) {
            UnityEngine_Animator__set_speed(pUVar2,fVar3,(MethodInfo *)0x0);
            goto LAB_03f92156;
          }
        }
      }
    }
  }
  else {
    pUVar1 = (__this->fields).Animation;
    if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
      UnityEngine_Animation__Play(pUVar1,name,(MethodInfo *)0x0);
      if ((startTime <= 0.0) && ((char)reset == '\0')) {
LAB_03f92156:
        (__this->fields)._currentAnimation = name;
        il2cpp_runtime_glue(&(__this->fields)._currentAnimation,name);
        fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        (__this->fields)._currentAnimationStartTime = fVar3;
        return;
      }
      pUVar1 = (__this->fields).Animation;
      if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
        __this_02 = UnityEngine_Animation__get_Item(pUVar1,name,(MethodInfo *)0x0);
        if (__this_02 != (UnityEngine_AnimationState_o *)0x0) {
          UnityEngine_AnimationState__set_normalizedTime(__this_02,startTime,(MethodInfo *)0x0);
          goto LAB_03f92156;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AnimationHandler$$CrossFade
// il2cpp: void Characters_AnimationHandler__CrossFade (Characters_AnimationHandler_o* __this, System_String_o* name, float fade, float startTime, const MethodInfo* method);
// 0x3f92180

void Characters_AnimationHandler__CrossFade
               (Characters_AnimationHandler_o *__this,System_String_o *name,float fade,
               float startTime,MethodInfo *method)

{
  UnityEngine_Animation_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_Animator_o *pUVar2;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  bool_conflict bVar3;
  UnityEngine_AnimationState_o *__this_02;
  System_String_o *stateName;
  MethodInfo *method_00;
  float fVar4;
  float local_20;
  
  if (DAT_05703fb7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    DAT_05703fb7 = '\x01';
  }
  if ((char)(__this->fields)._isLegacy == '\0') {
    bVar3 = System_String__op_Inequality
                      ((__this->fields)._currentAnimation,
                       (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0);
    local_20 = fade;
    if ((char)bVar3 != '\0') {
      local_20 = Characters_AnimationHandler__GetLength
                           (__this,(__this->fields)._currentAnimation,method_00);
      local_20 = fade / local_20;
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._animatorStateNames;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar2 = (__this->fields).Animator;
      stateName = (System_String_o *)
                  System_Collections_Generic_Dictionary<object__object>__get_Item
                            (__this_00,(Il2CppObject *)name,MethodInfo_String_get_Item);
      if (pUVar2 != (UnityEngine_Animator_o *)0x0) {
        UnityEngine_Animator__CrossFade(pUVar2,stateName,local_20,0,startTime,(MethodInfo *)0x0);
        pUVar2 = (__this->fields).Animator;
        if (DAT_05703fb4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
          DAT_05703fb4 = '\x01';
        }
        __this_01 = (__this->fields)._animationSpeed;
        if (__this_01 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
          fVar4 = System_Collections_Generic_Dictionary<object__float>__get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                             (Il2CppObject *)name,MethodInfo_Single_get_Item);
          if (pUVar2 != (UnityEngine_Animator_o *)0x0) {
            UnityEngine_Animator__set_speed(pUVar2,fVar4,(MethodInfo *)0x0);
            goto LAB_03f922fb;
          }
        }
      }
    }
  }
  else {
    pUVar1 = (__this->fields).Animation;
    if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
      UnityEngine_Animation__CrossFade(pUVar1,name,fade,(MethodInfo *)0x0);
      if (startTime <= 0.0) {
LAB_03f922fb:
        (__this->fields)._currentAnimation = name;
        il2cpp_runtime_glue(&(__this->fields)._currentAnimation,name);
        fVar4 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        (__this->fields)._currentAnimationStartTime = fVar4;
        return;
      }
      pUVar1 = (__this->fields).Animation;
      if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
        __this_02 = UnityEngine_Animation__get_Item(pUVar1,name,(MethodInfo *)0x0);
        if (__this_02 != (UnityEngine_AnimationState_o *)0x0) {
          UnityEngine_AnimationState__set_normalizedTime(__this_02,startTime,(MethodInfo *)0x0);
          goto LAB_03f922fb;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AnimationHandler$$SetSpeed
// il2cpp: void Characters_AnimationHandler__SetSpeed (Characters_AnimationHandler_o* __this, System_String_o* name, float speed, const MethodInfo* method);
// 0x3f92330

void Characters_AnimationHandler__SetSpeed
               (Characters_AnimationHandler_o *__this,System_String_o *name,float speed,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  UnityEngine_Animation_o *__this_01;
  UnityEngine_Animator_o *__this_02;
  bool_conflict bVar1;
  UnityEngine_AnimationState_o *__this_03;
  
  if (DAT_05703fb8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_05703fb8 = '\x01';
  }
  __this_00 = (__this->fields)._animationSpeed;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    System_Collections_Generic_Dictionary<object__float>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (Il2CppObject *)name,speed,MethodInfo_Void_set_Item);
    if ((char)(__this->fields)._isLegacy == '\0') {
      bVar1 = System_String__op_Equality((__this->fields)._currentAnimation,name,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        return;
      }
      __this_02 = (__this->fields).Animator;
      if (__this_02 != (UnityEngine_Animator_o *)0x0) {
        UnityEngine_Animator__set_speed(__this_02,speed,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_01 = (__this->fields).Animation;
      if (__this_01 != (UnityEngine_Animation_o *)0x0) {
        __this_03 = UnityEngine_Animation__get_Item(__this_01,name,(MethodInfo *)0x0);
        if (__this_03 != (UnityEngine_AnimationState_o *)0x0) {
          UnityEngine_AnimationState__set_speed(__this_03,speed,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AnimationHandler$$SetSpeedAll
// il2cpp: void Characters_AnimationHandler__SetSpeedAll (Characters_AnimationHandler_o* __this, float speed, const MethodInfo* method);
// 0x3f92400

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
  char cVar6;
  bool_conflict bVar7;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  UnityEngine_AnimationState_o *__this_04;
  System_String_o *key;
  long *plVar10;
  undefined8 *puVar11;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_05;
  long lVar12;
  long lVar13;
  undefined4 in_stack_ffffffffffffff88;
  undefined8 in_stack_ffffffffffffff90;
  long lVar14;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar15;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (DAT_05703fb9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnimationState);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    DAT_05703fb9 = '\x01';
  }
  if ((char)(__this->fields)._isLegacy == '\0') {
    pSVar5 = (__this->fields)._animationSpeed;
    if ((pSVar5 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) &&
       (__this_05 = System_Collections_Generic_Dictionary<object__float>__get_Keys
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                               MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
       __this_05 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection<object__float>__GetEnumerator
                (&local_48,__this_05,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
      pSVar15 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                local_48.fields._dictionary;
      while( true ) {
        __this_02.fields._dictionary._4_4_ = speed;
        __this_02.fields._dictionary._0_4_ = in_stack_ffffffffffffff88;
        __this_02.fields._index = (int)in_stack_ffffffffffffff90;
        __this_02.fields._version = (int)((ulong)in_stack_ffffffffffffff90 >> 0x20);
        __this_02.fields._currentKey = (Il2CppObject *)pSVar15;
        bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__float>__MoveNext
                          (__this_02,(MethodInfo_31D1960 *)&stack0xffffffffffffff98);
        if ((char)bVar7 == '\0') {
          __this_03.fields._dictionary._4_4_ = speed;
          __this_03.fields._dictionary._0_4_ = in_stack_ffffffffffffff88;
          __this_03.fields._index = (int)in_stack_ffffffffffffff90;
          __this_03.fields._version = (int)((ulong)in_stack_ffffffffffffff90 >> 0x20);
          __this_03.fields._currentKey = (Il2CppObject *)pSVar15;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__float>__Dispose
                    (__this_03,(MethodInfo_31D1950 *)&stack0xffffffffffffff98);
          return;
        }
        pSVar5 = (__this->fields)._animationSpeed;
        if (pSVar5 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) break;
        System_Collections_Generic_Dictionary<object__float>__set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                   local_48.fields._currentKey,speed,MethodInfo_Void_set_Item);
        bVar7 = System_String__op_Equality
                          ((__this->fields)._currentAnimation,
                           (System_String_o *)local_48.fields._currentKey,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          __this_01 = (__this->fields).Animator;
          if (__this_01 == (UnityEngine_Animator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UnityEngine_Animator__set_speed(__this_01,speed,(MethodInfo *)0x0);
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (UnityEngine_Animation_o *)0x0) {
      pSVar8 = UnityEngine_Animation__GetEnumerator(__this_00,(MethodInfo *)0x0);
      if (pSVar8 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      lVar14 = 0;
      do {
        pSVar3 = pSVar8->klass;
        uVar1._0_1_ = (pSVar3->_2).rank;
        uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar4 = (pSVar3->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_IEnumerator) {
              pVVar9 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar12);
              goto LAB_03f92553;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar12);
        }
        pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar8,TypeInfo_IEnumerator,0);
LAB_03f92553:
        cVar6 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
        if (cVar6 == '\0') {
          plVar10 = (long *)il2cpp_runtime_glue(pSVar8,TypeInfo_IDisposable);
          if (plVar10 == (long *)0x0) goto LAB_03f926c6;
          lVar12 = *plVar10;
          if ((ulong)*(ushort *)(lVar12 + 0x12e) == 0) goto LAB_03f9269f;
          lVar13 = 0;
          goto LAB_03f92690;
        }
        pSVar3 = pSVar8->klass;
        uVar2._0_1_ = (pSVar3->_2).rank;
        uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pSVar3->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_IEnumerator) {
              pVVar9 = pSVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar12) + 1);
              goto LAB_03f925d8;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar12);
        }
        pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar8,TypeInfo_IEnumerator,1);
LAB_03f925d8:
        __this_04 = (UnityEngine_AnimationState_o *)(*pVVar9->methodPtr)(pSVar8,pVVar9->method);
        if (__this_04 == (UnityEngine_AnimationState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (__this_04->klass != TypeInfo_AnimationState) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_04);
        }
        pSVar5 = (__this->fields)._animationSpeed;
        key = UnityEngine_AnimationState__get_name(__this_04,(MethodInfo *)0x0);
        if (pSVar5 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_Dictionary<object__float>__set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                   (Il2CppObject *)key,speed,MethodInfo_Void_set_Item);
        UnityEngine_AnimationState__set_speed(__this_04,speed,(MethodInfo *)0x0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
  while (lVar13 = lVar13 + 0x10, (ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13) {
LAB_03f92690:
    if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
      puVar11 = (undefined8 *)
                (lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 + 0x138);
      goto LAB_03f926bd;
    }
  }
LAB_03f9269f:
  puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IDisposable,0);
LAB_03f926bd:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_03f926c6:
  if (lVar14 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_022c0ed0(lVar14);
}


// Characters.AnimationHandler$$SetCullingType
// il2cpp: void Characters_AnimationHandler__SetCullingType (Characters_AnimationHandler_o* __this, bool alwaysAnimate, const MethodInfo* method);
// 0x3f92a00

void Characters_AnimationHandler__SetCullingType
               (Characters_AnimationHandler_o *__this,bool_conflict alwaysAnimate,MethodInfo *method
               )

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_Animator_o *__this_01;
  
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AnimationHandler$$OnDistanceUpdate
// il2cpp: void Characters_AnimationHandler__OnDistanceUpdate (Characters_AnimationHandler_o* __this, float distance, const MethodInfo* method);
// 0x3f92a60

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
// 0x3f92ac0

void Characters_AnimationHandler__SetQuality
               (Characters_AnimationHandler_o *__this,int32_t quality,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_SkinnedMeshRenderer_o *pUVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  
  if (DAT_05703fba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703fba = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).Renderer;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  pUVar1 = (__this->fields).Renderer;
  if (pUVar1 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
    iVar3 = UnityEngine_SkinnedMeshRenderer__get_quality(pUVar1,(MethodInfo *)0x0);
    if (iVar3 == quality) {
      return;
    }
    pUVar1 = (__this->fields).Renderer;
    if (pUVar1 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
      UnityEngine_SkinnedMeshRenderer__set_quality(pUVar1,quality,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.AnimationHandler$$SetShadows
// il2cpp: void Characters_AnimationHandler__SetShadows (Characters_AnimationHandler_o* __this, bool shadows, const MethodInfo* method);
// 0x3f92b50

void Characters_AnimationHandler__SetShadows
               (Characters_AnimationHandler_o *__this,bool_conflict shadows,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Renderer_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_05703fbb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703fbb = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).Renderer;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
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
        UnityEngine_Renderer__set_shadowCastingMode
                  (pUVar1,(uint)((byte)shadows != 0),(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


