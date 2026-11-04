// Type: CustomLogic.CustomLogicAudioSourceBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAudioSourceBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicAudioSourceBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAudioSourceBuiltin_o* CustomLogic_CustomLogicAudioSourceBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f07950

CustomLogic_CustomLogicAudioSourceBuiltin_o *
CustomLogic_CustomLogicAudioSourceBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicAudioSourceBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345333 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin);
    Il2CppMethodInitialized_184345333 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin);
      CustomLogic_BuiltinComponentInstance___ctor
                ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                 (MethodInfo *)0x0);
      return __this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAudioSourceBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181f0cb00

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184345342 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_184345342 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__Play>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Play_b__6_0 (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAudioSourceBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0aef0

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Play_b__6_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__Play_2eb4470(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayDelayed>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__PlayDelayed_b__7_0 (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAudioSourceBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0ae50

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__PlayDelayed_b__7_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_AudioSource_o *__this_00;
  float delay;
  
  if (Il2CppMethodInitialized_184345343 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345343 = '\x01';
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
                      (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
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
// 0x181f0c240

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Stop_b__8_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__Stop_2eb4660(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__Pause>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Pause_b__9_0 (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAudioSourceBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0a730

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Pause_b__9_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__Pause(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__Unpause>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Unpause_b__10_0 (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAudioSourceBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0c270

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Unpause_b__10_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__UnPause(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181eebbd0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Func_CustomLogicAudioSourceBuiltin__object__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this_01;
  CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *__this_02;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_03;
  System_String_o *pSVar4;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_04;
  MethodInfo *pMVar5;
  System_Func_CustomLogicAudioSourceBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_184345334 == '\0') {
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
    Il2CppMethodInitialized_184345334 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (0x7324416c < uVar3) {
    if (uVar3 < 0x785a8152) {
      if (uVar3 == 0x74f576af) {
        bVar2 = System_String__op_Equality(name,"Volume",(MethodInfo *)0x0);
        if (!bVar2) goto label_181eec5cb;
        if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345335 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicAudioSourceBuiltin_object);
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object);
          Il2CppMethodInitialized_184345335 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Volume_g____getter_2
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicAudioSourceBuiltin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Volume_g____setter_2
        ;
      }
      else {
        if (uVar3 != 0x785a8151) {
label_181eec5cb:
          pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAudioSourceBuiltin not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_04,pSVar4,(MethodInfo *)0x0);
          pMVar5 = il2cpp_codegen_get_runtime_metadata
                             (&
                              MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_CreateMemberBinding
                             );
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar5);
        }
        bVar2 = System_String__op_Equality(name,"Pitch",(MethodInfo *)0x0);
        if (!bVar2) goto label_181eec5cb;
        if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345337 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicAudioSourceBuiltin_object);
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object);
          Il2CppMethodInitialized_184345337 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Pitch_g____getter_4
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicAudioSourceBuiltin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Pitch_g____setter_4
        ;
      }
    }
    else {
      if (uVar3 != 0xdfe4e404) {
        if (uVar3 == 0xe4b35065) {
          bVar2 = System_String__op_Equality(name,"IsPlaying",(MethodInfo *)0x0);
          if (!bVar2) goto label_181eec5cb;
          if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345338 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__IsPlaying_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object);
            Il2CppMethodInitialized_184345338 = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__IsPlaying_g____gette
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
          goto label_181eec017;
        }
        if (uVar3 != 0xf0f90de3) goto label_181eec5cb;
        bVar2 = System_String__op_Equality(name,"PlayDelayed",(MethodInfo *)0x0);
        if (!bVar2) goto label_181eec5cb;
        if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434533a == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434533a = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__7_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181eec597;
        if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__PlayDelayed_b__7_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__7_0 =
             (System_Func_CustomLogicAudioSourceBuiltin__object____object__o *)__this_01;
        targetAddress =
             &TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__7_0;
        goto label_181eec58f;
      }
      bVar2 = System_String__op_Equality(name,"Time",(MethodInfo *)0x0);
      if (!bVar2) goto label_181eec5cb;
      if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345336 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicAudioSourceBuiltin_object);
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
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object)
        ;
        Il2CppMethodInitialized_184345336 = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Time_g____getter_3_0
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicAudioSourceBuiltin_object);
      pMVar5 = 
      MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Time_g____setter_3_1
      ;
    }
    System_Action_object__object____ctor
              (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar5,(MethodInfo *)0x0);
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin
                          );
