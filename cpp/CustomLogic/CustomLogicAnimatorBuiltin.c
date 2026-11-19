// Type: CustomLogic.CustomLogicAnimatorBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAnimatorBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicAnimatorBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAnimatorBuiltin_o* CustomLogic_CustomLogicAnimatorBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x59eccb0

CustomLogic_CustomLogicAnimatorBuiltin_o *
CustomLogic_CustomLogicAnimatorBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicAnimatorBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07545d6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin);
    Il2CppMethodInitialized_07545d6e = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAnimatorBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin);
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x59ef940

void CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545d8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d8b = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x59ef9b0

void CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__ApplyBuiltinRootMotion>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__ApplyBuiltinRootMotion_b__6_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ef9c0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__ApplyBuiltinRootMotion_b__6_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  if ((__c == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) ||
     (__this_00 = (__c->fields).Value, __this_00 == (UnityEngine_Animator_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__ApplyBuiltinRootMotion(__this_00,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__Update>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__Update_b__7_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ef9e0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__Update_b__7_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animator_o *__this_00;
  float deltaTime;
  
  if (Il2CppMethodInitialized_07545d8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d8c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    deltaTime = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (obj,(MethodInfo_34BDFE0 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      UnityEngine_Animator__Update(__this_00,deltaTime,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlaying>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__IsPlaying_b__8_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59efa80

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__IsPlaying_b__8_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  int32_t layer;
  undefined8 in_RAX;
  System_String_o *anim;
  Il2CppObject *pIVar2;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_07545d8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d8d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    anim = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar2,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    layer = 0;
    if (1 < (int)__a->max_length) {
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      layer = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (pIVar2,(MethodInfo_34BDC20 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    }
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicAnimatorBuiltin__IsPlaying(__c,anim,layer,method);
      uStack_28 = CONCAT17(bVar1,(undefined7)uStack_28);
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_28 + 7));
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsTag>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__IsTag_b__9_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59efb80

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__IsTag_b__9_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  int32_t layer;
  undefined8 in_RAX;
  System_String_o *tag;
  Il2CppObject *pIVar2;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_07545d8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d8e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    tag = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar2,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                    );
    layer = 0;
    if (1 < (int)__a->max_length) {
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      layer = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (pIVar2,(MethodInfo_34BDC20 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    }
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicAnimatorBuiltin__IsTag(__c,tag,layer,method);
      uStack_28 = CONCAT17(bVar1,(undefined7)uStack_28);
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_28 + 7));
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransitionDuration>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetTransitionDuration_b__10_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59efc80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59efd04: jmp 0x59efd5f

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetTransitionDuration_b__10_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  int32_t layerIndex;
  Il2CppObject *pIVar1;
  float fVar2;
  UnityEngine_AnimatorTransitionInfo_Fields UStack_58;
  UnityEngine_AnimatorTransitionInfo_Fields UStack_30;
  
  if (Il2CppMethodInitialized_07545d8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d8f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      layerIndex = 0;
    }
    else {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pIVar1 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      layerIndex = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                             (pIVar1,(MethodInfo_34BDC20 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    }
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      UnityEngine_Animator__GetAnimatorTransitionInfo_68ab160
                ((UnityEngine_AnimatorTransitionInfo_o *)&UStack_30,__this_00,layerIndex,(MethodInfo *)0x0);
      UStack_58.m_Duration = UStack_30.m_Duration;
      UStack_58.m_NormalizedTime = UStack_30.m_NormalizedTime;
      UStack_58.m_AnyState = UStack_30.m_AnyState;
      UStack_58._25_3_ = UStack_30._25_3_;
      UStack_58.m_TransitionType = UStack_30.m_TransitionType;
      UStack_58.m_FullPath = UStack_30.m_FullPath;
      UStack_58.m_UserName = UStack_30.m_UserName;
      UStack_58.m_Name = UStack_30.m_Name;
      UStack_58.m_HasFixedDuration = UStack_30.m_HasFixedDuration;
      UStack_58._13_3_ = UStack_30._13_3_;
      fVar2 = UnityEngine_AnimatorTransitionInfo__get_duration
                        ((UnityEngine_AnimatorTransitionInfo_o *)&UStack_58,(MethodInfo *)0x0);
      UStack_58.m_FullPath = (int32_t)fVar2;
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,&UStack_58);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransitionNormalizedTime>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetTransitionNormalizedTime_b__11_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59efd70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59efdf4: jmp 0x59efe4f

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetTransitionNormalizedTime_b__11_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  int32_t layerIndex;
  Il2CppObject *pIVar1;
  float fVar2;
  UnityEngine_AnimatorTransitionInfo_Fields UStack_58;
  UnityEngine_AnimatorTransitionInfo_Fields UStack_30;
  
  if (Il2CppMethodInitialized_07545d90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d90 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      layerIndex = 0;
    }
    else {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pIVar1 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      layerIndex = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                             (pIVar1,(MethodInfo_34BDC20 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    }
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      UnityEngine_Animator__GetAnimatorTransitionInfo_68ab160
                ((UnityEngine_AnimatorTransitionInfo_o *)&UStack_30,__this_00,layerIndex,(MethodInfo *)0x0);
      UStack_58.m_Duration = UStack_30.m_Duration;
      UStack_58.m_NormalizedTime = UStack_30.m_NormalizedTime;
      UStack_58.m_AnyState = UStack_30.m_AnyState;
      UStack_58._25_3_ = UStack_30._25_3_;
      UStack_58.m_TransitionType = UStack_30.m_TransitionType;
      UStack_58.m_FullPath = UStack_30.m_FullPath;
      UStack_58.m_UserName = UStack_30.m_UserName;
      UStack_58.m_Name = UStack_30.m_Name;
      UStack_58.m_HasFixedDuration = UStack_30.m_HasFixedDuration;
      UStack_58._13_3_ = UStack_30._13_3_;
      fVar2 = UnityEngine_AnimatorTransitionInfo__get_normalizedTime
                        ((UnityEngine_AnimatorTransitionInfo_o *)&UStack_58,(MethodInfo *)0x0);
      UStack_58.m_FullPath = (int32_t)fVar2;
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,&UStack_58);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimation>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__12_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59efe60

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__12_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_Animator_o *__this_00;
  int32_t layer;
  System_String_o *stateName;
  float normalizedTransitionDuration;
  
  if (Il2CppMethodInitialized_07545d91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d91 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    stateName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_34BDE00 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    layer = 0;
    if ((int)__a->max_length < 2) {
      normalizedTransitionDuration = 0.1;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      normalizedTransitionDuration =
           CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     (pIVar1,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                     );
      if (2 < (int)__a->max_length) {
        pIVar1 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        layer = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                          (pIVar1,(MethodInfo_34BDC20 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      }
    }
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      UnityEngine_Animator__CrossFade_68ab5d0
                (__this_00,stateName,normalizedTransitionDuration,layer,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimationAt>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationAt_b__13_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59effb0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59f00ab: movss xmm1, dword ptr [rsp]
// asm:   0x59f00b0: jmp 0x59f00f3

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationAt_b__13_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_Animator_o *__this_00;
  int32_t layer;
  System_String_o *stateName;
  float normalizedTimeOffset;
  float normalizedTransitionDuration;
  
  if (Il2CppMethodInitialized_07545d92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d92 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059f011e:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    stateName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_34BDE00 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      normalizedTimeOffset =
           CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     (__a->m_Items[1],
                      (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      layer = 0;
      if ((int)__a->max_length < 3) {
        normalizedTransitionDuration = 0.1;
      }
      else {
        pIVar1 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        normalizedTransitionDuration =
             CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       (pIVar1,(MethodInfo_34BDFE0 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (3 < (int)__a->max_length) {
          pIVar1 = __a->m_Items[3];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          layer = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                            (pIVar1,(MethodInfo_34BDC20 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
        }
      }
      if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
        UnityEngine_Animator__CrossFade
                  (__this_00,stateName,normalizedTransitionDuration,layer,normalizedTimeOffset,
                   (MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_059f011e;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetSpeed>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetSpeed_b__14_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f0130

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetSpeed_b__14_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animator_o *__this_00;
  float value;
  
  if (Il2CppMethodInitialized_07545d93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d93 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      UnityEngine_Animator__set_speed(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationLength>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__15_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f01d0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__15_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *key;
  UnityEngine_AnimationClip_o *__this_01;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_07545d94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d94 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    key = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar1,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                    );
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_07545d6c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_get_Item);
        Il2CppMethodInitialized_07545d6c = '\x01';
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__c->fields)._animatorClips;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                              (__this_00,(Il2CppObject *)key,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_get_Item)
        ;
        if (__this_01 != (UnityEngine_AnimationClip_o *)0x0) {
          UnityEngine_AnimationClip__get_length(__this_01,(MethodInfo *)0x0);
          pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
          return pIVar1;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetFloat>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetFloat_b__16_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f02c0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetFloat_b__16_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  System_String_o *name;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_07545d95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d95 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar1,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      UnityEngine_Animator__GetFloat(__this_00,name,(MethodInfo *)0x0);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetInteger>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetInteger_b__17_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f0370

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetInteger_b__17_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  System_String_o *name;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_07545d96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d96 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar1,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      UnityEngine_Animator__GetInteger(__this_00,name,(MethodInfo *)0x0);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_14);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBool>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetBool_b__18_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f0420

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetBool_b__18_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  bool bVar1;
  undefined8 in_RAX;
  System_String_o *name;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07545d97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d97 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar2,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      bVar1 = UnityEngine_Animator__GetBool(__this_00,name,(MethodInfo *)0x0);
      uStack_18 = CONCAT17(bVar1,(undefined7)uStack_18);
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetFloat>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetFloat_b__19_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f04d0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetFloat_b__19_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animator_o *__this_00;
  System_String_o *name;
  float value;
  
  if (Il2CppMethodInitialized_07545d98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d98 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059f0587:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
        UnityEngine_Animator__SetFloat(__this_00,name,value,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_059f0587;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetInteger>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetInteger_b__20_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f05a0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetInteger_b__20_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animator_o *__this_00;
  int32_t value;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_07545d99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d99 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059f0659:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (__a->m_Items[1],
                         (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
        UnityEngine_Animator__SetInteger(__this_00,name,value,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_059f0659;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetBool>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetBool_b__21_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f0670

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetBool_b__21_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animator_o *__this_00;
  bool value;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_07545d9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d9a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059f072a:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (__a->m_Items[1],
                         (MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
        UnityEngine_Animator__SetBool(__this_00,name,value,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_059f072a;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTrigger>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetTrigger_b__22_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f0740

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetTrigger_b__22_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animator_o *__this_00;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_07545d9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d9b = '\x01';
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
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      UnityEngine_Animator__SetTrigger(__this_00,name,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetTrigger>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__ResetTrigger_b__23_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f07e0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__ResetTrigger_b__23_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animator_o *__this_00;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_07545d9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d9c = '\x01';
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
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      UnityEngine_Animator__ResetTrigger(__this_00,name,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLayerWeight>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetLayerWeight_b__24_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f0880

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetLayerWeight_b__24_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animator_o *__this_00;
  int32_t layerIndex;
  float weight;
  
  if (Il2CppMethodInitialized_07545d9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d9d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059f0933:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    layerIndex = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                           (obj,(MethodInfo_34BDC20 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if ((__a->max_length & 0xfffffffe) != 0) {
      weight = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (__a->m_Items[1],
                          (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
        UnityEngine_Animator__SetLayerWeight(__this_00,layerIndex,weight,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_059f0933;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetLayerWeight>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetLayerWeight_b__25_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f0940

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetLayerWeight_b__25_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  int32_t layerIndex;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_07545d9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d9e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    layerIndex = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                           (pIVar1,(MethodInfo_34BDC20 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      UnityEngine_Animator__GetLayerWeight(__this_00,layerIndex,(MethodInfo *)0x0);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationNormalizedTime>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationNormalizedTime_b__26_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f09f0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationNormalizedTime_b__26_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t layer;
  Il2CppObject *pIVar1;
  System_Object_array *extraout_RDX;
  System_Object_array *method_00;
  System_Object_array *extraout_RDX_00;
  undefined1 auStack_14 [4];
  
  method_00 = __a;
  if (Il2CppMethodInitialized_07545d9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d9f = '\x01';
    method_00 = extraout_RDX;
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      layer = 0;
    }
    else {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pIVar1 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      layer = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (pIVar1,(MethodInfo_34BDC20 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationNormalizedTime(__c,layer,(MethodInfo *)method_00);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x59ecda0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07545d6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationAt");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"GetInteger");
    il2cpp_codegen_initialize_runtime_metadata(&"SetTrigger");
    il2cpp_codegen_initialize_runtime_metadata(&"Update");
    il2cpp_codegen_initialize_runtime_metadata(&"GetLayerWeight");
    il2cpp_codegen_initialize_runtime_metadata(&"GetFloat");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationLength");
    il2cpp_codegen_initialize_runtime_metadata(&"HasRootMotion");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTransitionDuration");
    il2cpp_codegen_initialize_runtime_metadata(&"DeltaPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLayerWeight");
    il2cpp_codegen_initialize_runtime_metadata(&"SetInteger");
    il2cpp_codegen_initialize_runtime_metadata(&"GetBool");
    il2cpp_codegen_initialize_runtime_metadata(&"ApplyRootMotion");
    il2cpp_codegen_initialize_runtime_metadata(&"SetSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"SetFloat");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationNormalizedTime");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTransitionNormalizedTime");
    il2cpp_codegen_initialize_runtime_metadata(&"ApplyBuiltinRootMotion");
    il2cpp_codegen_initialize_runtime_metadata(&"DeltaRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"IsTag");
    il2cpp_codegen_initialize_runtime_metadata(&"ResetTrigger");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPlaying");
    il2cpp_codegen_initialize_runtime_metadata(&"SetBool");
    Il2CppMethodInitialized_07545d6f = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x6e230e95) {
    if (uVar2 < 0x492a3cd0) {
      if (uVar2 < 0x185debee) {
        if (uVar2 == 0x11452a77) {
          bVar1 = System_String__op_Equality(name,"SetBool",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetBool
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x154e2cf3) {
          bVar1 = System_String__op_Equality(name,"SetInteger",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetInteger
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x185debed) {
          bVar1 = System_String__op_Equality(name,"ApplyRootMotion",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__ApplyRootMotion
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x1c21234b) {
        bVar1 = System_String__op_Equality(name,"GetAnimationNormalizedTime",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x2f7dcbe5) {
        bVar1 = System_String__op_Equality(name,"HasRootMotion",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__HasRootMotion
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x492a3ccf) {
        bVar1 = System_String__op_Equality(name,"GetAnimationLength",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetAnimationLength
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0x54d57509) {
      if (uVar2 == 0x525bd9f7) {
        bVar1 = System_String__op_Equality(name,"GetInteger",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetInteger
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x535e4da6) {
        bVar1 = System_String__op_Equality(name,"DeltaPosition",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__DeltaPosition
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x54d57508) {
        bVar1 = System_String__op_Equality(name,"GetTransitionDuration",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetTransitionDuration
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 == 0x55aebb4e) {
      bVar1 = System_String__op_Equality(name,"PlayAnimationAt",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x63f1e834) {
      bVar1 = System_String__op_Equality(name,"ApplyBuiltinRootMotion",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__ApplyBuiltinRootMotion
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x6e230e94) {
      bVar1 = System_String__op_Equality(name,"Update",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__Update
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xd64c477c) {
    if (uVar2 < 0xaef32d04) {
      if (uVar2 == 0x8a47281e) {
        bVar1 = System_String__op_Equality(name,"SetSpeed",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetSpeed
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xa90ef8b4) {
        bVar1 = System_String__op_Equality(name,"GetTransitionNormalizedTime",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetTransitionNormalizedTime
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xaef32d03) {
        bVar1 = System_String__op_Equality(name,"DeltaRotation",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__DeltaRotation
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xb54e6138) {
      bVar1 = System_String__op_Equality(name,"GetLayerWeight",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetLayerWeight
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xc0749efc) {
      bVar1 = System_String__op_Equality(name,"ResetTrigger",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__ResetTrigger
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xd64c477b) {
      bVar1 = System_String__op_Equality(name,"PlayAnimation",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__PlayAnimation
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xf8a12a84) {
    if (uVar2 == 0xe4b35065) {
      bVar1 = System_String__op_Equality(name,"IsPlaying",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__IsPlaying
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xed6289ad) {
      bVar1 = System_String__op_Equality(name,"SetTrigger",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetTrigger
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xf8a12a83) {
      bVar1 = System_String__op_Equality(name,"GetBool",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetBool
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xfaf2b5a8) {
    if (uVar2 == 0xfaa10a9c) {
      bVar1 = System_String__op_Equality(name,"SetLayerWeight",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetLayerWeight
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xfaf2b5a7) {
      bVar1 = System_String__op_Equality(name,"SetFloat",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetFloat
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 == 0xfc3aa213) {
    bVar1 = System_String__op_Equality(name,"GetFloat",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetFloat
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xfe771063) {
    bVar1 = System_String__op_Equality(name,"IsTag",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__IsTag
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAnimatorBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreatePropertyBinding__DeltaPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__DeltaPosition (const MethodInfo* method);
// 0x59ed710

CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__DeltaPosition(MethodInfo *method)

{
  System_Func_CustomLogicAnimatorBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__DeltaPosition_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
    Il2CppMethodInitialized_07545d70 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__DeltaPosition_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreatePropertyBinding__DeltaRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__DeltaRotation (const MethodInfo* method);
// 0x59ed7b0

CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__DeltaRotation(MethodInfo *method)

{
  System_Func_CustomLogicAnimatorBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__DeltaRotation_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
    Il2CppMethodInitialized_07545d71 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__DeltaRotation_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreatePropertyBinding__HasRootMotion
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__HasRootMotion (const MethodInfo* method);
// 0x59ed850

CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__HasRootMotion(MethodInfo *method)

{
  System_Func_CustomLogicAnimatorBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__HasRootMotion_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
    Il2CppMethodInitialized_07545d72 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__HasRootMotion_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreatePropertyBinding__ApplyRootMotion
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__ApplyRootMotion (const MethodInfo* method);
// 0x59ed8f0

CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__ApplyRootMotion(MethodInfo *method)

{
  System_Func_CustomLogicAnimatorBuiltin__object__o *__this;
  System_Action_CustomLogicAnimatorBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545d73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicAnimatorBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__ApplyRootMotion_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__ApplyRootMotion_g____se
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
    Il2CppMethodInitialized_07545d73 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__ApplyRootMotion_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicAnimatorBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__ApplyRootMotion_g____se
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__ApplyBuiltinRootMotion
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__ApplyBuiltinRootMotion (const MethodInfo* method);
// 0x59ed9d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59eda05: jmp 0x59eda75

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__ApplyBuiltinRootMotion
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__ApplyBuiltinRootMotion
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d74 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__ApplyBuiltinRootMotion
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__Update
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__Update (const MethodInfo* method);
// 0x59edb10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59edb45: jmp 0x59edbb5

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__Update(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__Update_b__7_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d75 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__Update_b__7_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__IsPlaying
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__IsPlaying (const MethodInfo* method);
// 0x59edc50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59edc85: jmp 0x59edcf5

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__IsPlaying(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__IsPlaying_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d76 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__IsPlaying_b__8_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__IsTag
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__IsTag (const MethodInfo* method);
// 0x59edd90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59eddc5: jmp 0x59ede35

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__IsTag(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__IsTag_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d77 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__IsTag_b__9_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetTransitionDuration
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetTransitionDuration (const MethodInfo* method);
// 0x59eded0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59edf05: jmp 0x59edf75

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetTransitionDuration
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetTransitionDuration_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d78 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetTransitionDuration_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetTransitionNormalizedTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetTransitionNormalizedTime (const MethodInfo* method);
// 0x59ee010
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ee045: jmp 0x59ee0b5

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetTransitionNormalizedTime
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetTransitionNormalized
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d79 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetTransitionNormalized
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__PlayAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__PlayAnimation (const MethodInfo* method);
// 0x59ee150
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ee185: jmp 0x59ee1f5

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__PlayAnimation(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d7a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__12_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__12_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__12_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__12_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__12_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__PlayAnimationAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt (const MethodInfo* method);
// 0x59ee290
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ee2c5: jmp 0x59ee335

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__13_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d7b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__13_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__13_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__13_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__13_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetSpeed (const MethodInfo* method);
// 0x59ee3d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ee405: jmp 0x59ee475

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetSpeed(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetSpeed_b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d7c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__14_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__14_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetSpeed_b__14_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__14_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetAnimationLength
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetAnimationLength (const MethodInfo* method);
// 0x59ee510
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ee545: jmp 0x59ee5b5

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetAnimationLength(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d7d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__15_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__15_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b__1
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__15_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__15_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetFloat (const MethodInfo* method);
// 0x59ee650
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ee685: jmp 0x59ee6f5

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetFloat(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetFloat_b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d7e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__16_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__16_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetFloat_b__16_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__16_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__16_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetInteger
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetInteger (const MethodInfo* method);
// 0x59ee790
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ee7c5: jmp 0x59ee835

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetInteger(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetInteger_b__17_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d7f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__17_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__17_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetInteger_b__17_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__17_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__17_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetBool
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetBool (const MethodInfo* method);
// 0x59ee8d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ee905: jmp 0x59ee975

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetBool(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetBool_b__18_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d80 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__18_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__18_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetBool_b__18_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__18_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__18_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetFloat (const MethodInfo* method);
// 0x59eea10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59eea45: jmp 0x59eeab5

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetFloat(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetFloat_b__19_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d81 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__19_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__19_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetFloat_b__19_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__19_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__19_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetInteger
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetInteger (const MethodInfo* method);
// 0x59eeb50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59eeb85: jmp 0x59eebf5

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetInteger(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetInteger_b__20_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d82 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__20_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__20_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetInteger_b__20_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__20_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__20_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetBool
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetBool (const MethodInfo* method);
// 0x59eec90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59eecc8: jmp 0x59eed3b

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetBool(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetBool_b__21_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d83 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__21_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__21_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetBool_b__21_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__21_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__21_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetTrigger
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetTrigger (const MethodInfo* method);
// 0x59eedd0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59eee08: jmp 0x59eee7b

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetTrigger(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetTrigger_b__22_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d84 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__22_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__22_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetTrigger_b__22_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__22_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__22_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__ResetTrigger
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__ResetTrigger (const MethodInfo* method);
// 0x59eef10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59eef48: jmp 0x59eefbb

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__ResetTrigger(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__ResetTrigger_b__23_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d85 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__23_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__23_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__ResetTrigger_b__23_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__23_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__23_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetLayerWeight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetLayerWeight (const MethodInfo* method);
// 0x59ef050
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ef088: jmp 0x59ef0fb

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetLayerWeight(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetLayerWeight_b__24_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d86 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__24_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__24_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetLayerWeight_b__24_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__24_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__24_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetLayerWeight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetLayerWeight (const MethodInfo* method);
// 0x59ef190
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ef1c8: jmp 0x59ef23b

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetLayerWeight(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetLayerWeight_b__25_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d87 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__25_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__25_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetLayerWeight_b__25_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__25_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__25_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetAnimationNormalizedTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime (const MethodInfo* method);
// 0x59ef2d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ef308: jmp 0x59ef37b

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimatorBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalizedT
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d88 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__26_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__26_0;
  }
  if (__this == (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalizedT
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields;
    pCVar2->__9__26_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__26_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x59ef410

void CustomLogic_CustomLogicAnimatorBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545d89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationAt");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"GetInteger");
    il2cpp_codegen_initialize_runtime_metadata(&"SetTrigger");
    il2cpp_codegen_initialize_runtime_metadata(&"Update");
    il2cpp_codegen_initialize_runtime_metadata(&"GetLayerWeight");
    il2cpp_codegen_initialize_runtime_metadata(&"GetFloat");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationLength");
    il2cpp_codegen_initialize_runtime_metadata(&"HasRootMotion");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTransitionDuration");
    il2cpp_codegen_initialize_runtime_metadata(&"DeltaPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLayerWeight");
    il2cpp_codegen_initialize_runtime_metadata(&"SetInteger");
    il2cpp_codegen_initialize_runtime_metadata(&"GetBool");
    il2cpp_codegen_initialize_runtime_metadata(&"ApplyRootMotion");
    il2cpp_codegen_initialize_runtime_metadata(&"SetSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"SetFloat");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationNormalizedTime");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTransitionNormalizedTime");
    il2cpp_codegen_initialize_runtime_metadata(&"ApplyBuiltinRootMotion");
    il2cpp_codegen_initialize_runtime_metadata(&"DeltaRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"IsTag");
    il2cpp_codegen_initialize_runtime_metadata(&"ResetTrigger");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPlaying");
    il2cpp_codegen_initialize_runtime_metadata(&"SetBool");
    Il2CppMethodInitialized_07545d89 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DeltaPosition",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DeltaRotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HasRootMotion",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ApplyRootMotion",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ApplyBuiltinRootMotion",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Update",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPlaying",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsTag",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetTransitionDuration",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetTransitionNormalizedTime",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayAnimation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayAnimationAt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetSpeed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAnimationLength",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetFloat",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetInteger",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetBool",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetFloat",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetInteger",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetBool",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetTrigger",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ResetTrigger",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetLayerWeight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetLayerWeight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAnimationNormalizedTime",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__DeltaPosition>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__DeltaPosition_g____getter_2_0 (CustomLogic_CustomLogicAnimatorBuiltin_o* __i, const MethodInfo* method);
// 0x59ef800

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__DeltaPosition_g____getter_2_0
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicAnimatorBuiltin__get_DeltaPosition(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__DeltaRotation>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__DeltaRotation_g____getter_3_0 (CustomLogic_CustomLogicAnimatorBuiltin_o* __i, const MethodInfo* method);
// 0x59ef810

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__DeltaRotation_g____getter_3_0
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Animator_o *__this;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  UnityEngine_Quaternion_o q;
  
  if ((__i == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Animator_o *)0x0)) {
    ThrowNullReferenceException();
  }
  q = UnityEngine_Animator__get_deltaRotation(__this,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__HasRootMotion>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__HasRootMotion_g____getter_4_0 (CustomLogic_CustomLogicAnimatorBuiltin_o* __i, const MethodInfo* method);
// 0x59ef840

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__HasRootMotion_g____getter_4_0
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Animator_o *__this;
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Animator_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = UnityEngine_Animator__get_hasRootMotion(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__ApplyRootMotion>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__ApplyRootMotion_g____getter_5_0 (CustomLogic_CustomLogicAnimatorBuiltin_o* __i, const MethodInfo* method);
// 0x59ef880

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__ApplyRootMotion_g____getter_5_0
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Animator_o *__this;
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Animator_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = UnityEngine_Animator__get_applyRootMotion(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__ApplyRootMotion>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__ApplyRootMotion_g____setter_5_1 (CustomLogic_CustomLogicAnimatorBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59ef8c0

void CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__ApplyRootMotion_g____setter_5_1
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Animator_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_07545d8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d8a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Animator_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__set_applyRootMotion(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin___ctor (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x59ec430

void CustomLogic_CustomLogicAnimatorBuiltin___ctor
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin___ctor (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* owner, UnityEngine_Animator_o* animator, const MethodInfo* method);
// 0x59ec440
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ec511: lea rdi, [r14 + 0x38]
// asm:   0x59ec515: jmp 0x59ec523

void CustomLogic_CustomLogicAnimatorBuiltin___ctor_58ec440
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,CustomLogic_BuiltinClassInstance_o *owner,
               UnityEngine_Animator_o *animator,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__AnimationClip__o **targetAddress;
  byte bVar1;
  UnityEngine_Component_o *pUVar2;
  UnityEngine_Animator_o *__this_00;
  UnityEngine_AnimationClip_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  UnityEngine_Animator_c *pUVar3;
  uint uVar4;
  System_Collections_Generic_Dictionary_string__AnimationClip__o *__this_03;
  UnityEngine_RuntimeAnimatorController_o *__this_04;
  UnityEngine_AnimationClip_array *pUVar5;
  System_String_o *key;
  uint uVar6;
  
  if (Il2CppMethodInitialized_07545d6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Animator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_AnimationClip);
    Il2CppMethodInitialized_07545d6b = '\x01';
  }
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)animator,
             (MethodInfo *)0x0);
  (__this->fields).OwnerBuiltin = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerBuiltin);
  pUVar3 = TypeInfo_UnityEngine_Animator;
  pUVar2 = (__this->fields).Component;
  if (pUVar2 != (UnityEngine_Component_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_Animator->_2).typeHierarchyDepth;
    if ((bVar1 <= (pUVar2->klass->_2).typeHierarchyDepth) &&
       ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_Animator))
    {
      (__this->fields).Value = (UnityEngine_Animator_o *)pUVar2;
      if ((bVar1 <= (pUVar2->klass->_2).typeHierarchyDepth) &&
         ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pUVar3)) goto label_059ec523;
    }
    il2cpp_codegen_raise_invalid_cast_exception(pUVar2,pUVar3);
  }
  (__this->fields).Value = (UnityEngine_Animator_o *)0x0;
label_059ec523:
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_AnimationClip);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_ctor)
  ;
  targetAddress = &(__this->fields)._animatorClips;
  (__this->fields)._animatorClips = __this_03;
  Il2CppCodeGenWriteBarrier(targetAddress);
  __this_00 = (__this->fields).Value;
  if (((__this_00 == (UnityEngine_Animator_o *)0x0) ||
      (__this_04 = UnityEngine_Animator__get_runtimeAnimatorController(__this_00,(MethodInfo *)0x0),
      __this_04 == (UnityEngine_RuntimeAnimatorController_o *)0x0)) ||
     (pUVar5 = UnityEngine_RuntimeAnimatorController__get_animationClips(__this_04,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_AnimationClip_array *)0x0)) {
label_059ec5f1:
    ThrowNullReferenceException();
  }
  uVar4 = (uint)pUVar5->max_length;
  if (0 < (int)uVar4) {
    uVar6 = 0;
    do {
      if (uVar4 <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      __this_01 = pUVar5->m_Items[(int)uVar6];
      if (__this_01 == (UnityEngine_AnimationClip_o *)0x0) goto label_059ec5f1;
      __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)*targetAddress;
      key = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
      if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_059ec5f1;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_02,(Il2CppObject *)key,(Il2CppObject *)__this_01,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_set_Item);
      uVar6 = uVar6 + 1;
      uVar4 = (uint)pUVar5->max_length;
    } while ((int)uVar6 < (int)uVar4);
  }
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_DeltaPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicAnimatorBuiltin__get_DeltaPosition (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x59ec610

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicAnimatorBuiltin__get_DeltaPosition
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o UVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = UnityEngine_Animator__get_deltaPosition(__this_00,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).Value.fields.x = UVar1.fields.x;
  (__this_01->fields).Value.fields.y = UVar1.fields.y;
  (__this_01->fields).Value.fields.z = UVar1.fields.z;
  return __this_01;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_DeltaRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicAnimatorBuiltin__get_DeltaRotation (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x59ec6d0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicAnimatorBuiltin__get_DeltaRotation
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  UnityEngine_Quaternion_o q;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  q = UnityEngine_Animator__get_deltaRotation(__this_00,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_HasRootMotion
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__get_HasRootMotion (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x59ec6f0

bool CustomLogic_CustomLogicAnimatorBuiltin__get_HasRootMotion
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Animator__get_hasRootMotion(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_ApplyRootMotion
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__get_ApplyRootMotion (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x59ec710

bool CustomLogic_CustomLogicAnimatorBuiltin__get_ApplyRootMotion
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Animator__get_applyRootMotion(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$set_ApplyRootMotion
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__set_ApplyRootMotion (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x59ec730

void CustomLogic_CustomLogicAnimatorBuiltin__set_ApplyRootMotion
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__set_applyRootMotion(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$ApplyBuiltinRootMotion
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__ApplyBuiltinRootMotion (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x59ec750

void CustomLogic_CustomLogicAnimatorBuiltin__ApplyBuiltinRootMotion
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__ApplyBuiltinRootMotion(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$Update
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__Update (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, float deltaTime, const MethodInfo* method);
// 0x59ec770

void CustomLogic_CustomLogicAnimatorBuiltin__Update
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,float deltaTime,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__Update(__this_00,deltaTime,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$IsPlaying
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__IsPlaying (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* anim, int32_t layer, const MethodInfo* method);
// 0x59ec790

bool CustomLogic_CustomLogicAnimatorBuiltin__IsPlaying
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *anim,int32_t layer,
               MethodInfo *method)

{
  UnityEngine_Animator_o *pUVar1;
  bool bVar2;
  UnityEngine_AnimatorStateInfo_Fields local_70;
  UnityEngine_AnimatorStateInfo_Fields local_48;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 == (UnityEngine_Animator_o *)0x0) {
label_059ec816:
    ThrowNullReferenceException();
  }
  bVar2 = UnityEngine_Animator__IsInTransition(pUVar1,layer,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).Value;
  if (bVar2) {
    if (pUVar1 == (UnityEngine_Animator_o *)0x0) goto label_059ec816;
    UnityEngine_Animator__GetNextAnimatorStateInfo
              ((UnityEngine_AnimatorStateInfo_o *)&local_70,pUVar1,layer,(MethodInfo *)0x0);
  }
  else {
    if (pUVar1 == (UnityEngine_Animator_o *)0x0) goto label_059ec816;
    UnityEngine_Animator__GetCurrentAnimatorStateInfo
              ((UnityEngine_AnimatorStateInfo_o *)&local_70,pUVar1,layer,(MethodInfo *)0x0);
  }
  local_48.m_Loop = local_70.m_Loop;
  local_48.m_Length = local_70.m_Length;
  local_48.m_Speed = local_70.m_Speed;
  local_48.m_SpeedMultiplier = local_70.m_SpeedMultiplier;
  local_48.m_Tag = local_70.m_Tag;
  local_48.m_Name = local_70.m_Name;
  local_48.m_Path = local_70.m_Path;
  local_48.m_FullPath = local_70.m_FullPath;
  local_48.m_NormalizedTime = local_70.m_NormalizedTime;
  bVar2 = UnityEngine_AnimatorStateInfo__IsName
                    ((UnityEngine_AnimatorStateInfo_o *)&local_48,anim,(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$IsTag
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__IsTag (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* tag, int32_t layer, const MethodInfo* method);
// 0x59ec8a0

bool CustomLogic_CustomLogicAnimatorBuiltin__IsTag
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *tag,int32_t layer,
               MethodInfo *method)

{
  UnityEngine_Animator_o *pUVar1;
  bool bVar2;
  UnityEngine_AnimatorStateInfo_Fields local_70;
  UnityEngine_AnimatorStateInfo_Fields local_48;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 == (UnityEngine_Animator_o *)0x0) {
label_059ec926:
    ThrowNullReferenceException();
  }
  bVar2 = UnityEngine_Animator__IsInTransition(pUVar1,layer,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).Value;
  if (bVar2) {
    if (pUVar1 == (UnityEngine_Animator_o *)0x0) goto label_059ec926;
    UnityEngine_Animator__GetNextAnimatorStateInfo
              ((UnityEngine_AnimatorStateInfo_o *)&local_70,pUVar1,layer,(MethodInfo *)0x0);
  }
  else {
    if (pUVar1 == (UnityEngine_Animator_o *)0x0) goto label_059ec926;
    UnityEngine_Animator__GetCurrentAnimatorStateInfo
              ((UnityEngine_AnimatorStateInfo_o *)&local_70,pUVar1,layer,(MethodInfo *)0x0);
  }
  local_48.m_Loop = local_70.m_Loop;
  local_48.m_Length = local_70.m_Length;
  local_48.m_Speed = local_70.m_Speed;
  local_48.m_SpeedMultiplier = local_70.m_SpeedMultiplier;
  local_48.m_Tag = local_70.m_Tag;
  local_48.m_Name = local_70.m_Name;
  local_48.m_Path = local_70.m_Path;
  local_48.m_FullPath = local_70.m_FullPath;
  local_48.m_NormalizedTime = local_70.m_NormalizedTime;
  bVar2 = UnityEngine_AnimatorStateInfo__IsTag
                    ((UnityEngine_AnimatorStateInfo_o *)&local_48,tag,(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetTransitionDuration
// il2cpp: float CustomLogic_CustomLogicAnimatorBuiltin__GetTransitionDuration (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, int32_t layer, const MethodInfo* method);
// 0x59ec930

float CustomLogic_CustomLogicAnimatorBuiltin__GetTransitionDuration
                (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,int32_t layer,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  float fVar1;
  UnityEngine_AnimatorTransitionInfo_Fields UStack_48;
  UnityEngine_AnimatorTransitionInfo_Fields UStack_20;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__GetAnimatorTransitionInfo_68ab160
            ((UnityEngine_AnimatorTransitionInfo_o *)&UStack_20,__this_00,layer,(MethodInfo *)0x0);
  UStack_48.m_Duration = UStack_20.m_Duration;
  UStack_48.m_NormalizedTime = UStack_20.m_NormalizedTime;
  UStack_48.m_AnyState = UStack_20.m_AnyState;
  UStack_48._25_3_ = UStack_20._25_3_;
  UStack_48.m_TransitionType = UStack_20.m_TransitionType;
  UStack_48.m_FullPath = UStack_20.m_FullPath;
  UStack_48.m_UserName = UStack_20.m_UserName;
  UStack_48.m_Name = UStack_20.m_Name;
  UStack_48.m_HasFixedDuration = UStack_20.m_HasFixedDuration;
  UStack_48._13_3_ = UStack_20._13_3_;
  fVar1 = UnityEngine_AnimatorTransitionInfo__get_duration
                    ((UnityEngine_AnimatorTransitionInfo_o *)&UStack_48,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetTransitionNormalizedTime
// il2cpp: float CustomLogic_CustomLogicAnimatorBuiltin__GetTransitionNormalizedTime (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, int32_t layer, const MethodInfo* method);
// 0x59ec980

float CustomLogic_CustomLogicAnimatorBuiltin__GetTransitionNormalizedTime
                (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,int32_t layer,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  float fVar1;
  UnityEngine_AnimatorTransitionInfo_Fields UStack_48;
  UnityEngine_AnimatorTransitionInfo_Fields UStack_20;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__GetAnimatorTransitionInfo_68ab160
            ((UnityEngine_AnimatorTransitionInfo_o *)&UStack_20,__this_00,layer,(MethodInfo *)0x0);
  UStack_48.m_Duration = UStack_20.m_Duration;
  UStack_48.m_NormalizedTime = UStack_20.m_NormalizedTime;
  UStack_48.m_AnyState = UStack_20.m_AnyState;
  UStack_48._25_3_ = UStack_20._25_3_;
  UStack_48.m_TransitionType = UStack_20.m_TransitionType;
  UStack_48.m_FullPath = UStack_20.m_FullPath;
  UStack_48.m_UserName = UStack_20.m_UserName;
  UStack_48.m_Name = UStack_20.m_Name;
  UStack_48.m_HasFixedDuration = UStack_20.m_HasFixedDuration;
  UStack_48._13_3_ = UStack_20._13_3_;
  fVar1 = UnityEngine_AnimatorTransitionInfo__get_normalizedTime
                    ((UnityEngine_AnimatorTransitionInfo_o *)&UStack_48,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$PlayAnimation
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__PlayAnimation (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* anim, float fade, int32_t layer, const MethodInfo* method);
// 0x59ec9d0

void CustomLogic_CustomLogicAnimatorBuiltin__PlayAnimation
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *anim,float fade,
               int32_t layer,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__CrossFade_68ab5d0(__this_00,anim,fade,layer,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$PlayAnimationAt
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__PlayAnimationAt (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* anim, float normalizedTime, float fade, int32_t layer, const MethodInfo* method);
// 0x59ec9f0

void CustomLogic_CustomLogicAnimatorBuiltin__PlayAnimationAt
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *anim,float normalizedTime,
               float fade,int32_t layer,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__CrossFade(__this_00,anim,fade,layer,normalizedTime,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$SetSpeed
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__SetSpeed (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, float speed, const MethodInfo* method);
// 0x59eca10

void CustomLogic_CustomLogicAnimatorBuiltin__SetSpeed
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,float speed,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__set_speed(__this_00,speed,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetAnimationLength
// il2cpp: float CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationLength (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x59eca30

float CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationLength
                (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_AnimationClip_o *__this_01;
  float fVar1;
  
  if (Il2CppMethodInitialized_07545d6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_get_Item);
    Il2CppMethodInitialized_07545d6c = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._animatorClips;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_00,(Il2CppObject *)anim,
                           (MethodInfo_4AAD450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_get_Item);
    if (__this_01 != (UnityEngine_AnimationClip_o *)0x0) {
      fVar1 = UnityEngine_AnimationClip__get_length(__this_01,(MethodInfo *)0x0);
      return fVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetFloat
// il2cpp: float CustomLogic_CustomLogicAnimatorBuiltin__GetFloat (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x59eca90

float CustomLogic_CustomLogicAnimatorBuiltin__GetFloat
                (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_Animator__GetFloat(__this_00,name,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetInteger
// il2cpp: int32_t CustomLogic_CustomLogicAnimatorBuiltin__GetInteger (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x59ecab0

int32_t CustomLogic_CustomLogicAnimatorBuiltin__GetInteger
                  (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UnityEngine_Animator__GetInteger(__this_00,name,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetBool
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__GetBool (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x59ecad0

bool CustomLogic_CustomLogicAnimatorBuiltin__GetBool
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Animator__GetBool(__this_00,name,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$SetFloat
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__SetFloat (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, float value, const MethodInfo* method);
// 0x59ecaf0

void CustomLogic_CustomLogicAnimatorBuiltin__SetFloat
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,float value,
               MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__SetFloat(__this_00,name,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$SetInteger
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__SetInteger (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, int32_t value, const MethodInfo* method);
// 0x59ecb10

void CustomLogic_CustomLogicAnimatorBuiltin__SetInteger
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,int32_t value,
               MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__SetInteger(__this_00,name,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$SetBool
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__SetBool (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, bool value, const MethodInfo* method);
// 0x59ecb30

void CustomLogic_CustomLogicAnimatorBuiltin__SetBool
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,bool value,
               MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__SetBool(__this_00,name,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$SetTrigger
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__SetTrigger (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x59ecb50

void CustomLogic_CustomLogicAnimatorBuiltin__SetTrigger
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__SetTrigger(__this_00,name,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$ResetTrigger
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__ResetTrigger (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x59ecb70

void CustomLogic_CustomLogicAnimatorBuiltin__ResetTrigger
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__ResetTrigger(__this_00,name,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$SetLayerWeight
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__SetLayerWeight (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, int32_t layer, float weight, const MethodInfo* method);
// 0x59ecb90

void CustomLogic_CustomLogicAnimatorBuiltin__SetLayerWeight
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,int32_t layer,float weight,MethodInfo *method
               )

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Animator__SetLayerWeight(__this_00,layer,weight,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetLayerWeight
// il2cpp: float CustomLogic_CustomLogicAnimatorBuiltin__GetLayerWeight (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, int32_t layer, const MethodInfo* method);
// 0x59ecbb0

float CustomLogic_CustomLogicAnimatorBuiltin__GetLayerWeight
                (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,int32_t layer,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animator_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_Animator__GetLayerWeight(__this_00,layer,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetAnimationNormalizedTime
// il2cpp: float CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationNormalizedTime (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, int32_t layer, const MethodInfo* method);
// 0x59ecbd0

float CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationNormalizedTime
                (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,int32_t layer,MethodInfo *method)

{
  UnityEngine_Animator_o *pUVar1;
  bool bVar2;
  float fVar3;
  UnityEngine_AnimatorStateInfo_Fields local_60;
  UnityEngine_AnimatorStateInfo_Fields local_38;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 == (UnityEngine_Animator_o *)0x0) {
label_059ecc4a:
    ThrowNullReferenceException();
  }
  bVar2 = UnityEngine_Animator__IsInTransition(pUVar1,layer,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).Value;
  if (bVar2) {
    if (pUVar1 == (UnityEngine_Animator_o *)0x0) goto label_059ecc4a;
    UnityEngine_Animator__GetNextAnimatorStateInfo
              ((UnityEngine_AnimatorStateInfo_o *)&local_60,pUVar1,layer,(MethodInfo *)0x0);
  }
  else {
    if (pUVar1 == (UnityEngine_Animator_o *)0x0) goto label_059ecc4a;
    UnityEngine_Animator__GetCurrentAnimatorStateInfo
              ((UnityEngine_AnimatorStateInfo_o *)&local_60,pUVar1,layer,(MethodInfo *)0x0);
  }
  local_38.m_Loop = local_60.m_Loop;
  local_38.m_Length = local_60.m_Length;
  local_38.m_Speed = local_60.m_Speed;
  local_38.m_SpeedMultiplier = local_60.m_SpeedMultiplier;
  local_38.m_Tag = local_60.m_Tag;
  local_38.m_Name = local_60.m_Name;
  local_38.m_Path = local_60.m_Path;
  local_38.m_FullPath = local_60.m_FullPath;
  local_38.m_NormalizedTime = local_60.m_NormalizedTime;
  fVar3 = UnityEngine_AnimatorStateInfo__get_normalizedTime
                    ((UnityEngine_AnimatorStateInfo_o *)&local_38,(MethodInfo *)0x0);
  return fVar3;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetCurrentStateInfo
// il2cpp: UnityEngine_AnimatorStateInfo_o CustomLogic_CustomLogicAnimatorBuiltin__GetCurrentStateInfo (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, int32_t layer, const MethodInfo* method);
// 0x59ec820

UnityEngine_AnimatorStateInfo_o *
CustomLogic_CustomLogicAnimatorBuiltin__GetCurrentStateInfo
          (UnityEngine_AnimatorStateInfo_o *__return_storage_ptr__,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__this,int32_t layer,MethodInfo *method)

{
  UnityEngine_Animator_o *pUVar1;
  bool bVar2;
  UnityEngine_AnimatorStateInfo_Fields UStack_40;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 == (UnityEngine_Animator_o *)0x0) {
label_059ec899:
    ThrowNullReferenceException();
  }
  bVar2 = UnityEngine_Animator__IsInTransition(pUVar1,layer,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).Value;
  if (bVar2) {
    if (pUVar1 == (UnityEngine_Animator_o *)0x0) goto label_059ec899;
    UnityEngine_Animator__GetNextAnimatorStateInfo
              ((UnityEngine_AnimatorStateInfo_o *)&UStack_40,pUVar1,layer,(MethodInfo *)0x0);
  }
  else {
    if (pUVar1 == (UnityEngine_Animator_o *)0x0) goto label_059ec899;
    UnityEngine_Animator__GetCurrentAnimatorStateInfo
              ((UnityEngine_AnimatorStateInfo_o *)&UStack_40,pUVar1,layer,(MethodInfo *)0x0);
  }
  (__return_storage_ptr__->fields).m_Loop = UStack_40.m_Loop;
  (__return_storage_ptr__->fields).m_Length = UStack_40.m_Length;
  (__return_storage_ptr__->fields).m_Speed = UStack_40.m_Speed;
  (__return_storage_ptr__->fields).m_SpeedMultiplier = UStack_40.m_SpeedMultiplier;
  (__return_storage_ptr__->fields).m_Tag = UStack_40.m_Tag;
  (__return_storage_ptr__->fields).m_Name = UStack_40.m_Name;
  (__return_storage_ptr__->fields).m_Path = UStack_40.m_Path;
  (__return_storage_ptr__->fields).m_FullPath = UStack_40.m_FullPath;
  (__return_storage_ptr__->fields).m_NormalizedTime = UStack_40.m_NormalizedTime;
  return __return_storage_ptr__;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAnimatorBuiltin__get_ClassName (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x59ecc50

System_String_o *
CustomLogic_CustomLogicAnimatorBuiltin__get_ClassName
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545d6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Animator");
    Il2CppMethodInitialized_07545d6d = '\x01';
  }
  return "Animator";
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__get_IsAbstract (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x59ecc80

bool CustomLogic_CustomLogicAnimatorBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__get_IsStatic (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x59ecc90

bool CustomLogic_CustomLogicAnimatorBuiltin__get_IsStatic
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x59ecca0

bool CustomLogic_CustomLogicAnimatorBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


