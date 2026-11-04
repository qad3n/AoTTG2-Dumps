// Type: CustomLogic.CustomLogicTransformBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTransformBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicTransformBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicTransformBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicTransformBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fa3760

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  local_res8[0] = 0;
  NullCheck(args);
  local_res8[0] = (int32_t)args->max_length;
  pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTransformBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181fa6200

void CustomLogic_CustomLogicTransformBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184345884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345884 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicTransformBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransform>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetTransform_b__20_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa5050

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetTransform_b__20_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool bVar1;
  System_String_o *n;
  UnityEngine_Transform_o *pUVar2;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_184345885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345885 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    n = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                  (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_184345848 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184345848 = '\x01';
      }
      pUVar2 = (__c->fields).Value;
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Transform__Find(pUVar2,n,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
          CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,pUVar2,(MethodInfo *)0x0);
          return (Il2CppObject *)__this_00;
        }
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransforms>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetTransforms_b__21_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa5180

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetTransforms_b__21_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicTransformBuiltin__GetTransforms(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlayingAnimation>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__IsPlayingAnimation_b__22_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa5360

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__IsPlayingAnimation_b__22_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicAnimationBuiltin_o *__this_00;
  System_String_o *pSVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_184345886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345886 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      if ((__c->fields)._animation == (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
        if ((__c->fields)._animator == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
          local_res18[0] = false;
        }
        else {
          if (pSVar1 == (System_String_o *)0x0) goto label_181fa544a;
          pSVar1 = System_String__Replace(pSVar1,0x2e,0x5f,(MethodInfo *)0x0);
          local_res18[0] =
               System_String__op_Equality((__c->fields)._currentAnimation,pSVar1,(MethodInfo *)0x0);
        }
      }
      else {
        __this_00 = (__c->fields)._animation;
        if (__this_00 == (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) goto label_181fa544a;
        local_res18[0] =
             CustomLogic_CustomLogicAnimationBuiltin__IsPlaying(__this_00,pSVar1,(MethodInfo *)0x0);
      }
      pIVar2 = il2cpp_value_box(g_data_184354de8,local_res18);
      return pIVar2;
    }
  }
label_181fa544a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimation>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__23_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa5520

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__23_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicAnimatorBuiltin_o *pCVar3;
  UnityEngine_Animator_o *__this_00;
  CustomLogic_CustomLogicAnimationBuiltin_o *pCVar4;
  bool bVar5;
  System_String_o *pSVar6;
  float fade;
  
  if (Il2CppMethodInitialized_184345887 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345887 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_181fa56c4:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    uVar1 = (uint)__a->max_length;
    if ((int)uVar1 < 2) {
      fade = 0.1;
    }
    else {
      if (uVar1 < 2) goto label_181fa56c4;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fade = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       (pIVar2,(MethodInfo_66ED40 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      if ((__c->fields)._animation == (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
        if ((__c->fields)._animator != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
          if (pSVar6 == (System_String_o *)0x0) goto label_181fa56be;
          pSVar6 = System_String__Replace(pSVar6,0x2e,0x5f,(MethodInfo *)0x0);
          bVar5 = System_String__op_Inequality((__c->fields)._currentAnimation,pSVar6,(MethodInfo *)0x0);
          if (bVar5) {
            pCVar3 = (__c->fields)._animator;
            if ((pCVar3 == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) ||
               (__this_00 = (pCVar3->fields).Value, __this_00 == (UnityEngine_Animator_o *)0x0))
            goto label_181fa56be;
            UnityEngine_Animator__CrossFade_2eae7e0(__this_00,pSVar6,fade,(MethodInfo *)0x0);
            (__c->fields)._currentAnimation = pSVar6;
            Il2CppCodeGenWriteBarrier(&(__c->fields)._currentAnimation,pSVar6);
          }
        }
      }
      else {
        pCVar4 = (__c->fields)._animation;
        if (pCVar4 == (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) goto label_181fa56be;
        bVar5 = CustomLogic_CustomLogicAnimationBuiltin__IsPlaying(pCVar4,pSVar6,(MethodInfo *)0x0);
        if (!bVar5) {
          pCVar4 = (__c->fields)._animation;
          if (pCVar4 == (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) goto label_181fa56be;
          CustomLogic_CustomLogicAnimationBuiltin__PlayAnimation(pCVar4,pSVar6,fade,0,(MethodInfo *)0x0);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
label_181fa56be:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationLength>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__24_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa4ea0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__24_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicAnimatorBuiltin_o *__this_00;
  CustomLogic_CustomLogicAnimationBuiltin_o *__this_01;
  System_String_o *pSVar1;
  Il2CppObject *pIVar2;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184345888 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345888 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      if ((__c->fields)._animation == (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
        if ((__c->fields)._animator == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
          local_res18[0] = -1.0;
        }
        else {
          if (pSVar1 == (System_String_o *)0x0) goto label_181fa4f95;
          __this_00 = (__c->fields)._animator;
          pSVar1 = System_String__Replace(pSVar1,0x2e,0x5f,(MethodInfo *)0x0);
          local_res18[0] =
               CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationLength(__this_00,pSVar1,(MethodInfo *)0x0);
        }
      }
      else {
        __this_01 = (__c->fields)._animation;
        if (__this_01 == (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) goto label_181fa4f95;
        local_res18[0] =
             CustomLogic_CustomLogicAnimationBuiltin__GetAnimationLength(__this_01,pSVar1,(MethodInfo *)0x0);
      }
      pIVar2 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar2;
    }
  }
label_181fa4f95:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlaySound>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__PlaySound_b__25_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa56d0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__PlaySound_b__25_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicAudioSourceBuiltin_o *pCVar1;
  bool bVar2;
  
  if ((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields)._audioSource, pCVar1 != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0)) {
    bVar2 = CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying(pCVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      pCVar1 = (__c->fields)._audioSource;
      if (pCVar1 == (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) goto label_181fa570a;
      CustomLogic_CustomLogicAudioSourceBuiltin__Play(pCVar1,(MethodInfo *)0x0);
    }
    return (Il2CppObject *)0x0;
  }
label_181fa570a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__StopSound>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__StopSound_b__26_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa5ae0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__StopSound_b__26_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicAudioSourceBuiltin_o *pCVar1;
  bool bVar2;
  
  if ((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields)._audioSource, pCVar1 != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0)) {
    bVar2 = CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying(pCVar1,(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__c->fields)._audioSource;
      if (pCVar1 == (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) goto label_181fa5b1a;
      CustomLogic_CustomLogicAudioSourceBuiltin__Stop(pCVar1,(MethodInfo *)0x0);
    }
    return (Il2CppObject *)0x0;
  }
label_181fa5b1a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToggleParticle>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__ToggleParticle_b__27_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa5ce0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__ToggleParticle_b__27_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_ParticleSystem_o *pUVar1;
  bool value;
  bool bVar2;
  UnityEngine_ParticleSystem_EmissionModule_o local_res18 [2];
  
  if (Il2CppMethodInitialized_184345889 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345889 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                      (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      pUVar1 = (__c->fields)._particleSystem;
      local_res18[0].fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
      if (pUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
        bVar2 = UnityEngine_ParticleSystem__get_isPlaying(pUVar1,(MethodInfo *)0x0);
        if (!bVar2) {
          pUVar1 = (__c->fields)._particleSystem;
          if (pUVar1 == (UnityEngine_ParticleSystem_o *)0x0) goto label_181fa5dc7;
          UnityEngine_ParticleSystem__Play_2fca570(pUVar1,(MethodInfo *)0x0);
        }
        pUVar1 = (__c->fields)._particleSystem;
        if (pUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
          local_res18[0].fields.m_ParticleSystem =
               (UnityEngine_ParticleSystem_EmissionModule_Fields)
               UnityEngine_ParticleSystem__get_noise(pUVar1,(MethodInfo *)0x0);
          UnityEngine_ParticleSystem_EmissionModule__set_enabled(local_res18,value,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
      }
label_181fa5dc7:
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__InverseTransformDirection>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__InverseTransformDirection_b__28_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa51a0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__InverseTransformDirection_b__28_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o *pUVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_18434588a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434588a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      local_28.x = (pCVar1->fields).Value.fields.x;
      local_28.y = (pCVar1->fields).Value.fields.y;
      local_28.z = (pCVar1->fields).Value.fields.z;
      pUVar2 = UnityEngine_Transform__InverseTransformDirection
                         (&local_18,__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      local_28.x = (pUVar2->fields).x;
      local_28.y = (pUVar2->fields).y;
      local_28.z = (pUVar2->fields).z;
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                         ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__InverseTransformPoint>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__InverseTransformPoint_b__29_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa5280

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__InverseTransformPoint_b__29_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o *pUVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_18434588b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434588b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      local_28.x = (pCVar1->fields).Value.fields.x;
      local_28.y = (pCVar1->fields).Value.fields.y;
      local_28.z = (pCVar1->fields).Value.fields.z;
      pUVar2 = UnityEngine_Transform__InverseTransformPoint
                         (&local_18,__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      local_28.x = (pUVar2->fields).x;
      local_28.y = (pUVar2->fields).y;
      local_28.z = (pUVar2->fields).z;
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                         ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransformDirection>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__TransformDirection_b__30_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa5dd0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__TransformDirection_b__30_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o *pUVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_18434588c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434588c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      local_28.x = (pCVar1->fields).Value.fields.x;
      local_28.y = (pCVar1->fields).Value.fields.y;
      local_28.z = (pCVar1->fields).Value.fields.z;
      pUVar2 = UnityEngine_Transform__TransformDirection
                         (&local_18,__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      local_28.x = (pUVar2->fields).x;
      local_28.y = (pUVar2->fields).y;
      local_28.z = (pUVar2->fields).z;
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                         ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransformPoint>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__TransformPoint_b__31_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa5eb0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__TransformPoint_b__31_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o *pUVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_18434588d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434588d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      local_28.x = (pCVar1->fields).Value.fields.x;
      local_28.y = (pCVar1->fields).Value.fields.y;
      local_28.z = (pCVar1->fields).Value.fields.z;
      pUVar2 = UnityEngine_Transform__TransformPoint
                         (&local_18,__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      local_28.x = (pUVar2->fields).x;
      local_28.y = (pUVar2->fields).y;
      local_28.z = (pUVar2->fields).z;
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                         ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__Rotate>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__Rotate_b__32_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa5860

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__Rotate_b__32_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_18434588e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434588e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      local_18.x = (pCVar1->fields).Value.fields.x;
      local_18.y = (pCVar1->fields).Value.fields.y;
      local_18.z = (pCVar1->fields).Value.fields.z;
      UnityEngine_Transform__Rotate_2f59e30(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      (__c->fields)._needSetRotation = true;
      (__c->fields)._needSetLocalRotation = true;
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__RotateAround>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__RotateAround_b__33_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa5710

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__RotateAround_b__33_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  float angle;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_18434588f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434588f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
      ;
      if (1 < (uint)__a->max_length) {
        pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          angle = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (__a->m_Items[2],
                             (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
          ;
          if ((((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
               ((__c->fields)._needSetRotation = true, (__c->fields)._needSetLocalRotation = true,
               pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
              (pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
             (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
            local_28.x = (pCVar2->fields).Value.fields.x;
            local_28.y = (pCVar2->fields).Value.fields.y;
            local_28.z = (pCVar2->fields).Value.fields.z;
            local_18.x = (pCVar1->fields).Value.fields.x;
            local_18.y = (pCVar1->fields).Value.fields.y;
            local_18.z = (pCVar1->fields).Value.fields.z;
            UnityEngine_Transform__RotateAround
                      (__this_00,(UnityEngine_Vector3_o *)&local_18,(UnityEngine_Vector3_o *)&local_28,angle,
                       (MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
          goto label_181fa5847;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181fa5847:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__LookAt>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__LookAt_b__34_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa5460

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__LookAt_b__34_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184345890 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345890 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
        ((__c->fields)._needSetRotation = true, (__c->fields)._needSetLocalRotation = true,
        pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      local_18.x = (pCVar1->fields).Value.fields.x;
      local_18.y = (pCVar1->fields).Value.fields.y;
      local_18.z = (pCVar1->fields).Value.fields.z;
      UnityEngine_Transform__LookAt_2f599f0(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetRenderersEnabled>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__SetRenderersEnabled_b__35_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa59d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181fa5a8d: nop dword ptr [rax]

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__SetRenderersEnabled_b__35_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Transform_o *__this_00;
  bool value;
  System_Object_array *pSVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184345891 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345891 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_181fa5ad1:
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                      (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_18434584a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
        Il2CppMethodInitialized_18434584a = '\x01';
      }
      __this_00 = (__c->fields).Value;
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        pSVar1 = UnityEngine_Component__GetComponentsInChildren_object__665370
                           ((UnityEngine_Component_o *)__this_00,
                            (MethodInfo_665370 *)
                            MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
        if (pSVar1 != (System_Object_array *)0x0) {
          uVar2 = 0;
          while( true ) {
            if ((int)pSVar1->max_length <= (int)uVar2) {
              return (Il2CppObject *)0x0;
            }
            if ((uint)pSVar1->max_length <= uVar2) break;
            if ((UnityEngine_Renderer_o *)pSVar1->m_Items[(int)uVar2] == (UnityEngine_Renderer_o *)0x0)
            goto label_181fa5acb;
            UnityEngine_Renderer__set_enabled
                      ((UnityEngine_Renderer_o *)pSVar1->m_Items[(int)uVar2],value,(MethodInfo *)0x0);
            uVar2 = uVar2 + 1;
          }
          goto label_181fa5ad1;
        }
      }
    }
  }
label_181fa5acb:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetColliders>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetColliders_b__36_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa4fb0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetColliders_b__36_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool recursive;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_184345892 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345892 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    recursive = false;
    if (__a->max_length != 0) {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      recursive = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                            (obj,(MethodInfo_66E400 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    }
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicTransformBuiltin__GetColliders(__c,recursive,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetActive>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__SetActive_b__37_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa5920

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__SetActive_b__37_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Transform_o *__this_00;
  bool value;
  UnityEngine_GameObject_o *__this_01;
  
  if (Il2CppMethodInitialized_184345893 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345893 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                      (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if ((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,value,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__38_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa6030

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__38_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *x;
  Il2CppClass *y;
  Il2CppObject *pIVar3;
  undefined1 local_res18 [16];
  
  if (__a == (System_Object_array *)0x0) {
label_181fa614f:
    ThrowNullReferenceException();
  }
  if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
    ThrowIndexOutOfRangeException();
  }
  if (__c == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) goto label_181fa614f;
  pIVar3 = __a->m_Items[1];
  pIVar2 = __a->m_Items[0];
  if (Il2CppMethodInitialized_18434584d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434584d = '\x01';
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
    if (pIVar3 == (Il2CppObject *)0x0) {
      local_res18[0] = true;
      goto label_181fa612b;
    }
  }
  else {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin->_2).typeHierarchyDepth;
    if (((bVar1 <= (pIVar2->klass->_2).typeHierarchyDepth) &&
        ((pIVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin)) && (pIVar3 != (Il2CppObject *)0x0))
    {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar3->klass->_2).typeHierarchyDepth) &&
         ((pIVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin)) {
        x = pIVar2[3].klass;
        y = pIVar3[3].klass;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        local_res18[0] =
             UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
        goto label_181fa612b;
      }
    }
  }
  local_res18[0] = false;
label_181fa612b:
  pIVar3 = il2cpp_value_box(g_data_184354de8,local_res18);
  return pIVar3;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__39_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa6160

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__39_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  int32_t local_res10 [6];
  
  if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434584e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_18434584e = '\x01';
    }
    pUVar1 = (__c->fields).Value;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      local_res10[0] = 0;
    }
    else {
      pUVar1 = (__c->fields).Value;
      if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_181fa61fa;
      local_res10[0] =
           (*(pUVar1->klass->vtable)._2_GetHashCode.methodPtr)
                     (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method);
    }
    pIVar3 = il2cpp_value_box(g_data_184354e08,local_res10);
    return pIVar3;
  }
label_181fa61fa:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTransformBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f880e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTransformBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  ExitGames_Client_Photon_SerializeStreamMethod_o *pEVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *pSVar5;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_00;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_01;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_184345850 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"InverseTransformPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"InverseTransformDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"Animation");
    il2cpp_codegen_initialize_runtime_metadata(&"StopSound");
    il2cpp_codegen_initialize_runtime_metadata(&"QuaternionRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"TransformDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotate");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"LocalPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"QuaternionLocalRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationLength");
    il2cpp_codegen_initialize_runtime_metadata(&"Character");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Forward");
    il2cpp_codegen_initialize_runtime_metadata(&"GetColliders");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPlayingAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"PlaySound");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Parent");
    il2cpp_codegen_initialize_runtime_metadata(&"Up");
    il2cpp_codegen_initialize_runtime_metadata(&"RotateAround");
    il2cpp_codegen_initialize_runtime_metadata(&"MapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"Animator");
    il2cpp_codegen_initialize_runtime_metadata(&"ToggleParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"Layer");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTransforms");
    il2cpp_codegen_initialize_runtime_metadata(&"AudioSource");
    il2cpp_codegen_initialize_runtime_metadata(&"SetActive");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTransform");
    il2cpp_codegen_initialize_runtime_metadata(&"TransformPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"SetRenderersEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"LocalRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"LookAt");
    Il2CppMethodInitialized_184345850 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x7bb199a5) {
    if (uVar3 < 0x41e389fe) {
      if (uVar3 < 0x1e9e9f86) {
        if (uVar3 < 0x3134bcf) {
          if (uVar3 == 0x232777f) {
            bVar2 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f8abb0;
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345853 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_4
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_4
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
              Il2CppMethodInitialized_184345853 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_4
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
            pMVar7 = 
            MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_4
            ;
          }
          else {
            if (uVar3 != 0x3134bce) goto label_181f8abb0;
            bVar2 = System_String__op_Equality(name,"LocalRotation",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f8abb0;
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345854 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____get
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____set
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
              Il2CppMethodInitialized_184345854 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____get
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
            pMVar7 = 
            MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____set
            ;
          }
        }
        else {
          if (uVar3 == 0xfe07306) {
            bVar2 = System_String__op_Equality(name,"Name",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f8abb0;
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434585c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_13_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
              Il2CppMethodInitialized_18434585c = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
            pMVar7 = 
            MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_13_0
            ;
            goto label_181f884f2;
          }
          if (uVar3 != 0x1e9e9f85) goto label_181f8abb0;
          bVar2 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f8abb0;
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434585a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_11_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_11_1
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
            Il2CppMethodInitialized_18434585a = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_11_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_11_1
          ;
        }
      }
      else if (uVar3 < 0x28528e12) {
        if (uVar3 == 0x23315ddd) {
          bVar2 = System_String__op_Equality(name,"IsPlayingAnimation",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345865 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__IsPlayingAnimation_b
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345865 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__22_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__IsPlayingAnimation_b
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__22_0 =
                   (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->
                          __9__22_0,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
          goto label_181f8abb0;
        }
        if (uVar3 != 0x28528e11) goto label_181f8abb0;
        bVar2 = System_String__op_Equality(name,"Scale",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f8abb0;
        if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345857 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Scale_g____getter_8_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Scale_g____setter_8_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object)
          ;
          Il2CppMethodInitialized_184345857 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Scale_g____getter_8_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Scale_g____setter_8_1
        ;
      }
      else {
        if (uVar3 == 0x2ba6c2e2) {
          bVar2 = System_String__op_Equality(name,"PlaySound",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345868 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__PlaySound_b__25_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345868 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__25_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__PlaySound_b__25_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__25_0 =
                   (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->
                          __9__25_0,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
          goto label_181f8abb0;
        }
        if (uVar3 != 0x2fe74447) {
          if (uVar3 != 0x41e389fd) goto label_181f8abb0;
          bVar2 = System_String__op_Equality(name,"Animation",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f8abb0;
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345860 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Animation_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
            Il2CppMethodInitialized_184345860 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Animation_g____getter
          ;
          goto label_181f884f2;
        }
        bVar2 = System_String__op_Equality(name,"QuaternionRotation",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f8abb0;
        if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345855 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_40eecc0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object)
          ;
          Il2CppMethodInitialized_184345855 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_40eecc0
        ;
      }
    }
    else if (uVar3 < 0x56fd69a4) {
      if (0x492a3ccf < uVar3) {
        if (uVar3 == 0x4bb7478d) {
          bVar2 = System_String__op_Equality(name,"SetActive",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345874 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__SetActive_b__37_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345874 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__37_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__SetActive_b__37_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__37_0 =
                   (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->
                          __9__37_0,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0x51dceaf8) {
          bVar2 = System_String__op_Equality(name,"GetColliders",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345873 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetColliders_b__36_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345873 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__36_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetColliders_b__36_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__36_0 =
                   (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->
                          __9__36_0,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0x56fd69a3) {
          bVar2 = System_String__op_Equality(name,"TransformPoint",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434586e == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__TransformPoint_b__31_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              Il2CppMethodInitialized_18434586e = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__31_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__TransformPoint_b__31_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__31_0 =
                   (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->
                          __9__31_0,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
label_181f8abb0:
        pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTransformBuiltin not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_02,pSVar6,(MethodInfo *)0x0);
        pMVar7 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_CreateMemberBinding);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar7);
      }
      if (uVar3 != 0x42f35940) {
        if (uVar3 == 0x492a3ccf) {
          bVar2 = System_String__op_Equality(name,"GetAnimationLength",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345867 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345867 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__24_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__24_0 =
                   (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->
                          __9__24_0,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        goto label_181f8abb0;
      }
      bVar2 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f8abb0;
      if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345859 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTransformBuiltin_object)
        ;
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_10_1
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
        Il2CppMethodInitialized_184345859 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_10_1
      ;
    }
    else {
      if (0x6a01cd56 < uVar3) {
        if (uVar3 == 0x70ec2621) {
          bVar2 = System_String__op_Equality(name,"InverseTransformPoint",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434586c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__InverseTransformPoint
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              Il2CppMethodInitialized_18434586c = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__29_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__InverseTransformPoint
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__29_0 =
                   (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->
                          __9__29_0,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
          goto label_181f8abb0;
        }
        if (uVar3 == 0x792a6491) {
          bVar2 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345876 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding____Hash___b__39_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345876 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__39_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding____Hash___b__39_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__39_0 =
                   (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->
                          __9__39_0,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
          goto label_181f8abb0;
        }
        if (uVar3 != 0x7bb199a4) goto label_181f8abb0;
        bVar2 = System_String__op_Equality(name,"AudioSource",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f8abb0;
        if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345862 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__AudioSource_g____gette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object)
          ;
          Il2CppMethodInitialized_184345862 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__AudioSource_g____gette
        ;
        goto label_181f884f2;
      }
      if (uVar3 == 0x5e2c4c73) {
        bVar2 = System_String__op_Equality(name,"LookAt",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345871 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__LookAt_b__34_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345871 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__34_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__LookAt_b__34_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__34_0 =
                 (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__34_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin)
          ;
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
        goto label_181f8abb0;
      }
      if (uVar3 != 0x6a01cd56) goto label_181f8abb0;
      bVar2 = System_String__op_Equality(name,"QuaternionLocalRotation",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f8abb0;
      if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345856 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTransformBuiltin_object)
        ;
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio_40eeb08
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
        Il2CppMethodInitialized_184345856 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio_40eeb08
      ;
    }
  }
  else {
    if (0xc28a9c8e < uVar3) {
      if (uVar3 < 0xe27f342b) {
        if (0xcb7df474 < uVar3) {
          if (uVar3 == 0xd64c477b) {
            bVar2 = System_String__op_Equality(name,"PlayAnimation",(MethodInfo *)0x0);
            if (bVar2) {
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_184345866 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__23_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
                Il2CppMethodInitialized_184345866 = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              }
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__23_0;
              if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
                if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
                }
                pIVar1 = (Il2CppObject *)
                         TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
                pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)
                                    TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
                System_Func_object__object__object____ctor
                          (pEVar4,pIVar1,
                           (intptr_t)
                           MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__23_0
                           ,(MethodInfo *)0x0);
                TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__23_0 =
                     (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->
                            __9__23_0,pEVar4);
              }
              pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
              CustomLogic_CLMethodBinding_object____ctor
                        (pSVar5,(System_String_o *)pEVar4,
                         MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
              return (CustomLogic_ICLMemberBinding_o *)pSVar5;
            }
            goto label_181f8abb0;
          }
          if (uVar3 == 0xdabf4cff) {
            bVar2 = System_String__op_Equality(name,"ToggleParticle",(MethodInfo *)0x0);
            if (bVar2) {
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_18434586a == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__ToggleParticle_b__27_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
                Il2CppMethodInitialized_18434586a = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              }
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__27_0;
              if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
                if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
                }
                pIVar1 = (Il2CppObject *)
                         TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
                pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)
                                    TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
                System_Func_object__object__object____ctor
                          (pEVar4,pIVar1,
                           (intptr_t)
                           MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__ToggleParticle_b__27_0
                           ,(MethodInfo *)0x0);
                TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__27_0 =
                     (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->
                            __9__27_0,pEVar4);
              }
              pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
              CustomLogic_CLMethodBinding_object____ctor
                        (pSVar5,(System_String_o *)pEVar4,
                         MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
              return (CustomLogic_ICLMemberBinding_o *)pSVar5;
            }
            goto label_181f8abb0;
          }
          if (uVar3 != 0xe27f342a) goto label_181f8abb0;
          bVar2 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f8abb0;
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345851 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_2
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_2
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
            Il2CppMethodInitialized_184345851 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_2
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_2
          ;
          goto label_181f8ab69;
        }
        if (uVar3 != 0xc7933b34) {
          if (uVar3 == 0xcb7df474) {
            bVar2 = System_String__op_Equality(name,"StopSound",(MethodInfo *)0x0);
            if (bVar2) {
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_184345869 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__StopSound_b__26_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
                Il2CppMethodInitialized_184345869 = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              }
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__26_0;
              if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
                if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
                }
                pIVar1 = (Il2CppObject *)
                         TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
                pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)
                                    TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
                System_Func_object__object__object____ctor
                          (pEVar4,pIVar1,
                           (intptr_t)
                           MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__StopSound_b__26_0
                           ,(MethodInfo *)0x0);
                TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__26_0 =
                     (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->
                            __9__26_0,pEVar4);
              }
              pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
              CustomLogic_CLMethodBinding_object____ctor
                        (pSVar5,(System_String_o *)pEVar4,
                         MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
              return (CustomLogic_ICLMemberBinding_o *)pSVar5;
            }
          }
          goto label_181f8abb0;
        }
        bVar2 = System_String__op_Equality(name,"Animator",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f8abb0;
        if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345861 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Animator_g____getter_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object)
          ;
          Il2CppMethodInitialized_184345861 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Animator_g____getter_1
        ;
      }
      else {
        if (uVar3 < 0xe50883bb) {
          if (uVar3 == 0xe34226bf) {
            bVar2 = System_String__op_Equality(name,"RotateAround",(MethodInfo *)0x0);
            if (bVar2) {
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_184345870 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__RotateAround_b__33_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
                Il2CppMethodInitialized_184345870 = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              }
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__33_0;
              if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
                if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
                }
                pIVar1 = (Il2CppObject *)
                         TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
                pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)
                                    TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
                System_Func_object__object__object____ctor
                          (pEVar4,pIVar1,
                           (intptr_t)
                           MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__RotateAround_b__33_0
                           ,(MethodInfo *)0x0);
                TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__33_0 =
                     (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->
                            __9__33_0,pEVar4);
              }
              pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
              CustomLogic_CLMethodBinding_object____ctor
                        (pSVar5,(System_String_o *)pEVar4,
                         MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
              return (CustomLogic_ICLMemberBinding_o *)pSVar5;
            }
            goto label_181f8abb0;
          }
          if (uVar3 != 0xe50883ba) goto label_181f8abb0;
          bVar2 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f8abb0;
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345858 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_9
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_9
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
            Il2CppMethodInitialized_184345858 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_9
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_9
          ;
          goto label_181f8ab69;
        }
        if (uVar3 == 0xec0a0a2a) {
          bVar2 = System_String__op_Equality(name,"Rotate",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434586f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__Rotate_b__32_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              Il2CppMethodInitialized_18434586f = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__32_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__Rotate_b__32_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__32_0 =
                   (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->
                          __9__32_0,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
          goto label_181f8abb0;
        }
        if (uVar3 != 0xec7340b0) {
          if (uVar3 == 0xf73c4ea6) {
            bVar2 = System_String__op_Equality(name,"SetRenderersEnabled",(MethodInfo *)0x0);
            if (bVar2) {
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_184345872 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__SetRenderersEnabled_b
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
                Il2CppMethodInitialized_184345872 = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              }
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__35_0;
              if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
                if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
                }
                pIVar1 = (Il2CppObject *)
                         TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
                pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)
                                    TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
                System_Func_object__object__object____ctor
                          (pEVar4,pIVar1,
                           (intptr_t)
                           MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__SetRenderersEnabled_b
                           ,(MethodInfo *)0x0);
                TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__35_0 =
                     (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->
                            __9__35_0,pEVar4);
              }
              pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
              CustomLogic_CLMethodBinding_object____ctor
                        (pSVar5,(System_String_o *)pEVar4,
                         MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
              return (CustomLogic_ICLMemberBinding_o *)pSVar5;
            }
          }
          goto label_181f8abb0;
        }
        bVar2 = System_String__op_Equality(name,"Character",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f8abb0;
        if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434585e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Character_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object)
          ;
          Il2CppMethodInitialized_18434585e = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Character_g____getter
        ;
      }
label_181f884f2:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin
                            );
      __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
      goto label_181f8ab8b;
    }
    if (uVar3 < 0xa18f595a) {
      if (uVar3 < 0x91efe6d8) {
        if (uVar3 == 0x7ea95d1e) {
          bVar2 = System_String__op_Equality(name,"GetTransforms",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345864 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetTransforms_b__21_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345864 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__21_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetTransforms_b__21_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__21_0 =
                   (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->
                          __9__21_0,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0x91efe6d7) {
          bVar2 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345875 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding____Eq___b__38_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345875 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__38_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding____Eq___b__38_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__38_0 =
                   (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->
                          __9__38_0,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
      }
      else if (uVar3 == 0x958d00f4) {
        bVar2 = System_String__op_Equality(name,"TransformDirection",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434586d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__TransformDirection_b
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434586d = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__30_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__TransformDirection_b
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__30_0 =
                 (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__30_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin)
          ;
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0xa18f5959) {
        bVar2 = System_String__op_Equality(name,"GetTransform",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345863 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetTransform_b__20_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345863 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__20_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetTransform_b__20_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__20_0 =
                 (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__20_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin)
          ;
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      goto label_181f8abb0;
    }
    if (uVar3 < 0xafdc1b97) {
      if (uVar3 == 0xaf82143b) {
        bVar2 = System_String__op_Equality(name,"LocalPosition",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f8abb0;
        if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345852 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____get
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____set
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object)
          ;
          Il2CppMethodInitialized_184345852 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____get
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____set
        ;
      }
      else {
        if (uVar3 != 0xafdc1b96) goto label_181f8abb0;
        bVar2 = System_String__op_Equality(name,"Layer",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f8abb0;
        if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434585d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Layer_g____getter_14_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Layer_g____setter_14_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object)
          ;
          Il2CppMethodInitialized_18434585d = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Layer_g____getter_14_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Layer_g____setter_14_1
        ;
      }
    }
    else {
      if (uVar3 == 0xbfb982ba) {
        bVar2 = System_String__op_Equality(name,"InverseTransformDirection",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434586b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__InverseTransformDirect
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434586b = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__28_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__InverseTransformDirect
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__28_0 =
                 (System_Func_CustomLogicTransformBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__28_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin)
          ;
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
        goto label_181f8abb0;
      }
      if (uVar3 != 0xc156ee1d) {
        if (uVar3 != 0xc28a9c8e) goto label_181f8abb0;
        bVar2 = System_String__op_Equality(name,"MapObject",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f8abb0;
        if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434585f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__MapObject_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object)
          ;
          Il2CppMethodInitialized_18434585f = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__MapObject_g____getter
        ;
        goto label_181f884f2;
      }
      bVar2 = System_String__op_Equality(name,"Parent",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f8abb0;
      if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434585b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTransformBuiltin_object)
        ;
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Parent_g____getter_12
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Parent_g____setter_12
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
        Il2CppMethodInitialized_18434585b = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Parent_g____getter_12
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Parent_g____setter_12
      ;
    }
  }
label_181f8ab69:
  System_Action_object__object____ctor
            (__this_01,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
label_181f8ab8b:
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_01,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x181f99780

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345851 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_184345851 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_2
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__LocalPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__LocalPosition (const MethodInfo* method);
// 0x181f98ab0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__LocalPosition(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345852 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____set
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_184345852 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____set
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x181f9a630

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Rotation(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345853 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_184345853 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_4
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__LocalRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__LocalRotation (const MethodInfo* method);
// 0x181f98ba0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__LocalRotation(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345854 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____set
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_184345854 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____set
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__QuaternionRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation (const MethodInfo* method);
// 0x181f99aa0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation
          (MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345855 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_40eecc0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_184345855 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_40eecc0
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__QuaternionLocalRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__QuaternionLocalRotation (const MethodInfo* method);
// 0x181f999b0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__QuaternionLocalRotation
          (MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345856 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio_40eeb08
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_184345856 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio_40eeb08
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Scale
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Scale (const MethodInfo* method);
// 0x181f9ab80

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Scale(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345857 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Scale_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Scale_g____setter_8_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_184345857 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Scale_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Scale_g____setter_8_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x181f97480

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Forward(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345858 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_9
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_9
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_184345858 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_9
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_9
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x181f9c110

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345859 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_10_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_184345859 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_10_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x181f9a130

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434585a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_11_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_18434585a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_11_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_11_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Parent
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Parent (const MethodInfo* method);
// 0x181f995f0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Parent(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434585b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Parent_g____getter_12
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Parent_g____setter_12
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_18434585b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Parent_g____getter_12
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Parent_g____setter_12
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Name
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Name (const MethodInfo* method);
// 0x181f99230

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Name(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434585c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_18434585c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_13_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Layer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Layer (const MethodInfo* method);
// 0x181f98740

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Layer(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434585d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Layer_g____getter_14_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Layer_g____setter_14_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_18434585d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Layer_g____getter_14_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Layer_g____setter_14_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Character
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Character (const MethodInfo* method);
// 0x181f95d10

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Character(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434585e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Character_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_18434585e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Character_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__MapObject
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__MapObject (const MethodInfo* method);
// 0x181f98d30

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__MapObject(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434585f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__MapObject_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_18434585f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__MapObject_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Animation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Animation (const MethodInfo* method);
// 0x181f93e70

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Animation(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345860 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Animation_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_184345860 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Animation_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Animator
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Animator (const MethodInfo* method);
// 0x181f93f10

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Animator(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345861 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Animator_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_184345861 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Animator_g____getter_1
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__AudioSource
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__AudioSource (const MethodInfo* method);
// 0x181f94fa0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__AudioSource(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345862 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__AudioSource_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_184345862 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__AudioSource_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__GetTransform
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetTransform (const MethodInfo* method);
// 0x181f92180

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetTransform(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345863 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetTransform_b__20_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345863 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__20_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetTransform_b__20_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__20_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__20_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__GetTransforms
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetTransforms (const MethodInfo* method);
// 0x181f922a0

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetTransforms(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345864 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetTransforms_b__21_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345864 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__21_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetTransforms_b__21_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__21_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__21_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__IsPlayingAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__IsPlayingAnimation (const MethodInfo* method);
// 0x181f92600

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__IsPlayingAnimation
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345865 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__IsPlayingAnimation_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345865 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__22_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__IsPlayingAnimation_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__22_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__22_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__PlayAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__PlayAnimation (const MethodInfo* method);
// 0x181f92840

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__PlayAnimation(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345866 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__23_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345866 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__23_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__23_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__23_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__23_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__GetAnimationLength
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetAnimationLength (const MethodInfo* method);
// 0x181f91f30

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetAnimationLength
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345867 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345867 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__24_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__24_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__24_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__PlaySound
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__PlaySound (const MethodInfo* method);
// 0x181f92960

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__PlaySound(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345868 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__PlaySound_b__25_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345868 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__25_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__PlaySound_b__25_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__25_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__25_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__StopSound
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__StopSound (const MethodInfo* method);
// 0x181f92f20

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__StopSound(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345869 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__StopSound_b__26_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345869 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__26_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__StopSound_b__26_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__26_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__26_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__ToggleParticle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__ToggleParticle (const MethodInfo* method);
// 0x181f933a0

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__ToggleParticle(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434586a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__ToggleParticle_b__27_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434586a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__27_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__ToggleParticle_b__27_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__27_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__27_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__InverseTransformDirection
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__InverseTransformDirection (const MethodInfo* method);
// 0x181f923c0

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__InverseTransformDirection
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434586b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__InverseTransformDirect
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434586b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__28_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__InverseTransformDirect
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__28_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__28_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__InverseTransformPoint
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__InverseTransformPoint (const MethodInfo* method);
// 0x181f924e0

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__InverseTransformPoint
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434586c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__InverseTransformPoint
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434586c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__29_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__InverseTransformPoint
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__29_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__29_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__TransformDirection
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__TransformDirection (const MethodInfo* method);
// 0x181f934c0

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__TransformDirection
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434586d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__TransformDirection_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434586d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__30_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__TransformDirection_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__30_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__30_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__TransformPoint
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__TransformPoint (const MethodInfo* method);
// 0x181f935e0

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__TransformPoint(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434586e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__TransformPoint_b__31_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434586e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__31_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__TransformPoint_b__31_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__31_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__31_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__Rotate
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__Rotate (const MethodInfo* method);
// 0x181f92ba0

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__Rotate(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434586f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__Rotate_b__32_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434586f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__32_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__Rotate_b__32_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__32_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__32_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__RotateAround
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__RotateAround (const MethodInfo* method);
// 0x181f92a80

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__RotateAround(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345870 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__RotateAround_b__33_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345870 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__33_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__RotateAround_b__33_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__33_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__33_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__LookAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__LookAt (const MethodInfo* method);
// 0x181f92720

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__LookAt(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345871 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__LookAt_b__34_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345871 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__34_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__LookAt_b__34_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__34_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__34_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__SetRenderersEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__SetRenderersEnabled (const MethodInfo* method);
// 0x181f92df0

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__SetRenderersEnabled
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345872 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__SetRenderersEnabled_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345872 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__35_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__SetRenderersEnabled_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__35_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__35_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__GetColliders
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetColliders (const MethodInfo* method);
// 0x181f92050

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetColliders(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345873 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetColliders_b__36_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345873 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__36_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetColliders_b__36_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__36_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__36_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__SetActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__SetActive (const MethodInfo* method);
// 0x181f92cc0

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__SetActive(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345874 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__SetActive_b__37_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345874 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__37_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__SetActive_b__37_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__37_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__37_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x181f93940

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345875 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding____Eq___b__38_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345875 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__38_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding____Eq___b__38_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__38_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__38_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x181f93a70

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345876 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding____Hash___b__39_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345876 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__39_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding____Hash___b__39_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__39_0 =
         (System_Func_CustomLogicTransformBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9__39_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181f9e0a0

void CustomLogic_CustomLogicTransformBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345877 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"InverseTransformPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"InverseTransformDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"Animation");
    il2cpp_codegen_initialize_runtime_metadata(&"StopSound");
    il2cpp_codegen_initialize_runtime_metadata(&"QuaternionRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"TransformDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotate");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"LocalPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"QuaternionLocalRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationLength");
    il2cpp_codegen_initialize_runtime_metadata(&"Character");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Forward");
    il2cpp_codegen_initialize_runtime_metadata(&"GetColliders");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPlayingAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"PlaySound");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Parent");
    il2cpp_codegen_initialize_runtime_metadata(&"Up");
    il2cpp_codegen_initialize_runtime_metadata(&"RotateAround");
    il2cpp_codegen_initialize_runtime_metadata(&"MapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"Animator");
    il2cpp_codegen_initialize_runtime_metadata(&"ToggleParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"Layer");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTransforms");
    il2cpp_codegen_initialize_runtime_metadata(&"AudioSource");
    il2cpp_codegen_initialize_runtime_metadata(&"SetActive");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTransform");
    il2cpp_codegen_initialize_runtime_metadata(&"TransformPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"SetRenderersEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"LocalRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"LookAt");
    Il2CppMethodInitialized_184345877 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Position",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LocalPosition",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LocalRotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuaternionRotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuaternionLocalRotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Scale",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Forward",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Up",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Right",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Parent",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Name",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Layer",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Character",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MapObject",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Animation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Animator",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AudioSource",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetTransform",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetTransforms",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPlayingAnimation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayAnimation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAnimationLength",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlaySound",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StopSound",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToggleParticle",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"InverseTransformDirection",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"InverseTransformPoint",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TransformDirection",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TransformPoint",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rotate",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RotateAround",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LookAt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetRenderersEnabled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetColliders",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetActive",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Eq__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Hash__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_2_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x181f8fb90

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_2_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    pUVar1 = UnityEngine_Transform__get_position(local_18,__this,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_2_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8fbe0

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_2_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184345878 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345878 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
      (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    local_18.x = (pCVar1->fields).Value.fields.x;
    local_18.y = (pCVar1->fields).Value.fields.y;
    local_18.z = (pCVar1->fields).Value.fields.z;
    UnityEngine_Transform__set_position(__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__LocalPosition>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____getter_3_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x181f8f030

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____getter_3_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    pUVar1 = UnityEngine_Transform__get_localPosition(local_18,__this,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__LocalPosition>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____setter_3_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8f080

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____setter_3_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184345879 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345879 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
      (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    local_18.x = (pCVar1->fields).Value.fields.x;
    local_18.y = (pCVar1->fields).Value.fields.y;
    local_18.z = (pCVar1->fields).Value.fields.z;
    UnityEngine_Transform__set_localPosition(__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_4_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x181f905d0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_4_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Transform_o *__this;
  float fVar4;
  UnityEngine_Quaternion_o *pUVar5;
  UnityEngine_Vector3_o *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Quaternion_o local_28;
  UnityEngine_Quaternion_Fields local_18;
  
  if (__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_18.x = 0.0;
  local_18.y = 0.0;
  local_18.z = 0.0;
  local_18.w = 0.0;
  if ((__i->fields)._needSetRotation != false) {
    __this = (__i->fields).Value;
    if (__this == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar5 = UnityEngine_Transform__get_rotation(&local_28,__this,(MethodInfo *)0x0);
    local_18.x = (pUVar5->fields).x;
    local_18.y = (pUVar5->fields).y;
    local_18.z = (pUVar5->fields).z;
    local_18.w = (pUVar5->fields).w;
    pUVar6 = UnityEngine_Quaternion__Internal_ToEulerRad
                       ((UnityEngine_Vector3_o *)&local_28,(UnityEngine_Quaternion_o *)&local_18,
                        (MethodInfo *)0x0);
    uVar1 = (pUVar6->fields).x;
    uVar2 = (pUVar6->fields).y;
    local_38.y = (float)uVar2 * 57.29578;
    local_38.x = (float)uVar1 * 57.29578;
    local_38.z = (pUVar6->fields).z * 57.29578;
    pUVar6 = UnityEngine_Quaternion__Internal_MakePositive
                       ((UnityEngine_Vector3_o *)&local_28,(UnityEngine_Vector3_o *)&local_38,
                        (MethodInfo *)0x0);
    fVar4 = (pUVar6->fields).y;
    fVar3 = (pUVar6->fields).z;
    (__i->fields)._internalRotation.fields.x = (pUVar6->fields).x;
    (__i->fields)._internalRotation.fields.y = fVar4;
    (__i->fields)._internalRotation.fields.z = fVar3;
    (__i->fields)._needSetRotation = false;
  }
  local_38.x = (__i->fields)._internalRotation.fields.x;
  local_38.y = (__i->fields)._internalRotation.fields.y;
  local_38.z = (__i->fields)._internalRotation.fields.z;
  pCVar7 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                     ((UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar7;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_4_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f906a0

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_4_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Transform_o *__this;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  UnityEngine_Quaternion_o *pUVar6;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_18434587a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434587a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (pCVar5 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar4 = (pCVar5->fields).Value.fields.y;
    fVar3 = (pCVar5->fields).Value.fields.z;
    __this = (__i->fields).Value;
    (__i->fields)._internalRotation.fields.x = (pCVar5->fields).Value.fields.x;
    (__i->fields)._internalRotation.fields.y = fVar4;
    (__i->fields)._internalRotation.fields.z = fVar3;
    uVar1 = (__i->fields)._internalRotation.fields.x;
    uVar2 = (__i->fields)._internalRotation.fields.y;
    (__i->fields)._needSetRotation = false;
    local_28.y = (float)uVar2 * 0.017453292;
    local_28.x = (float)uVar1 * 0.017453292;
    local_28.z = (__i->fields)._internalRotation.fields.z * 0.017453292;
    pUVar6 = UnityEngine_Quaternion__Internal_FromEulerRad
                       (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Transform_o *)0x0) {
      local_28.x = (pUVar6->fields).x;
      local_28.y = (pUVar6->fields).y;
      local_28.z = (pUVar6->fields).z;
      local_28.w = (pUVar6->fields).w;
      UnityEngine_Transform__set_rotation(__this,(UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__LocalRotation>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____getter_5_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x181f8f120

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____getter_5_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Transform_o *__this;
  float fVar4;
  UnityEngine_Quaternion_o *pUVar5;
  UnityEngine_Vector3_o *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Quaternion_o local_28;
  UnityEngine_Quaternion_Fields local_18;
  
  if (__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_18.x = 0.0;
  local_18.y = 0.0;
  local_18.z = 0.0;
  local_18.w = 0.0;
  if ((__i->fields)._needSetLocalRotation != false) {
    __this = (__i->fields).Value;
    if (__this == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar5 = UnityEngine_Transform__get_localRotation(&local_28,__this,(MethodInfo *)0x0);
    local_18.x = (pUVar5->fields).x;
    local_18.y = (pUVar5->fields).y;
    local_18.z = (pUVar5->fields).z;
    local_18.w = (pUVar5->fields).w;
    pUVar6 = UnityEngine_Quaternion__Internal_ToEulerRad
                       ((UnityEngine_Vector3_o *)&local_28,(UnityEngine_Quaternion_o *)&local_18,
                        (MethodInfo *)0x0);
    uVar1 = (pUVar6->fields).x;
    uVar2 = (pUVar6->fields).y;
    local_38.y = (float)uVar2 * 57.29578;
    local_38.x = (float)uVar1 * 57.29578;
    local_38.z = (pUVar6->fields).z * 57.29578;
    pUVar6 = UnityEngine_Quaternion__Internal_MakePositive
                       ((UnityEngine_Vector3_o *)&local_28,(UnityEngine_Vector3_o *)&local_38,
                        (MethodInfo *)0x0);
    fVar4 = (pUVar6->fields).y;
    fVar3 = (pUVar6->fields).z;
    (__i->fields)._internalLocalRotation.fields.x = (pUVar6->fields).x;
    (__i->fields)._internalLocalRotation.fields.y = fVar4;
    (__i->fields)._internalLocalRotation.fields.z = fVar3;
    (__i->fields)._needSetLocalRotation = false;
  }
  local_38.x = (__i->fields)._internalLocalRotation.fields.x;
  local_38.y = (__i->fields)._internalLocalRotation.fields.y;
  local_38.z = (__i->fields)._internalLocalRotation.fields.z;
  pCVar7 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                     ((UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar7;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__LocalRotation>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____setter_5_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8f1f0

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____setter_5_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Transform_o *__this;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  UnityEngine_Quaternion_o *pUVar6;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_18434587b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434587b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (pCVar5 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar4 = (pCVar5->fields).Value.fields.y;
    fVar3 = (pCVar5->fields).Value.fields.z;
    __this = (__i->fields).Value;
    (__i->fields)._internalLocalRotation.fields.x = (pCVar5->fields).Value.fields.x;
    (__i->fields)._internalLocalRotation.fields.y = fVar4;
    (__i->fields)._internalLocalRotation.fields.z = fVar3;
    uVar1 = (__i->fields)._internalLocalRotation.fields.x;
    uVar2 = (__i->fields)._internalLocalRotation.fields.y;
    (__i->fields)._needSetLocalRotation = false;
    local_28.y = (float)uVar2 * 0.017453292;
    local_28.x = (float)uVar1 * 0.017453292;
    local_28.z = (__i->fields)._internalLocalRotation.fields.z * 0.017453292;
    pUVar6 = UnityEngine_Quaternion__Internal_FromEulerRad
                       (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Transform_o *)0x0) {
      local_28.x = (pUVar6->fields).x;
      local_28.y = (pUVar6->fields).y;
      local_28.z = (pUVar6->fields).z;
      local_28.w = (pUVar6->fields).w;
      UnityEngine_Transform__set_localRotation(__this,(UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____getter_6_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x181f8fe00

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____getter_6_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  UnityEngine_Quaternion_o *pUVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Quaternion_Fields local_18;
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    pUVar1 = UnityEngine_Transform__get_rotation
                       ((UnityEngine_Quaternion_o *)&local_18,__this,(MethodInfo *)0x0);
    local_18.x = (pUVar1->fields).x;
    local_18.y = (pUVar1->fields).y;
    local_18.z = (pUVar1->fields).z;
    local_18.w = (pUVar1->fields).w;
    pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                       ((UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____setter_6_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8fe40

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____setter_6_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_18434587c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434587c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
  if (((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
      ((__i->fields)._needSetRotation = true, (__i->fields)._needSetLocalRotation = true,
      pCVar1 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    local_18.x = (pCVar1->fields).Value.fields.x;
    local_18.y = (pCVar1->fields).Value.fields.y;
    local_18.z = (pCVar1->fields).Value.fields.z;
    local_18.w = (pCVar1->fields).Value.fields.w;
    UnityEngine_Transform__set_rotation(__this,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionLocalRotation>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____getter_7_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x181f8fd20

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____getter_7_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  UnityEngine_Quaternion_o *pUVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Quaternion_Fields local_18;
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    pUVar1 = UnityEngine_Transform__get_localRotation
                       ((UnityEngine_Quaternion_o *)&local_18,__this,(MethodInfo *)0x0);
    local_18.x = (pUVar1->fields).x;
    local_18.y = (pUVar1->fields).y;
    local_18.z = (pUVar1->fields).z;
    local_18.w = (pUVar1->fields).w;
    pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                       ((UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionLocalRotation>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____setter_7_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8fd60

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____setter_7_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_18434587d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434587d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
  if (((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
      ((__i->fields)._needSetRotation = true, (__i->fields)._needSetLocalRotation = true,
      pCVar1 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    local_18.x = (pCVar1->fields).Value.fields.x;
    local_18.y = (pCVar1->fields).Value.fields.y;
    local_18.z = (pCVar1->fields).Value.fields.z;
    local_18.w = (pCVar1->fields).Value.fields.w;
    UnityEngine_Transform__set_localRotation(__this,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_8_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x181f90970

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_8_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    pUVar1 = UnityEngine_Transform__get_localScale(local_18,__this,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_8_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f909c0

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_8_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_18434587e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434587e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
      (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    local_18.x = (pCVar1->fields).Value.fields.x;
    local_18.y = (pCVar1->fields).Value.fields.y;
    local_18.z = (pCVar1->fields).Value.fields.z;
    UnityEngine_Transform__set_localScale(__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_9_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x181f8e450

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_9_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    pUVar1 = UnityEngine_Transform__get_forward(local_18,__this,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_9_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8e4a0

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_9_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_18434587f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434587f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
      (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    local_18.x = (pCVar1->fields).Value.fields.x;
    local_18.y = (pCVar1->fields).Value.fields.y;
    local_18.z = (pCVar1->fields).Value.fields.z;
    UnityEngine_Transform__set_forward(__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x181f91670

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    pUVar1 = UnityEngine_Transform__get_up(local_18,__this,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_10_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f916c0

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_10_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184345880 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345880 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
      (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    local_18.x = (pCVar1->fields).Value.fields.x;
    local_18.y = (pCVar1->fields).Value.fields.y;
    local_18.z = (pCVar1->fields).Value.fields.z;
    UnityEngine_Transform__set_up(__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_11_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x181f90330

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_11_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    pUVar1 = UnityEngine_Transform__get_right(local_18,__this,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_11_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f90380

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_11_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184345881 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345881 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
      (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    local_18.x = (pCVar1->fields).Value.fields.x;
    local_18.y = (pCVar1->fields).Value.fields.y;
    local_18.z = (pCVar1->fields).Value.fields.z;
    UnityEngine_Transform__set_right(__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Parent>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Parent_g____getter_12_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x181f8f9d0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Parent_g____getter_12_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  CustomLogic_CustomLogicTransformBuiltin_o *__this;
  
  if (__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345845 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184345845 = '\x01';
    }
    pUVar2 = (__i->fields).Value;
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        return (Il2CppObject *)0x0;
      }
      pUVar2 = (__i->fields).Value;
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0);
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
        CustomLogic_CustomLogicTransformBuiltin___ctor(__this,pUVar2,(MethodInfo *)0x0);
        return (Il2CppObject *)__this;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Parent>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Parent_g____setter_12_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8faa0

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Parent_g____setter_12_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar1;
  UnityEngine_Transform_o *p;
  
  if (Il2CppMethodInitialized_184345882 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345882 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicTransformBuiltin);
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    if (pCVar1 == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      p = (UnityEngine_Transform_o *)0x0;
    }
    else {
      p = (pCVar1->fields).Value;
    }
    UnityEngine_Transform__SetParent(__this,p,(MethodInfo *)0x0);
    (__i->fields)._needSetRotation = true;
    (__i->fields)._needSetLocalRotation = true;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_13_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x181f8f880

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_13_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  System_String_o *pSVar1;
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    pSVar1 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Layer>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Layer_g____getter_14_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x181f8ed20

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Layer_g____getter_14_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      local_res8[0] = UnityEngine_GameObject__get_layer(__this_00,(MethodInfo *)0x0);
      pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Layer>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Layer_g____setter_14_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8ed70

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Layer_g____setter_14_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  int32_t value;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_184345883 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345883 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__set_layer(__this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Character>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Character_g____getter_15_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x181f8db40

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Character_g____getter_15_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  bool bVar2;
  Characters_BaseCharacter_o *character;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar3;
  
  if (__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345846 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter)
      ;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184345846 = '\x01';
    }
    pUVar1 = (__i->fields).Value;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return (Il2CppObject *)0x0;
    }
    pUVar1 = (__i->fields).Value;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      character = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar1,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter)
      ;
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar3 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__MapObject>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__MapObject_g____getter_16_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x181f8f330

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__MapObject_g____getter_16_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar2;
  UnityEngine_GameObject_o *key;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  Map_MapObject_o *local_res8;
  
  if (__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_184345847 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345847 = '\x01';
  }
  pUVar1 = (__i->fields).Value;
  local_res8 = (Map_MapObject_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return (Il2CppObject *)0x0;
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pUVar1 = (__i->fields).Value;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
    key = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this,(Il2CppObject *)key,(Il2CppObject **)&local_res8,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_TryGetValue);
      if (!bVar2) {
        return (Il2CppObject *)0x0;
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        return (Il2CppObject *)0x0;
      }
      pCVar3 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                         (__this_00,local_res8,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Animation>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Animation_g____getter_17_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x181f8ce60

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Animation_g____getter_17_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._animation;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Animator>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Animator_g____getter_18_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x181f64640

Il2CppObject*
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Animator_g____getter_18_0(CustomLogic_CustomLogicTransformBuiltin_o* __i, MethodInfo* method)

{
  if (__i != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._currentIconPath;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__AudioSource>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__AudioSource_g____getter_19_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x181f8d4b0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__AudioSource_g____getter_19_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._audioSource;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin___ctor (CustomLogic_CustomLogicTransformBuiltin_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method);
// 0x181fa2020

void CustomLogic_CustomLogicTransformBuiltin___ctor
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,UnityEngine_Transform_o *transform,
               MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_AudioSource_o *audioSource;
  UnityEngine_Animator_o *animator;
  UnityEngine_Animation_o *animation;
  bool bVar2;
  UnityEngine_ParticleSystem_o *value;
  CustomLogic_CustomLogicAudioSourceBuiltin_o *__this_00;
  CustomLogic_CustomLogicAnimatorBuiltin_o *__this_01;
  CustomLogic_CustomLogicAnimatorBuiltin_o **targetAddress;
  UnityEngine_AudioSource_o *local_res8;
  UnityEngine_Animator_o *local_res10 [2];
  UnityEngine_Animation_o *local_res20;
  
  if (Il2CppMethodInitialized_184345844 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_Animation);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_Animator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin);
    Il2CppMethodInitialized_184345844 = '\x01';
  }
  (__this->fields)._needSetRotation = true;
  (__this->fields)._needSetLocalRotation = true;
  local_res8 = (UnityEngine_AudioSource_o *)0x0;
  local_res20 = (UnityEngine_Animation_o *)0x0;
  local_res10[0] = (UnityEngine_Animator_o *)0x0;
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value = transform;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,transform);
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    value = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar1,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
    (__this->fields)._particleSystem = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._particleSystem,value);
    pUVar1 = (__this->fields).Value;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      bVar2 = UnityEngine_Component__TryGetComponent_object_
                        ((UnityEngine_Component_o *)pUVar1,(Il2CppObject **)&local_res8,
                         (MethodInfo_6657C0 *)MethodInfo_UnityEngine_Component_TryGetComponent_AudioSource);
      audioSource = local_res8;
      if (bVar2) {
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin);
        CustomLogic_CustomLogicAudioSourceBuiltin___ctor_1f01ea0
                  (__this_00,(CustomLogic_BuiltinClassInstance_o *)__this,audioSource,(MethodInfo *)0x0);
        (__this->fields)._audioSource = __this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._audioSource,__this_00);
      }
      pUVar1 = (__this->fields).Value;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        bVar2 = UnityEngine_Component__TryGetComponent_object_
                          ((UnityEngine_Component_o *)pUVar1,(Il2CppObject **)&local_res20,
                           (MethodInfo_6657C0 *)MethodInfo_UnityEngine_Component_TryGetComponent_Animation);
        animation = local_res20;
        if (bVar2) {
          __this_01 = (CustomLogic_CustomLogicAnimatorBuiltin_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin);
          CustomLogic_CustomLogicAnimationBuiltin___ctor_1f01450
                    ((CustomLogic_CustomLogicAnimationBuiltin_o *)__this_01,
                     (CustomLogic_BuiltinClassInstance_o *)__this,animation,(MethodInfo *)0x0);
          targetAddress = (CustomLogic_CustomLogicAnimatorBuiltin_o **)&(__this->fields)._animation;
          (__this->fields)._animation = (CustomLogic_CustomLogicAnimationBuiltin_o *)__this_01;
        }
        else {
          pUVar1 = (__this->fields).Value;
          if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_181fa221b;
          bVar2 = UnityEngine_Component__TryGetComponent_object_
                            ((UnityEngine_Component_o *)pUVar1,(Il2CppObject **)local_res10,
                             (MethodInfo_6657C0 *)MethodInfo_UnityEngine_Component_TryGetComponent_Animator);
          animator = local_res10[0];
          if (!bVar2) {
            return;
          }
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin);
          CustomLogic_CustomLogicAnimatorBuiltin___ctor_1f01b00
                    (__this_01,(CustomLogic_BuiltinClassInstance_o *)__this,animator,(MethodInfo *)0x0);
          targetAddress = &(__this->fields)._animator;
          (__this->fields)._animator = __this_01;
        }
        Il2CppCodeGenWriteBarrier(targetAddress,__this_01);
        return;
      }
    }
  }
label_181fa221b:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_Position (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa26d0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Position
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__get_position(local_18,__this_00,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Position
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Position (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181fa2b60

void CustomLogic_CustomLogicTransformBuiltin__set_Position
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    local_18[0].x = (value->fields).Value.fields.x;
    local_18[0].y = (value->fields).Value.fields.y;
    local_18[0].z = (value->fields).Value.fields.z;
    UnityEngine_Transform__set_position(__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_LocalPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_LocalPosition (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa23a0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_LocalPosition
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__get_localPosition(local_18,__this_00,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_LocalPosition
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_LocalPosition (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181fa2a50

void CustomLogic_CustomLogicTransformBuiltin__set_LocalPosition
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    local_18[0].x = (value->fields).Value.fields.x;
    local_18[0].y = (value->fields).Value.fields.y;
    local_18[0].z = (value->fields).Value.fields.z;
    UnityEngine_Transform__set_localPosition(__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_Rotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa27f0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Rotation
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Transform_o *__this_00;
  float fVar4;
  UnityEngine_Quaternion_o *pUVar5;
  UnityEngine_Vector3_o *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Quaternion_o local_28;
  UnityEngine_Quaternion_Fields local_18;
  
  local_18.x = 0.0;
  local_18.y = 0.0;
  local_18.z = 0.0;
  local_18.w = 0.0;
  if ((__this->fields)._needSetRotation != false) {
    __this_00 = (__this->fields).Value;
    if (__this_00 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar5 = UnityEngine_Transform__get_rotation(&local_28,__this_00,(MethodInfo *)0x0);
    local_18.x = (pUVar5->fields).x;
    local_18.y = (pUVar5->fields).y;
    local_18.z = (pUVar5->fields).z;
    local_18.w = (pUVar5->fields).w;
    pUVar6 = UnityEngine_Quaternion__Internal_ToEulerRad
                       ((UnityEngine_Vector3_o *)&local_28,(UnityEngine_Quaternion_o *)&local_18,
                        (MethodInfo *)0x0);
    uVar1 = (pUVar6->fields).x;
    uVar2 = (pUVar6->fields).y;
    local_38.y = (float)uVar2 * 57.29578;
    local_38.x = (float)uVar1 * 57.29578;
    local_38.z = (pUVar6->fields).z * 57.29578;
    pUVar6 = UnityEngine_Quaternion__Internal_MakePositive
                       ((UnityEngine_Vector3_o *)&local_28,(UnityEngine_Vector3_o *)&local_38,
                        (MethodInfo *)0x0);
    fVar4 = (pUVar6->fields).y;
    fVar3 = (pUVar6->fields).z;
    (__this->fields)._internalRotation.fields.x = (pUVar6->fields).x;
    (__this->fields)._internalRotation.fields.y = fVar4;
    (__this->fields)._internalRotation.fields.z = fVar3;
    (__this->fields)._needSetRotation = false;
  }
  local_38.x = (__this->fields)._internalRotation.fields.x;
  local_38.y = (__this->fields)._internalRotation.fields.y;
  local_38.z = (__this->fields)._internalRotation.fields.z;
  pCVar7 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                     ((UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
  return pCVar7;
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Rotation
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Rotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181fa2c60

void CustomLogic_CustomLogicTransformBuiltin__set_Rotation
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Transform_o *__this_00;
  float fVar4;
  UnityEngine_Quaternion_o *pUVar5;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar4 = (value->fields).Value.fields.y;
    fVar3 = (value->fields).Value.fields.z;
    __this_00 = (__this->fields).Value;
    (__this->fields)._internalRotation.fields.x = (value->fields).Value.fields.x;
    (__this->fields)._internalRotation.fields.y = fVar4;
    (__this->fields)._internalRotation.fields.z = fVar3;
    uVar1 = (__this->fields)._internalRotation.fields.x;
    uVar2 = (__this->fields)._internalRotation.fields.y;
    (__this->fields)._needSetRotation = false;
    local_28.y = (float)uVar2 * 0.017453292;
    local_28.x = (float)uVar1 * 0.017453292;
    local_28.z = (__this->fields)._internalRotation.fields.z * 0.017453292;
    pUVar5 = UnityEngine_Quaternion__Internal_FromEulerRad
                       (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      local_28.x = (pUVar5->fields).x;
      local_28.y = (pUVar5->fields).y;
      local_28.z = (pUVar5->fields).z;
      local_28.w = (pUVar5->fields).w;
      UnityEngine_Transform__set_rotation(__this_00,(UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_LocalRotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_LocalRotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa23f0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_LocalRotation
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Transform_o *__this_00;
  float fVar4;
  UnityEngine_Quaternion_o *pUVar5;
  UnityEngine_Vector3_o *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Quaternion_o local_28;
  UnityEngine_Quaternion_Fields local_18;
  
  local_18.x = 0.0;
  local_18.y = 0.0;
  local_18.z = 0.0;
  local_18.w = 0.0;
  if ((__this->fields)._needSetLocalRotation != false) {
    __this_00 = (__this->fields).Value;
    if (__this_00 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar5 = UnityEngine_Transform__get_localRotation(&local_28,__this_00,(MethodInfo *)0x0);
    local_18.x = (pUVar5->fields).x;
    local_18.y = (pUVar5->fields).y;
    local_18.z = (pUVar5->fields).z;
    local_18.w = (pUVar5->fields).w;
    pUVar6 = UnityEngine_Quaternion__Internal_ToEulerRad
                       ((UnityEngine_Vector3_o *)&local_28,(UnityEngine_Quaternion_o *)&local_18,
                        (MethodInfo *)0x0);
    uVar1 = (pUVar6->fields).x;
    uVar2 = (pUVar6->fields).y;
    local_38.y = (float)uVar2 * 57.29578;
    local_38.x = (float)uVar1 * 57.29578;
    local_38.z = (pUVar6->fields).z * 57.29578;
    pUVar6 = UnityEngine_Quaternion__Internal_MakePositive
                       ((UnityEngine_Vector3_o *)&local_28,(UnityEngine_Vector3_o *)&local_38,
                        (MethodInfo *)0x0);
    fVar4 = (pUVar6->fields).y;
    fVar3 = (pUVar6->fields).z;
    (__this->fields)._internalLocalRotation.fields.x = (pUVar6->fields).x;
    (__this->fields)._internalLocalRotation.fields.y = fVar4;
    (__this->fields)._internalLocalRotation.fields.z = fVar3;
    (__this->fields)._needSetLocalRotation = false;
  }
  local_38.x = (__this->fields)._internalLocalRotation.fields.x;
  local_38.y = (__this->fields)._internalLocalRotation.fields.y;
  local_38.z = (__this->fields)._internalLocalRotation.fields.z;
  pCVar7 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                     ((UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
  return pCVar7;
}


// CustomLogic.CustomLogicTransformBuiltin$$set_LocalRotation
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_LocalRotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181fa2a90

void CustomLogic_CustomLogicTransformBuiltin__set_LocalRotation
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Transform_o *__this_00;
  float fVar4;
  UnityEngine_Quaternion_o *pUVar5;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar4 = (value->fields).Value.fields.y;
    fVar3 = (value->fields).Value.fields.z;
    __this_00 = (__this->fields).Value;
    (__this->fields)._internalLocalRotation.fields.x = (value->fields).Value.fields.x;
    (__this->fields)._internalLocalRotation.fields.y = fVar4;
    (__this->fields)._internalLocalRotation.fields.z = fVar3;
    uVar1 = (__this->fields)._internalLocalRotation.fields.x;
    uVar2 = (__this->fields)._internalLocalRotation.fields.y;
    (__this->fields)._needSetLocalRotation = false;
    local_28.y = (float)uVar2 * 0.017453292;
    local_28.x = (float)uVar1 * 0.017453292;
    local_28.z = (__this->fields)._internalLocalRotation.fields.z * 0.017453292;
    pUVar5 = UnityEngine_Quaternion__Internal_FromEulerRad
                       (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      local_28.x = (pUVar5->fields).x;
      local_28.y = (pUVar5->fields).y;
      local_28.z = (pUVar5->fields).z;
      local_28.w = (pUVar5->fields).w;
      UnityEngine_Transform__set_localRotation
                (__this_00,(UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_QuaternionRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_QuaternionRotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa2760

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__get_QuaternionRotation
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_o *pUVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Quaternion_Fields local_18;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__get_rotation
                       ((UnityEngine_Quaternion_o *)&local_18,__this_00,(MethodInfo *)0x0);
    local_18.x = (pUVar1->fields).x;
    local_18.y = (pUVar1->fields).y;
    local_18.z = (pUVar1->fields).z;
    local_18.w = (pUVar1->fields).w;
    pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                       ((UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_QuaternionRotation
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_QuaternionRotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* value, const MethodInfo* method);
// 0x181fa2be0

void CustomLogic_CustomLogicTransformBuiltin__set_QuaternionRotation
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicQuaternionBuiltin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_Fields local_18;
  
  (__this->fields)._needSetRotation = true;
  (__this->fields)._needSetLocalRotation = true;
  if ((value != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    local_18.x = (value->fields).Value.fields.x;
    local_18.y = (value->fields).Value.fields.y;
    local_18.z = (value->fields).Value.fields.z;
    local_18.w = (value->fields).Value.fields.w;
    UnityEngine_Transform__set_rotation(__this_00,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_QuaternionLocalRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_QuaternionLocalRotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa2720

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__get_QuaternionLocalRotation
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_o *pUVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Quaternion_Fields local_18;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__get_localRotation
                       ((UnityEngine_Quaternion_o *)&local_18,__this_00,(MethodInfo *)0x0);
    local_18.x = (pUVar1->fields).x;
    local_18.y = (pUVar1->fields).y;
    local_18.z = (pUVar1->fields).z;
    local_18.w = (pUVar1->fields).w;
    pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                       ((UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_QuaternionLocalRotation
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_QuaternionLocalRotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* value, const MethodInfo* method);
// 0x181fa2ba0

void CustomLogic_CustomLogicTransformBuiltin__set_QuaternionLocalRotation
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicQuaternionBuiltin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_Fields local_18;
  
  (__this->fields)._needSetRotation = true;
  (__this->fields)._needSetLocalRotation = true;
  if ((value != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    local_18.x = (value->fields).Value.fields.x;
    local_18.y = (value->fields).Value.fields.y;
    local_18.z = (value->fields).Value.fields.z;
    local_18.w = (value->fields).Value.fields.w;
    UnityEngine_Transform__set_localRotation
              (__this_00,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Scale
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_Scale (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa28b0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Scale
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__get_localScale(local_18,__this_00,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Scale
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Scale (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181fa2cf0

void CustomLogic_CustomLogicTransformBuiltin__set_Scale
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    local_18[0].x = (value->fields).Value.fields.x;
    local_18[0].y = (value->fields).Value.fields.y;
    local_18[0].z = (value->fields).Value.fields.z;
    UnityEngine_Transform__set_localScale(__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Forward
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_Forward (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa2320

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Forward
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__get_forward(local_18,__this_00,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Forward
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Forward (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181fa29d0

void CustomLogic_CustomLogicTransformBuiltin__set_Forward
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    local_18[0].x = (value->fields).Value.fields.x;
    local_18[0].y = (value->fields).Value.fields.y;
    local_18[0].z = (value->fields).Value.fields.z;
    UnityEngine_Transform__set_forward(__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Up
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_Up (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa2900

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Up
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__get_up(local_18,__this_00,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Up
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Up (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181fa2d30

void CustomLogic_CustomLogicTransformBuiltin__set_Up
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    local_18[0].x = (value->fields).Value.fields.x;
    local_18[0].y = (value->fields).Value.fields.y;
    local_18[0].z = (value->fields).Value.fields.z;
    UnityEngine_Transform__set_up(__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Right
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_Right (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa27a0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Right
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__get_right(local_18,__this_00,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Right
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Right (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181fa2c20

void CustomLogic_CustomLogicTransformBuiltin__set_Right
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    local_18[0].x = (value->fields).Value.fields.x;
    local_18[0].y = (value->fields).Value.fields.y;
    local_18[0].z = (value->fields).Value.fields.z;
    UnityEngine_Transform__set_right(__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Parent
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_Parent (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa2610

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Parent
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_184345845 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345845 = '\x01';
  }
  pUVar2 = (__this->fields).Value;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return (CustomLogic_CustomLogicTransformBuiltin_o *)0x0;
    }
    pUVar2 = (__this->fields).Value;
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,pUVar2,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Parent
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Parent (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* value, const MethodInfo* method);
// 0x181fa2b20

void CustomLogic_CustomLogicTransformBuiltin__set_Parent
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicTransformBuiltin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *p;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    p = (UnityEngine_Transform_o *)0x0;
    if (value != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      p = (value->fields).Value;
    }
    UnityEngine_Transform__SetParent(__this_00,p,(MethodInfo *)0x0);
    (__this->fields)._needSetRotation = true;
    (__this->fields)._needSetLocalRotation = true;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicTransformBuiltin__get_Name (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa25f0

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
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Layer
// il2cpp: int32_t CustomLogic_CustomLogicTransformBuiltin__get_Layer (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa2370

int32_t CustomLogic_CustomLogicTransformBuiltin__get_Layer
                  (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  int32_t iVar1;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      iVar1 = UnityEngine_GameObject__get_layer(__this_01,(MethodInfo *)0x0);
      return iVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Layer
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Layer (CustomLogic_CustomLogicTransformBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181fa2a10

void CustomLogic_CustomLogicTransformBuiltin__set_Layer
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__set_layer(__this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Character
// il2cpp: CustomLogic_CustomLogicCharacterBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_Character (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa2230

CustomLogic_CustomLogicCharacterBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Character
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  bool bVar2;
  Characters_BaseCharacter_o *character;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar3;
  
  if (Il2CppMethodInitialized_184345846 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345846 = '\x01';
  }
  pUVar1 = (__this->fields).Value;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).Value;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      character = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar1,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter)
      ;
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar3 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
      return pCVar3;
    }
    ThrowNullReferenceException();
  }
  return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_MapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_MapObject (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa24b0

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__get_MapObject
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  bool bVar2;
  UnityEngine_GameObject_o *key;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  Map_MapObject_o *local_res8;
  
  if (Il2CppMethodInitialized_184345847 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345847 = '\x01';
  }
  pUVar1 = (__this->fields).Value;
  local_res8 = (Map_MapObject_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
    key = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this_00,(Il2CppObject *)key,(Il2CppObject **)&local_res8,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_TryGetValue);
      if (!bVar2) {
        return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
      }
      pCVar3 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                         (__this_01,local_res8,(MethodInfo *)0x0);
      return pCVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Animation
// il2cpp: CustomLogic_CustomLogicAnimationBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_Animation (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x18152f220

CustomLogic_CustomLogicAnimationBuiltin_o*
CustomLogic_CustomLogicTransformBuiltin__get_Animation(CustomLogic_CustomLogicTransformBuiltin_o* __this, MethodInfo* method)

{
  return (Unity_Properties_IProperty_TContainer__o *)__this[1].fields.m_Properties.fields._list;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Animator
// il2cpp: CustomLogic_CustomLogicAnimatorBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_Animator (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x18058a6f0

CustomLogic_CustomLogicAnimatorBuiltin_o*
CustomLogic_CustomLogicTransformBuiltin__get_Animator(CustomLogic_CustomLogicTransformBuiltin_o* __this, MethodInfo* method)

{
  return (Unity_IntegerTime_DiscreteTime_o)
         (Unity_IntegerTime_DiscreteTime_Fields)(__this->fields)._animator.fields.Value;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_AudioSource
// il2cpp: CustomLogic_CustomLogicAudioSourceBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_AudioSource (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x180b48770

CustomLogic_CustomLogicAudioSourceBuiltin_o*
CustomLogic_CustomLogicTransformBuiltin__get_AudioSource(CustomLogic_CustomLogicTransformBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields)._audioSource;
}


// CustomLogic.CustomLogicTransformBuiltin$$GetTransform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__GetTransform (CustomLogic_CustomLogicTransformBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181fa14b0

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__GetTransform
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_184345848 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345848 = '\x01';
  }
  pUVar2 = (__this->fields).Value;
  if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar2 = UnityEngine_Transform__Find(pUVar2,name,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,pUVar2,(MethodInfo *)0x0);
    return __this_00;
  }
  return (CustomLogic_CustomLogicTransformBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicTransformBuiltin$$GetTransforms
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__GetTransforms (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa1570
// eh: try 0x181fa1640..0x181fa1886 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181fa163e: nop 
// asm:   0x181fa182e: lea rcx, [rsp + 0x30]
// asm:   0x181fa1833: call 0x1818789e0  ; il2cpp_runtime_helper_1818789e0()
// asm:   0x181fa1838: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181fa183d: test rcx, rcx
// asm:   0x181fa1840: jne 0x181fa1886
// asm:   0x181fa1842: mov r14, qword ptr [rsp + 0x78]
// asm:   0x181fa1886: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__GetTransforms
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar7;
  MethodInfo *pMVar8;
  Il2CppObject *pIVar9;
  bool bVar10;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  VirtualInvokeData *pVVar11;
  UnityEngine_Transform_o *pUVar12;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_02;
  ushort uVar13;
  Il2CppObject *local_res8;
  undefined8 local_res18;
  CustomLogic_CustomLogicListBuiltin_o *local_res20;
  Il2CppObject **local_28;
  undefined8 *local_20;
  
  if (Il2CppMethodInitialized_184345849 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_184345849 = '\x01';
  }
  local_res8 = (Il2CppObject *)0x0;
  local_res18 = 0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  pUVar12 = (__this->fields).Value;
  if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_res20 = __this_01;
  local_res8 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(pUVar12,(MethodInfo *)0x0);
  local_28 = &local_res8;
  local_20 = &local_res18;
  do {
    pIVar9 = local_res8;
    if (local_res8 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar5 = local_res8->klass;
    uVar3 = (pIVar5->_2).interface_offsets_count;
    if (uVar3 != 0) {
      uVar13 = 0;
      pIVar6 = (pIVar5->_1).interfaceOffsets;
      do {
        if (pIVar6[uVar13].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar11 = pIVar5->vtable + pIVar6[uVar13].offset;
          goto label_181fa1696;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar3);
    }
    pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                        (local_res8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_181fa1696:
    bVar10 = (*pVVar11->methodPtr)(pIVar9,pVVar11->method);
    pIVar9 = local_res8;
    if (!bVar10) {
      il2cpp_runtime_helper_1818789e0(&local_28);
      return __this_01;
    }
    if (local_res8 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar5 = local_res8->klass;
    uVar3 = (pIVar5->_2).interface_offsets_count;
    if (uVar3 != 0) {
      uVar13 = 0;
      pIVar6 = (pIVar5->_1).interfaceOffsets;
      do {
        if (pIVar6[uVar13].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar11 = pIVar5->vtable + (pIVar6[uVar13].offset + 1);
          goto label_181fa1709;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar3);
    }
    pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                        (local_res8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_181fa1709:
    pUVar12 = (UnityEngine_Transform_o *)(*pVVar11->methodPtr)(pIVar9,pVVar11->method);
    if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
      bVar2 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
      if (((pUVar12->klass->_2).typeHierarchyDepth < bVar2) ||
         ((pUVar12->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar12);
      }
    }
    if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (__this_01->fields).List;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_02,pUVar12,(MethodInfo *)0x0);
    pMVar8 = MethodInfo_System_Collections_Generic_List_object_Add;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
      ThrowNullReferenceException();
    }
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar7 = (__this_00->fields)._items;
    if (pSVar7 == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar4 = (__this_00->fields)._size;
    if (uVar4 < (uint)pSVar7->max_length) {
      (__this_00->fields)._size = uVar4 + 1;
      if ((uint)pSVar7->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      pSVar7->m_Items[(int)uVar4] = (Il2CppObject *)__this_02;
      Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar4,__this_02);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_00,(Il2CppObject *)__this_02,
                 (MethodInfo_93DD50 *)pMVar8->klass->rgctx_data[0xe].method);
    }
  } while( true );
}


// CustomLogic.CustomLogicTransformBuiltin$$IsPlayingAnimation
// il2cpp: bool CustomLogic_CustomLogicTransformBuiltin__IsPlayingAnimation (CustomLogic_CustomLogicTransformBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x181fa1970

bool CustomLogic_CustomLogicTransformBuiltin__IsPlayingAnimation
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  CustomLogic_CustomLogicAnimationBuiltin_o *__this_00;
  bool bVar1;
  System_String_o *b;
  
  if ((__this->fields)._animation == (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
    if ((__this->fields)._animator == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      return false;
    }
    if (anim != (System_String_o *)0x0) {
      b = System_String__Replace(anim,0x2e,0x5f,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality((__this->fields)._currentAnimation,b,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  else {
    __this_00 = (__this->fields)._animation;
    if (__this_00 != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicAnimationBuiltin__IsPlaying(__this_00,anim,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$PlayAnimation
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__PlayAnimation (CustomLogic_CustomLogicTransformBuiltin_o* __this, System_String_o* anim, float fade, const MethodInfo* method);
// 0x181fa1a30

void CustomLogic_CustomLogicTransformBuiltin__PlayAnimation
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,System_String_o *anim,float fade,
               MethodInfo *method)

{
  CustomLogic_CustomLogicAnimatorBuiltin_o *pCVar1;
  UnityEngine_Animator_o *__this_00;
  CustomLogic_CustomLogicAnimationBuiltin_o *pCVar2;
  bool bVar3;
  System_String_o *b;
  
  if ((__this->fields)._animation != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
    pCVar2 = (__this->fields)._animation;
    if (pCVar2 != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
      bVar3 = CustomLogic_CustomLogicAnimationBuiltin__IsPlaying(pCVar2,anim,(MethodInfo *)0x0);
      if (bVar3) {
        return;
      }
      pCVar2 = (__this->fields)._animation;
      if (pCVar2 != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
        CustomLogic_CustomLogicAnimationBuiltin__PlayAnimation(pCVar2,anim,fade,0,(MethodInfo *)0x0);
        return;
      }
    }
label_181fa1b10:
    ThrowNullReferenceException();
  }
  if ((__this->fields)._animator != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
    if (anim == (System_String_o *)0x0) goto label_181fa1b10;
    b = System_String__Replace(anim,0x2e,0x5f,(MethodInfo *)0x0);
    bVar3 = System_String__op_Inequality((__this->fields)._currentAnimation,b,(MethodInfo *)0x0);
    if (bVar3) {
      pCVar1 = (__this->fields)._animator;
      if ((pCVar1 == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) ||
         (__this_00 = (pCVar1->fields).Value, __this_00 == (UnityEngine_Animator_o *)0x0)) goto label_181fa1b10;
      UnityEngine_Animator__CrossFade_2eae7e0(__this_00,b,fade,(MethodInfo *)0x0);
      (__this->fields)._currentAnimation = b;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._currentAnimation,b);
    }
  }
  return;
}


// CustomLogic.CustomLogicTransformBuiltin$$GetAnimationLength
// il2cpp: float CustomLogic_CustomLogicTransformBuiltin__GetAnimationLength (CustomLogic_CustomLogicTransformBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x181fa10d0

float CustomLogic_CustomLogicTransformBuiltin__GetAnimationLength
                (CustomLogic_CustomLogicTransformBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  CustomLogic_CustomLogicAnimatorBuiltin_o *__this_00;
  CustomLogic_CustomLogicAnimationBuiltin_o *__this_01;
  System_String_o *anim_00;
  float fVar1;
  
  if ((__this->fields)._animation == (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
    if ((__this->fields)._animator == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      return -1.0;
    }
    if (anim != (System_String_o *)0x0) {
      __this_00 = (__this->fields)._animator;
      anim_00 = System_String__Replace(anim,0x2e,0x5f,(MethodInfo *)0x0);
      fVar1 = CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationLength(__this_00,anim_00,(MethodInfo *)0x0);
      return fVar1;
    }
  }
  else {
    __this_01 = (__this->fields)._animation;
    if (__this_01 != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
      fVar1 = CustomLogic_CustomLogicAnimationBuiltin__GetAnimationLength(__this_01,anim,(MethodInfo *)0x0);
      return fVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$PlaySound
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__PlaySound (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa1b20

void CustomLogic_CustomLogicTransformBuiltin__PlaySound
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicAudioSourceBuiltin_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields)._audioSource;
  if (pCVar1 != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
    bVar2 = CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying(pCVar1,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    pCVar1 = (__this->fields)._audioSource;
    if (pCVar1 != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
      CustomLogic_CustomLogicAudioSourceBuiltin__Play(pCVar1,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$StopSound
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__StopSound (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa1d00

void CustomLogic_CustomLogicTransformBuiltin__StopSound
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicAudioSourceBuiltin_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields)._audioSource;
  if (pCVar1 != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
    bVar2 = CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying(pCVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields)._audioSource;
    if (pCVar1 != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
      CustomLogic_CustomLogicAudioSourceBuiltin__Stop(pCVar1,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$ToggleParticle
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__ToggleParticle (CustomLogic_CustomLogicTransformBuiltin_o* __this, bool enabled, const MethodInfo* method);
// 0x181fa1d40

void CustomLogic_CustomLogicTransformBuiltin__ToggleParticle
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,bool enabled,MethodInfo *method)

{
  UnityEngine_ParticleSystem_o *pUVar1;
  bool bVar2;
  UnityEngine_ParticleSystem_EmissionModule_o local_res8;
  
  local_res8.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  pUVar1 = (__this->fields)._particleSystem;
  if (pUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
    bVar2 = UnityEngine_ParticleSystem__get_isPlaying(pUVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar1 = (__this->fields)._particleSystem;
      if (pUVar1 == (UnityEngine_ParticleSystem_o *)0x0) goto label_181fa1dae;
      UnityEngine_ParticleSystem__Play_2fca570(pUVar1,(MethodInfo *)0x0);
    }
    pUVar1 = (__this->fields)._particleSystem;
    if (pUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
      local_res8.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           UnityEngine_ParticleSystem__get_noise(pUVar1,(MethodInfo *)0x0);
      UnityEngine_ParticleSystem_EmissionModule__set_enabled(&local_res8,enabled,(MethodInfo *)0x0);
      return;
    }
  }
label_181fa1dae:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$InverseTransformDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__InverseTransformDirection (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* direction, const MethodInfo* method);
// 0x181fa1890

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__InverseTransformDirection
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *direction,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  if ((direction != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    local_28.x = (direction->fields).Value.fields.x;
    local_28.y = (direction->fields).Value.fields.y;
    local_28.z = (direction->fields).Value.fields.z;
    pUVar1 = UnityEngine_Transform__InverseTransformDirection
                       (local_18,__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$InverseTransformPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__InverseTransformPoint (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* point, const MethodInfo* method);
// 0x181fa1900

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__InverseTransformPoint
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *point,
          MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  if ((point != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    local_28.x = (point->fields).Value.fields.x;
    local_28.y = (point->fields).Value.fields.y;
    local_28.z = (point->fields).Value.fields.z;
    pUVar1 = UnityEngine_Transform__InverseTransformPoint
                       (local_18,__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$TransformDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__TransformDirection (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* direction, const MethodInfo* method);
// 0x181fa1dc0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__TransformDirection
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *direction,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  if ((direction != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    local_28.x = (direction->fields).Value.fields.x;
    local_28.y = (direction->fields).Value.fields.y;
    local_28.z = (direction->fields).Value.fields.z;
    pUVar1 = UnityEngine_Transform__TransformDirection
                       (local_18,__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$TransformPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__TransformPoint (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* point, const MethodInfo* method);
// 0x181fa1e30

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__TransformPoint
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *point,
          MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  if ((point != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    local_28.x = (point->fields).Value.fields.x;
    local_28.y = (point->fields).Value.fields.y;
    local_28.z = (point->fields).Value.fields.z;
    pUVar1 = UnityEngine_Transform__TransformPoint
                       (local_18,__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$Rotate
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__Rotate (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* rotation, const MethodInfo* method);
// 0x181fa1bd0

void CustomLogic_CustomLogicTransformBuiltin__Rotate
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *rotation,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_18;
  
  if ((rotation != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    local_18.x = (rotation->fields).Value.fields.x;
    local_18.y = (rotation->fields).Value.fields.y;
    local_18.z = (rotation->fields).Value.fields.z;
    UnityEngine_Transform__Rotate_2f59e30(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    (__this->fields)._needSetRotation = true;
    (__this->fields)._needSetLocalRotation = true;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$RotateAround
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__RotateAround (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* point, CustomLogic_CustomLogicVector3Builtin_o* axis, float angle, const MethodInfo* method);
// 0x181fa1b60

void CustomLogic_CustomLogicTransformBuiltin__RotateAround
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *point,CustomLogic_CustomLogicVector3Builtin_o *axis,
               float angle,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_Fields local_18 [2];
  
  (__this->fields)._needSetRotation = true;
  (__this->fields)._needSetLocalRotation = true;
  if (((point != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
      (axis != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    local_28.x = (axis->fields).Value.fields.x;
    local_28.y = (axis->fields).Value.fields.y;
    local_28.z = (axis->fields).Value.fields.z;
    local_18[0].x = (point->fields).Value.fields.x;
    local_18[0].y = (point->fields).Value.fields.y;
    local_18[0].z = (point->fields).Value.fields.z;
    UnityEngine_Transform__RotateAround
              (__this_00,(UnityEngine_Vector3_o *)local_18,(UnityEngine_Vector3_o *)&local_28,angle,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$LookAt
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__LookAt (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* target, const MethodInfo* method);
// 0x181fa19e0

void CustomLogic_CustomLogicTransformBuiltin__LookAt
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *target,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  (__this->fields)._needSetRotation = true;
  (__this->fields)._needSetLocalRotation = true;
  if ((target != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    local_18[0].x = (target->fields).Value.fields.x;
    local_18[0].y = (target->fields).Value.fields.y;
    local_18[0].z = (target->fields).Value.fields.z;
    UnityEngine_Transform__LookAt_2f599f0(__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$SetRenderersEnabled
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__SetRenderersEnabled (CustomLogic_CustomLogicTransformBuiltin_o* __this, bool enabled, const MethodInfo* method);
// 0x181fa1c60

void CustomLogic_CustomLogicTransformBuiltin__SetRenderersEnabled
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,bool enabled,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  System_Object_array *pSVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_18434584a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    Il2CppMethodInitialized_18434584a = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pSVar1 = UnityEngine_Component__GetComponentsInChildren_object__665370
                       ((UnityEngine_Component_o *)__this_00,
                        (MethodInfo_665370 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer
                       );
    if (pSVar1 != (System_Object_array *)0x0) {
      uVar2 = 0;
      while( true ) {
        if ((int)pSVar1->max_length <= (int)uVar2) {
          return;
        }
        if ((uint)pSVar1->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        if ((UnityEngine_Renderer_o *)pSVar1->m_Items[(int)uVar2] == (UnityEngine_Renderer_o *)0x0) break;
        UnityEngine_Renderer__set_enabled
                  ((UnityEngine_Renderer_o *)pSVar1->m_Items[(int)uVar2],enabled,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$GetColliders
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__GetColliders (CustomLogic_CustomLogicTransformBuiltin_o* __this, bool recursive, const MethodInfo* method);
// 0x181fa1150

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__GetColliders
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,bool recursive,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Transform_o *__this_00;
  System_Collections_Generic_List_object__o *pSVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *obj;
  MethodInfo *pMVar4;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar5;
  System_Object_array *pSVar6;
  Il2CppObject *pIVar7;
  CustomLogic_CustomLogicColliderBuiltin_o *pCVar8;
  System_Object_array *pSVar9;
  Il2CppObject *pIVar10;
  uint uVar11;
  
  if (Il2CppMethodInitialized_18434584b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponents_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_18434584b = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    __this_02 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (recursive) {
      if ((__this_02 != (UnityEngine_GameObject_o *)0x0) &&
         (pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                             (__this_02,
                              (MethodInfo_6F5810 *)
                              MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider),
         pSVar6 != (System_Object_array *)0x0)) {
        uVar11 = 0;
        while( true ) {
          if ((int)pSVar6->max_length <= (int)uVar11) {
            return __this_01;
          }
          if ((uint)pSVar6->max_length <= uVar11) break;
          if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) goto label_181fa147e;
          pSVar3 = (__this_01->fields).List;
          pIVar7 = pSVar6->m_Items[(int)uVar11];
          pSVar9 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          if (pSVar9 == (System_Object_array *)0x0) goto label_181fa147e;
          if ((pIVar7 != (Il2CppObject *)0x0) &&
             (pIVar10 = il2cpp_vm_Object_IsInst(pIVar7,(((pSVar9->obj).klass)->_1).element_class),
             pIVar10 == (Il2CppObject *)0x0)) {
            pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
          }
          if ((int)pSVar9->max_length == 0) break;
          pSVar9->m_Items[0] = pIVar7;
          Il2CppCodeGenWriteBarrier(pSVar9->m_Items,pIVar7);
          pCVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
          CustomLogic_CustomLogicColliderBuiltin___ctor_1f02850(pCVar8,pSVar9,(MethodInfo *)0x0);
          pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
          if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto label_181fa147e;
          piVar1 = &(pSVar3->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar9 = (pSVar3->fields)._items;
          if (pSVar9 == (System_Object_array *)0x0) goto label_181fa147e;
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pSVar9->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            if ((uint)pSVar9->max_length <= uVar2) break;
            pSVar9->m_Items[(int)uVar2] = (Il2CppObject *)pCVar8;
            Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar2,pCVar8);
            uVar11 = uVar11 + 1;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar3,(Il2CppObject *)pCVar8,
                       (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
            uVar11 = uVar11 + 1;
          }
        }
        goto label_181fa14a4;
      }
    }
    else if ((__this_02 != (UnityEngine_GameObject_o *)0x0) &&
            (pUVar5 = UnityEngine_GameObject__GetComponents___Il2CppFullySharedGenericType_
                                (__this_02,
                                 (MethodInfo_6F5AC0 *)MethodInfo_UnityEngine_GameObject_GetComponents_Collider
                                ), pUVar5 != (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0
            )) {
      uVar11 = 0;
      while( true ) {
        if ((int)pUVar5->max_length <= (int)uVar11) {
          return __this_01;
        }
        if ((uint)pUVar5->max_length <= uVar11) break;
        if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) goto label_181fa147e;
        pSVar3 = (__this_01->fields).List;
        obj = (&pUVar5->m_Items[0].klass)[(int)uVar11];
        pSVar6 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        if (pSVar6 == (System_Object_array *)0x0) goto label_181fa147e;
        if ((obj != (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) &&
           (pIVar7 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((pSVar6->obj).klass)->_1).element_class),
           pIVar7 == (Il2CppObject *)0x0)) {
          pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
        }
        if ((int)pSVar6->max_length == 0) break;
        pSVar6->m_Items[0] = (Il2CppObject *)obj;
        Il2CppCodeGenWriteBarrier(pSVar6->m_Items,obj);
        pCVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
        CustomLogic_CustomLogicColliderBuiltin___ctor_1f02850(pCVar8,pSVar6,(MethodInfo *)0x0);
        pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto label_181fa147e;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (pSVar3->fields)._items;
        if (pSVar6 == (System_Object_array *)0x0) goto label_181fa147e;
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pSVar6->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          if ((uint)pSVar6->max_length <= uVar2) break;
          pSVar6->m_Items[(int)uVar2] = (Il2CppObject *)pCVar8;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2,pCVar8);
          uVar11 = uVar11 + 1;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar3,(Il2CppObject *)pCVar8,(MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method)
          ;
          uVar11 = uVar11 + 1;
        }
      }
label_181fa14a4:
      ThrowIndexOutOfRangeException();
    }
  }
label_181fa147e:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$SetActive
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__SetActive (CustomLogic_CustomLogicTransformBuiltin_o* __this, bool active, const MethodInfo* method);
// 0x181fa1c20

void CustomLogic_CustomLogicTransformBuiltin__SetActive
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,bool active,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,active,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$op_Implicit
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__op_Implicit (UnityEngine_Transform_o* value, const MethodInfo* method);
// 0x181fa2950

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__op_Implicit(UnityEngine_Transform_o *value,MethodInfo *method)

{
  CustomLogic_CustomLogicTransformBuiltin_o *__this;
  
  if (Il2CppMethodInitialized_18434584c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    Il2CppMethodInitialized_18434584c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
  CustomLogic_CustomLogicTransformBuiltin___ctor(__this,value,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin$$op_Implicit
// il2cpp: UnityEngine_Transform_o* CustomLogic_CustomLogicTransformBuiltin__op_Implicit (CustomLogic_CustomLogicTransformBuiltin_o* value, const MethodInfo* method);
// 0x181fa29b0

UnityEngine_Transform_o*
CustomLogic_CustomLogicTransformBuiltin__op_Implicit(CustomLogic_CustomLogicTransformBuiltin_o* value, MethodInfo* method)

{
  if (__i != (CustomLogic_CustomLogicImageBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._currentImagePath;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicTransformBuiltin____Eq__ (CustomLogic_CustomLogicTransformBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181fa1ea0

bool CustomLogic_CustomLogicTransformBuiltin____Eq__
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *x;
  Il2CppClass *y;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434584d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434584d = '\x01';
  }
  if (self == (Il2CppObject *)0x0) {
    if (other == (Il2CppObject *)0x0) {
      return true;
    }
  }
  else {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin->_2).typeHierarchyDepth;
    if (((bVar1 <= (self->klass->_2).typeHierarchyDepth) &&
        ((self->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin)) && (other != (Il2CppObject *)0x0))
    {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (other->klass->_2).typeHierarchyDepth) &&
         ((other->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin)) {
        x = self[3].klass;
        y = other[3].klass;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
  return false;
}


// CustomLogic.CustomLogicTransformBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicTransformBuiltin____Hash__ (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa1f90

int32_t CustomLogic_CustomLogicTransformBuiltin____Hash__
                  (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  bool bVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_18434584e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434584e = '\x01';
  }
  pUVar1 = (__this->fields).Value;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return 0;
  }
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    iVar3 = (*(pUVar1->klass->vtable)._2_GetHashCode.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method);
    return iVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTransformBuiltin__get_ClassName (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x181fa22f0

System_String_o *
CustomLogic_CustomLogicTransformBuiltin__get_ClassName
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434584f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Transform");
    Il2CppMethodInitialized_18434584f = '\x01';
  }
  return "Transform";
}


// CustomLogic.CustomLogicTransformBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTransformBuiltin__get_IsAbstract (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTransformBuiltin__get_IsAbstract(CustomLogic_CustomLogicTransformBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTransformBuiltin__get_IsStatic (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicTransformBuiltin__get_IsStatic(CustomLogic_CustomLogicTransformBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTransformBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTransformBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicTransformBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