label_181eec017:
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)__this_02,(System_Func_T__object__o *)__this,
               (System_Action_T__object__o *)__this_00,
               (MethodInfo_12B8EE0 *)
               MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin_ctor);
    return (CustomLogic_ICLMemberBinding_o *)__this_02;
  }
  if (uVar3 < 0x44f9bf2e) {
    if (uVar3 == 0x29ab6f83) {
      bVar2 = System_String__op_Equality(name,"Play",(MethodInfo *)0x0);
      if (!bVar2) goto label_181eec5cb;
      if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345339 == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
        Il2CppMethodInitialized_184345339 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__6_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181eec597;
      if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)
               TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Play_b__6_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__6_0 =
           (System_Func_CustomLogicAudioSourceBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__6_0;
    }
    else {
      if (uVar3 != 0x44f9bf2d) goto label_181eec5cb;
      bVar2 = System_String__op_Equality(name,"Pause",(MethodInfo *)0x0);
      if (!bVar2) goto label_181eec5cb;
      if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434533c == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434533c = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__9_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181eec597;
      if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)
               TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Pause_b__9_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__9_0 =
           (System_Func_CustomLogicAudioSourceBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__9_0;
    }
  }
  else if (uVar3 == 0x4b7f7705) {
    bVar2 = System_String__op_Equality(name,"Stop",(MethodInfo *)0x0);
    if (!bVar2) goto label_181eec5cb;
    if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_18434533b == '\0') {
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
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
      Il2CppMethodInitialized_18434533b = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
    }
    __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__8_0;
    if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181eec597;
    if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9
    ;
    __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this_01,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Stop_b__8_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicAudioSourceBuiltin__object____object__o *)__this_01;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__8_0;
  }
  else {
    if (uVar3 != 0x7324416c) goto label_181eec5cb;
    bVar2 = System_String__op_Equality(name,"Unpause",(MethodInfo *)0x0);
    if (!bVar2) goto label_181eec5cb;
    if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_18434533d == '\0') {
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
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
      Il2CppMethodInitialized_18434533d = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
    }
    __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__10_0;
    if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181eec597;
    if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9
    ;
    __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this_01,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Unpause_b__10_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicAudioSourceBuiltin__object____object__o *)__this_01;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__10_0;
  }
label_181eec58f:
  Il2CppCodeGenWriteBarrier(targetAddress,__this_01);
label_181eec597:
  __this_03 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_03,(System_String_o *)__this_01,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_03;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__Volume
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Volume (const MethodInfo* method);
// 0x181efea40

CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Volume(MethodInfo *method)

