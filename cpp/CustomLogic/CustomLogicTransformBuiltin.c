// Type: CustomLogic.CustomLogicTransformBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicTransformBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicTransformBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicTransformBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicTransformBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a4b1f0

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  NullCheck(args);
  pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTransformBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5a4f870

void CustomLogic_CustomLogicTransformBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754623d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754623d = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5a4f8e0

void CustomLogic_CustomLogicTransformBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransform>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetTransform_b__20_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a4f8f0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetTransform_b__20_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754623e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754623e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicTransformBuiltin__GetTransform(__c,name,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransforms>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetTransforms_b__21_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a4f980

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetTransforms_b__21_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__c == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicTransformBuiltin__GetTransforms(__c,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlayingAnimation>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__IsPlayingAnimation_b__22_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a4f9a0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__IsPlayingAnimation_b__22_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicAnimationBuiltin_o *__this_00;
  bool bVar1;
  undefined8 in_RAX;
  System_String_o *pSVar2;
  Il2CppObject *pIVar3;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_0754623f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754623f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar3 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar3,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      __this_00 = (__c->fields)._animation;
      if (__this_00 == (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
        if ((__c->fields)._animator == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
          bVar1 = false;
        }
        else {
          if (pSVar2 == (System_String_o *)0x0) goto label_05a4fa80;
          pSVar2 = System_String__Replace(pSVar2,0x2e,0x5f,(MethodInfo *)0x0);
          bVar1 = System_String__op_Equality((__c->fields)._currentAnimation,pSVar2,(MethodInfo *)0x0);
        }
      }
      else {
        bVar1 = CustomLogic_CustomLogicAnimationBuiltin__IsPlaying(__this_00,pSVar2,(MethodInfo *)0x0);
      }
      uStack_18 = CONCAT17(bVar1,(undefined7)uStack_18);
      pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
      return pIVar3;
    }
  }
label_05a4fa80:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimation>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__23_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a4fa90

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__23_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *anim;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float fade;
  
  if (Il2CppMethodInitialized_07546240 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546240 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    anim = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar1,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((int)__a->max_length < 2) {
      fade = 0.1;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fade = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       (pIVar1,(MethodInfo_34BDFE0 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      CustomLogic_CustomLogicTransformBuiltin__PlayAnimation(__c,anim,fade,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationLength>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__24_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a4fb80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4fc3e: movss xmm0, dword ptr [rip - 0x4a8e1fa]

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__24_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicAnimationBuiltin_o *__this_00;
  CustomLogic_CustomLogicAnimatorBuiltin_o *__this_01;
  System_String_o *pSVar1;
  Il2CppObject *pIVar2;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_07546241 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546241 = '\x01';
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
                       (pIVar2,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      __this_00 = (__c->fields)._animation;
      if (__this_00 == (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
        __this_01 = (__c->fields)._animator;
        if (__this_01 != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
          if (pSVar1 == (System_String_o *)0x0) goto label_05a4fc69;
          pSVar1 = System_String__Replace(pSVar1,0x2e,0x5f,(MethodInfo *)0x0);
          CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationLength(__this_01,pSVar1,(MethodInfo *)0x0);
        }
      }
      else {
        CustomLogic_CustomLogicAnimationBuiltin__GetAnimationLength(__this_00,pSVar1,(MethodInfo *)0x0);
      }
      pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
      return pIVar2;
    }
  }
label_05a4fc69:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlaySound>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__PlaySound_b__25_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a4fc80

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__PlaySound_b__25_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicAudioSourceBuiltin_o *pCVar1;
  bool bVar2;
  
  if (__c == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
label_05a4fcb1:
    ThrowNullReferenceException();
  }
  pCVar1 = (__c->fields)._audioSource;
  if (pCVar1 != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
    bVar2 = CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying(pCVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      pCVar1 = (__c->fields)._audioSource;
      if (pCVar1 == (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) goto label_05a4fcb1;
      CustomLogic_CustomLogicAudioSourceBuiltin__Play(pCVar1,(MethodInfo *)0x0);
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__StopSound>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__StopSound_b__26_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a4fcc0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__StopSound_b__26_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicAudioSourceBuiltin_o *pCVar1;
  bool bVar2;
  
  if (__c == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
label_05a4fcf1:
    ThrowNullReferenceException();
  }
  pCVar1 = (__c->fields)._audioSource;
  if (pCVar1 != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
    bVar2 = CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying(pCVar1,(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__c->fields)._audioSource;
      if (pCVar1 == (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) goto label_05a4fcf1;
      CustomLogic_CustomLogicAudioSourceBuiltin__Stop(pCVar1,(MethodInfo *)0x0);
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToggleParticle>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__ToggleParticle_b__27_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a4fd00

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__ToggleParticle_b__27_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546242 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546242 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    enabled = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool)
    ;
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      CustomLogic_CustomLogicTransformBuiltin__ToggleParticle(__c,enabled,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__InverseTransformDirection>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__InverseTransformDirection_b__28_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a4fd90

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__InverseTransformDirection_b__28_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if (Il2CppMethodInitialized_07546243 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546243 = '\x01';
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
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      v = UnityEngine_Transform__InverseTransformDirection
                    (__this_00,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__InverseTransformPoint>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__InverseTransformPoint_b__29_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a4fe40

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__InverseTransformPoint_b__29_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if (Il2CppMethodInitialized_07546244 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546244 = '\x01';
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
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      v = UnityEngine_Transform__InverseTransformPoint
                    (__this_00,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransformDirection>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__TransformDirection_b__30_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a4fef0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__TransformDirection_b__30_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if (Il2CppMethodInitialized_07546245 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546245 = '\x01';
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
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      v = UnityEngine_Transform__TransformDirection
                    (__this_00,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__TransformPoint>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__TransformPoint_b__31_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a4ffa0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__TransformPoint_b__31_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if (Il2CppMethodInitialized_07546246 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546246 = '\x01';
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
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      v = UnityEngine_Transform__TransformPoint
                    (__this_00,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__Rotate>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__Rotate_b__32_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a50050

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__Rotate_b__32_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546247 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546247 = '\x01';
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
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__Rotate_692dd80
                (__this_00,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
      (__c->fields)._needSetRotation = true;
      (__c->fields)._needSetLocalRotation = true;
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__RotateAround>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__RotateAround_b__33_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a50100

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
  
  if (Il2CppMethodInitialized_07546248 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546248 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a5020e:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        angle = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (__a->m_Items[2],
                           (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if ((((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
             ((__c->fields)._needSetRotation = true, (__c->fields)._needSetLocalRotation = true,
             pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
            (pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
           (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__RotateAround
                    (__this_00,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,
                     (UnityEngine_Vector3_o)(pCVar2->fields).Value.fields,angle,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
        goto label_05a5020e;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__LookAt>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__LookAt_b__34_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a50220

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__LookAt_b__34_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546249 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546249 = '\x01';
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
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (((__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
        ((__c->fields)._needSetRotation = true, (__c->fields)._needSetLocalRotation = true,
        pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__LookAt_692e330
                (__this_00,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetRenderersEnabled>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__SetRenderersEnabled_b__35_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a502d0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__SetRenderersEnabled_b__35_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754624a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754624a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    enabled = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool)
    ;
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      CustomLogic_CustomLogicTransformBuiltin__SetRenderersEnabled(__c,enabled,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetColliders>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetColliders_b__36_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a50360

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__GetColliders_b__36_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool recursive;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  System_Object_array *extraout_RDX;
  System_Object_array *method_00;
  System_Object_array *extraout_RDX_00;
  
  method_00 = __a;
  if (Il2CppMethodInitialized_0754624b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754624b = '\x01';
    method_00 = extraout_RDX;
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      recursive = false;
    }
    else {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      recursive = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                            (obj,(MethodInfo_34BD860 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicTransformBuiltin__GetColliders(__c,recursive,(MethodInfo *)method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetActive>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__SetActive_b__37_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a50400

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding__SetActive_b__37_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Transform_o *__this_00;
  bool value;
  UnityEngine_GameObject_o *__this_01;
  
  if (Il2CppMethodInitialized_0754624c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754624c = '\x01';
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
                      (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
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
// 0x5a504b0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__38_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
      uStack_8 = in_RAX;
      bVar2 = CustomLogic_CustomLogicTransformBuiltin____Eq__
                        ((CustomLogic_CustomLogicTransformBuiltin_o *)__this,__a->m_Items[0],__a->m_Items[1],
                         method);
      uStack_8 = CONCAT17(bVar2,(undefined7)uStack_8);
      pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
      return pIVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__39_0 (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a50500

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__39_0
          (CustomLogic_CustomLogicTransformBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTransformBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  bool bVar2;
  int32_t iVar3;
  Il2CppObject *pIVar4;
  int32_t iStack_1c;
  
  if (__c == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
label_05a5059d:
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07546207 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07546207 = '\x01';
  }
  pUVar1 = (__c->fields).Value;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  iVar3 = 0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pUVar1 = (__c->fields).Value;
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_05a5059d;
    iVar3 = (*(pUVar1->klass->vtable)._2_GetHashCode.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method);
  }
  iStack_1c = iVar3;
  pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_1c);
  return pIVar4;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTransformBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a4b280

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTransformBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicTransformBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07546209 == '\0') {
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
    Il2CppMethodInitialized_07546209 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x7bb199a5) {
    if (uVar2 < 0x41e389fe) {
      if (uVar2 < 0x1e9e9f86) {
        if (uVar2 < 0x3134bcf) {
          if (uVar2 == 0x232777f) {
            bVar1 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Rotation
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x3134bce) {
            bVar1 = System_String__op_Equality(name,"LocalRotation",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__LocalRotation
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0xfe07306) {
          bVar1 = System_String__op_Equality(name,"Name",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Name
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1e9e9f85) {
          bVar1 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Right
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x28528e12) {
        if (uVar2 == 0x23315ddd) {
          bVar1 = System_String__op_Equality(name,"IsPlayingAnimation",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__IsPlayingAnimation
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x28528e11) {
          bVar1 = System_String__op_Equality(name,"Scale",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Scale
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x2ba6c2e2) {
        bVar1 = System_String__op_Equality(name,"PlaySound",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__PlaySound
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x2fe74447) {
        bVar1 = System_String__op_Equality(name,"QuaternionRotation",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x41e389fd) {
        bVar1 = System_String__op_Equality(name,"Animation",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Animation
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x56fd69a4) {
      if (uVar2 < 0x492a3cd0) {
        if (uVar2 == 0x42f35940) {
          bVar1 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Up
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x492a3ccf) {
          bVar1 = System_String__op_Equality(name,"GetAnimationLength",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetAnimationLength
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0x4bb7478d) {
        bVar1 = System_String__op_Equality(name,"SetActive",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__SetActive
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x51dceaf8) {
        bVar1 = System_String__op_Equality(name,"GetColliders",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetColliders
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x56fd69a3) {
        bVar1 = System_String__op_Equality(name,"TransformPoint",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__TransformPoint
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0x6a01cd57) {
      if (uVar2 == 0x5e2c4c73) {
        bVar1 = System_String__op_Equality(name,"LookAt",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__LookAt
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x6a01cd56) {
        bVar1 = System_String__op_Equality(name,"QuaternionLocalRotation",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__QuaternionLocalRotation
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x70ec2621) {
      bVar1 = System_String__op_Equality(name,"InverseTransformPoint",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__InverseTransformPoint
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x792a6491) {
      bVar1 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding____Hash__
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x7bb199a4) {
      bVar1 = System_String__op_Equality(name,"AudioSource",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__AudioSource
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xc28a9c8f) {
    if (uVar2 < 0xa18f595a) {
      if (uVar2 < 0x91efe6d8) {
        if (uVar2 == 0x91efe6d7) {
          bVar1 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding____Eq__
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x7ea95d1e) {
          bVar1 = System_String__op_Equality(name,"GetTransforms",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetTransforms
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0x958d00f4) {
        bVar1 = System_String__op_Equality(name,"TransformDirection",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__TransformDirection
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xa18f5959) {
        bVar1 = System_String__op_Equality(name,"GetTransform",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetTransform
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0xafdc1b97) {
      if (uVar2 == 0xaf82143b) {
        bVar1 = System_String__op_Equality(name,"LocalPosition",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__LocalPosition
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xafdc1b96) {
        bVar1 = System_String__op_Equality(name,"Layer",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Layer
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xbfb982ba) {
      bVar1 = System_String__op_Equality(name,"InverseTransformDirection",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__InverseTransformDirection
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xc156ee1d) {
      bVar1 = System_String__op_Equality(name,"Parent",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Parent
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xc28a9c8e) {
      bVar1 = System_String__op_Equality(name,"MapObject",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__MapObject
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xe27f342b) {
    if (uVar2 < 0xcb7df475) {
      if (uVar2 == 0xc7933b34) {
        bVar1 = System_String__op_Equality(name,"Animator",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Animator
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xcb7df474) {
        bVar1 = System_String__op_Equality(name,"StopSound",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__StopSound
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 == 0xd64c477b) {
      bVar1 = System_String__op_Equality(name,"PlayAnimation",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__PlayAnimation
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xdabf4cff) {
      bVar1 = System_String__op_Equality(name,"ToggleParticle",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__ToggleParticle
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xe27f342a) {
      bVar1 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Position
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xe50883bb) {
    if (uVar2 == 0xe34226bf) {
      bVar1 = System_String__op_Equality(name,"RotateAround",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__RotateAround
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xe50883ba) {
      bVar1 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Forward
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xec0a0a2a) {
    bVar1 = System_String__op_Equality(name,"Rotate",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__Rotate
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xec7340b0) {
    bVar1 = System_String__op_Equality(name,"Character",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Character
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf73c4ea6) {
    bVar1 = System_String__op_Equality(name,"SetRenderersEnabled",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__SetRenderersEnabled
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTransformBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x5a4c0a0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754620a == '\0') {
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
    Il2CppMethodInitialized_0754620a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_2
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__LocalPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__LocalPosition (const MethodInfo* method);
// 0x5a4c180

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__LocalPosition(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754620b == '\0') {
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
    Il2CppMethodInitialized_0754620b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalPosition_g____set
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x5a4c260

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Rotation(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754620c == '\0') {
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
    Il2CppMethodInitialized_0754620c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_4
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_4
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__LocalRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__LocalRotation (const MethodInfo* method);
// 0x5a4c340

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__LocalRotation(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754620d == '\0') {
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
    Il2CppMethodInitialized_0754620d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__LocalRotation_g____set
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__QuaternionRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation (const MethodInfo* method);
// 0x5a4c420

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation
          (MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754620e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_71c22b0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_0754620e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_71c22b0
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__QuaternionLocalRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__QuaternionLocalRotation (const MethodInfo* method);
// 0x5a4c500

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__QuaternionLocalRotation
          (MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754620f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio_71c22a0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_0754620f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__QuaternionLocalRotatio_71c22a0
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Scale
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Scale (const MethodInfo* method);
// 0x5a4c5e0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Scale(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546210 == '\0') {
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
    Il2CppMethodInitialized_07546210 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Scale_g____getter_8_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Scale_g____setter_8_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x5a4c6c0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Forward(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546211 == '\0') {
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
    Il2CppMethodInitialized_07546211 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_9
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_9
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x5a4c7a0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546212 == '\0') {
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
    Il2CppMethodInitialized_07546212 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_10_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x5a4c880

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546213 == '\0') {
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
    Il2CppMethodInitialized_07546213 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_11_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_11_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Parent
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Parent (const MethodInfo* method);
// 0x5a4c960

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Parent(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546214 == '\0') {
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
    Il2CppMethodInitialized_07546214 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Parent_g____getter_12
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Parent_g____setter_12
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Name
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Name (const MethodInfo* method);
// 0x5a4ca40

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Name(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546215 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_07546215 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_13_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Layer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Layer (const MethodInfo* method);
// 0x5a4cae0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Layer(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  System_Action_CustomLogicTransformBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546216 == '\0') {
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
    Il2CppMethodInitialized_07546216 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Layer_g____getter_14_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTransformBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Layer_g____setter_14_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Character
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Character (const MethodInfo* method);
// 0x5a4cbc0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Character(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546217 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Character_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_07546217 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Character_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__MapObject
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__MapObject (const MethodInfo* method);
// 0x5a4cc60

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__MapObject(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546218 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__MapObject_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_07546218 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__MapObject_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Animation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Animation (const MethodInfo* method);
// 0x5a4cd00

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Animation(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546219 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Animation_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_07546219 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Animation_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__Animator
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Animator (const MethodInfo* method);
// 0x5a4cda0

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__Animator(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754621a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Animator_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_0754621a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__Animator_g____getter_1
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreatePropertyBinding__AudioSource
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__AudioSource (const MethodInfo* method);
// 0x5a4ce40

CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreatePropertyBinding__AudioSource(MethodInfo *method)

{
  System_Func_CustomLogicTransformBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754621b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__AudioSource_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
    Il2CppMethodInitialized_0754621b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings___CreatePropertyBinding__AudioSource_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__GetTransform
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetTransform (const MethodInfo* method);
// 0x5a4cee0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4cf15: jmp 0x5a4cf85

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetTransform(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754621c == '\0') {
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
    Il2CppMethodInitialized_0754621c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__20_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__20_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetTransform_b__20_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__20_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__20_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__GetTransforms
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetTransforms (const MethodInfo* method);
// 0x5a4d020
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4d055: jmp 0x5a4d0c5

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetTransforms(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754621d == '\0') {
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
    Il2CppMethodInitialized_0754621d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__21_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__21_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetTransforms_b__21_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__21_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__21_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__IsPlayingAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__IsPlayingAnimation (const MethodInfo* method);
// 0x5a4d160
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4d195: jmp 0x5a4d205

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__IsPlayingAnimation
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754621e == '\0') {
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
    Il2CppMethodInitialized_0754621e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__22_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__22_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__IsPlayingAnimation_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__22_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__22_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__PlayAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__PlayAnimation (const MethodInfo* method);
// 0x5a4d2a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4d2d5: jmp 0x5a4d345

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__PlayAnimation(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754621f == '\0') {
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
    Il2CppMethodInitialized_0754621f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__23_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__23_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__23_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__23_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__23_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__GetAnimationLength
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetAnimationLength (const MethodInfo* method);
// 0x5a4d3e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4d415: jmp 0x5a4d485

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetAnimationLength
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546220 == '\0') {
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
    Il2CppMethodInitialized_07546220 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__24_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__24_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__24_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__24_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__PlaySound
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__PlaySound (const MethodInfo* method);
// 0x5a4d520
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4d555: jmp 0x5a4d5c5

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__PlaySound(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546221 == '\0') {
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
    Il2CppMethodInitialized_07546221 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__25_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__25_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__PlaySound_b__25_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__25_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__25_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__StopSound
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__StopSound (const MethodInfo* method);
// 0x5a4d660
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4d695: jmp 0x5a4d705

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__StopSound(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546222 == '\0') {
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
    Il2CppMethodInitialized_07546222 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__26_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__26_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__StopSound_b__26_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__26_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__26_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__ToggleParticle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__ToggleParticle (const MethodInfo* method);
// 0x5a4d7a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4d7d5: jmp 0x5a4d845

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__ToggleParticle(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546223 == '\0') {
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
    Il2CppMethodInitialized_07546223 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__27_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__27_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__ToggleParticle_b__27_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__27_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__27_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__InverseTransformDirection
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__InverseTransformDirection (const MethodInfo* method);
// 0x5a4d8e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4d915: jmp 0x5a4d985

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__InverseTransformDirection
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546224 == '\0') {
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
    Il2CppMethodInitialized_07546224 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__28_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__28_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__InverseTransformDirect
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__28_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__28_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__InverseTransformPoint
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__InverseTransformPoint (const MethodInfo* method);
// 0x5a4da20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4da55: jmp 0x5a4dac5

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__InverseTransformPoint
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546225 == '\0') {
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
    Il2CppMethodInitialized_07546225 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__29_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__29_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__InverseTransformPoint
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__29_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__29_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__TransformDirection
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__TransformDirection (const MethodInfo* method);
// 0x5a4db60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4db95: jmp 0x5a4dc05

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__TransformDirection
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546226 == '\0') {
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
    Il2CppMethodInitialized_07546226 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__30_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__30_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__TransformDirection_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__30_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__30_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__TransformPoint
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__TransformPoint (const MethodInfo* method);
// 0x5a4dca0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4dcd5: jmp 0x5a4dd45

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__TransformPoint(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546227 == '\0') {
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
    Il2CppMethodInitialized_07546227 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__31_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__31_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__TransformPoint_b__31_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__31_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__31_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__Rotate
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__Rotate (const MethodInfo* method);
// 0x5a4dde0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4de15: jmp 0x5a4de85

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__Rotate(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546228 == '\0') {
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
    Il2CppMethodInitialized_07546228 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__32_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__32_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__Rotate_b__32_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__32_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__32_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__RotateAround
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__RotateAround (const MethodInfo* method);
// 0x5a4df20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4df55: jmp 0x5a4dfc5

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__RotateAround(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546229 == '\0') {
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
    Il2CppMethodInitialized_07546229 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__33_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__33_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__RotateAround_b__33_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__33_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__33_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__LookAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__LookAt (const MethodInfo* method);
// 0x5a4e060
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4e095: jmp 0x5a4e105

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__LookAt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754622a == '\0') {
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
    Il2CppMethodInitialized_0754622a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__34_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__34_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__LookAt_b__34_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__34_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__34_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__SetRenderersEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__SetRenderersEnabled (const MethodInfo* method);
// 0x5a4e1a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4e1d8: jmp 0x5a4e24b

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__SetRenderersEnabled
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754622b == '\0') {
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
    Il2CppMethodInitialized_0754622b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__35_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__35_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__SetRenderersEnabled_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__35_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__35_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__GetColliders
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetColliders (const MethodInfo* method);
// 0x5a4e2e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4e318: jmp 0x5a4e38b

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__GetColliders(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754622c == '\0') {
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
    Il2CppMethodInitialized_0754622c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__36_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__36_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__GetColliders_b__36_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__36_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__36_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding__SetActive
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__SetActive (const MethodInfo* method);
// 0x5a4e420
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4e458: jmp 0x5a4e4cb

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding__SetActive(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754622d == '\0') {
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
    Il2CppMethodInitialized_0754622d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__37_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__37_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding__SetActive_b__37_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__37_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__37_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x5a4e560
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4e598: jmp 0x5a4e60b

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754622e == '\0') {
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
    Il2CppMethodInitialized_0754622e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__38_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__38_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding____Eq___b__38_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__38_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__38_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o* CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x5a4e6a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4e6d8: jmp 0x5a4e74b

CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *
CustomLogic_CustomLogicTransformBuiltin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTransformBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTransformBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754622f == '\0') {
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
    Il2CppMethodInitialized_0754622f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__39_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__39_0;
  }
  if (__this == (System_Func_CustomLogicTransformBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTransformBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c___CreateMethodBinding____Hash___b__39_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings_c->static_fields;
    pCVar2->__9__39_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__39_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTransformBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5a4e7e0

void CustomLogic_CustomLogicTransformBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546230 == '\0') {
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
    Il2CppMethodInitialized_07546230 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Position",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LocalPosition",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LocalRotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuaternionRotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuaternionLocalRotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Scale",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Forward",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Up",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Right",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Parent",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Name",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Layer",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Character",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MapObject",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Animation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Animator",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AudioSource",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetTransform",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetTransforms",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPlayingAnimation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayAnimation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAnimationLength",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlaySound",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StopSound",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToggleParticle",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"InverseTransformDirection",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"InverseTransformPoint",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TransformDirection",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TransformPoint",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rotate",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RotateAround",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LookAt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetRenderersEnabled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetColliders",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetActive",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Eq__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Hash__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicTransformBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_2_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x5a4ed80

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_2_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  v = UnityEngine_Transform__get_position(__this,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_2_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a4edb0

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_2_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546231 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546231 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) ||
      (pCVar1 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_position
            (__this,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__LocalPosition>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____getter_3_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x5a4ee40

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____getter_3_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  v = UnityEngine_Transform__get_localPosition(__this,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__LocalPosition>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____setter_3_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a4ee70

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalPosition_g____setter_3_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546232 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546232 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) ||
      (pCVar1 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_localPosition
            (__this,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_4_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x5a4ef00

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_4_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o local_18;
  
  if (__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
label_05a4ef77:
    ThrowNullReferenceException();
  }
  local_18.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  if ((__i->fields)._needSetRotation == false) {
    fVar1 = (__i->fields)._internalRotation.fields.x;
    fVar2 = (__i->fields)._internalRotation.fields.y;
    euler.fields.z = (__i->fields)._internalRotation.fields.z;
  }
  else {
    __this = (__i->fields).Value;
    if (__this == (UnityEngine_Transform_o *)0x0) goto label_05a4ef77;
    local_18 = UnityEngine_Transform__get_rotation(__this,(MethodInfo *)0x0);
    UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_18,(MethodInfo *)0x0);
    euler.fields.x = UVar4.fields.x * 57.29578;
    euler.fields.y = UVar4.fields.y * 57.29578;
    euler.fields.z = UVar4.fields.z * 57.29578;
    UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    euler.fields.z = UVar4.fields.z;
    fVar1 = UVar4.fields.x;
    fVar2 = UVar4.fields.y;
    (__i->fields)._internalRotation.fields.x = UVar4.fields.x;
    (__i->fields)._internalRotation.fields.y = UVar4.fields.y;
    (__i->fields)._internalRotation.fields.z = euler.fields.z;
    (__i->fields)._needSetRotation = false;
  }
  UVar4.fields.y = fVar2;
  UVar4.fields.x = fVar1;
  UVar4.fields.z = euler.fields.z;
  pCVar3 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(UVar4,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_4_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a4ef80

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_4_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Transform_o *__this;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_Fields UStack_20;
  
  if (Il2CppMethodInitialized_07546233 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546233 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (pCVar5 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar3 = (pCVar5->fields).Value.fields.z;
    fVar4 = (pCVar5->fields).Value.fields.y;
    (__i->fields)._internalRotation.fields.x = (pCVar5->fields).Value.fields.x;
    (__i->fields)._internalRotation.fields.y = fVar4;
    (__i->fields)._internalRotation.fields.z = fVar3;
    (__i->fields)._needSetRotation = false;
    __this = (__i->fields).Value;
    uVar1 = (__i->fields)._internalRotation.fields.x;
    uVar2 = (__i->fields)._internalRotation.fields.y;
    UStack_20.x = (float)uVar1 * 0.017453292;
    UStack_20.y = (float)uVar2 * 0.017453292;
    UStack_20.z = (__i->fields)._internalRotation.fields.z * 0.017453292;
    value = UnityEngine_Quaternion__Internal_FromEulerRad
                      ((UnityEngine_Vector3_o *)&UStack_20,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_rotation(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__LocalRotation>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____getter_5_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x5a4f050

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____getter_5_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o local_18;
  
  if (__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
label_05a4f0c7:
    ThrowNullReferenceException();
  }
  local_18.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  if ((__i->fields)._needSetLocalRotation == false) {
    fVar1 = (__i->fields)._internalLocalRotation.fields.x;
    fVar2 = (__i->fields)._internalLocalRotation.fields.y;
    euler.fields.z = (__i->fields)._internalLocalRotation.fields.z;
  }
  else {
    __this = (__i->fields).Value;
    if (__this == (UnityEngine_Transform_o *)0x0) goto label_05a4f0c7;
    local_18 = UnityEngine_Transform__get_localRotation(__this,(MethodInfo *)0x0);
    UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_18,(MethodInfo *)0x0);
    euler.fields.x = UVar4.fields.x * 57.29578;
    euler.fields.y = UVar4.fields.y * 57.29578;
    euler.fields.z = UVar4.fields.z * 57.29578;
    UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    euler.fields.z = UVar4.fields.z;
    fVar1 = UVar4.fields.x;
    fVar2 = UVar4.fields.y;
    (__i->fields)._internalLocalRotation.fields.x = UVar4.fields.x;
    (__i->fields)._internalLocalRotation.fields.y = UVar4.fields.y;
    (__i->fields)._internalLocalRotation.fields.z = euler.fields.z;
    (__i->fields)._needSetLocalRotation = false;
  }
  UVar4.fields.y = fVar2;
  UVar4.fields.x = fVar1;
  UVar4.fields.z = euler.fields.z;
  pCVar3 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(UVar4,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__LocalRotation>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____setter_5_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a4f0d0

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__LocalRotation_g____setter_5_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Transform_o *__this;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_Fields UStack_20;
  
  if (Il2CppMethodInitialized_07546234 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546234 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (pCVar5 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar3 = (pCVar5->fields).Value.fields.z;
    fVar4 = (pCVar5->fields).Value.fields.y;
    (__i->fields)._internalLocalRotation.fields.x = (pCVar5->fields).Value.fields.x;
    (__i->fields)._internalLocalRotation.fields.y = fVar4;
    (__i->fields)._internalLocalRotation.fields.z = fVar3;
    (__i->fields)._needSetLocalRotation = false;
    __this = (__i->fields).Value;
    uVar1 = (__i->fields)._internalLocalRotation.fields.x;
    uVar2 = (__i->fields)._internalLocalRotation.fields.y;
    UStack_20.x = (float)uVar1 * 0.017453292;
    UStack_20.y = (float)uVar2 * 0.017453292;
    UStack_20.z = (__i->fields)._internalLocalRotation.fields.z * 0.017453292;
    value = UnityEngine_Quaternion__Internal_FromEulerRad
                      ((UnityEngine_Vector3_o *)&UStack_20,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localRotation(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____getter_6_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x5a4f1a0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____getter_6_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  UnityEngine_Quaternion_o q;
  
  if ((__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  q = UnityEngine_Transform__get_rotation(__this,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____setter_6_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a4f1d0

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____setter_6_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546235 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546235 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
  if (((__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) ||
      ((__i->fields)._needSetRotation = true, (__i->fields)._needSetLocalRotation = true,
      pCVar1 == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_rotation
            (__this,(UnityEngine_Quaternion_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionLocalRotation>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____getter_7_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x5a4f270

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____getter_7_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  UnityEngine_Quaternion_o q;
  
  if ((__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  q = UnityEngine_Transform__get_localRotation(__this,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionLocalRotation>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____setter_7_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a4f2a0

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__QuaternionLocalRotation_g____setter_7_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546236 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546236 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
  if (((__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) ||
      ((__i->fields)._needSetRotation = true, (__i->fields)._needSetLocalRotation = true,
      pCVar1 == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_localRotation
            (__this,(UnityEngine_Quaternion_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_8_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x5a4f340

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_8_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  v = UnityEngine_Transform__get_localScale(__this,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_8_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a4f370

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_8_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546237 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546237 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) ||
      (pCVar1 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_localScale
            (__this,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_9_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x5a4f400

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_9_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  v = UnityEngine_Transform__get_forward(__this,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_9_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a4f430

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_9_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546238 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546238 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) ||
      (pCVar1 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_forward
            (__this,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x5a4f4c0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  v = UnityEngine_Transform__get_up(__this,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_10_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a4f4f0

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_10_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546239 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546239 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) ||
      (pCVar1 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_up(__this,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0)
  ;
  return;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_11_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x5a4f580

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_11_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  v = UnityEngine_Transform__get_right(__this,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_11_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a4f5b0

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_11_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_0754623a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754623a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) ||
      (pCVar1 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_right
            (__this,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Parent>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Parent_g____getter_12_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x5a4f640

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Parent_g____getter_12_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicTransformBuiltin__get_Parent(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Parent>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Parent_g____setter_12_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a4f650

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Parent_g____setter_12_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar1;
  UnityEngine_Transform_o *p;
  
  if (Il2CppMethodInitialized_0754623b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754623b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicTransformBuiltin);
  if (__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
label_05a4f6e1:
    ThrowNullReferenceException();
  }
  __this = (__i->fields).Value;
  if (pCVar1 == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    if (__this == (UnityEngine_Transform_o *)0x0) goto label_05a4f6e1;
    p = (UnityEngine_Transform_o *)0x0;
  }
  else {
    if (__this == (UnityEngine_Transform_o *)0x0) goto label_05a4f6e1;
    p = (pCVar1->fields).Value;
  }
  UnityEngine_Transform__SetParent(__this,p,(MethodInfo *)0x0);
  (__i->fields)._needSetRotation = true;
  (__i->fields)._needSetLocalRotation = true;
  return;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_13_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x5a4f6f0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_13_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  System_String_o *pSVar1;
  
  if ((__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar1 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Layer>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Layer_g____getter_14_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x5a4f710

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Layer_g____getter_14_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__get_layer(__this_00,(MethodInfo *)0x0);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Layer>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Layer_g____setter_14_1 (CustomLogic_CustomLogicTransformBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a4f760

void CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Layer_g____setter_14_1
               (CustomLogic_CustomLogicTransformBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Transform_o *__this;
  int32_t value;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_0754623c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754623c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
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
// 0x5a4f7f0

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Character_g____getter_15_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicTransformBuiltin__get_Character(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__MapObject>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__MapObject_g____getter_16_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x5a4f800

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__MapObject_g____getter_16_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicTransformBuiltin__get_MapObject(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Animation>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Animation_g____getter_17_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x5a4f810

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Animation_g____getter_17_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  if (__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(__i->fields)._animation;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__Animator>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Animator_g____getter_18_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x5a4f830

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__Animator_g____getter_18_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  if (__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(__i->fields)._animator;
}


// CustomLogic.CustomLogicTransformBuiltin.Bindings$$<__CreatePropertyBinding__AudioSource>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__AudioSource_g____getter_19_0 (CustomLogic_CustomLogicTransformBuiltin_o* __i, const MethodInfo* method);
// 0x5a4f850

Il2CppObject *
CustomLogic_CustomLogicTransformBuiltin_Bindings_____CreatePropertyBinding__AudioSource_g____getter_19_0
          (CustomLogic_CustomLogicTransformBuiltin_o *__i,MethodInfo *method)

{
  if (__i == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(__i->fields)._audioSource;
}


// CustomLogic.CustomLogicTransformBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin___ctor (CustomLogic_CustomLogicTransformBuiltin_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method);
// 0x5a49960

void CustomLogic_CustomLogicTransformBuiltin___ctor
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,UnityEngine_Transform_o *transform,
               MethodInfo *method)

{
  UnityEngine_Transform_o **targetAddress;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Animator_o *animator;
  UnityEngine_Animation_o *animation;
  UnityEngine_AudioSource_o *audioSource;
  bool bVar2;
  UnityEngine_ParticleSystem_o *pUVar3;
  CustomLogic_CustomLogicAudioSourceBuiltin_o *__this_00;
  CustomLogic_CustomLogicAnimationBuiltin_o *__this_01;
  CustomLogic_CustomLogicAnimatorBuiltin_o *__this_02;
  CustomLogic_CustomLogicAnimatorBuiltin_o **targetAddress_00;
  UnityEngine_Animator_o *local_38;
  UnityEngine_Animation_o *local_30;
  UnityEngine_AudioSource_o *local_28;
  
  if (Il2CppMethodInitialized_075461fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_Animation);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_Animator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin);
    Il2CppMethodInitialized_075461fd = '\x01';
  }
  local_28 = (UnityEngine_AudioSource_o *)0x0;
  local_30 = (UnityEngine_Animation_o *)0x0;
  local_38 = (UnityEngine_Animator_o *)0x0;
  (__this->fields)._needSetRotation = true;
  (__this->fields)._needSetLocalRotation = true;
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  targetAddress = &(__this->fields).Value;
  (__this->fields).Value = transform;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar1,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
    (__this->fields)._particleSystem = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._particleSystem);
    pUVar1 = (__this->fields).Value;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      bVar2 = UnityEngine_Component__TryGetComponent_object_
                        ((UnityEngine_Component_o *)pUVar1,(Il2CppObject **)&local_28,
                         (MethodInfo_34B1690 *)MethodInfo_UnityEngine_Component_TryGetComponent_AudioSource);
      audioSource = local_28;
      if (bVar2) {
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin);
        CustomLogic_CustomLogicAudioSourceBuiltin___ctor_58f0ac0
                  (__this_00,(CustomLogic_BuiltinClassInstance_o *)__this,audioSource,(MethodInfo *)0x0);
        (__this->fields)._audioSource = __this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._audioSource);
      }
      if (*targetAddress != (UnityEngine_Transform_o *)0x0) {
        bVar2 = UnityEngine_Component__TryGetComponent_object_
                          ((UnityEngine_Component_o *)*targetAddress,(Il2CppObject **)&local_30,
                           (MethodInfo_34B1690 *)MethodInfo_UnityEngine_Component_TryGetComponent_Animation);
        animation = local_30;
        if (bVar2) {
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin);
          CustomLogic_CustomLogicAnimationBuiltin___ctor_58e9d70
                    (__this_01,(CustomLogic_BuiltinClassInstance_o *)__this,animation,(MethodInfo *)0x0);
          (__this->fields)._animation = __this_01;
          targetAddress_00 = (CustomLogic_CustomLogicAnimatorBuiltin_o **)&(__this->fields)._animation;
        }
        else {
          if (*targetAddress == (UnityEngine_Transform_o *)0x0) goto label_05a49b76;
          bVar2 = UnityEngine_Component__TryGetComponent_object_
                            ((UnityEngine_Component_o *)*targetAddress,(Il2CppObject **)&local_38,
                             (MethodInfo_34B1690 *)MethodInfo_UnityEngine_Component_TryGetComponent_Animator);
          animator = local_38;
          if (!bVar2) {
            return;
          }
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin);
          CustomLogic_CustomLogicAnimatorBuiltin___ctor_58ec440
                    (__this_02,(CustomLogic_BuiltinClassInstance_o *)__this,animator,(MethodInfo *)0x0);
          (__this->fields)._animator = __this_02;
          targetAddress_00 = &(__this->fields)._animator;
        }
        Il2CppCodeGenWriteBarrier(targetAddress_00);
        return;
      }
    }
  }
label_05a49b76:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_Position (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a49b80

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Position
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  v = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Position
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Position (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a49ba0

void CustomLogic_CustomLogicTransformBuiltin__set_Position
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  if ((value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_position
            (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_LocalPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_LocalPosition (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a49bd0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_LocalPosition
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  v = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin$$set_LocalPosition
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_LocalPosition (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a49bf0

void CustomLogic_CustomLogicTransformBuiltin__set_LocalPosition
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  if ((value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_localPosition
            (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_Rotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a49c20

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Rotation
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o local_18;
  
  local_18.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  if ((__this->fields)._needSetRotation == false) {
    fVar1 = (__this->fields)._internalRotation.fields.x;
    fVar2 = (__this->fields)._internalRotation.fields.y;
    euler.fields.z = (__this->fields)._internalRotation.fields.z;
  }
  else {
    __this_00 = (__this->fields).Value;
    if (__this_00 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_18 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
    UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_18,(MethodInfo *)0x0);
    euler.fields.x = UVar4.fields.x * 57.29578;
    euler.fields.y = UVar4.fields.y * 57.29578;
    euler.fields.z = UVar4.fields.z * 57.29578;
    UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    euler.fields.z = UVar4.fields.z;
    fVar1 = UVar4.fields.x;
    fVar2 = UVar4.fields.y;
    (__this->fields)._internalRotation.fields.x = UVar4.fields.x;
    (__this->fields)._internalRotation.fields.y = UVar4.fields.y;
    (__this->fields)._internalRotation.fields.z = euler.fields.z;
    (__this->fields)._needSetRotation = false;
  }
  UVar4.fields.y = fVar2;
  UVar4.fields.x = fVar1;
  UVar4.fields.z = euler.fields.z;
  pCVar3 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(UVar4,(MethodInfo *)0x0);
  return pCVar3;
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Rotation
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Rotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a49ca0

void CustomLogic_CustomLogicTransformBuiltin__set_Rotation
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Transform_o *__this_00;
  float fVar4;
  UnityEngine_Quaternion_o value_00;
  UnityEngine_Vector3_Fields local_18;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar3 = (value->fields).Value.fields.z;
    fVar4 = (value->fields).Value.fields.y;
    (__this->fields)._internalRotation.fields.x = (value->fields).Value.fields.x;
    (__this->fields)._internalRotation.fields.y = fVar4;
    (__this->fields)._internalRotation.fields.z = fVar3;
    (__this->fields)._needSetRotation = false;
    __this_00 = (__this->fields).Value;
    uVar1 = (__this->fields)._internalRotation.fields.x;
    uVar2 = (__this->fields)._internalRotation.fields.y;
    local_18.x = (float)uVar1 * 0.017453292;
    local_18.y = (float)uVar2 * 0.017453292;
    local_18.z = (__this->fields)._internalRotation.fields.z * 0.017453292;
    value_00 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_rotation(__this_00,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_LocalRotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_LocalRotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a49d10

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_LocalRotation
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o local_18;
  
  local_18.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  if ((__this->fields)._needSetLocalRotation == false) {
    fVar1 = (__this->fields)._internalLocalRotation.fields.x;
    fVar2 = (__this->fields)._internalLocalRotation.fields.y;
    euler.fields.z = (__this->fields)._internalLocalRotation.fields.z;
  }
  else {
    __this_00 = (__this->fields).Value;
    if (__this_00 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_18 = UnityEngine_Transform__get_localRotation(__this_00,(MethodInfo *)0x0);
    UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_18,(MethodInfo *)0x0);
    euler.fields.x = UVar4.fields.x * 57.29578;
    euler.fields.y = UVar4.fields.y * 57.29578;
    euler.fields.z = UVar4.fields.z * 57.29578;
    UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    euler.fields.z = UVar4.fields.z;
    fVar1 = UVar4.fields.x;
    fVar2 = UVar4.fields.y;
    (__this->fields)._internalLocalRotation.fields.x = UVar4.fields.x;
    (__this->fields)._internalLocalRotation.fields.y = UVar4.fields.y;
    (__this->fields)._internalLocalRotation.fields.z = euler.fields.z;
    (__this->fields)._needSetLocalRotation = false;
  }
  UVar4.fields.y = fVar2;
  UVar4.fields.x = fVar1;
  UVar4.fields.z = euler.fields.z;
  pCVar3 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(UVar4,(MethodInfo *)0x0);
  return pCVar3;
}


// CustomLogic.CustomLogicTransformBuiltin$$set_LocalRotation
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_LocalRotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a49d90

void CustomLogic_CustomLogicTransformBuiltin__set_LocalRotation
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Transform_o *__this_00;
  float fVar4;
  UnityEngine_Quaternion_o value_00;
  UnityEngine_Vector3_Fields local_18;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar3 = (value->fields).Value.fields.z;
    fVar4 = (value->fields).Value.fields.y;
    (__this->fields)._internalLocalRotation.fields.x = (value->fields).Value.fields.x;
    (__this->fields)._internalLocalRotation.fields.y = fVar4;
    (__this->fields)._internalLocalRotation.fields.z = fVar3;
    (__this->fields)._needSetLocalRotation = false;
    __this_00 = (__this->fields).Value;
    uVar1 = (__this->fields)._internalLocalRotation.fields.x;
    uVar2 = (__this->fields)._internalLocalRotation.fields.y;
    local_18.x = (float)uVar1 * 0.017453292;
    local_18.y = (float)uVar2 * 0.017453292;
    local_18.z = (__this->fields)._internalLocalRotation.fields.z * 0.017453292;
    value_00 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localRotation(__this_00,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_QuaternionRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_QuaternionRotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a49e00

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__get_QuaternionRotation
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  UnityEngine_Quaternion_o q;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  q = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin$$set_QuaternionRotation
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_QuaternionRotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* value, const MethodInfo* method);
// 0x5a49e20

void CustomLogic_CustomLogicTransformBuiltin__set_QuaternionRotation
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicQuaternionBuiltin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  (__this->fields)._needSetRotation = true;
  (__this->fields)._needSetLocalRotation = true;
  if ((value == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_rotation
            (__this_00,(UnityEngine_Quaternion_o)(value->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_QuaternionLocalRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_QuaternionLocalRotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a49e50

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__get_QuaternionLocalRotation
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  UnityEngine_Quaternion_o q;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  q = UnityEngine_Transform__get_localRotation(__this_00,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin$$set_QuaternionLocalRotation
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_QuaternionLocalRotation (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* value, const MethodInfo* method);
// 0x5a49e70

void CustomLogic_CustomLogicTransformBuiltin__set_QuaternionLocalRotation
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicQuaternionBuiltin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  (__this->fields)._needSetRotation = true;
  (__this->fields)._needSetLocalRotation = true;
  if ((value == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_localRotation
            (__this_00,(UnityEngine_Quaternion_o)(value->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Scale
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_Scale (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a49ea0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Scale
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  v = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Scale
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Scale (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a49ec0

void CustomLogic_CustomLogicTransformBuiltin__set_Scale
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  if ((value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_localScale
            (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Forward
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_Forward (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a49ef0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Forward
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  v = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Forward
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Forward (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a49f10

void CustomLogic_CustomLogicTransformBuiltin__set_Forward
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  if ((value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_forward
            (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Up
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_Up (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a49f40

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Up
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  v = UnityEngine_Transform__get_up(__this_00,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Up
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Up (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a49f60

void CustomLogic_CustomLogicTransformBuiltin__set_Up
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  if ((value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_up
            (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Right
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__get_Right (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a49f90

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Right
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  v = UnityEngine_Transform__get_right(__this_00,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Right
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Right (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a49fb0

void CustomLogic_CustomLogicTransformBuiltin__set_Right
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  if ((value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__set_right
            (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Parent
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_Parent (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a49fe0

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Parent
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075461fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075461fe = '\x01';
  }
  pUVar2 = (__this->fields).Value;
  if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
label_05a4a086:
    ThrowNullReferenceException();
  }
  pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this_00 = (CustomLogic_CustomLogicTransformBuiltin_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).Value;
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05a4a086;
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,pUVar2,method_00);
  }
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin$$set_Parent
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__set_Parent (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicTransformBuiltin_o* value, const MethodInfo* method);
// 0x5a4a090

void CustomLogic_CustomLogicTransformBuiltin__set_Parent
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicTransformBuiltin_o *value,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *p;
  
  __this_00 = (__this->fields).Value;
  if (value == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_05a4a0be;
    p = (UnityEngine_Transform_o *)0x0;
  }
  else {
    if (__this_00 == (UnityEngine_Transform_o *)0x0) {
label_05a4a0be:
      ThrowNullReferenceException();
    }
    p = (value->fields).Value;
  }
  UnityEngine_Transform__SetParent(__this_00,p,(MethodInfo *)0x0);
  (__this->fields)._needSetRotation = true;
  (__this->fields)._needSetLocalRotation = true;
  return;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicTransformBuiltin__get_Name (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a4a0d0

System_String_o *
CustomLogic_CustomLogicTransformBuiltin__get_Name
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  System_String_o *pSVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Layer
// il2cpp: int32_t CustomLogic_CustomLogicTransformBuiltin__get_Layer (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a4a0f0

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
// 0x5a4a120

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
// 0x5a4a150

CustomLogic_CustomLogicCharacterBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Character
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  bool bVar2;
  Characters_BaseCharacter_o *character;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar3;
  
  if (Il2CppMethodInitialized_075461ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075461ff = '\x01';
  }
  pUVar1 = (__this->fields).Value;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).Value;
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    character = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar1,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar3 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
    return pCVar3;
  }
  return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_MapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_MapObject (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a4a210

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
  Map_MapObject_o *pMStack_20;
  
  if (Il2CppMethodInitialized_07546200 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07546200 = '\x01';
  }
  pMStack_20 = (Map_MapObject_o *)0x0;
  pUVar1 = (__this->fields).Value;
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
                        (__this_00,(Il2CppObject *)key,(Il2CppObject **)&pMStack_20,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_TryGetValue);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        }
        else {
          __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        }
        if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pCVar3 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                             (__this_01,pMStack_20,(MethodInfo *)0x0);
          return pCVar3;
        }
      }
      return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Animation
// il2cpp: CustomLogic_CustomLogicAnimationBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_Animation (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a4a360

CustomLogic_CustomLogicAnimationBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Animation
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._animation;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_Animator
// il2cpp: CustomLogic_CustomLogicAnimatorBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_Animator (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a4a370

CustomLogic_CustomLogicAnimatorBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__get_Animator
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._animator;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_AudioSource
// il2cpp: CustomLogic_CustomLogicAudioSourceBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__get_AudioSource (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a4a380

CustomLogic_CustomLogicAudioSourceBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__get_AudioSource
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._audioSource;
}


// CustomLogic.CustomLogicTransformBuiltin$$GetTransform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__GetTransform (CustomLogic_CustomLogicTransformBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5a4a390

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__GetTransform
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546201 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07546201 = '\x01';
  }
  pUVar2 = (__this->fields).Value;
  if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar2 = UnityEngine_Transform__Find(pUVar2,name,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this_00 = (CustomLogic_CustomLogicTransformBuiltin_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,pUVar2,method_00);
  }
  return __this_00;
}


// CustomLogic.CustomLogicTransformBuiltin$$GetTransforms
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__GetTransforms (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a4a430
// eh: try 0x5a4a51f..0x5a4a799 -> pad 0x5a4a7b4 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5a4a7cc..0x5a4a7d1 -> pad 0x5a4a7d6 cleanup
// eh: try 0x5a4a7d9..0x5a4a7e3 -> pad 0x5a4a7eb catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a4a4fd: lea rbp, [rip + 0x182eef4]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5a4a504: lea r14, [rip + 0x184b6f5]  ; MethodInfo_System_Collections_Generic_List_object_Add
// asm:   0x5a4a50b: jmp 0x5a4a537
// asm:   0x5a4a52a: mov rbx, qword ptr [rsp]
// asm:   0x5a4a52e: test rbx, rbx
// asm:   0x5a4a531: je 0x5a4a78a
// asm:   0x5a4a79e: mov rdi, r14
// asm:   0x5a4a7a1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5a4a7a6: jmp 0x5a4a7b4
// asm:   0x5a4a7a8: jmp 0x5a4a7b4
// asm:   0x5a4a7aa: jmp 0x5a4a7b4
// asm:   0x5a4a7ac: jmp 0x5a4a7b4
// asm:   0x5a4a7ae: jmp 0x5a4a7b4
// asm:   0x5a4a7b0: jmp 0x5a4a7b4
// asm:   0x5a4a7b2: jmp 0x5a4a7b4
// asm:   0x5a4a7b4: mov rbx, rax
// asm:   0x5a4a7b7: cmp edx, 1
// asm:   0x5a4a7ba: jne 0x5a4a7d9
// asm:   0x5a4a7bc: mov rdi, rbx
// asm:   0x5a4a7bf: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5a4a7c4: mov r14, qword ptr [rax]
// asm:   0x5a4a7c7: mov qword ptr [rsp + 0x10], r14
// asm:   0x5a4a7cc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5a4a7d1: jmp 0x5a4a6e1
// asm:   0x5a4a7d6: mov rbx, rax
// asm:   0x5a4a7d9: lea rdi, [rsp + 0x10]
// asm:   0x5a4a7de: call 0x2fd5e20  ; il2cpp_runtime_helper_02fd5e20()
// asm:   0x5a4a7e3: mov rdi, rbx
// asm:   0x5a4a7e6: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5a4a7eb: mov rdi, rax
// asm:   0x5a4a7ee: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__GetTransforms
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar6;
  MethodInfo *pMVar7;
  char cVar8;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  Il2CppObject *pIVar9;
  VirtualInvokeData *pVVar10;
  UnityEngine_Transform_o *pUVar11;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_02;
  ulong uVar12;
  MethodInfo *method_00;
  long lVar13;
  Il2CppObject *pIStack_58;
  Il2CppObject *pIStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  Il2CppObject **ppIStack_38;
  
  if (Il2CppMethodInitialized_07546202 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_07546202 = '\x01';
  }
  pIStack_50 = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  pUVar11 = (__this->fields).Value;
  if (pUVar11 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar9 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(pUVar11,(MethodInfo *)0x0);
  puStack_40 = (undefined1 *)&pIStack_58;
  uStack_48 = 0;
  ppIStack_38 = &pIStack_50;
  do {
    pIStack_58 = pIVar9;
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = pIVar9->klass;
    uVar12 = (ulong)(pIVar4->_2).interface_offsets_count;
    if (uVar12 != 0) {
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar5->interfaceType + lVar13) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar10 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar13);
          goto label_05a4a593;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar12 * 0x10 != lVar13);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05a4a593:
    cVar8 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
    pIVar9 = pIStack_58;
    if (cVar8 == '\0') {
      pIVar9 = il2cpp_vm_Object_IsInst(pIStack_58,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar9 == (Il2CppObject *)0x0) {
        return __this_01;
      }
      pIVar4 = pIVar9->klass;
      uVar12 = (ulong)(pIVar4->_2).interface_offsets_count;
      pIStack_50 = pIVar9;
      if (uVar12 == 0) goto label_05a4a73f;
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      lVar13 = 0;
      break;
    }
    if (pIStack_58 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = pIStack_58->klass;
    uVar12 = (ulong)(pIVar4->_2).interface_offsets_count;
    if (uVar12 != 0) {
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar5->interfaceType + lVar13) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar10 = pIVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar13) + 1);
          goto label_05a4a627;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar12 * 0x10 != lVar13);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIStack_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05a4a627:
    pUVar11 = (UnityEngine_Transform_o *)(*pVVar10->methodPtr)(pIVar9,pVVar10->method);
    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
      bVar2 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
      if (((pUVar11->klass->_2).typeHierarchyDepth < bVar2) ||
         ((pUVar11->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar11);
      }
    }
    if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (__this_01->fields).List;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_02,pUVar11,method_00);
    pMVar7 = MethodInfo_System_Collections_Generic_List_object_Add;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_05a4a77d:
      ThrowNullReferenceException();
    }
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (__this_00->fields)._items;
    if (pSVar6 == (System_Object_array *)0x0) goto label_05a4a77d;
    uVar3 = (__this_00->fields)._size;
    if (uVar3 < (uint)pSVar6->max_length) {
      (__this_00->fields)._size = uVar3 + 1;
      pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
      pIVar9 = pIStack_58;
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_00,(Il2CppObject *)__this_02,
                 (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
      pIVar9 = pIStack_58;
    }
  } while( true );
  while (lVar13 = lVar13 + 0x10, uVar12 * 0x10 != lVar13) {
    if (*(System_IDisposable_c **)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_System_IDisposable) {
      pVVar10 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar13);
      goto label_05a4a75d;
    }
  }
label_05a4a73f:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05a4a75d:
  (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
  return __this_01;
}


// CustomLogic.CustomLogicTransformBuiltin$$IsPlayingAnimation
// il2cpp: bool CustomLogic_CustomLogicTransformBuiltin__IsPlayingAnimation (CustomLogic_CustomLogicTransformBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x5a4a800

bool CustomLogic_CustomLogicTransformBuiltin__IsPlayingAnimation
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  CustomLogic_CustomLogicAnimationBuiltin_o *__this_00;
  bool bVar1;
  System_String_o *b;
  
  __this_00 = (__this->fields)._animation;
  if (__this_00 != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
    bVar1 = CustomLogic_CustomLogicAnimationBuiltin__IsPlaying(__this_00,anim,(MethodInfo *)0x0);
    return bVar1;
  }
  if ((__this->fields)._animator == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
    return false;
  }
  if (anim == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  b = System_String__Replace(anim,0x2e,0x5f,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality((__this->fields)._currentAnimation,b,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicTransformBuiltin$$PlayAnimation
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__PlayAnimation (CustomLogic_CustomLogicTransformBuiltin_o* __this, System_String_o* anim, float fade, const MethodInfo* method);
// 0x5a4a850

void CustomLogic_CustomLogicTransformBuiltin__PlayAnimation
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,System_String_o *anim,float fade,
               MethodInfo *method)

{
  CustomLogic_CustomLogicAnimationBuiltin_o *pCVar1;
  CustomLogic_CustomLogicAnimatorBuiltin_o *pCVar2;
  UnityEngine_Animator_o *__this_00;
  bool bVar3;
  System_String_o *b;
  System_String_o **targetAddress;
  
  pCVar1 = (__this->fields)._animation;
  if (pCVar1 == (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
    if ((__this->fields)._animator != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      if (anim != (System_String_o *)0x0) {
        b = System_String__Replace(anim,0x2e,0x5f,(MethodInfo *)0x0);
        bVar3 = System_String__op_Inequality((__this->fields)._currentAnimation,b,(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        pCVar2 = (__this->fields)._animator;
        if ((pCVar2 != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
           (__this_00 = (pCVar2->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
          targetAddress = &(__this->fields)._currentAnimation;
          UnityEngine_Animator__CrossFade_68ab680(__this_00,b,fade,(MethodInfo *)0x0);
          *targetAddress = b;
          Il2CppCodeGenWriteBarrier(targetAddress);
          return;
        }
      }
      goto label_05a4a919;
    }
  }
  else {
    bVar3 = CustomLogic_CustomLogicAnimationBuiltin__IsPlaying(pCVar1,anim,(MethodInfo *)0x0);
    if (!bVar3) {
      pCVar1 = (__this->fields)._animation;
      if (pCVar1 != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
        CustomLogic_CustomLogicAnimationBuiltin__PlayAnimation(pCVar1,anim,fade,0,(MethodInfo *)0x0);
        return;
      }
label_05a4a919:
      ThrowNullReferenceException();
    }
  }
  return;
}


// CustomLogic.CustomLogicTransformBuiltin$$GetAnimationLength
// il2cpp: float CustomLogic_CustomLogicTransformBuiltin__GetAnimationLength (CustomLogic_CustomLogicTransformBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x5a4a920

float CustomLogic_CustomLogicTransformBuiltin__GetAnimationLength
                (CustomLogic_CustomLogicTransformBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  CustomLogic_CustomLogicAnimationBuiltin_o *__this_00;
  CustomLogic_CustomLogicAnimatorBuiltin_o *__this_01;
  System_String_o *anim_00;
  float fVar1;
  
  __this_00 = (__this->fields)._animation;
  if (__this_00 != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
    fVar1 = CustomLogic_CustomLogicAnimationBuiltin__GetAnimationLength(__this_00,anim,(MethodInfo *)0x0);
    return fVar1;
  }
  __this_01 = (__this->fields)._animator;
  if (__this_01 == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
    return -1.0;
  }
  if (anim == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  anim_00 = System_String__Replace(anim,0x2e,0x5f,(MethodInfo *)0x0);
  fVar1 = CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationLength(__this_01,anim_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicTransformBuiltin$$PlaySound
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__PlaySound (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a4a980

void CustomLogic_CustomLogicTransformBuiltin__PlaySound
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicAudioSourceBuiltin_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields)._audioSource;
  if (pCVar1 != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
    bVar2 = CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying(pCVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      pCVar1 = (__this->fields)._audioSource;
      if (pCVar1 == (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
        ThrowNullReferenceException();
      }
      CustomLogic_CustomLogicAudioSourceBuiltin__Play(pCVar1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicTransformBuiltin$$StopSound
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__StopSound (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a4a9b0

void CustomLogic_CustomLogicTransformBuiltin__StopSound
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicAudioSourceBuiltin_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields)._audioSource;
  if (pCVar1 != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
    bVar2 = CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying(pCVar1,(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__this->fields)._audioSource;
      if (pCVar1 == (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) {
        ThrowNullReferenceException();
      }
      CustomLogic_CustomLogicAudioSourceBuiltin__Stop(pCVar1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicTransformBuiltin$$ToggleParticle
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__ToggleParticle (CustomLogic_CustomLogicTransformBuiltin_o* __this, bool enabled, const MethodInfo* method);
// 0x5a4a9e0

void CustomLogic_CustomLogicTransformBuiltin__ToggleParticle
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,bool enabled,MethodInfo *method)

{
  UnityEngine_ParticleSystem_o *pUVar1;
  bool bVar2;
  UnityEngine_ParticleSystem_EmissionModule_o local_18;
  
  pUVar1 = (__this->fields)._particleSystem;
  if (pUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
    bVar2 = UnityEngine_ParticleSystem__get_isPlaying(pUVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar1 = (__this->fields)._particleSystem;
      if (pUVar1 == (UnityEngine_ParticleSystem_o *)0x0) goto label_05a4aa35;
      UnityEngine_ParticleSystem__Play_69c2630(pUVar1,(MethodInfo *)0x0);
    }
    pUVar1 = (__this->fields)._particleSystem;
    if (pUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
      local_18 = UnityEngine_ParticleSystem__get_emission(pUVar1,(MethodInfo *)0x0);
      UnityEngine_ParticleSystem_EmissionModule__set_enabled(&local_18,enabled,(MethodInfo *)0x0);
      return;
    }
  }
label_05a4aa35:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$InverseTransformDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__InverseTransformDirection (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* direction, const MethodInfo* method);
// 0x5a4aa40

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__InverseTransformDirection
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *direction,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((direction == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  v = UnityEngine_Transform__InverseTransformDirection
                (__this_00,(UnityEngine_Vector3_o)(direction->fields).Value.fields,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin$$InverseTransformPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__InverseTransformPoint (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* point, const MethodInfo* method);
// 0x5a4aa70

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__InverseTransformPoint
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *point,
          MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((point == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  v = UnityEngine_Transform__InverseTransformPoint
                (__this_00,(UnityEngine_Vector3_o)(point->fields).Value.fields,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin$$TransformDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__TransformDirection (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* direction, const MethodInfo* method);
// 0x5a4aaa0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__TransformDirection
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *direction,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((direction == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  v = UnityEngine_Transform__TransformDirection
                (__this_00,(UnityEngine_Vector3_o)(direction->fields).Value.fields,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin$$TransformPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTransformBuiltin__TransformPoint (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* point, const MethodInfo* method);
// 0x5a4aad0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTransformBuiltin__TransformPoint
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *point,
          MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((point == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  v = UnityEngine_Transform__TransformPoint
                (__this_00,(UnityEngine_Vector3_o)(point->fields).Value.fields,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicTransformBuiltin$$Rotate
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__Rotate (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* rotation, const MethodInfo* method);
// 0x5a4ab00

void CustomLogic_CustomLogicTransformBuiltin__Rotate
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *rotation,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  if ((rotation == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__Rotate_692dd80
            (__this_00,(UnityEngine_Vector3_o)(rotation->fields).Value.fields,(MethodInfo *)0x0);
  (__this->fields)._needSetRotation = true;
  (__this->fields)._needSetLocalRotation = true;
  return;
}


// CustomLogic.CustomLogicTransformBuiltin$$RotateAround
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__RotateAround (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* point, CustomLogic_CustomLogicVector3Builtin_o* axis, float angle, const MethodInfo* method);
// 0x5a4ab30

void CustomLogic_CustomLogicTransformBuiltin__RotateAround
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *point,CustomLogic_CustomLogicVector3Builtin_o *axis,
               float angle,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  (__this->fields)._needSetRotation = true;
  (__this->fields)._needSetLocalRotation = true;
  if (((point == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
      (axis == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__RotateAround
            (__this_00,(UnityEngine_Vector3_o)(point->fields).Value.fields,
             (UnityEngine_Vector3_o)(axis->fields).Value.fields,angle,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin$$LookAt
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__LookAt (CustomLogic_CustomLogicTransformBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* target, const MethodInfo* method);
// 0x5a4ab70

void CustomLogic_CustomLogicTransformBuiltin__LookAt
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *target,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  
  (__this->fields)._needSetRotation = true;
  (__this->fields)._needSetLocalRotation = true;
  if ((target == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__LookAt_692e330
            (__this_00,(UnityEngine_Vector3_o)(target->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTransformBuiltin$$SetRenderersEnabled
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__SetRenderersEnabled (CustomLogic_CustomLogicTransformBuiltin_o* __this, bool enabled, const MethodInfo* method);
// 0x5a4aba0

void CustomLogic_CustomLogicTransformBuiltin__SetRenderersEnabled
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,bool enabled,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  uint uVar1;
  System_Object_array *pSVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_07546203 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    Il2CppMethodInitialized_07546203 = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pSVar2 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                       ((UnityEngine_Component_o *)__this_00,
                        (MethodInfo_34B11B0 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    if (pSVar2 != (System_Object_array *)0x0) {
      uVar1 = (uint)pSVar2->max_length;
      if (0 < (int)uVar1) {
        uVar3 = 0;
        do {
          if (uVar1 <= uVar3) {
            ThrowIndexOutOfRangeException();
          }
          if ((UnityEngine_Renderer_o *)pSVar2->m_Items[(int)uVar3] == (UnityEngine_Renderer_o *)0x0)
          goto label_05a4ac2e;
          UnityEngine_Renderer__set_enabled
                    ((UnityEngine_Renderer_o *)pSVar2->m_Items[(int)uVar3],enabled,(MethodInfo *)0x0);
          uVar3 = uVar3 + 1;
          uVar1 = (uint)pSVar2->max_length;
        } while ((int)uVar3 < (int)uVar1);
      }
      return;
    }
  }
label_05a4ac2e:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$GetColliders
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicTransformBuiltin__GetColliders (CustomLogic_CustomLogicTransformBuiltin_o* __this, bool recursive, const MethodInfo* method);
// 0x5a4ac40

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__GetColliders
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,bool recursive,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Transform_o *__this_00;
  System_Collections_Generic_List_object__o *pSVar3;
  MethodInfo *pMVar4;
  int iVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  UnityEngine_GameObject_o *pUVar6;
  System_Object_array *pSVar7;
  ulong uVar8;
  System_Object_array *pSVar9;
  Il2CppObject *pIVar10;
  CustomLogic_CustomLogicColliderBuiltin_o *pCVar11;
  Il2CppObject *pIVar12;
  ulong uVar13;
  
  if (Il2CppMethodInitialized_07546204 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponents_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07546204 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Value;
  if (recursive) {
    if (((__this_00 == (UnityEngine_Transform_o *)0x0) ||
        (pUVar6 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
        pUVar6 == (UnityEngine_GameObject_o *)0x0)) ||
       (pSVar7 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                           (pUVar6,(MethodInfo_353C030 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider),
       pSVar7 == (System_Object_array *)0x0)) goto label_05a4afbf;
    iVar5 = (int)pSVar7->max_length;
    if (__this_01 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (iVar5 < 1) {
        return __this_01;
      }
      uVar8 = pSVar7->max_length & 0xffffffff;
      uVar13 = 0;
      while (uVar13 < uVar8) {
        pIVar12 = pSVar7->m_Items[uVar13];
        pSVar3 = (__this_01->fields).List;
        pSVar9 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        if (pSVar9 == (System_Object_array *)0x0) goto label_05a4afbf;
        if ((pIVar12 != (Il2CppObject *)0x0) &&
           (pIVar10 = il2cpp_vm_Object_IsInst(pIVar12,(((pSVar9->obj).klass)->_1).element_class),
           pIVar10 == (Il2CppObject *)0x0)) {
label_05a4afc9:
          pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
        }
        if ((int)pSVar9->max_length == 0) break;
        pSVar9->m_Items[0] = pIVar12;
        Il2CppCodeGenWriteBarrier(pSVar9->m_Items);
        pCVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
        CustomLogic_CustomLogicColliderBuiltin___ctor_58f2270(pCVar11,pSVar9,(MethodInfo *)0x0);
        pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto label_05a4afbf;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar9 = (pSVar3->fields)._items;
        if (pSVar9 == (System_Object_array *)0x0) goto label_05a4afbf;
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pSVar9->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pSVar9->m_Items[(int)uVar2] = (Il2CppObject *)pCVar11;
          Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar3,(Il2CppObject *)pCVar11,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        uVar13 = uVar13 + 1;
        uVar2 = (uint)pSVar7->max_length;
        uVar8 = (ulong)uVar2;
        if ((long)(int)uVar2 <= (long)uVar13) {
          return __this_01;
        }
      }
label_05a4afc4:
      ThrowIndexOutOfRangeException();
    }
  }
  else {
    if (((__this_00 == (UnityEngine_Transform_o *)0x0) ||
        (pUVar6 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
        pUVar6 == (UnityEngine_GameObject_o *)0x0)) ||
       (pSVar7 = UnityEngine_GameObject__GetComponents_object_
                           (pUVar6,(MethodInfo_353BDB0 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponents_Collider),
       pSVar7 == (System_Object_array *)0x0)) goto label_05a4afbf;
    iVar5 = (int)pSVar7->max_length;
    if (__this_01 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (iVar5 < 1) {
        return __this_01;
      }
      uVar8 = pSVar7->max_length & 0xffffffff;
      uVar13 = 0;
      while (uVar13 < uVar8) {
        pIVar12 = pSVar7->m_Items[uVar13];
        pSVar3 = (__this_01->fields).List;
        pSVar9 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        if (pSVar9 == (System_Object_array *)0x0) goto label_05a4afbf;
        if ((pIVar12 != (Il2CppObject *)0x0) &&
           (pIVar10 = il2cpp_vm_Object_IsInst(pIVar12,(((pSVar9->obj).klass)->_1).element_class),
           pIVar10 == (Il2CppObject *)0x0)) goto label_05a4afc9;
        if ((int)pSVar9->max_length == 0) break;
        pSVar9->m_Items[0] = pIVar12;
        Il2CppCodeGenWriteBarrier(pSVar9->m_Items);
        pCVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
        CustomLogic_CustomLogicColliderBuiltin___ctor_58f2270(pCVar11,pSVar9,(MethodInfo *)0x0);
        pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto label_05a4afbf;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar9 = (pSVar3->fields)._items;
        if (pSVar9 == (System_Object_array *)0x0) goto label_05a4afbf;
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pSVar9->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pSVar9->m_Items[(int)uVar2] = (Il2CppObject *)pCVar11;
          Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar3,(Il2CppObject *)pCVar11,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        uVar13 = uVar13 + 1;
        uVar2 = (uint)pSVar7->max_length;
        uVar8 = (ulong)uVar2;
        if ((long)(int)uVar2 <= (long)uVar13) {
          return __this_01;
        }
      }
      goto label_05a4afc4;
    }
  }
  if (iVar5 < 1) {
    return __this_01;
  }
label_05a4afbf:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTransformBuiltin$$SetActive
// il2cpp: void CustomLogic_CustomLogicTransformBuiltin__SetActive (CustomLogic_CustomLogicTransformBuiltin_o* __this, bool active, const MethodInfo* method);
// 0x5a4afe0

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
// 0x5a3f200

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicTransformBuiltin__op_Implicit(UnityEngine_Transform_o *value,MethodInfo *method)

{
  CustomLogic_CustomLogicTransformBuiltin_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546205 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    Il2CppMethodInitialized_07546205 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
  CustomLogic_CustomLogicTransformBuiltin___ctor(__this,value,method_00);
  return __this;
}


// CustomLogic.CustomLogicTransformBuiltin$$op_Implicit
// il2cpp: UnityEngine_Transform_o* CustomLogic_CustomLogicTransformBuiltin__op_Implicit (CustomLogic_CustomLogicTransformBuiltin_o* value, const MethodInfo* method);
// 0x5a4b010

UnityEngine_Transform_o *
CustomLogic_CustomLogicTransformBuiltin__op_Implicit_594b010
          (CustomLogic_CustomLogicTransformBuiltin_o *value,MethodInfo *method)

{
  if (value == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (value->fields).Value;
}


// CustomLogic.CustomLogicTransformBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicTransformBuiltin____Eq__ (CustomLogic_CustomLogicTransformBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x5a4b030

bool CustomLogic_CustomLogicTransformBuiltin____Eq__
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *x;
  Il2CppClass *y;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07546206 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07546206 = '\x01';
  }
  if (self == (Il2CppObject *)0x0) {
    if (other == (Il2CppObject *)0x0) {
      return true;
    }
  }
  else {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicTransformBuiltin->_2).typeHierarchyDepth;
    if ((((bVar1 <= (self->klass->_2).typeHierarchyDepth) && (other != (Il2CppObject *)0x0)) &&
        ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin)) &&
       ((bVar1 <= (other->klass->_2).typeHierarchyDepth &&
        ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin)))) {
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
  return false;
}


// CustomLogic.CustomLogicTransformBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicTransformBuiltin____Hash__ (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a4b100

int32_t CustomLogic_CustomLogicTransformBuiltin____Hash__
                  (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  bool bVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_07546207 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07546207 = '\x01';
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
  if (pUVar1 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar3 = (*(pUVar1->klass->vtable)._2_GetHashCode.methodPtr)
                    (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method);
  return iVar3;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTransformBuiltin__get_ClassName (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a4b190

System_String_o *
CustomLogic_CustomLogicTransformBuiltin__get_ClassName
          (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546208 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Transform");
    Il2CppMethodInitialized_07546208 = '\x01';
  }
  return "Transform";
}


// CustomLogic.CustomLogicTransformBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTransformBuiltin__get_IsAbstract (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a4b1c0

bool CustomLogic_CustomLogicTransformBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTransformBuiltin__get_IsStatic (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a4b1d0

bool CustomLogic_CustomLogicTransformBuiltin__get_IsStatic
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicTransformBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTransformBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicTransformBuiltin_o* __this, const MethodInfo* method);
// 0x5a4b1e0

bool CustomLogic_CustomLogicTransformBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicTransformBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


