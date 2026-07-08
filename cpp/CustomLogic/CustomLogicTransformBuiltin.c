// Type: CustomLogic.CustomLogicTransformBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTransformBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicTransformBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicTransformBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicTransformBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e36500

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this;
  undefined1 local_14 [4];
  
  il2cpp_glue_01f2f1a0();
  pSVar1 = System_Int32__ToString((int32_t)local_14,(MethodInfo *)0x0);
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicTransformBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicTransformBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3e3aa40

void CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702e1a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702e1a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3e3aab0

void CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransform>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetTransform_b__18_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3aac0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding__GetTransform>b__18_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  bool_conflict bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *n;
  undefined1 auVar3 [16];
  
  if (DAT_05702e1b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e1b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    n = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      if (DAT_05702de0 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Object);
        DAT_05702de0 = '\x01';
      }
      pUVar2 = (__c->fields).Value;
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Transform__Find(pUVar2,n,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          auVar3 = il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
          CustomLogic_CustomLogicTransformBuiltin___ctor(auVar3._0_8_,pUVar2,auVar3._8_8_);
          return (Il2CppObject *)auVar3._0_8_;
        }
        return (Il2CppObject *)0x0;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransforms>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetTransforms_b__19_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3ab50

/* WARNING: Removing unreachable block (ram,0x03e35a0e) */

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding__GetTransforms>b__19_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar8;
  char cVar9;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  System_Collections_IEnumerator_o *pSVar10;
  VirtualInvokeData *pVVar11;
  UnityEngine_Transform_o *pUVar12;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_02;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  
  if (__c == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702de1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Transform);
    DAT_05702de1 = '\x01';
  }
  __this_01 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  pUVar12 = (__c->fields).Value;
  if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar10 = UnityEngine_Transform__GetEnumerator(pUVar12,(MethodInfo *)0x0);
  if (pSVar10 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    pSVar6 = pSVar10->klass;
    uVar3._0_1_ = (pSVar6->_2).rank;
    uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IEnumerator) {
          pVVar11 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar15);
          goto LAB_03e35813;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar15);
    }
    pVVar11 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar10,TypeInfo_IEnumerator,0);
LAB_03e35813:
    cVar9 = (*pVVar11->methodPtr)(pSVar10,pVVar11->method);
    if (cVar9 == '\0') {
      plVar13 = (long *)il2cpp_runtime_glue(pSVar10,TypeInfo_IDisposable);
      if (plVar13 == (long *)0x0) {
        return (Il2CppObject *)__this_01;
      }
      lVar15 = *plVar13;
      if ((ulong)*(ushort *)(lVar15 + 0x12e) == 0) goto LAB_03e359af;
      lVar16 = 0;
      break;
    }
    pSVar6 = pSVar10->klass;
    uVar4._0_1_ = (pSVar6->_2).rank;
    uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IEnumerator) {
          pVVar11 = pSVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar15) + 1);
          goto LAB_03e35898;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar15);
    }
    pVVar11 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar10,TypeInfo_IEnumerator,1);
LAB_03e35898:
    pUVar12 = (UnityEngine_Transform_o *)(*pVVar11->methodPtr)(pSVar10,pVVar11->method);
    if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
      bVar2 = (TypeInfo_Transform->_2).naturalAligment;
      if (((pUVar12->klass->_2).naturalAligment < bVar2) ||
         ((pUVar12->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Transform)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pUVar12);
      }
    }
    if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (__this_01->fields).List;
    auVar17 = il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
    __this_02 = auVar17._0_8_;
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_02,pUVar12,auVar17._8_8_);
    lVar15 = MethodInfo_Void_Add;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar8 = (__this_00->fields)._items;
    if (pSVar8 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar5 = (__this_00->fields)._size;
    if (uVar5 < (uint)pSVar8->max_length) {
      (__this_00->fields)._size = uVar5 + 1;
      pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)__this_02;
      il2cpp_runtime_glue(pSVar8->m_Items + (int)uVar5,__this_02);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,(Il2CppObject *)__this_02,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while (lVar16 = lVar16 + 0x10, (ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16) {
    if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_IDisposable) {
      puVar14 = (undefined8 *)
                (lVar15 + (long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) * 0x10 + 0x138);
      goto LAB_03e359cd;
    }
  }
LAB_03e359af:
  puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar13,TypeInfo_IDisposable,0);
LAB_03e359cd:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
  return (Il2CppObject *)__this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlayingAnimation>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__IsPlayingAnimation_b__20_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3ab70

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding__IsPlayingAnimation>b__20_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  CustomLogic_CustomLogicAnimationBuiltin_o *__this_00;
  undefined1 uVar1;
  undefined8 in_RAX;
  System_String_o *pSVar3;
  Il2CppObject *pIVar4;
  undefined8 uStack_18;
  bool_conflict bVar2;
  
  uStack_18 = in_RAX;
  if (DAT_05702e1c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e1c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar4 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar4,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      __this_00 = (__c->fields)._animation;
      if (__this_00 == (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
        if ((__c->fields)._animator == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
          uVar1 = 0;
        }
        else {
          if (pSVar3 == (System_String_o *)0x0) goto LAB_03e3ac50;
          pSVar3 = System_String__Replace(pSVar3,0x2e,0x5f,(MethodInfo *)0x0);
          bVar2 = System_String__op_Equality
                            ((__c->fields)._currentAnimation,pSVar3,(MethodInfo *)0x0);
          uVar1 = (undefined1)bVar2;
        }
      }
      else {
        bVar2 = CustomLogic_CustomLogicAnimationBuiltin__IsPlaying
                          (__this_00,pSVar3,(MethodInfo *)0x0);
        uVar1 = (undefined1)bVar2;
      }
      uStack_18 = CONCAT17(uVar1,(undefined7)uStack_18);
      pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
      return pIVar4;
    }
  }