{
  System_Func_CustomLogicAudioSourceBuiltin__object__o *__this;
  System_Action_CustomLogicAudioSourceBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345335 == '\0') {
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
    Il2CppMethodInitialized_184345335 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Volume_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicAudioSourceBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Volume_g____setter_2
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__Time
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Time (const MethodInfo* method);
// 0x181efe630

CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Time(MethodInfo *method)

{
  System_Func_CustomLogicAudioSourceBuiltin__object__o *__this;
  System_Action_CustomLogicAudioSourceBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345336 == '\0') {
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
    Il2CppMethodInitialized_184345336 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Time_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicAudioSourceBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Time_g____setter_3_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__Pitch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Pitch (const MethodInfo* method);
// 0x181efd050

CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Pitch(MethodInfo *method)

{
  System_Func_CustomLogicAudioSourceBuiltin__object__o *__this;
  System_Action_CustomLogicAudioSourceBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345337 == '\0') {
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
    Il2CppMethodInitialized_184345337 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Pitch_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicAudioSourceBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__Pitch_g____setter_4
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__IsPlaying
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__IsPlaying (const MethodInfo* method);
// 0x181efc4c0

CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__IsPlaying(MethodInfo *method)

{
  System_Func_CustomLogicAudioSourceBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345338 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__IsPlaying_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object);
    Il2CppMethodInitialized_184345338 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___CreatePropertyBinding__IsPlaying_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Play
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Play (const MethodInfo* method);
// 0x181ef79f0

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Play(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345339 == '\0') {
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
    Il2CppMethodInitialized_184345339 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Play_b__6_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicAudioSourceBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__6_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__PlayDelayed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__PlayDelayed (const MethodInfo* method);
// 0x181ef78d0

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__PlayDelayed(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434533a == '\0') {
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
    Il2CppMethodInitialized_18434533a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__PlayDelayed_b__7_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicAudioSourceBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__7_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Stop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Stop (const MethodInfo* method);
// 0x181ef96c0

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Stop(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434533b == '\0') {
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
    Il2CppMethodInitialized_18434533b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Stop_b__8_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicAudioSourceBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__8_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Pause
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Pause (const MethodInfo* method);
// 0x181ef7210

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Pause(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434533c == '\0') {
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
    Il2CppMethodInitialized_18434533c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Pause_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicAudioSourceBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__9_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Unpause
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Unpause (const MethodInfo* method);
// 0x181ef97e0

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Unpause(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434533d == '\0') {
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
    Il2CppMethodInitialized_18434533d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__10_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9
    ;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAudioSourceBuiltin_object_array_object)
    ;
    ExitGames_Client_Photon_SerializeStreamMethod___ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c___CreateMethodBinding__Unpause_b__10_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicAudioSourceBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_c->static_fields->__9__10_0,__this
              );
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181f00f80

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434533e == '\0') {
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
    Il2CppMethodInitialized_18434533e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Volume",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Time",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Pitch",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPlaying",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Play",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayDelayed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stop",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Pause",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Unpause",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAudioSourceBuiltin_Bindings->static_fields->MemberNames,__this
              );
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Volume>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Volume_g____getter_2_0 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, const MethodInfo* method);
// 0x181ef3bb0

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Volume_g____getter_2_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AudioSource_o *)0x0)) {
    local_res8[0] = UnityEngine_AudioSource__get_volume(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Volume>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Volume_g____setter_2_1 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef3bf0

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Volume_g____setter_2_1
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_18434533f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434533f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__set_volume(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Time_g____getter_3_0 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, const MethodInfo* method);
// 0x181ef38a0

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Time_g____getter_3_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AudioSource_o *)0x0)) {
    local_res8[0] = UnityEngine_AudioSource__get_time(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Time_g____setter_3_1 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef38e0

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Time_g____setter_3_1
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_184345340 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345340 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__set_time(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Pitch>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Pitch_g____getter_4_0 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2750

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Pitch_g____getter_4_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AudioSource_o *)0x0)) {
    local_res8[0] = UnityEngine_AudioSource__get_pitch(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Pitch>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Pitch_g____setter_4_1 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef2790

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Pitch_g____setter_4_1
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_184345341 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345341 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__set_pitch(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__IsPlaying>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__IsPlaying_g____getter_5_0 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2060

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__IsPlaying_g____getter_5_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AudioSource_o *)0x0)) {
    local_res8[0] = UnityEngine_AudioSource__get_isPlaying(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin___ctor (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x181f01510

void
CustomLogic_CustomLogicAudioSourceBuiltin___ctor(CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, MethodInfo* method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin___ctor (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* owner, UnityEngine_AudioSource_o* audioSource, const MethodInfo* method);
// 0x181f01ea0

void CustomLogic_CustomLogicAudioSourceBuiltin___ctor_1f01ea0
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,CustomLogic_BuiltinClassInstance_o *owner,
               UnityEngine_AudioSource_o *audioSource,MethodInfo *method)

{
  UnityEngine_Component_o *pUVar1;
  UnityEngine_Component_o *pUVar2;
  UnityEngine_Component_o *value;
  
  if (Il2CppMethodInitialized_184345331 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AudioSource);
    Il2CppMethodInitialized_184345331 = '\x01';
  }
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)audioSource,
             (MethodInfo *)0x0);
  (__this->fields).OwnerBuiltin = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerBuiltin,owner);
  pUVar1 = (__this->fields).Component;
  value = (UnityEngine_Component_o *)0x0;
  if (pUVar1 == (UnityEngine_Component_o *)0x0) {
    (__this->fields).Value = (UnityEngine_AudioSource_o *)0x0;
  }
  else {
    pUVar2 = value;
    if ((UnityEngine_AudioSource_c *)pUVar1->klass == TypeInfo_UnityEngine_AudioSource) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityEngine_Component_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar1,TypeInfo_UnityEngine_AudioSource);
    }
    (__this->fields).Value = (UnityEngine_AudioSource_o *)pUVar2;
    if ((UnityEngine_AudioSource_c *)pUVar1->klass == TypeInfo_UnityEngine_AudioSource) {
      value = pUVar1;
    }
    if (value == (UnityEngine_Component_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar1,TypeInfo_UnityEngine_AudioSource);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,value);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_Volume
