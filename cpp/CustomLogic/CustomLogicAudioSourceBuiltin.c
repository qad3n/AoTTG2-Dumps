// Type: CustomLogic.CustomLogicAudioSourceBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAudioSourceBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicAudioSourceBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAudioSourceBuiltin_o* CustomLogic_CustomLogicAudioSourceBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x59f0d30

CustomLogic_CustomLogicAudioSourceBuiltin_o *
CustomLogic_CustomLogicAudioSourceBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicAudioSourceBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07545da2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin);
    Il2CppMethodInitialized_07545da2 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAudioSourceBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin);
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return __this;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x59f2060

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545db1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_07545db1 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x59f20d0

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__Play>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Play_b__6_0 (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAudioSourceBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f20e0

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Play_b__6_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  if ((__c == (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) ||
     (__this_00 = (__c->fields).Value, __this_00 == (UnityEngine_AudioSource_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__Play_68b06a0(__this_00,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayDelayed>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__PlayDelayed_b__7_0 (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAudioSourceBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f2100

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__PlayDelayed_b__7_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_AudioSource_o *__this_00;
  float delay;
  
  if (Il2CppMethodInitialized_07545db2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545db2 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    delay = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__c != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_AudioSource_o *)0x0)) {
      UnityEngine_AudioSource__PlayDelayed(__this_00,delay,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__Stop>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Stop_b__8_0 (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAudioSourceBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f21a0

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Stop_b__8_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  if ((__c == (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) ||
     (__this_00 = (__c->fields).Value, __this_00 == (UnityEngine_AudioSource_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__Stop_68b0850(__this_00,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__Pause>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Pause_b__9_0 (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAudioSourceBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f21c0

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Pause_b__9_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  if ((__c == (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) ||
     (__this_00 = (__c->fields).Value, __this_00 == (UnityEngine_AudioSource_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__Pause(__this_00,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__Unpause>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Unpause_b__10_0 (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAudioSourceBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59f21e0

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Unpause_b__10_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  if ((__c == (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) ||
     (__this_00 = (__c->fields).Value, __this_00 == (UnityEngine_AudioSource_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__UnPause(__this_00,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x59f0e20

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *pCVar3;
  CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07545da3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Unpause");
    il2cpp_codegen_initialize_runtime_metadata(&"Play");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayDelayed");
    il2cpp_codegen_initialize_runtime_metadata(&"Time");
    il2cpp_codegen_initialize_runtime_metadata(&"Pitch");
    il2cpp_codegen_initialize_runtime_metadata(&"Stop");
    il2cpp_codegen_initialize_runtime_metadata(&"Pause");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPlaying");
    il2cpp_codegen_initialize_runtime_metadata(&"Volume");
    Il2CppMethodInitialized_07545da3 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x7324416d) {
    if (uVar2 < 0x44f9bf2e) {
      if (uVar2 == 0x29ab6f83) {
        bVar1 = System_String__op_Equality(name,"Play",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Play
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Play
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x44f9bf2d) {
        bVar1 = System_String__op_Equality(name,"Pause",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Pause
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Pause
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x4b7f7705) {
      bVar1 = System_String__op_Equality(name,"Stop",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Stop
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Stop
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x7324416c) {
      bVar1 = System_String__op_Equality(name,"Unpause",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Unpause
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Unpause
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x785a8152) {
    if (uVar2 == 0x74f576af) {
      bVar1 = System_String__op_Equality(name,"Volume",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Volume
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Volume
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x785a8151) {
      bVar1 = System_String__op_Equality(name,"Pitch",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Pitch
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Pitch
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 == 0xdfe4e404) {
    bVar1 = System_String__op_Equality(name,"Time",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
        pCVar4 = CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Time
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
      pCVar4 = CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Time
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xe4b35065) {
    bVar1 = System_String__op_Equality(name,"IsPlaying",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
        pCVar4 = CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__IsPlaying
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
      pCVar4 = CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__IsPlaying
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xf0f90de3) {
    bVar1 = System_String__op_Equality(name,"PlayDelayed",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__PlayDelayed
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__PlayDelayed
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAudioSourceBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__Volume
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Volume (const MethodInfo* method);
// 0x59f1280

CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Volume(MethodInfo *method)

{
  System_Func_CustomLogicAudioSourceBuiltin__object__o *__this;
  System_Action_CustomLogicAudioSourceBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545da4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicAudioSourceBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Volume_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Volume_g____setter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object);
    Il2CppMethodInitialized_07545da4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Volume_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicAudioSourceBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Volume_g____setter_2
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__Time
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Time (const MethodInfo* method);
// 0x59f1360

CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Time(MethodInfo *method)

{
  System_Func_CustomLogicAudioSourceBuiltin__object__o *__this;
  System_Action_CustomLogicAudioSourceBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545da5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicAudioSourceBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Time_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Time_g____setter_3_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object);
    Il2CppMethodInitialized_07545da5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Time_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicAudioSourceBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Time_g____setter_3_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__Pitch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Pitch (const MethodInfo* method);
// 0x59f1440

CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Pitch(MethodInfo *method)

{
  System_Func_CustomLogicAudioSourceBuiltin__object__o *__this;
  System_Action_CustomLogicAudioSourceBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545da6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicAudioSourceBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Pitch_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Pitch_g____setter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object);
    Il2CppMethodInitialized_07545da6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Pitch_g____getter_4
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicAudioSourceBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Pitch_g____setter_4
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__IsPlaying
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__IsPlaying (const MethodInfo* method);
// 0x59f1520

CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__IsPlaying(MethodInfo *method)

{
  System_Func_CustomLogicAudioSourceBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545da7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__IsPlaying_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object);
    Il2CppMethodInitialized_07545da7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__IsPlaying_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Play
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Play (const MethodInfo* method);
// 0x59f15c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59f15f5: jmp 0x59f1665

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Play(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAudioSourceBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545da8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Play_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_07545da8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicAudioSourceBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Play_b__6_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__PlayDelayed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__PlayDelayed (const MethodInfo* method);
// 0x59f1700
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59f1735: jmp 0x59f17a5

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__PlayDelayed(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAudioSourceBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545da9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__PlayDelayed_b__7_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_07545da9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicAudioSourceBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__PlayDelayed_b__7_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Stop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Stop (const MethodInfo* method);
// 0x59f1840
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59f1875: jmp 0x59f18e5

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Stop(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAudioSourceBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545daa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Stop_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_07545daa = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicAudioSourceBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Stop_b__8_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Pause
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Pause (const MethodInfo* method);
// 0x59f1980
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59f19b5: jmp 0x59f1a25

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Pause(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAudioSourceBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Pause_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_07545dab = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicAudioSourceBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Pause_b__9_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Unpause
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Unpause (const MethodInfo* method);
// 0x59f1ac0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59f1af5: jmp 0x59f1b65

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Unpause(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicAudioSourceBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545dac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Unpause_b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_07545dac = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicAudioSourceBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Unpause_b__10_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x59f1c00

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545dad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Unpause");
    il2cpp_codegen_initialize_runtime_metadata(&"Play");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayDelayed");
    il2cpp_codegen_initialize_runtime_metadata(&"Time");
    il2cpp_codegen_initialize_runtime_metadata(&"Pitch");
    il2cpp_codegen_initialize_runtime_metadata(&"Stop");
    il2cpp_codegen_initialize_runtime_metadata(&"Pause");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPlaying");
    il2cpp_codegen_initialize_runtime_metadata(&"Volume");
    Il2CppMethodInitialized_07545dad = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Volume",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Time",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Pitch",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPlaying",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Play",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayDelayed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stop",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Pause",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Unpause",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Volume>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Volume_g____getter_2_0 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, const MethodInfo* method);
// 0x59f1de0

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Volume_g____getter_2_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AudioSource_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__get_volume(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Volume>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Volume_g____setter_2_1 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59f1e20

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Volume_g____setter_2_1
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07545dae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545dae = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AudioSource_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__set_volume(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Time_g____getter_3_0 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, const MethodInfo* method);
// 0x59f1ea0

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Time_g____getter_3_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AudioSource_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__get_time(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Time_g____setter_3_1 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59f1ee0

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Time_g____setter_3_1
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07545daf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545daf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AudioSource_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__set_time(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Pitch>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Pitch_g____getter_4_0 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, const MethodInfo* method);
// 0x59f1f60

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Pitch_g____getter_4_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AudioSource_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__get_pitch(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Pitch>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Pitch_g____setter_4_1 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59f1fa0

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Pitch_g____setter_4_1
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07545db0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545db0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AudioSource_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__set_pitch(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__IsPlaying>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__IsPlaying_g____getter_5_0 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, const MethodInfo* method);
// 0x59f2020

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__IsPlaying_g____getter_5_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_AudioSource_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = UnityEngine_AudioSource__get_isPlaying(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin___ctor (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x59f0ab0

void CustomLogic_CustomLogicAudioSourceBuiltin___ctor
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin___ctor (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* owner, UnityEngine_AudioSource_o* audioSource, const MethodInfo* method);
// 0x59f0ac0

void CustomLogic_CustomLogicAudioSourceBuiltin___ctor_58f0ac0
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,CustomLogic_BuiltinClassInstance_o *owner,
               UnityEngine_AudioSource_o *audioSource,MethodInfo *method)

{
  UnityEngine_Component_o *pUVar1;
  UnityEngine_AudioSource_c *pUVar2;
  
  if (Il2CppMethodInitialized_07545da0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AudioSource);
    Il2CppMethodInitialized_07545da0 = '\x01';
  }
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)audioSource,
             (MethodInfo *)0x0);
  (__this->fields).OwnerBuiltin = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerBuiltin);
  pUVar2 = TypeInfo_UnityEngine_AudioSource;
  pUVar1 = (__this->fields).Component;
  if (pUVar1 == (UnityEngine_Component_o *)0x0) {
    (__this->fields).Value = (UnityEngine_AudioSource_o *)0x0;
  }
  else if (((UnityEngine_AudioSource_c *)pUVar1->klass != TypeInfo_UnityEngine_AudioSource) ||
          ((__this->fields).Value = (UnityEngine_AudioSource_o *)pUVar1,
          (UnityEngine_AudioSource_c *)pUVar1->klass != pUVar2)) {
    il2cpp_codegen_raise_invalid_cast_exception(pUVar1,pUVar2);
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_Volume
// il2cpp: float CustomLogic_CustomLogicAudioSourceBuiltin__get_Volume (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x59f0b50

float CustomLogic_CustomLogicAudioSourceBuiltin__get_Volume
                (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AudioSource_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_AudioSource__get_volume(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$set_Volume
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__set_Volume (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, float value, const MethodInfo* method);
// 0x59f0b70

void CustomLogic_CustomLogicAudioSourceBuiltin__set_Volume
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AudioSource_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__set_volume(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_Time
// il2cpp: float CustomLogic_CustomLogicAudioSourceBuiltin__get_Time (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x59f0b90

float CustomLogic_CustomLogicAudioSourceBuiltin__get_Time
                (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AudioSource_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_AudioSource__get_time(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$set_Time
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__set_Time (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, float value, const MethodInfo* method);
// 0x59f0bb0

void CustomLogic_CustomLogicAudioSourceBuiltin__set_Time
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AudioSource_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__set_time(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_Pitch
// il2cpp: float CustomLogic_CustomLogicAudioSourceBuiltin__get_Pitch (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x59f0bd0

float CustomLogic_CustomLogicAudioSourceBuiltin__get_Pitch
                (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AudioSource_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_AudioSource__get_pitch(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$set_Pitch
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__set_Pitch (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, float value, const MethodInfo* method);
// 0x59f0bf0

void CustomLogic_CustomLogicAudioSourceBuiltin__set_Pitch
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AudioSource_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__set_pitch(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_IsPlaying
// il2cpp: bool CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x59f0c10

bool CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AudioSource_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_AudioSource__get_isPlaying(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$Play
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__Play (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x59f0c30

void CustomLogic_CustomLogicAudioSourceBuiltin__Play
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AudioSource_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__Play_68b06a0(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$PlayDelayed
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__PlayDelayed (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, float seconds, const MethodInfo* method);
// 0x59f0c50

void CustomLogic_CustomLogicAudioSourceBuiltin__PlayDelayed
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,float seconds,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AudioSource_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__PlayDelayed(__this_00,seconds,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$Stop
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__Stop (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x59f0c70

void CustomLogic_CustomLogicAudioSourceBuiltin__Stop
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AudioSource_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__Stop_68b0850(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$Pause
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__Pause (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x59f0c90

void CustomLogic_CustomLogicAudioSourceBuiltin__Pause
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AudioSource_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__Pause(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$Unpause
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__Unpause (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x59f0cb0

void CustomLogic_CustomLogicAudioSourceBuiltin__Unpause
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_AudioSource_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioSource__UnPause(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAudioSourceBuiltin__get_ClassName (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x59f0cd0

System_String_o *
CustomLogic_CustomLogicAudioSourceBuiltin__get_ClassName
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545da1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AudioSource");
    Il2CppMethodInitialized_07545da1 = '\x01';
  }
  return "AudioSource";
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAudioSourceBuiltin__get_IsAbstract (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x59f0d00

bool CustomLogic_CustomLogicAudioSourceBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAudioSourceBuiltin__get_IsStatic (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x59f0d10

bool CustomLogic_CustomLogicAudioSourceBuiltin__get_IsStatic
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAudioSourceBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x59f0d20

bool CustomLogic_CustomLogicAudioSourceBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