LAB_03e3ac50:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimation>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__21_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3ac60

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding__PlayAnimation>b__21_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  System_String_o *anim;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  float fade;
  
  if (DAT_05702e1d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e1d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    anim = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    if ((int)__a->max_length < 2) {
      fade = 0.1;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fade = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      CustomLogic_CustomLogicTransformBuiltin__PlayAnimation(__c,anim,fade,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationLength>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__22_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3ad50

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding__GetAnimationLength>b__22_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  CustomLogic_CustomLogicAnimationBuiltin_o *__this_00;
  CustomLogic_CustomLogicAnimatorBuiltin_o *__this_01;
  System_String_o *pSVar1;
  Il2CppObject *pIVar2;
  undefined1 auStack_14 [4];
  
  if (DAT_05702e1e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e1e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      __this_00 = (__c->fields)._animation;
      if (__this_00 == (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
        __this_01 = (__c->fields)._animator;
        if (__this_01 != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
          if (pSVar1 == (System_String_o *)0x0) goto LAB_03e3ae39;
          pSVar1 = System_String__Replace(pSVar1,0x2e,0x5f,(MethodInfo *)0x0);
          CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationLength
                    (__this_01,pSVar1,(MethodInfo *)0x0);
        }
      }
      else {
        CustomLogic_CustomLogicAnimationBuiltin__GetAnimationLength
                  (__this_00,pSVar1,(MethodInfo *)0x0);
      }
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar2;
    }
  }
LAB_03e3ae39:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlaySound>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__PlaySound_b__23_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3ae50

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding__PlaySound>b__23_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  CustomLogic_CustomLogicAudioSourceBuiltin_o *pCVar1;
  bool_conflict bVar2;
  
  if ((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields)._audioSource,
     __this = (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *)0x0,
     pCVar1 != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0)) {
    bVar2 = CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pCVar1 = (__c->fields)._audioSource;
      __this = (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *)0x0;
      if (pCVar1 == (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) goto LAB_03e3ae81;
      CustomLogic_CustomLogicAudioSourceBuiltin__Play(pCVar1,(MethodInfo *)0x0);
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e3ae81:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__StopSound>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__StopSound_b__24_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3ae90

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding__StopSound>b__24_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  CustomLogic_CustomLogicAudioSourceBuiltin_o *pCVar1;
  bool_conflict bVar2;
  
  if ((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields)._audioSource,
     __this = (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *)0x0,
     pCVar1 != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0)) {
    bVar2 = CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pCVar1 = (__c->fields)._audioSource;
      __this = (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *)0x0;
      if (pCVar1 == (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) goto LAB_03e3aec1;
      CustomLogic_CustomLogicAudioSourceBuiltin__Stop(pCVar1,(MethodInfo *)0x0);
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e3aec1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToggleParticle>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__ToggleParticle_b__25_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3aed0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding__ToggleParticle>b__25_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  uint uVar1;
  MethodInfo *method_00;
  
  if (DAT_05702e1f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e1f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      CustomLogic_CustomLogicTransformBuiltin__ToggleParticle(__c,uVar1 & 0xff,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__InverseTransformDirection>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__InverseTransformDirection_b__26_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3af60

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding__InverseTransformDirection>b__26_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_o v;
  
  if (DAT_05702e20 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e20 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
        (pIVar1 != (Il2CppObject *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      v = UnityEngine_Transform__InverseTransformDirection
                    (__this_00,*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),(MethodInfo *)0x0);
      pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__InverseTransformPoint>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__InverseTransformPoint_b__27_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3b010

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding__InverseTransformPoint>b__27_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_o v;
  
  if (DAT_05702e21 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e21 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
        (pIVar1 != (Il2CppObject *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      v = UnityEngine_Transform__InverseTransformPoint
                    (__this_00,*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),(MethodInfo *)0x0);
      pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransformDirection>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__TransformDirection_b__28_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3b0c0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding__TransformDirection>b__28_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_o v;
  
  if (DAT_05702e22 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e22 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
        (pIVar1 != (Il2CppObject *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      v = UnityEngine_Transform__TransformDirection
                    (__this_00,*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),(MethodInfo *)0x0);
      pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransformPoint>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__TransformPoint_b__29_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3b170

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding__TransformPoint>b__29_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_o v;
  
  if (DAT_05702e23 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e23 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
        (pIVar1 != (Il2CppObject *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      v = UnityEngine_Transform__TransformPoint
                    (__this_00,*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),(MethodInfo *)0x0);
      pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__Rotate>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__Rotate_b__30_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3b220

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding__Rotate>b__30_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar1;
  
  if (DAT_05702e24 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e24 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
        (pIVar1 != (Il2CppObject *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__Rotate
                (__this_00,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
                 (MethodInfo *)0x0);
      *(undefined2 *)&(__c->fields)._needSetRotation = 0x101;
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__RotateAround>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__RotateAround_b__31_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3b2d0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding__RotateAround>b__31_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  float angle;
  
  if (DAT_05702e25 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e25 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          angle = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if ((((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
               (*(undefined2 *)&(__c->fields)._needSetRotation = 0x101,
               pIVar1 != (Il2CppObject *)0x0)) && (pIVar2 != (Il2CppObject *)0x0)) &&
             (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__RotateAround
                      (__this_00,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
                       (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar2 + 3),angle,
                       (MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
          goto LAB_03e3b3db;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03e3b3db:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__LookAt>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__LookAt_b__32_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3b3f0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding__LookAt>b__32_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar1;
  
  if (DAT_05702e26 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e26 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
        (*(undefined2 *)&(__c->fields)._needSetRotation = 0x101, pIVar1 != (Il2CppObject *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__LookAt
                (__this_00,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
                 (MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetRenderersEnabled>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__SetRenderersEnabled_b__33_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3b4a0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding__SetRenderersEnabled>b__33_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  uint uVar1;
  MethodInfo *method_00;
  
  if (DAT_05702e27 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e27 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      CustomLogic_CustomLogicTransformBuiltin__SetRenderersEnabled(__c,uVar1 & 0xff,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetColliders>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetColliders_b__34_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3b530

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding__GetColliders>b__34_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  uint uVar1;
  CustomLogic_CustomLogicListBuiltin_o *pCVar2;
  System_Object_array *extraout_RDX;
  System_Object_array *method_00;
  System_Object_array *extraout_RDX_00;
  
  method_00 = __a;
  if (DAT_05702e28 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e28 = '\x01';
    method_00 = extraout_RDX;
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      uVar1 = 0;
    }
    else {
      if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicTransformBuiltin__GetColliders
                         (__c,uVar1 & 0xff,(MethodInfo *)method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetActive>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__SetActive_b__35_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3b5d0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding__SetActive>b__35_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  UnityEngine_Transform_o *__this_00;
  uint uVar1;
  UnityEngine_GameObject_o *__this_01;
  
  if (DAT_05702e29 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e29 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
    if ((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,uVar1 & 0xff,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__36_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3b680

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding____Eq__>b__36_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  int iVar1;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      uStack_8 = in_RAX;
      bVar2 = CustomLogic_CustomLogicTransformBuiltin____Eq__
                        ((CustomLogic_CustomLogicTransformBuiltin_o *)__this,__a->m_Items[0],
                         __a->m_Items[1],method);
      uStack_8 = CONCAT17((char)bVar2,(undefined7)uStack_8);
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
      return pIVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__37_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3b6d0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_<>c__<__CreateMethodBinding____Hash__>b__37_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Transform_o *pUVar1;
  bool_conflict bVar2;
  undefined4 uVar3;
  Il2CppObject *pIVar4;
  undefined4 local_1c;
  
  if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    if (DAT_05702de6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_05702de6 = '\x01';
    }
    pUVar1 = (__c->fields).Value;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar3 = 0;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      pUVar1 = (__c->fields).Value;
      __this = (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *)0x0;
      if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto LAB_03e3b76d;
      uVar3 = (*(pUVar1->klass->vtable)._2_GetHashCode.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method);
    }
    local_1c = uVar3;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_1c);
    return pIVar4;
  }
LAB_03e3b76d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTransformBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e36590

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTransformBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  undefined8 uVar6;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar7;
  System_Action_T__object__o *pSVar8;
  CustomLogic_CLPropertyBinding_T__o *pCVar9;
  System_Func_T__object____object__o *pSVar10;
  CustomLogic_CLMethodBinding_T__o *pCVar11;
  
  if (DAT_05702de8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Scale");
    il2cpp_init_method_metadata(&"InverseTransformPoint");
    il2cpp_init_method_metadata(&"PlayAnimation");
    il2cpp_init_method_metadata(&"InverseTransformDirection");
    il2cpp_init_method_metadata(&"Right");
    il2cpp_init_method_metadata(&"Animation");
    il2cpp_init_method_metadata(&"StopSound");
    il2cpp_init_method_metadata(&"QuaternionRotation");
    il2cpp_init_method_metadata(&"TransformDirection");
    il2cpp_init_method_metadata(&"Rotate");
    il2cpp_init_method_metadata(&"__Eq__");
    il2cpp_init_method_metadata(&"LocalPosition");
    il2cpp_init_method_metadata(&"__Hash__");
    il2cpp_init_method_metadata(&"QuaternionLocalRotation");
    il2cpp_init_method_metadata(&"Position");
    il2cpp_init_method_metadata(&"GetAnimationLength");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Forward");
    il2cpp_init_method_metadata(&"GetColliders");
    il2cpp_init_method_metadata(&"IsPlayingAnimation");
    il2cpp_init_method_metadata(&"PlaySound");
    il2cpp_init_method_metadata(&"Rotation");
    il2cpp_init_method_metadata(&"Parent");
    il2cpp_init_method_metadata(&"Up");
    il2cpp_init_method_metadata(&"RotateAround");
    il2cpp_init_method_metadata(&"Animator");
    il2cpp_init_method_metadata(&"ToggleParticle");
    il2cpp_init_method_metadata(&"Layer");
    il2cpp_init_method_metadata(&"GetTransforms");
    il2cpp_init_method_metadata(&"AudioSource");
    il2cpp_init_method_metadata(&"SetActive");
    il2cpp_init_method_metadata(&"GetTransform");
    il2cpp_init_method_metadata(&"TransformPoint");
    il2cpp_init_method_metadata(&"SetRenderersEnabled");
    il2cpp_init_method_metadata(&"LocalRotation");
    il2cpp_init_method_metadata(&"LookAt");
    DAT_05702de8 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x792a6492) {
    if (uVar3 < 0x41e389fe) {
      if (uVar3 < 0x1e9e9f86) {
        if (uVar3 < 0x3134bcf) {
          if (uVar3 == 0x232777f) {
            bVar4 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702deb == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rotation_g____g);
                il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Rotation_g____set);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
                DAT_05702deb = '\x01';
              }
              pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
              System_Func<object__object>___ctor();
              pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
              System_Action<object__object>___ctor();
              pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
              CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar9;
            }
          }
          else if ((uVar3 == 0x3134bce) &&
                  (bVar4 = System_String__op_Equality(name,"LocalRotation",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702dec == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LocalRotation_g);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LocalRotation_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
              DAT_05702dec = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0xfe07306) {
          bVar4 = System_String__op_Equality(name,"Name",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702df4 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Name_g____gette);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
              DAT_05702df4 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
            System_Func<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x1e9e9f85) &&
                (bVar4 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702df2 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Right_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Right_g____setter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
            DAT_05702df2 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 < 0x28528e12) {
        if (uVar3 == 0x23315ddd) {
          bVar4 = System_String__op_Equality(name,"IsPlayingAnimation",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702dfb == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsPlayingAnimatio);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702dfb = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x18);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x18);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x28528e11) &&
                (bVar4 = System_String__op_Equality(name,"Scale",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702def == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Scale_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Scale_g____setter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
            DAT_05702def = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x2ba6c2e2) {
        bVar4 = System_String__op_Equality(name,"PlaySound",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702dfe == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlaySound_b__23_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702dfe = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x30);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x30);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x30,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x2fe74447) {
        bVar4 = System_String__op_Equality(name,"QuaternionRotation",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702ded == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuaternionRotat);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__QuaternionRotatio);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
            DAT_05702ded = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x41e389fd) &&
              (bVar4 = System_String__op_Equality(name,"Animation",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702df6 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Animation_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
          DAT_05702df6 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0x51dceaf9) {
      if (uVar3 < 0x492a3cd0) {
        if (uVar3 == 0x42f35940) {
          bVar4 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702df1 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Up_g____getter);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Up_g____setter_10);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
              DAT_05702df1 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x492a3ccf) &&
                (bVar4 = System_String__op_Equality(name,"GetAnimationLength",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702dfd == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAnimationLengt);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702dfd = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x28);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x28);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x28,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x4bb7478d) {
        bVar4 = System_String__op_Equality(name,"SetActive",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702e0a == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetActive_b__35_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702e0a = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x90);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x90);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x90) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x90,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x51dceaf8) &&
              (bVar4 = System_String__op_Equality(name,"GetColliders",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702e09 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetColliders_b__3);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702e09 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x88) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x88,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0x5e2c4c74) {
      if (uVar3 == 0x56fd69a3) {
        bVar4 = System_String__op_Equality(name,"TransformPoint",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702e04 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TransformPoint_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702e04 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x60);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x60);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x60,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x5e2c4c73) &&
              (bVar4 = System_String__op_Equality(name,"LookAt",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702e07 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LookAt_b__32_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702e07 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x78,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x6a01cd56) {
      bVar4 = System_String__op_Equality(name,"QuaternionLocalRotation",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702dee == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuaternionLocal);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__QuaternionLocalRo);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
          DAT_05702dee = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x70ec2621) {
      bVar4 = System_String__op_Equality(name,"InverseTransformPoint",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702e02 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__InverseTransformP);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702e02 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x50,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0x792a6491) &&
            (bVar4 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702e0c == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Hash___b__37_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702e0c = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0xa0,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xc156ee1e) {
    if (uVar3 < 0x958d00f5) {
      if (uVar3 < 0x7ea95d1f) {
        if (uVar3 == 0x7bb199a4) {
          bVar4 = System_String__op_Equality(name,"AudioSource",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702df8 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AudioSource_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
              DAT_05702df8 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
            System_Func<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x7ea95d1e) &&
                (bVar4 = System_String__op_Equality(name,"GetTransforms",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702dfa == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetTransforms_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702dfa = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x91efe6d7) {
        bVar4 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702e0b == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Eq___b__36_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702e0b = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x98);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x98);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x98) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x98,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x958d00f4) &&
              (bVar4 = System_String__op_Equality(name,"TransformDirection",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702e03 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TransformDirectio);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702e03 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x58,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0xaf82143c) {
      if (uVar3 == 0xa18f5959) {
        bVar4 = System_String__op_Equality(name,"GetTransform",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702df9 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetTransform_b__1);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702df9 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 8,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0xaf82143b) &&
              (bVar4 = System_String__op_Equality(name,"LocalPosition",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702dea == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LocalPosition_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LocalPosition_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
          DAT_05702dea = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xafdc1b96) {
      bVar4 = System_String__op_Equality(name,"Layer",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702df5 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Layer_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Layer_g____setter);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
          DAT_05702df5 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xbfb982ba) {
      bVar4 = System_String__op_Equality(name,"InverseTransformDirection",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702e01 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__InverseTransformD);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702e01 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x48,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0xc156ee1d) &&
            (bVar4 = System_String__op_Equality(name,"Parent",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702df3 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Parent_g____get);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Parent_g____sette);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
        DAT_05702df3 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xdabf4d00) {
    if (uVar3 < 0xcb7df475) {
      if (uVar3 == 0xc7933b34) {
        bVar4 = System_String__op_Equality(name,"Animator",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702df7 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Animator_g____g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
            DAT_05702df7 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0xcb7df474) &&
              (bVar4 = System_String__op_Equality(name,"StopSound",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702dff == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__StopSound_b__24_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702dff = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x38,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xd64c477b) {
      bVar4 = System_String__op_Equality(name,"PlayAnimation",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702dfc == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlayAnimation_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702dfc = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0xdabf4cff) &&
            (bVar4 = System_String__op_Equality(name,"ToggleParticle",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702e00 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToggleParticle_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702e00 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x40,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xe34226c0) {
    if (uVar3 == 0xe27f342a) {
      bVar4 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702de9 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Position_g____g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Position_g____set);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
          DAT_05702de9 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xe34226bf) &&
            (bVar4 = System_String__op_Equality(name,"RotateAround",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702e06 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RotateAround_b__3);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702e06 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x70,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 == 0xe50883ba) {
    bVar4 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702df0 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Forward_g____ge);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Forward_g____sett);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
        DAT_05702df0 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xec0a0a2a) {
    bVar4 = System_String__op_Equality(name,"Rotate",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702e05 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Rotate_b__30_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702e05 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x68,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if ((uVar3 == 0xf73c4ea6) &&
          (bVar4 = System_String__op_Equality(name,"SetRenderersEnabled",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702e08 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetRenderersEnabl);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05702e08 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
    }
    else {
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
    }
    if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar10;
      il2cpp_runtime_glue(lVar2 + 0x80,pSVar10);
    }
    pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicTransformBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x3e37300

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Position
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702de9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Position_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Position_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
    DAT_05702de9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__LocalPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__LocalPosition (const MethodInfo* method);
// 0x3e373e0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__LocalPosition
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702dea == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LocalPosition_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LocalPosition_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
    DAT_05702dea = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x3e374c0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Rotation
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702deb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rotation_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Rotation_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
    DAT_05702deb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__LocalRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__LocalRotation (const MethodInfo* method);
// 0x3e375a0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__LocalRotation
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702dec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LocalRotation_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LocalRotation_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
    DAT_05702dec = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__QuaternionRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation (const MethodInfo* method);
// 0x3e37680

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702ded == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuaternionRotat);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__QuaternionRotatio);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
    DAT_05702ded = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__QuaternionLocalRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__QuaternionLocalRotation (const MethodInfo* method);
// 0x3e37760

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__QuaternionLocalRotation
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702dee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuaternionLocal);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__QuaternionLocalRo);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
    DAT_05702dee = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Scale
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Scale (const MethodInfo* method);
// 0x3e37840

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Scale(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702def == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Scale_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Scale_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
    DAT_05702def = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x3e37920

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Forward
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702df0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Forward_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Forward_g____sett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
    DAT_05702df0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x3e37a00

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702df1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Up_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Up_g____setter_10);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
    DAT_05702df1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x3e37ae0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702df2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Right_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Right_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
    DAT_05702df2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Parent
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Parent (const MethodInfo* method);
// 0x3e37bc0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Parent
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702df3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Parent_g____get);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Parent_g____sette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
    DAT_05702df3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Name
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Name (const MethodInfo* method);
// 0x3e37ca0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Name(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702df4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Name_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
    DAT_05702df4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Layer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Layer (const MethodInfo* method);
// 0x3e37d40

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Layer(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702df5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTransformBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Layer_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Layer_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
    DAT_05702df5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTransformBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Animation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Animation (const MethodInfo* method);
// 0x3e37e20

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Animation
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702df6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Animation_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
    DAT_05702df6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Animator
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Animator (const MethodInfo* method);
// 0x3e37ec0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Animator
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702df7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Animator_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
    DAT_05702df7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__AudioSource
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__AudioSource (const MethodInfo* method);
// 0x3e37f60

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__AudioSource
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702df8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AudioSource_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object);
    DAT_05702df8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__GetTransform
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetTransform (const MethodInfo* method);
// 0x3e38000

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetTransform
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702df9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetTransform_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702df9 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__GetTransforms
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetTransforms (const MethodInfo* method);
// 0x3e38150

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetTransforms
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702dfa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetTransforms_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702dfa = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__IsPlayingAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__IsPlayingAnimation (const MethodInfo* method);
// 0x3e382a0

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__IsPlayingAnimation
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702dfb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsPlayingAnimatio);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702dfb = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__PlayAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__PlayAnimation (const MethodInfo* method);
// 0x3e383f0

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__PlayAnimation
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702dfc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlayAnimation_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702dfc = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__GetAnimationLength
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetAnimationLength (const MethodInfo* method);
// 0x3e38540

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetAnimationLength
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702dfd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAnimationLengt);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702dfd = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__PlaySound
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__PlaySound (const MethodInfo* method);
// 0x3e38690

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__PlaySound
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702dfe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlaySound_b__23_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702dfe = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__StopSound
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__StopSound (const MethodInfo* method);
// 0x3e387e0

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__StopSound
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702dff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__StopSound_b__24_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702dff = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__ToggleParticle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__ToggleParticle (const MethodInfo* method);
// 0x3e38930

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__ToggleParticle
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702e00 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToggleParticle_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702e00 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__InverseTransformDirection
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__InverseTransformDirection (const MethodInfo* method);
// 0x3e38a80

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__InverseTransformDirection
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702e01 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__InverseTransformD);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702e01 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__InverseTransformPoint
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__InverseTransformPoint (const MethodInfo* method);
// 0x3e38bd0

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__InverseTransformPoint
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702e02 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__InverseTransformP);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702e02 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__TransformDirection
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__TransformDirection (const MethodInfo* method);
// 0x3e38d20

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__TransformDirection
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702e03 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TransformDirectio);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702e03 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__TransformPoint
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__TransformPoint (const MethodInfo* method);
// 0x3e38e70

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__TransformPoint
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702e04 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__TransformPoint_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702e04 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__Rotate
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__Rotate (const MethodInfo* method);
// 0x3e38fc0

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__Rotate(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702e05 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Rotate_b__30_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702e05 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_glue(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__RotateAround
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__RotateAround (const MethodInfo* method);
// 0x3e39110

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__RotateAround
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702e06 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RotateAround_b__3);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702e06 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_glue(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__LookAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__LookAt (const MethodInfo* method);
// 0x3e39260

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__LookAt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702e07 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LookAt_b__32_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702e07 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_glue(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__SetRenderersEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__SetRenderersEnabled (const MethodInfo* method);
// 0x3e393b0

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__SetRenderersEnabled
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702e08 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetRenderersEnabl);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702e08 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_glue(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__GetColliders
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetColliders (const MethodInfo* method);
// 0x3e39500

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetColliders
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702e09 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetColliders_b__3);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702e09 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x88) = function;
    il2cpp_runtime_glue(lVar2 + 0x88,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__SetActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__SetActive (const MethodInfo* method);
// 0x3e39650

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__SetActive
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702e0a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetActive_b__35_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702e0a = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x90) = function;
    il2cpp_runtime_glue(lVar2 + 0x90,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x3e397a0

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702e0b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Eq___b__36_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702e0b = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x98) = function;
    il2cpp_runtime_glue(lVar2 + 0x98,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x3e398f0

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding____Hash__
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this;
  
  if (DAT_05702e0c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Hash___b__37_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702e0c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTransformBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = function;
    il2cpp_runtime_glue(lVar2 + 0xa0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTransformBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3e39a40

void CustomLogic_CustomLogicTransformBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702e0d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Scale");
    il2cpp_init_method_metadata(&"InverseTransformPoint");
    il2cpp_init_method_metadata(&"PlayAnimation");
    il2cpp_init_method_metadata(&"InverseTransformDirection");
    il2cpp_init_method_metadata(&"Right");
    il2cpp_init_method_metadata(&"Animation");
    il2cpp_init_method_metadata(&"StopSound");
    il2cpp_init_method_metadata(&"QuaternionRotation");
    il2cpp_init_method_metadata(&"TransformDirection");
    il2cpp_init_method_metadata(&"Rotate");
    il2cpp_init_method_metadata(&"__Eq__");
    il2cpp_init_method_metadata(&"LocalPosition");
    il2cpp_init_method_metadata(&"__Hash__");
    il2cpp_init_method_metadata(&"QuaternionLocalRotation");
    il2cpp_init_method_metadata(&"Position");
    il2cpp_init_method_metadata(&"GetAnimationLength");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Forward");
    il2cpp_init_method_metadata(&"GetColliders");
    il2cpp_init_method_metadata(&"IsPlayingAnimation");
    il2cpp_init_method_metadata(&"PlaySound");
    il2cpp_init_method_metadata(&"Rotation");
    il2cpp_init_method_metadata(&"Parent");
    il2cpp_init_method_metadata(&"Up");
    il2cpp_init_method_metadata(&"RotateAround");
    il2cpp_init_method_metadata(&"Animator");
    il2cpp_init_method_metadata(&"ToggleParticle");
    il2cpp_init_method_metadata(&"Layer");
    il2cpp_init_method_metadata(&"GetTransforms");
    il2cpp_init_method_metadata(&"AudioSource");
    il2cpp_init_method_metadata(&"SetActive");
    il2cpp_init_method_metadata(&"GetTransform");
    il2cpp_init_method_metadata(&"TransformPoint");
    il2cpp_init_method_metadata(&"SetRenderersEnabled");
    il2cpp_init_method_metadata(&"LocalRotation");
    il2cpp_init_method_metadata(&"LookAt");
    DAT_05702e0d = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Position",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LocalPosition",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Rotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LocalRotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"QuaternionRotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"QuaternionLocalRotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Scale",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Forward",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Up",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Right",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Parent",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Name",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Layer",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Animation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Animator",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AudioSource",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetTransform",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetTransforms",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsPlayingAnimation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PlayAnimation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetAnimationLength",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PlaySound",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"StopSound",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ToggleParticle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"InverseTransformDirection",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"InverseTransformPoint",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TransformDirection",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TransformPoint",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Rotate",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RotateAround",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LookAt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetRenderersEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetColliders",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetActive",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Eq__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Hash__",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_2_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x3e39fa0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__Position>g____getter_2_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    v = UnityEngine_Transform__get_position(__this,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_2_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e39fd0

void CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__Position>g____setter_2_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  Il2CppObject *pIVar1;
  
  if (DAT_05702e0e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e0e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0))
     && (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_position
              (__this,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__LocalPosition>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____getter_3_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x3e3a060

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__LocalPosition>g____getter_3_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    v = UnityEngine_Transform__get_localPosition(__this,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__LocalPosition>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____setter_3_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3a090

void CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__LocalPosition>g____setter_3_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  Il2CppObject *pIVar1;
  
  if (DAT_05702e0f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e0f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0))
     && (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_localPosition
              (__this,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_4_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x3e3a120

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__Rotation>g____getter_4_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_Fields v;
  
  if (__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    if ((char)(__i->fields)._needSetRotation == '\0') {
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit
                         ((UnityEngine_Vector3_o)(__i->fields)._internalRotation.fields,
                          (MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_Transform_o *)0x0) {
      rotation = UnityEngine_Transform__get_rotation(__this,(MethodInfo *)0x0);
      UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
      euler.fields.x = UVar2.fields.x * 57.29578;
      euler.fields.y = UVar2.fields.y * 57.29578;
      euler.fields.z = UVar2.fields.z * 57.29578;
      v = (UnityEngine_Vector3_Fields)
          UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      (__i->fields)._internalRotation.fields = v;
      *(undefined1 *)&(__i->fields)._needSetRotation = 0;
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit
                         ((UnityEngine_Vector3_o)v,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_4_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3a190

void CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__Rotation>g____setter_4_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Transform_o *__this;
  Il2CppObject *pIVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o value;
  
  if (DAT_05702e10 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e10 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) && (pIVar4 != (Il2CppObject *)0x0))
  {
    fVar3 = *(float *)&pIVar4[3].monitor;
    *(Il2CppClass **)&(__i->fields)._internalRotation.fields = pIVar4[3].klass;
    (__i->fields)._internalRotation.fields.z = fVar3;
    *(undefined1 *)&(__i->fields)._needSetRotation = 0;
    __this = (__i->fields).Value;
    uVar1 = (__i->fields)._internalRotation.fields.x;
    uVar2 = (__i->fields)._internalRotation.fields.y;
    euler.fields.x = (float)uVar1 * 0.017453292;
    euler.fields.y = (float)uVar2 * 0.017453292;
    euler.fields.z = (__i->fields)._internalRotation.fields.z * 0.017453292;
    value = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_rotation(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__LocalRotation>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____getter_5_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x3e3a250

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__LocalRotation>g____getter_5_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_Fields v;
  
  if (__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    if (*(char *)((long)&(__i->fields)._needSetRotation + 1) == '\0') {
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit
                         ((UnityEngine_Vector3_o)(__i->fields)._internalLocalRotation.fields,
                          (MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_Transform_o *)0x0) {
      rotation = UnityEngine_Transform__get_localRotation(__this,(MethodInfo *)0x0);
      UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
      euler.fields.x = UVar2.fields.x * 57.29578;
      euler.fields.y = UVar2.fields.y * 57.29578;
      euler.fields.z = UVar2.fields.z * 57.29578;
      v = (UnityEngine_Vector3_Fields)
          UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      (__i->fields)._internalLocalRotation.fields = v;
      *(undefined1 *)((long)&(__i->fields)._needSetRotation + 1) = 0;
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit
                         ((UnityEngine_Vector3_o)v,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__LocalRotation>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____setter_5_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3a2c0

void CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__LocalRotation>g____setter_5_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Transform_o *__this;
  Il2CppObject *pIVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o value;
  
  if (DAT_05702e11 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e11 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) && (pIVar4 != (Il2CppObject *)0x0))
  {
    fVar3 = *(float *)&pIVar4[3].monitor;
    *(Il2CppClass **)&(__i->fields)._internalLocalRotation.fields = pIVar4[3].klass;
    (__i->fields)._internalLocalRotation.fields.z = fVar3;
    *(undefined1 *)((long)&(__i->fields)._needSetRotation + 1) = 0;
    __this = (__i->fields).Value;
    uVar1 = (__i->fields)._internalLocalRotation.fields.x;
    uVar2 = (__i->fields)._internalLocalRotation.fields.y;
    euler.fields.x = (float)uVar1 * 0.017453292;
    euler.fields.y = (float)uVar2 * 0.017453292;
    euler.fields.z = (__i->fields)._internalLocalRotation.fields.z * 0.017453292;
    value = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localRotation(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____getter_6_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x3e3a380

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__QuaternionRotation>g____getter_6_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  UnityEngine_Quaternion_o q;
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    q = UnityEngine_Transform__get_rotation(__this,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____setter_6_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3a3b0

void CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__QuaternionRotation>g____setter_6_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  Il2CppObject *pIVar1;
  
  if (DAT_05702e12 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e12 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
  if (((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
      (*(undefined2 *)&(__i->fields)._needSetRotation = 0x101, pIVar1 != (Il2CppObject *)0x0)) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_rotation
              (__this,(UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)(pIVar1 + 3),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionLocalRotation>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____getter_7_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x3e3a450

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__QuaternionLocalRotation>g____getter_7_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  UnityEngine_Quaternion_o q;
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    q = UnityEngine_Transform__get_localRotation(__this,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionLocalRotation>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____setter_7_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3a480

void CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__QuaternionLocalRotation>g____setter_7_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  Il2CppObject *pIVar1;
  
  if (DAT_05702e13 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e13 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
  if (((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
      (*(undefined2 *)&(__i->fields)._needSetRotation = 0x101, pIVar1 != (Il2CppObject *)0x0)) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_localRotation
              (__this,(UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)(pIVar1 + 3),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_8_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x3e3a520

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__Scale>g____getter_8_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    v = UnityEngine_Transform__get_localScale(__this,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_8_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3a550

void CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__Scale>g____setter_8_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  Il2CppObject *pIVar1;
  
  if (DAT_05702e14 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e14 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0))
     && (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_localScale
              (__this,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_9_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x3e3a5e0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__Forward>g____getter_9_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    v = UnityEngine_Transform__get_forward(__this,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_9_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3a610

void CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__Forward>g____setter_9_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  Il2CppObject *pIVar1;
  
  if (DAT_05702e15 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e15 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0))
     && (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_forward
              (__this,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x3e3a6a0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__Up>g____getter_10_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    v = UnityEngine_Transform__get_up(__this,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_10_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3a6d0

void CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__Up>g____setter_10_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  Il2CppObject *pIVar1;
  
  if (DAT_05702e16 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e16 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0))
     && (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_up
              (__this,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_11_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x3e3a760

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__Right>g____getter_11_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    v = UnityEngine_Transform__get_right(__this,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_11_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3a790

void CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__Right>g____setter_11_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  Il2CppObject *pIVar1;
  
  if (DAT_05702e17 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e17 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0))
     && (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_right
              (__this,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Parent>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Parent_g____getter_12_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x3e3a820

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__Parent>g____getter_12_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Transform_o *pUVar2;
  undefined1 auVar3 [16];
  
  if (__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702ddf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702ddf = '\x01';
  }
  pUVar2 = (__i->fields).Value;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 == '\0') {
      return (Il2CppObject *)0x0;
    }
    pUVar2 = (__i->fields).Value;
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
      auVar3 = il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(auVar3._0_8_,pUVar2,auVar3._8_8_);
      return (Il2CppObject *)auVar3._0_8_;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Parent>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Parent_g____setter_12_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3a840

void CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__Parent>g____setter_12_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  Il2CppObject *pIVar1;
  Il2CppClass *p;
  
  if (DAT_05702e18 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicTransformBuiltin_ConvertTo_CustomLogi);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e18 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicTransformBuiltin_ConvertTo_CustomLogi);
  if (__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    __this = (__i->fields).Value;
    if (pIVar1 == (Il2CppObject *)0x0) {
      if (__this == (UnityEngine_Transform_o *)0x0) goto LAB_03e3a8d1;
      p = (Il2CppClass *)0x0;
    }
    else {
      if (__this == (UnityEngine_Transform_o *)0x0) goto LAB_03e3a8d1;
      p = pIVar1[3].klass;
    }
    UnityEngine_Transform__SetParent(__this,(UnityEngine_Transform_o *)p,(MethodInfo *)0x0);
    *(undefined2 *)&(__i->fields)._needSetRotation = 0x101;
    return;
  }
LAB_03e3a8d1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_13_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x3e3a8e0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__Name>g____getter_13_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  System_String_o *pSVar1;
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    pSVar1 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Layer>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Layer_g____getter_14_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x3e3a900

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__Layer>g____getter_14_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__get_layer(__this_00,(MethodInfo *)0x0);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Layer>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Layer_g____setter_14_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3a950

void CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__Layer>g____setter_14_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  int32_t value;
  UnityEngine_GameObject_o *__this_00;
  
  if (DAT_05702e19 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e19 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__set_layer(__this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Animation>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Animation_g____getter_15_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x3e3a9e0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__Animation>g____getter_15_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._animation;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Animator>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Animator_g____getter_16_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x3e3aa00

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__Animator>g____getter_16_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._animator;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__AudioSource>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__AudioSource_g____getter_17_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x3e3aa20

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings__<__CreatePropertyBinding__AudioSource>g____getter_17_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._audioSource;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin___ctor (CustomLogic_CustomLogicTransformBuiltin_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method);
// 0x3e34e50

void CustomLogic_CustomLogicTransformBuiltin___ctor
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,UnityEngine_Transform_o *transform
               ,MethodInfo *method)

{
  UnityEngine_Transform_o **ppUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Animator_o *animator;
  UnityEngine_Animation_o *animation;
  UnityEngine_AudioSource_o *audioSource;
  bool_conflict bVar3;
  UnityEngine_ParticleSystem_o *pUVar4;
  CustomLogic_CustomLogicAudioSourceBuiltin_o *__this_00;
  CustomLogic_CustomLogicAnimatorBuiltin_o *__this_01;
  CustomLogic_CustomLogicAnimatorBuiltin_o **ppCVar5;
  UnityEngine_Animator_o *local_38;
  UnityEngine_Animation_o *local_30;
  UnityEngine_AudioSource_o *local_28;
  
  if (DAT_05702dde == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetComponent_Animation);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetComponent_Animator);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetComponent_AudioSource);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicAudioSourceBuiltin);
    DAT_05702dde = '\x01';
  }
  local_28 = (UnityEngine_AudioSource_o *)0x0;
  local_30 = (UnityEngine_Animation_o *)0x0;
  local_38 = (UnityEngine_Animator_o *)0x0;
  *(undefined2 *)&(__this->fields)._needSetRotation = 0x101;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).Value;
  (__this->fields).Value = transform;
  il2cpp_runtime_glue(ppUVar1,transform);
  pUVar2 = (__this->fields).Value;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar4 = (UnityEngine_ParticleSystem_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar2,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
    (__this->fields)._particleSystem = pUVar4;
    il2cpp_runtime_glue(&(__this->fields)._particleSystem,pUVar4);
    pUVar2 = (__this->fields).Value;
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      bVar3 = UnityEngine_Component__TryGetComponent<object>
                        ((UnityEngine_Component_o *)pUVar2,(Il2CppObject **)&local_28,MethodInfo_Boolean_TryGetComponent_AudioSource);
      audioSource = local_28;
      if ((char)bVar3 != '\0') {
        __this_00 = (CustomLogic_CustomLogicAudioSourceBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicAudioSourceBuiltin);
        CustomLogic_CustomLogicAudioSourceBuiltin___ctor
                  (__this_00,(CustomLogic_BuiltinClassInstance_o *)__this,audioSource,
                   (MethodInfo *)0x0);
        (__this->fields)._audioSource = __this_00;
        il2cpp_runtime_glue(&(__this->fields)._audioSource,__this_00);
      }
      if (*ppUVar1 != (UnityEngine_Transform_o *)0x0) {
        bVar3 = UnityEngine_Component__TryGetComponent<object>
                          ((UnityEngine_Component_o *)*ppUVar1,(Il2CppObject **)&local_30,
                           MethodInfo_Boolean_TryGetComponent_Animation);
        animation = local_30;
        if ((char)bVar3 == '\0') {
          if (*ppUVar1 == (UnityEngine_Transform_o *)0x0) goto LAB_03e35066;
          bVar3 = UnityEngine_Component__TryGetComponent<object>
                            ((UnityEngine_Component_o *)*ppUVar1,(Il2CppObject **)&local_38,
                             MethodInfo_Boolean_TryGetComponent_Animator);
          animator = local_38;
          if ((char)bVar3 == '\0') {
            return;
          }
          __this_01 = (CustomLogic_CustomLogicAnimatorBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicAnimatorBuiltin);
          CustomLogic_CustomLogicAnimatorBuiltin___ctor
                    (__this_01,(CustomLogic_BuiltinClassInstance_o *)__this,animator,
                     (MethodInfo *)0x0);
          (__this->fields)._animator = __this_01;
          ppCVar5 = &(__this->fields)._animator;
        }
        else {
          __this_01 = (CustomLogic_CustomLogicAnimatorBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicAnimationBuiltin);
          CustomLogic_CustomLogicAnimationBuiltin___ctor
                    ((CustomLogic_CustomLogicAnimationBuiltin_o *)__this_01,
                     (CustomLogic_BuiltinClassInstance_o *)__this,animation,(MethodInfo *)0x0);
          (__this->fields)._animation = (CustomLogic_CustomLogicAnimationBuiltin_o *)__this_01;
          ppCVar5 = (CustomLogic_CustomLogicAnimatorBuiltin_o **)&(__this->fields)._animation;
        }
        il2cpp_runtime_glue(ppCVar5,__this_01);
        return;
      }
    }
  }
LAB_03e35066:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_Position (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e35070

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Position
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    v = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Position
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Position (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e35090

void CustomLogic_CustomLogicTransformBuiltin__set_Position
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_position
              (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_LocalPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_LocalPosition (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e350c0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_LocalPosition
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    v = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_LocalPosition
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_LocalPosition (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e350e0

void CustomLogic_CustomLogicTransformBuiltin__set_LocalPosition
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_localPosition
              (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_Rotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e35110

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Rotation
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_Fields v;
  
  if ((char)(__this->fields)._needSetRotation == '\0') {
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit
                       ((UnityEngine_Vector3_o)(__this->fields)._internalRotation.fields,
                        (MethodInfo *)0x0);
    return pCVar1;
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    rotation = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
    UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
    euler.fields.x = UVar2.fields.x * 57.29578;
    euler.fields.y = UVar2.fields.y * 57.29578;
    euler.fields.z = UVar2.fields.z * 57.29578;
    v = (UnityEngine_Vector3_Fields)
        UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    (__this->fields)._internalRotation.fields = v;
    *(undefined1 *)&(__this->fields)._needSetRotation = 0;
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit
                       ((UnityEngine_Vector3_o)v,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Rotation
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Rotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e35180

void CustomLogic_CustomLogicTransformBuiltin__set_Rotation
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Transform_o *__this_00;
  float fVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o value_00;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar3 = (value->fields).Value.fields.z;
    fVar4 = (value->fields).Value.fields.y;
    (__this->fields)._internalRotation.fields.x = (value->fields).Value.fields.x;
    (__this->fields)._internalRotation.fields.y = fVar4;
    (__this->fields)._internalRotation.fields.z = fVar3;
    *(undefined1 *)&(__this->fields)._needSetRotation = 0;
    __this_00 = (__this->fields).Value;
    uVar1 = (__this->fields)._internalRotation.fields.x;
    uVar2 = (__this->fields)._internalRotation.fields.y;
    euler.fields.x = (float)uVar1 * 0.017453292;
    euler.fields.y = (float)uVar2 * 0.017453292;
    euler.fields.z = (__this->fields)._internalRotation.fields.z * 0.017453292;
    value_00 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_rotation(__this_00,value_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_LocalRotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_LocalRotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e351e0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_LocalRotation
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_Fields v;
  
  if (*(char *)((long)&(__this->fields)._needSetRotation + 1) == '\0') {
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit
                       ((UnityEngine_Vector3_o)(__this->fields)._internalLocalRotation.fields,
                        (MethodInfo *)0x0);
    return pCVar1;
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    rotation = UnityEngine_Transform__get_localRotation(__this_00,(MethodInfo *)0x0);
    UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
    euler.fields.x = UVar2.fields.x * 57.29578;
    euler.fields.y = UVar2.fields.y * 57.29578;
    euler.fields.z = UVar2.fields.z * 57.29578;
    v = (UnityEngine_Vector3_Fields)
        UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    (__this->fields)._internalLocalRotation.fields = v;
    *(undefined1 *)((long)&(__this->fields)._needSetRotation + 1) = 0;
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit
                       ((UnityEngine_Vector3_o)v,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_LocalRotation
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_LocalRotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e35250

void CustomLogic_CustomLogicTransformBuiltin__set_LocalRotation
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Transform_o *__this_00;
  float fVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o value_00;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar3 = (value->fields).Value.fields.z;
    fVar4 = (value->fields).Value.fields.y;
    (__this->fields)._internalLocalRotation.fields.x = (value->fields).Value.fields.x;
    (__this->fields)._internalLocalRotation.fields.y = fVar4;
    (__this->fields)._internalLocalRotation.fields.z = fVar3;
    *(undefined1 *)((long)&(__this->fields)._needSetRotation + 1) = 0;
    __this_00 = (__this->fields).Value;
    uVar1 = (__this->fields)._internalLocalRotation.fields.x;
    uVar2 = (__this->fields)._internalLocalRotation.fields.y;
    euler.fields.x = (float)uVar1 * 0.017453292;
    euler.fields.y = (float)uVar2 * 0.017453292;
    euler.fields.z = (__this->fields)._internalLocalRotation.fields.z * 0.017453292;
    value_00 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localRotation(__this_00,value_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_QuaternionRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_QuaternionRotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e352b0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__get_QuaternionRotation
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  UnityEngine_Quaternion_o q;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    q = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_QuaternionRotation
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_QuaternionRotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* value, const MethodInfo* method);
// 0x3e352d0

void CustomLogic_CustomLogicTransformBuiltin__set_QuaternionRotation
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicQuaternionBuiltin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  *(undefined2 *)&(__this->fields)._needSetRotation = 0x101;
  if ((value != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_rotation
              (__this_00,(UnityEngine_Quaternion_o)(value->fields).Value.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_QuaternionLocalRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_QuaternionLocalRotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e35300

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__get_QuaternionLocalRotation
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  UnityEngine_Quaternion_o q;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    q = UnityEngine_Transform__get_localRotation(__this_00,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_QuaternionLocalRotation
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_QuaternionLocalRotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* value, const MethodInfo* method);
// 0x3e35320

void CustomLogic_CustomLogicTransformBuiltin__set_QuaternionLocalRotation
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicQuaternionBuiltin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  *(undefined2 *)&(__this->fields)._needSetRotation = 0x101;
  if ((value != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_localRotation
              (__this_00,(UnityEngine_Quaternion_o)(value->fields).Value.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Scale
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_Scale (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e35350

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Scale
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    v = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Scale
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Scale (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e35370

void CustomLogic_CustomLogicTransformBuiltin__set_Scale
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_localScale
              (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Forward
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_Forward (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e353a0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Forward
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    v = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Forward
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Forward (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e353c0

void CustomLogic_CustomLogicTransformBuiltin__set_Forward
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_forward
              (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Up
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_Up (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e353f0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Up
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    v = UnityEngine_Transform__get_up(__this_00,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Up
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Up (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e35410

void CustomLogic_CustomLogicTransformBuiltin__set_Up
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_up
              (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Right
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_Right (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e35440

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Right
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    v = UnityEngine_Transform__get_right(__this_00,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Right
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Right (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3e35460

void CustomLogic_CustomLogicTransformBuiltin__set_Right
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_right
              (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Parent
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_Parent (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e35490

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Parent
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Transform_o *pUVar2;
  undefined1 auVar3 [16];
  
  if (DAT_05702ddf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702ddf = '\x01';
  }
  pUVar2 = (__this->fields).Value;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 == '\0') {
      return (CustomLogic_CustomLogicTransformBuiltin_o *)0x0;
    }
    pUVar2 = (__this->fields).Value;
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
      auVar3 = il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(auVar3._0_8_,pUVar2,auVar3._8_8_);
      return auVar3._0_8_;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Parent
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Parent (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* value, const MethodInfo* method);
// 0x3e35550

void CustomLogic_CustomLogicTransformBuiltin__set_Parent
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicTransformBuiltin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *p;
  
  __this_00 = (__this->fields).Value;
  if (value == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto LAB_03e3557e;
    p = (UnityEngine_Transform_o *)0x0;
  }
  else {
    if (__this_00 == (UnityEngine_Transform_o *)0x0) {
LAB_03e3557e:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    p = (value->fields).Value;
  }
  UnityEngine_Transform__SetParent(__this_00,p,(MethodInfo *)0x0);
  *(undefined2 *)&(__this->fields)._needSetRotation = 0x101;
  return;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicTransformBuiltin__get_Name (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e35590

System_String_o *
CustomLogic_CustomLogicTransformBuiltin__get_Name
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  System_String_o *pSVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pSVar1 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Layer
// il2cpp: int32_t CustomLogic_CustomLogicTransformBuiltin__get_Layer (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e355b0

int32_t CustomLogic_CustomLogicTransformBuiltin__get_Layer
                  (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  int32_t iVar1;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      iVar1 = UnityEngine_GameObject__get_layer(__this_01,(MethodInfo *)0x0);
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Layer
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Layer (CustomLogic_CustomLogicTransformBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e355e0

void CustomLogic_CustomLogicTransformBuiltin__set_Layer
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__set_layer(__this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Animation
// il2cpp: CustomLogic_CustomLogicAnimationBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_Animation (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e35610

CustomLogic_CustomLogicAnimationBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Animation
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._animation;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Animator
// il2cpp: CustomLogic_CustomLogicAnimatorBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_Animator (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e35620

CustomLogic_CustomLogicAnimatorBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Animator
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._animator;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_AudioSource
// il2cpp: CustomLogic_CustomLogicAudioSourceBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_AudioSource (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e35630

CustomLogic_CustomLogicAudioSourceBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__get_AudioSource
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._audioSource;
}


// CustomLogic.CustomLogicTransformBuiltin$$GetTransform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__GetTransform (CustomLogic_CustomLogicTransformBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3e35640

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__GetTransform
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,System_String_o *name,
          MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Transform_o *pUVar2;
  undefined1 auVar3 [16];
  
  if (DAT_05702de0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702de0 = '\x01';
  }
  pUVar2 = (__this->fields).Value;
  if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar2 = UnityEngine_Transform__Find(pUVar2,name,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    auVar3 = il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(auVar3._0_8_,pUVar2,auVar3._8_8_);
    return auVar3._0_8_;
  }
  return (CustomLogic_CustomLogicTransformBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicTransformBuiltin$$GetTransforms
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__GetTransforms (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e356f0

/* WARNING: Removing unreachable block (ram,0x03e35a0e) */

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__GetTransforms
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar8;
  char cVar9;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  System_Collections_IEnumerator_o *pSVar10;
  VirtualInvokeData *pVVar11;
  UnityEngine_Transform_o *pUVar12;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_02;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  
  if (DAT_05702de1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Transform);
    DAT_05702de1 = '\x01';
  }
  __this_01 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  pUVar12 = (__this->fields).Value;
  if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar10 = UnityEngine_Transform__GetEnumerator(pUVar12,(MethodInfo *)0x0);
  if (pSVar10 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    pSVar6 = pSVar10->klass;
    uVar3._0_1_ = (pSVar6->_2).rank;
    uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IEnumerator) {
          pVVar11 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar15);
          goto LAB_03e35813;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar15);
    }
    pVVar11 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar10,TypeInfo_IEnumerator,0);
LAB_03e35813:
    cVar9 = (*pVVar11->methodPtr)(pSVar10,pVVar11->method);
    if (cVar9 == '\0') {
      plVar13 = (long *)il2cpp_runtime_glue(pSVar10,TypeInfo_IDisposable);
      if (plVar13 == (long *)0x0) {
        return __this_01;
      }
      lVar15 = *plVar13;
      if ((ulong)*(ushort *)(lVar15 + 0x12e) == 0) goto LAB_03e359af;
      lVar16 = 0;
      break;
    }
    pSVar6 = pSVar10->klass;
    uVar4._0_1_ = (pSVar6->_2).rank;
    uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_IEnumerator) {
          pVVar11 = pSVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar15) + 1);
          goto LAB_03e35898;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar15);
    }
    pVVar11 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar10,TypeInfo_IEnumerator,1);
LAB_03e35898:
    pUVar12 = (UnityEngine_Transform_o *)(*pVVar11->methodPtr)(pSVar10,pVVar11->method);
    if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
      bVar2 = (TypeInfo_Transform->_2).naturalAligment;
      if (((pUVar12->klass->_2).naturalAligment < bVar2) ||
         ((pUVar12->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Transform)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pUVar12);
      }
    }
    if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (__this_01->fields).List;
    auVar17 = il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
    __this_02 = auVar17._0_8_;
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_02,pUVar12,auVar17._8_8_);
    lVar15 = MethodInfo_Void_Add;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar8 = (__this_00->fields)._items;
    if (pSVar8 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar5 = (__this_00->fields)._size;
    if (uVar5 < (uint)pSVar8->max_length) {
      (__this_00->fields)._size = uVar5 + 1;
      pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)__this_02;
      il2cpp_runtime_glue(pSVar8->m_Items + (int)uVar5,__this_02);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,(Il2CppObject *)__this_02,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while (lVar16 = lVar16 + 0x10, (ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16) {
    if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_IDisposable) {
      puVar14 = (undefined8 *)
                (lVar15 + (long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) * 0x10 + 0x138);
      goto LAB_03e359cd;
    }
  }
LAB_03e359af:
  puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar13,TypeInfo_IDisposable,0);
LAB_03e359cd:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin$$IsPlayingAnimation
// il2cpp: bool CustomLogic_CustomLogicTransformBuiltin__IsPlayingAnimation (CustomLogic_CustomLogicTransformBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x3e35b10

bool_conflict
CustomLogic_CustomLogicTransformBuiltin__IsPlayingAnimation
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,System_String_o *anim,
          MethodInfo *method)

{
  CustomLogic_CustomLogicAnimationBuiltin_o *__this_00;
  bool_conflict bVar1;
  System_String_o *b;
  
  __this_00 = (__this->fields)._animation;
  if (__this_00 != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
    bVar1 = CustomLogic_CustomLogicAnimationBuiltin__IsPlaying(__this_00,anim,(MethodInfo *)0x0);
    return bVar1;
  }
  if ((__this->fields)._animator != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
    if (anim != (System_String_o *)0x0) {
      b = System_String__Replace(anim,0x2e,0x5f,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality((__this->fields)._currentAnimation,b,(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0;
}


// CustomLogic.CustomLogicTransformBuiltin$$PlayAnimation
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__PlayAnimation (CustomLogic_CustomLogicTransformBuiltin_o* __this, System_String_o* anim, float fade, const MethodInfo* method);
// 0x3e35b60

void CustomLogic_CustomLogicTransformBuiltin__PlayAnimation
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,System_String_o *anim,float fade,
               MethodInfo *method)

{
  CustomLogic_CustomLogicAnimationBuiltin_o *pCVar1;
  CustomLogic_CustomLogicAnimatorBuiltin_o *pCVar2;
  UnityEngine_Animator_o *__this_00;
  bool_conflict bVar3;
  System_String_o *b;
  System_String_o **ppSVar4;
  
  pCVar1 = (__this->fields)._animation;
  if (pCVar1 == (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
    if ((__this->fields)._animator != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      if (anim != (System_String_o *)0x0) {
        b = System_String__Replace(anim,0x2e,0x5f,(MethodInfo *)0x0);
        bVar3 = System_String__op_Inequality((__this->fields)._currentAnimation,b,(MethodInfo *)0x0)
        ;
        if ((char)bVar3 == '\0') {
          return;
        }
        pCVar2 = (__this->fields)._animator;
        if ((pCVar2 != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
           (__this_00 = (pCVar2->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
          ppSVar4 = &(__this->fields)._currentAnimation;
          UnityEngine_Animator__CrossFade(__this_00,b,fade,(MethodInfo *)0x0);
          *ppSVar4 = b;
          il2cpp_runtime_glue(ppSVar4,b);
          return;
        }
      }
      goto LAB_03e35c29;
    }
  }
  else {
    bVar3 = CustomLogic_CustomLogicAnimationBuiltin__IsPlaying(pCVar1,anim,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pCVar1 = (__this->fields)._animation;
      if (pCVar1 != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
        CustomLogic_CustomLogicAnimationBuiltin__PlayAnimation(pCVar1,anim,fade,0,(MethodInfo *)0x0)
        ;
        return;
      }
LAB_03e35c29:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// CustomLogic.CustomLogicTransformBuiltin$$GetAnimationLength
// il2cpp: float CustomLogic_CustomLogicTransformBuiltin__GetAnimationLength (CustomLogic_CustomLogicTransformBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x3e35c30

float CustomLogic_CustomLogicTransformBuiltin__GetAnimationLength
                (CustomLogic_CustomLogicTransformBuiltin_o *__this,System_String_o *anim,
                MethodInfo *method)

{
  CustomLogic_CustomLogicAnimationBuiltin_o *__this_00;
  CustomLogic_CustomLogicAnimatorBuiltin_o *__this_01;
  System_String_o *anim_00;
  float fVar1;
  
  __this_00 = (__this->fields)._animation;
  if (__this_00 != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
    fVar1 = CustomLogic_CustomLogicAnimationBuiltin__GetAnimationLength
                      (__this_00,anim,(MethodInfo *)0x0);
    return fVar1;
  }
  __this_01 = (__this->fields)._animator;
  if (__this_01 != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
    if (anim != (System_String_o *)0x0) {
      anim_00 = System_String__Replace(anim,0x2e,0x5f,(MethodInfo *)0x0);
      fVar1 = CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationLength
                        (__this_01,anim_00,(MethodInfo *)0x0);
      return fVar1;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return -1.0;
}


// CustomLogic.CustomLogicTransformBuiltin$$PlaySound
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__PlaySound (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e35c90

void CustomLogic_CustomLogicTransformBuiltin__PlaySound
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicAudioSourceBuiltin_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields)._audioSource;
  if (pCVar1 != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
    bVar2 = CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    pCVar1 = (__this->fields)._audioSource;
    if (pCVar1 != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
      CustomLogic_CustomLogicAudioSourceBuiltin__Play(pCVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$StopSound
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__StopSound (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e35cc0

void CustomLogic_CustomLogicTransformBuiltin__StopSound
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicAudioSourceBuiltin_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields)._audioSource;
  if (pCVar1 != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
    bVar2 = CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields)._audioSource;
    if (pCVar1 != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
      CustomLogic_CustomLogicAudioSourceBuiltin__Stop(pCVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$ToggleParticle
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__ToggleParticle (CustomLogic_CustomLogicTransformBuiltin_o* __this, bool enabled, const MethodInfo* method);
// 0x3e35cf0

void CustomLogic_CustomLogicTransformBuiltin__ToggleParticle
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,bool_conflict enabled,
               MethodInfo *method)

{
  UnityEngine_ParticleSystem_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_ParticleSystem_EmissionModule_Fields local_18;
  
  local_18.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  pUVar1 = (__this->fields)._particleSystem;
  if (pUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
    bVar2 = UnityEngine_ParticleSystem__get_isPlaying(pUVar1,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pUVar1 = (__this->fields)._particleSystem;
      if (pUVar1 == (UnityEngine_ParticleSystem_o *)0x0) goto LAB_03e35d4d;
      UnityEngine_ParticleSystem__Play(pUVar1,(MethodInfo *)0x0);
    }
    pUVar1 = (__this->fields)._particleSystem;
    if (pUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
      local_18.m_ParticleSystem =
           (UnityEngine_ParticleSystem_o *)
           UnityEngine_ParticleSystem__get_emission(pUVar1,(MethodInfo *)0x0);
      UnityEngine_ParticleSystem_EmissionModule__set_enabled
                ((UnityEngine_ParticleSystem_EmissionModule_o)&local_18,enabled & 0xff,
                 (MethodInfo *)0x0);
      return;
    }
  }
LAB_03e35d4d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$InverseTransformDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__InverseTransformDirection (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* direction, const MethodInfo* method);
// 0x3e35d60

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__InverseTransformDirection
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *direction,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((direction != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    v = UnityEngine_Transform__InverseTransformDirection
                  (__this_00,(direction->fields).Value.fields,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$InverseTransformPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__InverseTransformPoint (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* point, const MethodInfo* method);
// 0x3e35d90

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__InverseTransformPoint
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *point,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((point != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    v = UnityEngine_Transform__InverseTransformPoint
                  (__this_00,(point->fields).Value.fields,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$TransformDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__TransformDirection (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* direction, const MethodInfo* method);
// 0x3e35dc0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__TransformDirection
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *direction,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((direction != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    v = UnityEngine_Transform__TransformDirection
                  (__this_00,(direction->fields).Value.fields,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$TransformPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__TransformPoint (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* point, const MethodInfo* method);
// 0x3e35df0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__TransformPoint
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *point,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((point != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    v = UnityEngine_Transform__TransformPoint
                  (__this_00,(point->fields).Value.fields,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$Rotate
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__Rotate (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* rotation, const MethodInfo* method);
// 0x3e35e20

void CustomLogic_CustomLogicTransformBuiltin__Rotate
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *rotation,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  if ((rotation != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__Rotate
              (__this_00,(UnityEngine_Vector3_o)(rotation->fields).Value.fields,(MethodInfo *)0x0);
    *(undefined2 *)&(__this->fields)._needSetRotation = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$RotateAround
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__RotateAround (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* point, CustomLogic_CustomLogicVector3Builtin_o* axis, float angle, const MethodInfo* method);
// 0x3e35e50

void CustomLogic_CustomLogicTransformBuiltin__RotateAround
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *point,
               CustomLogic_CustomLogicVector3Builtin_o *axis,float angle,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  *(undefined2 *)&(__this->fields)._needSetRotation = 0x101;
  if (((point != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
      (axis != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__RotateAround
              (__this_00,(UnityEngine_Vector3_o)(point->fields).Value.fields,
               (UnityEngine_Vector3_o)(axis->fields).Value.fields,angle,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$LookAt
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__LookAt (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* target, const MethodInfo* method);
// 0x3e35e90

void CustomLogic_CustomLogicTransformBuiltin__LookAt
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *target,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  *(undefined2 *)&(__this->fields)._needSetRotation = 0x101;
  if ((target != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__LookAt
              (__this_00,(UnityEngine_Vector3_o)(target->fields).Value.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$SetRenderersEnabled
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__SetRenderersEnabled (CustomLogic_CustomLogicTransformBuiltin_o* __this, bool enabled, const MethodInfo* method);
// 0x3e35ec0

void CustomLogic_CustomLogicTransformBuiltin__SetRenderersEnabled
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,bool_conflict enabled,
               MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  uint uVar1;
  System_Object_array *pSVar2;
  uint uVar3;
  
  if (DAT_05702de2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    DAT_05702de2 = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pSVar2 = UnityEngine_Component__GetComponentsInChildren<object>
                       ((UnityEngine_Component_o *)__this_00,MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    if (pSVar2 != (System_Object_array *)0x0) {
      uVar1 = (uint)pSVar2->max_length;
      if (0 < (int)uVar1) {
        uVar3 = 0;
        do {
          if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if ((UnityEngine_Renderer_o *)pSVar2->m_Items[(int)uVar3] == (UnityEngine_Renderer_o *)0x0
             ) goto LAB_03e35f4f;
          UnityEngine_Renderer__set_enabled
                    ((UnityEngine_Renderer_o *)pSVar2->m_Items[(int)uVar3],enabled & 0xff,
                     (MethodInfo *)0x0);
          uVar3 = uVar3 + 1;
          uVar1 = (uint)pSVar2->max_length;
        } while ((int)uVar3 < (int)uVar1);
      }
      return;
    }
  }
LAB_03e35f4f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$GetColliders
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__GetColliders (CustomLogic_CustomLogicTransformBuiltin_o* __this, bool recursive, const MethodInfo* method);
// 0x3e35f60

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__GetColliders
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,bool_conflict recursive,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  int iVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  System_Object_array *pSVar6;
  System_Object_array *pSVar7;
  long lVar8;
  CustomLogic_CustomLogicColliderBuiltin_o *pCVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  if (DAT_05702de3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Collider___GetComponentsInChildren_Collider);
    il2cpp_init_method_metadata(&MethodInfo_Collider___GetComponents_Collider);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05702de3 = '\x01';
  }
  __this_01 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Value;
  if ((__this_00 != (UnityEngine_Transform_o *)0x0) &&
     (__this_02 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_02 != (UnityEngine_GameObject_o *)0x0)) {
    if ((char)recursive == '\0') {
      pSVar6 = UnityEngine_GameObject__GetComponents<object>(__this_02,MethodInfo_Collider___GetComponents_Collider);
      if (pSVar6 == (System_Object_array *)0x0) goto LAB_03e362d1;
      iVar5 = (int)pSVar6->max_length;
      if (__this_01 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        if (iVar5 < 1) {
          return __this_01;
        }
        uVar11 = 0;
        if ((pSVar6->max_length & 0xffffffff) != 0) {
          do {
            pIVar3 = pSVar6->m_Items[uVar11];
            pSVar4 = (__this_01->fields).List;
            pSVar7 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
            if (pSVar7 == (System_Object_array *)0x0) goto LAB_03e362d1;
            if ((pIVar3 != (Il2CppObject *)0x0) &&
               (lVar8 = il2cpp_runtime_glue(pIVar3,(((pSVar7->obj).klass)->_1).element_class),
               lVar8 == 0)) goto LAB_03e362db;
            if ((int)pSVar7->max_length == 0) break;
            pSVar7->m_Items[0] = pIVar3;
            il2cpp_runtime_glue(pSVar7->m_Items,pIVar3);
            pCVar9 = (CustomLogic_CustomLogicColliderBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColliderBuiltin);
            CustomLogic_CustomLogicColliderBuiltin___ctor(pCVar9,pSVar7,(MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03e362d1;
            piVar1 = &(pSVar4->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar7 = (pSVar4->fields)._items;
            if (pSVar7 == (System_Object_array *)0x0) goto LAB_03e362d1;
            uVar2 = (pSVar4->fields)._size;
            if (uVar2 < (uint)pSVar7->max_length) {
              (pSVar4->fields)._size = uVar2 + 1;
              pSVar7->m_Items[(int)uVar2] = (Il2CppObject *)pCVar9;
              il2cpp_runtime_glue(pSVar7->m_Items + (int)uVar2,pCVar9);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar4,(Il2CppObject *)pCVar9,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
            }
            uVar11 = uVar11 + 1;
            uVar2 = (uint)pSVar6->max_length;
            if ((long)(int)uVar2 <= (long)uVar11) {
              return __this_01;
            }
          } while (uVar11 < uVar2);
        }
        goto LAB_03e362d6;
      }
    }
    else {
      pSVar6 = UnityEngine_GameObject__GetComponentsInChildren<object>(__this_02,MethodInfo_Collider___GetComponentsInChildren_Collider);
      if (pSVar6 == (System_Object_array *)0x0) goto LAB_03e362d1;
      iVar5 = (int)pSVar6->max_length;
      if (__this_01 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        if (iVar5 < 1) {
          return __this_01;
        }
        uVar11 = 0;
        if ((pSVar6->max_length & 0xffffffff) != 0) {
          do {
            pIVar3 = pSVar6->m_Items[uVar11];
            pSVar4 = (__this_01->fields).List;
            pSVar7 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
            if (pSVar7 == (System_Object_array *)0x0) goto LAB_03e362d1;
            if ((pIVar3 != (Il2CppObject *)0x0) &&
               (lVar8 = il2cpp_runtime_glue(pIVar3,(((pSVar7->obj).klass)->_1).element_class),
               lVar8 == 0)) {
LAB_03e362db:
              uVar10 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
              il2cpp_glue_02274a00(uVar10,0);
            }
            if ((int)pSVar7->max_length == 0) break;
            pSVar7->m_Items[0] = pIVar3;
            il2cpp_runtime_glue(pSVar7->m_Items,pIVar3);
            pCVar9 = (CustomLogic_CustomLogicColliderBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColliderBuiltin);
            CustomLogic_CustomLogicColliderBuiltin___ctor(pCVar9,pSVar7,(MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03e362d1;
            piVar1 = &(pSVar4->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar7 = (pSVar4->fields)._items;
            if (pSVar7 == (System_Object_array *)0x0) goto LAB_03e362d1;
            uVar2 = (pSVar4->fields)._size;
            if (uVar2 < (uint)pSVar7->max_length) {
              (pSVar4->fields)._size = uVar2 + 1;
              pSVar7->m_Items[(int)uVar2] = (Il2CppObject *)pCVar9;
              il2cpp_runtime_glue(pSVar7->m_Items + (int)uVar2,pCVar9);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar4,(Il2CppObject *)pCVar9,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
            }
            uVar11 = uVar11 + 1;
            uVar2 = (uint)pSVar6->max_length;
            if ((long)(int)uVar2 <= (long)uVar11) {
              return __this_01;
            }
          } while (uVar11 < uVar2);
        }
LAB_03e362d6:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    if (iVar5 < 1) {
      return __this_01;
    }
  }
LAB_03e362d1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$SetActive
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__SetActive (CustomLogic_CustomLogicTransformBuiltin_o* __this, bool active, const MethodInfo* method);
// 0x3e362f0

void CustomLogic_CustomLogicTransformBuiltin__SetActive
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,bool_conflict active,
               MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,active & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$op_Implicit
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__op_Implicit (UnityEngine_Transform_o* value, const MethodInfo* method);
// 0x3e2fb70

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__op_Implicit
          (UnityEngine_Transform_o *value,MethodInfo *method)

{
  undefined1 auVar1 [16];
  
  if (DAT_05702de4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
    DAT_05702de4 = '\x01';
  }
  auVar1 = il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
  CustomLogic_CustomLogicTransformBuiltin___ctor(auVar1._0_8_,value,auVar1._8_8_);
  return auVar1._0_8_;
}


// CustomLogic.CustomLogicTransformBuiltin$$op_Implicit
// il2cpp: UnityEngine_Transform_o* CustomLogic_CustomLogicTransformBuiltin__op_Implicit (CustomLogic_CustomLogicTransformBuiltin_o* value, const MethodInfo* method);
// 0x3e36320

UnityEngine_Transform_o *
CustomLogic_CustomLogicTransformBuiltin__op_Implicit
          (CustomLogic_CustomLogicTransformBuiltin_o *value,MethodInfo *method)

{
  if (value != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    return (value->fields).Value;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicTransformBuiltin____Eq__ (CustomLogic_CustomLogicTransformBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3e36340

bool_conflict
CustomLogic_CustomLogicTransformBuiltin____Eq__
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *x;
  Il2CppClass *y;
  bool_conflict bVar2;
  undefined8 in_RAX;
  
  if (DAT_05702de5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
    in_RAX = il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702de5 = '\x01';
  }
  if (self == (Il2CppObject *)0x0) {
    if (other == (Il2CppObject *)0x0) {
      return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),1);
    }
  }
  else {
    bVar1 = (TypeInfo_CustomLogicTransformBuiltin->_2).naturalAligment;
    if ((((bVar1 <= (self->klass->_2).naturalAligment) && (other != (Il2CppObject *)0x0)) &&
        ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicTransformBuiltin)) &&
       ((bVar1 <= (other->klass->_2).naturalAligment &&
        ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicTransformBuiltin)))) {
      x = self[3].klass;
      y = other[3].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return 0;
}


// CustomLogic.CustomLogicTransformBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicTransformBuiltin____Hash__ (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e36410

int32_t CustomLogic_CustomLogicTransformBuiltin____Hash__
                  (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  
  if (DAT_05702de6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702de6 = '\x01';
  }
  pUVar1 = (__this->fields).Value;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return 0;
  }
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    iVar3 = (*(pUVar1->klass->vtable)._2_GetHashCode.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method);
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTransformBuiltin__get_ClassName (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e364a0

System_String_o *
CustomLogic_CustomLogicTransformBuiltin__get_ClassName
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702de7 == '\0') {
    il2cpp_init_method_metadata(&"Transform");
    DAT_05702de7 = '\x01';
  }
  return "Transform";
}


// CustomLogic.CustomLogicTransformBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTransformBuiltin__get_IsAbstract (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e364d0

bool_conflict
CustomLogic_CustomLogicTransformBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTransformBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTransformBuiltin__get_IsStatic (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e364e0

bool_conflict
CustomLogic_CustomLogicTransformBuiltin__get_IsStatic
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTransformBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x3e364f0

bool_conflict
CustomLogic_CustomLogicTransformBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