// il2cpp: float CustomLogic_CustomLogicAudioSourceBuiltin__get_Volume (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x181f01ff0

float CustomLogic_CustomLogicAudioSourceBuiltin__get_Volume
                (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    fVar1 = UnityEngine_AudioSource__get_volume(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$set_Volume
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__set_Volume (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f02050

void CustomLogic_CustomLogicAudioSourceBuiltin__set_Volume
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_volume(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_Time
// il2cpp: float CustomLogic_CustomLogicAudioSourceBuiltin__get_Time (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x181f01fd0

float CustomLogic_CustomLogicAudioSourceBuiltin__get_Time
                (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    fVar1 = UnityEngine_AudioSource__get_time(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$set_Time
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__set_Time (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f02030

void CustomLogic_CustomLogicAudioSourceBuiltin__set_Time
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_time(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_Pitch
// il2cpp: float CustomLogic_CustomLogicAudioSourceBuiltin__get_Pitch (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x181f01fb0

float CustomLogic_CustomLogicAudioSourceBuiltin__get_Pitch
                (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    fVar1 = UnityEngine_AudioSource__get_pitch(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$set_Pitch
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__set_Pitch (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f02010

void CustomLogic_CustomLogicAudioSourceBuiltin__set_Pitch
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_pitch(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_IsPlaying
// il2cpp: bool CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x181f01f90

bool CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    bVar1 = UnityEngine_AudioSource__get_isPlaying(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$Play
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__Play (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x181f01e40

void CustomLogic_CustomLogicAudioSourceBuiltin__Play
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Play_2eb4470(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$PlayDelayed
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__PlayDelayed (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, float seconds, const MethodInfo* method);
// 0x181f01e20

void CustomLogic_CustomLogicAudioSourceBuiltin__PlayDelayed
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,float seconds,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__PlayDelayed(__this_00,seconds,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$Stop
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__Stop (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x181f01e60

void CustomLogic_CustomLogicAudioSourceBuiltin__Stop
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Stop_2eb4660(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$Pause
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__Pause (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x181f01e00

void CustomLogic_CustomLogicAudioSourceBuiltin__Pause
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Pause(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$Unpause
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__Unpause (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x181f01e80

void CustomLogic_CustomLogicAudioSourceBuiltin__Unpause
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__UnPause(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAudioSourceBuiltin__get_ClassName (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x181f01f60

System_String_o *
CustomLogic_CustomLogicAudioSourceBuiltin__get_ClassName
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345332 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AudioSource");
    Il2CppMethodInitialized_184345332 = '\x01';
  }
  return "AudioSource";
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAudioSourceBuiltin__get_IsAbstract (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicAudioSourceBuiltin__get_IsAbstract(CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAudioSourceBuiltin__get_IsStatic (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicAudioSourceBuiltin__get_IsStatic(CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAudioSourceBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicAudioSourceBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


