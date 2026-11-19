// Type: CustomLogic.CustomLogicAnimationBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAnimationBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicAnimationBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAnimationBuiltin_o* CustomLogic_CustomLogicAnimationBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x59ea130

CustomLogic_CustomLogicAnimationBuiltin_o *
CustomLogic_CustomLogicAnimationBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicAnimationBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07545d4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin);
    Il2CppMethodInitialized_07545d4f = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAnimationBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin);
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x59eb8f0

void CustomLogic_CustomLogicAnimationBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545d5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d5e = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x59eb960

void CustomLogic_CustomLogicAnimationBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlaying>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__IsPlaying_b__2_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59eb970

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__IsPlaying_b__2_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  bool bVar1;
  undefined8 in_RAX;
  System_String_o *name;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07545d5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d5f = '\x01';
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
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      bVar1 = UnityEngine_Animation__IsPlaying(__this_00,name,(MethodInfo *)0x0);
      uStack_18 = CONCAT17(bVar1,(undefined7)uStack_18);
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimation>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__3_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59eba20

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__3_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_Animation_o *pUVar2;
  int32_t value;
  System_String_o *animation;
  UnityEngine_AnimationState_o *__this_00;
  float fadeLength;
  
  if (Il2CppMethodInitialized_07545d60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d60 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    animation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_34BDE00 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    value = 0;
    if ((int)__a->max_length < 2) {
      fadeLength = 0.1;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fadeLength = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                             (pIVar1,(MethodInfo_34BDFE0 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (2 < (int)__a->max_length) {
        pIVar1 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                          (pIVar1,(MethodInfo_34BDC20 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      }
    }
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (pUVar2 = (__c->fields).Value, pUVar2 != (UnityEngine_Animation_o *)0x0)) {
      UnityEngine_Animation__CrossFade(pUVar2,animation,fadeLength,(MethodInfo *)0x0);
      pUVar2 = (__c->fields).Value;
      if (pUVar2 != (UnityEngine_Animation_o *)0x0) {
        __this_00 = UnityEngine_Animation__get_Item(pUVar2,animation,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_AnimationState_o *)0x0) {
          UnityEngine_AnimationState__set_layer(__this_00,value,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimationAt>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationAt_b__4_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ebb90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ebc8b: movss xmm0, dword ptr [rsp]
// asm:   0x59ebc90: jmp 0x59ebcd3

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationAt_b__4_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int32_t layer;
  System_String_o *anim;
  float normalizedTime;
  float fade;
  
  if (Il2CppMethodInitialized_07545d61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d61 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059ebcf6:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    anim = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar1,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      normalizedTime =
           CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     (__a->m_Items[1],
                      (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      layer = 0;
      if ((int)__a->max_length < 3) {
        fade = 0.1;
      }
      else {
        pIVar1 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        fade = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
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
      if (__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
        CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationAt(__c,anim,normalizedTime,fade,layer,method);
        return (Il2CppObject *)0x0;
      }
      goto label_059ebcf6;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimationQueued>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationQueued_b__5_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ebd00

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationQueued_b__5_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animation_o *__this_00;
  System_String_o *animation;
  
  if (Il2CppMethodInitialized_07545d62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d62 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    animation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      UnityEngine_Animation__PlayQueued(__this_00,animation,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__StopAnimation>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__StopAnimation_b__6_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ebda0

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__StopAnimation_b__6_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  UnityEngine_Animation_o *__this_00;
  
  if (Il2CppMethodInitialized_07545d63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d63 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_059ebe50;
  if (__a->max_length == 0) {
    if (__c == (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) goto label_059ebe50;
    __this_00 = (__c->fields).Value;
  }
  else {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c == (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) goto label_059ebe50;
    __this_00 = (__c->fields).Value;
    if (name != (System_String_o *)0x0) {
      if (__this_00 != (UnityEngine_Animation_o *)0x0) {
        UnityEngine_Animation__Stop_68a7110(__this_00,name,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_059ebe50;
    }
  }
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__Stop(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
label_059ebe50:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetAnimationSpeed>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetAnimationSpeed_b__7_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ebe60

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetAnimationSpeed_b__7_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  float value;
  
  if (Il2CppMethodInitialized_07545d64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d64 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059ebf42:
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
      if (__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
        __this_00 = (__c->fields).Value;
        if (__this_00 != (UnityEngine_Animation_o *)0x0) {
          __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
            UnityEngine_AnimationState__set_speed(__this_01,value,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
        }
      }
      goto label_059ebf42;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationSpeed>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationSpeed_b__8_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ebf50

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationSpeed_b__8_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_07545d65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d65 = '\x01';
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
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_speed(__this_01,(MethodInfo *)0x0);
        pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
        return pIVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationLength>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__9_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ec010

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__9_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_07545d66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d66 = '\x01';
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
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_length(__this_01,(MethodInfo *)0x0);
        pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
        return pIVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationNormalizedTime>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationNormalizedTime_b__10_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ec0d0

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationNormalizedTime_b__10_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_07545d67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d67 = '\x01';
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
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_normalizedTime(__this_01,(MethodInfo *)0x0);
        pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
        return pIVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetAnimationNormalizedTime>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetAnimationNormalizedTime_b__11_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ec190

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetAnimationNormalizedTime_b__11_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  float value;
  
  if (Il2CppMethodInitialized_07545d68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d68 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059ec272:
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
      if (__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
        __this_00 = (__c->fields).Value;
        if (__this_00 != (UnityEngine_Animation_o *)0x0) {
          __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
            UnityEngine_AnimationState__set_normalizedTime(__this_01,value,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
        }
      }
      goto label_059ec272;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetWeight>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetWeight_b__12_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ec280

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetWeight_b__12_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  float value;
  
  if (Il2CppMethodInitialized_07545d69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d69 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059ec362:
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
      if (__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
        __this_00 = (__c->fields).Value;
        if (__this_00 != (UnityEngine_Animation_o *)0x0) {
          __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
            UnityEngine_AnimationState__set_weight(__this_01,value,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
        }
      }
      goto label_059ec362;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetWeight>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetWeight_b__13_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ec370

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetWeight_b__13_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_07545d6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d6a = '\x01';
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
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_weight(__this_01,(MethodInfo *)0x0);
        pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
        return pIVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAnimationBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x59ea220

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicAnimationBuiltin_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07545d50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationAt");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"StopAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"SetAnimationSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationLength");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationNormalizedTime");
    il2cpp_codegen_initialize_runtime_metadata(&"SetAnimationNormalizedTime");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationQueued");
    il2cpp_codegen_initialize_runtime_metadata(&"SetWeight");
    il2cpp_codegen_initialize_runtime_metadata(&"GetWeight");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPlaying");
    Il2CppMethodInitialized_07545d50 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x55aebb4f) {
    if (uVar2 < 0x1c21234c) {
      if (uVar2 == 0x812156f) {
        bVar1 = System_String__op_Equality(name,"SetAnimationNormalizedTime",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationNormalizedTime
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationNormalizedTime
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x1ae30f5a) {
        bVar1 = System_String__op_Equality(name,"GetAnimationSpeed",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationSpeed
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationSpeed
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x1c21234b) {
        bVar1 = System_String__op_Equality(name,"GetAnimationNormalizedTime",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x492a3ccf) {
      bVar1 = System_String__op_Equality(name,"GetAnimationLength",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationLength
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationLength
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x4f3aab3d) {
      bVar1 = System_String__op_Equality(name,"StopAnimation",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__StopAnimation
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__StopAnimation
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x55aebb4e) {
      bVar1 = System_String__op_Equality(name,"PlayAnimationAt",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xe1cff600) {
    if (uVar2 == 0xcb515bd3) {
      bVar1 = System_String__op_Equality(name,"GetWeight",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetWeight
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetWeight
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xd64c477b) {
      bVar1 = System_String__op_Equality(name,"PlayAnimation",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimation
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimation
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe1cff5ff) {
      bVar1 = System_String__op_Equality(name,"SetWeight",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetWeight
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetWeight
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xf6be6fea) {
    bVar1 = System_String__op_Equality(name,"PlayAnimationQueued",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationQueued
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationQueued
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xe5b11b66) {
    bVar1 = System_String__op_Equality(name,"SetAnimationSpeed",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationSpeed
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationSpeed
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xe4b35065) {
    bVar1 = System_String__op_Equality(name,"IsPlaying",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__IsPlaying
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__IsPlaying
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAnimationBuiltin not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__IsPlaying
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__IsPlaying (const MethodInfo* method);
// 0x59ea7b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ea7e5: jmp 0x59ea855

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__IsPlaying(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimationBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__IsPlaying_b__2_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d51 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__2_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__2_0;
  }
  if (__this == (System_Func_CustomLogicAnimationBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__IsPlaying_b__2_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    pCVar2->__9__2_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__2_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__PlayAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimation (const MethodInfo* method);
// 0x59ea8f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ea925: jmp 0x59ea995

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimation(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimationBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d52 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__3_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__3_0;
  }
  if (__this == (System_Func_CustomLogicAnimationBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__3_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    pCVar2->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__3_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__PlayAnimationAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt (const MethodInfo* method);
// 0x59eaa30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59eaa65: jmp 0x59eaad5

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimationBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d53 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__4_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__4_0;
  }
  if (__this == (System_Func_CustomLogicAnimationBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__4_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    pCVar2->__9__4_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__4_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__PlayAnimationQueued
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationQueued (const MethodInfo* method);
// 0x59eab70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59eaba5: jmp 0x59eac15

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationQueued
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimationBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationQueued_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d54 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicAnimationBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationQueued_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__StopAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__StopAnimation (const MethodInfo* method);
// 0x59eacb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59eace5: jmp 0x59ead55

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__StopAnimation(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimationBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__StopAnimation_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d55 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicAnimationBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__StopAnimation_b__6_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__SetAnimationSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationSpeed (const MethodInfo* method);
// 0x59eadf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59eae25: jmp 0x59eae95

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationSpeed(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimationBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetAnimationSpeed_b__7
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d56 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicAnimationBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetAnimationSpeed_b__7
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetAnimationSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationSpeed (const MethodInfo* method);
// 0x59eaf30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59eaf65: jmp 0x59eafd5

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationSpeed(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimationBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationSpeed_b__8
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d57 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicAnimationBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationSpeed_b__8
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetAnimationLength
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationLength (const MethodInfo* method);
// 0x59eb070
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59eb0a5: jmp 0x59eb115

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationLength
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimationBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d58 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicAnimationBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetAnimationNormalizedTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime (const MethodInfo* method);
// 0x59eb1b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59eb1e5: jmp 0x59eb255

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimationBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalized
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d59 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicAnimationBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalized
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__SetAnimationNormalizedTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationNormalizedTime (const MethodInfo* method);
// 0x59eb2f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59eb325: jmp 0x59eb395

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationNormalizedTime
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimationBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetAnimationNormalized
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d5a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicAnimationBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetAnimationNormalized
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__SetWeight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetWeight (const MethodInfo* method);
// 0x59eb430
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59eb465: jmp 0x59eb4d5

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetWeight(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimationBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetWeight_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d5b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__12_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__12_0;
  }
  if (__this == (System_Func_CustomLogicAnimationBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetWeight_b__12_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    pCVar2->__9__12_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__12_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetWeight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetWeight (const MethodInfo* method);
// 0x59eb570
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59eb5a5: jmp 0x59eb615

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetWeight(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAnimationBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetWeight_b__13_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545d5c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__13_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__13_0;
  }
  if (__this == (System_Func_CustomLogicAnimationBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetWeight_b__13_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields;
    pCVar2->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__13_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x59eb6b0

void CustomLogic_CustomLogicAnimationBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545d5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationAt");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"StopAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"SetAnimationSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationLength");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationNormalizedTime");
    il2cpp_codegen_initialize_runtime_metadata(&"SetAnimationNormalizedTime");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationQueued");
    il2cpp_codegen_initialize_runtime_metadata(&"SetWeight");
    il2cpp_codegen_initialize_runtime_metadata(&"GetWeight");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPlaying");
    Il2CppMethodInitialized_07545d5d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPlaying",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayAnimation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayAnimationAt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayAnimationQueued",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StopAnimation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetAnimationSpeed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAnimationSpeed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAnimationLength",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAnimationNormalizedTime",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetAnimationNormalizedTime",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetWeight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetWeight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin___ctor (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x59e9d60

void CustomLogic_CustomLogicAnimationBuiltin___ctor
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin___ctor (CustomLogic_CustomLogicAnimationBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* owner, UnityEngine_Animation_o* animation, const MethodInfo* method);
// 0x59e9d70

void CustomLogic_CustomLogicAnimationBuiltin___ctor_58e9d70
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,CustomLogic_BuiltinClassInstance_o *owner,
               UnityEngine_Animation_o *animation,MethodInfo *method)

{
  UnityEngine_Animation_o *pUVar1;
  UnityEngine_Animation_c *pUVar2;
  
  if (Il2CppMethodInitialized_07545d4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Animation);
    Il2CppMethodInitialized_07545d4d = '\x01';
  }
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)animation,
             (MethodInfo *)0x0);
  (__this->fields).OwnerBuiltin = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerBuiltin);
  pUVar2 = TypeInfo_UnityEngine_Animation;
  pUVar1 = (UnityEngine_Animation_o *)(__this->fields).Component;
  if (pUVar1 == (UnityEngine_Animation_o *)0x0) {
    (__this->fields).Value = (UnityEngine_Animation_o *)0x0;
  }
  else if ((pUVar1->klass != TypeInfo_UnityEngine_Animation) ||
          ((__this->fields).Value = pUVar1, pUVar1->klass != pUVar2)) {
    il2cpp_codegen_raise_invalid_cast_exception(pUVar1,pUVar2);
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$IsPlaying
// il2cpp: bool CustomLogic_CustomLogicAnimationBuiltin__IsPlaying (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x59e9e00

bool CustomLogic_CustomLogicAnimationBuiltin__IsPlaying
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animation_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Animation__IsPlaying(__this_00,anim,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicAnimationBuiltin$$PlayAnimation
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimation (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, float fade, int32_t layer, const MethodInfo* method);
// 0x59e9e20

void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimation
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,float fade,
               int32_t layer,MethodInfo *method)

{
  UnityEngine_Animation_o *pUVar1;
  UnityEngine_AnimationState_o *__this_00;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__CrossFade(pUVar1,anim,fade,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).Value;
    if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
      __this_00 = UnityEngine_Animation__get_Item(pUVar1,anim,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__set_layer(__this_00,layer,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$PlayAnimationAt
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationAt (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, float normalizedTime, float fade, int32_t layer, const MethodInfo* method);
// 0x59e9e70

void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationAt
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,float normalizedTime,
               float fade,int32_t layer,MethodInfo *method)

{
  UnityEngine_Animation_o *pUVar1;
  UnityEngine_AnimationState_o *pUVar2;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__CrossFade(pUVar1,anim,fade,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).Value;
    if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
      pUVar2 = UnityEngine_Animation__get_Item(pUVar1,anim,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__set_layer(pUVar2,layer,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).Value;
        if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
          pUVar2 = UnityEngine_Animation__get_Item(pUVar1,anim,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
            UnityEngine_AnimationState__set_normalizedTime(pUVar2,normalizedTime,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$PlayAnimationQueued
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationQueued (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x59e9f00

void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationQueued
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animation_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Animation__PlayQueued(__this_00,anim,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$StopAnimation
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__StopAnimation (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x59e9f20

void CustomLogic_CustomLogicAnimationBuiltin__StopAnimation
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (anim == (System_String_o *)0x0) {
    if (__this_00 != (UnityEngine_Animation_o *)0x0) {
      UnityEngine_Animation__Stop(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  else if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__Stop_68a7110(__this_00,anim,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$SetAnimationSpeed
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__SetAnimationSpeed (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* name, float speed, const MethodInfo* method);
// 0x59e9f50

void CustomLogic_CustomLogicAnimationBuiltin__SetAnimationSpeed
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *name,float speed,
               MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_AnimationState_o *__this_01;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_speed(__this_01,speed,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$GetAnimationSpeed
// il2cpp: float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationSpeed (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x59e9f90

float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationSpeed
                (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_AnimationState_o *__this_01;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
      fVar1 = UnityEngine_AnimationState__get_speed(__this_01,(MethodInfo *)0x0);
      return fVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$GetAnimationLength
// il2cpp: float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationLength (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x59e9fc0

float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationLength
                (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_AnimationState_o *__this_01;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    __this_01 = UnityEngine_Animation__get_Item(__this_00,anim,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
      fVar1 = UnityEngine_AnimationState__get_length(__this_01,(MethodInfo *)0x0);
      return fVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$GetAnimationNormalizedTime
// il2cpp: float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationNormalizedTime (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x59e9ff0

float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationNormalizedTime
                (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_AnimationState_o *__this_01;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    __this_01 = UnityEngine_Animation__get_Item(__this_00,anim,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
      fVar1 = UnityEngine_AnimationState__get_normalizedTime(__this_01,(MethodInfo *)0x0);
      return fVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$SetAnimationNormalizedTime
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__SetAnimationNormalizedTime (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, float normalizedTime, const MethodInfo* method);
// 0x59ea020

void CustomLogic_CustomLogicAnimationBuiltin__SetAnimationNormalizedTime
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,float normalizedTime,
               MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_AnimationState_o *__this_01;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    __this_01 = UnityEngine_Animation__get_Item(__this_00,anim,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_normalizedTime(__this_01,normalizedTime,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$SetWeight
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__SetWeight (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, float weight, const MethodInfo* method);
// 0x59ea060

void CustomLogic_CustomLogicAnimationBuiltin__SetWeight
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,float weight,
               MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_AnimationState_o *__this_01;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    __this_01 = UnityEngine_Animation__get_Item(__this_00,anim,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_weight(__this_01,weight,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$GetWeight
// il2cpp: float CustomLogic_CustomLogicAnimationBuiltin__GetWeight (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x59ea0a0

float CustomLogic_CustomLogicAnimationBuiltin__GetWeight
                (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_AnimationState_o *__this_01;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    __this_01 = UnityEngine_Animation__get_Item(__this_00,anim,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
      fVar1 = UnityEngine_AnimationState__get_weight(__this_01,(MethodInfo *)0x0);
      return fVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAnimationBuiltin__get_ClassName (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x59ea0d0

System_String_o *
CustomLogic_CustomLogicAnimationBuiltin__get_ClassName
          (CustomLogic_CustomLogicAnimationBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545d4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Animation");
    Il2CppMethodInitialized_07545d4e = '\x01';
  }
  return "Animation";
}


// CustomLogic.CustomLogicAnimationBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAnimationBuiltin__get_IsAbstract (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x59ea100

bool CustomLogic_CustomLogicAnimationBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicAnimationBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAnimationBuiltin__get_IsStatic (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x59ea110

bool CustomLogic_CustomLogicAnimationBuiltin__get_IsStatic
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicAnimationBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAnimationBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x59ea120

bool CustomLogic_CustomLogicAnimationBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


