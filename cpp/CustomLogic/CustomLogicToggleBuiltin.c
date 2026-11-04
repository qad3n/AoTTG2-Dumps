// Type: CustomLogic.CustomLogicToggleBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicToggleBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicToggleBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicToggleBuiltin_o* CustomLogic_CustomLogicToggleBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182074620

CustomLogic_CustomLogicToggleBuiltin_o *
CustomLogic_CustomLogicToggleBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicToggleBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x18207b660

void CustomLogic_CustomLogicToggleBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184346638 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346638 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicToggleBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__5_0 (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicToggleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182077ef0

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__5_0
          (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicToggleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *value;
  
  if (Il2CppMethodInitialized_184346639 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346639 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_66EB70 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) {
      (__c->fields)._valueChangedEvent = value;
      Il2CppCodeGenWriteBarrier(&(__c->fields)._valueChangedEvent,value);
      return (Il2CppObject *)__c;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__6_0 (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicToggleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182079f80

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__6_0
          (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicToggleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_Toggle_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434663a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434663a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                      (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if ((__c != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) &&
       (pUVar1 = (__c->fields)._toggle, pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0)) {
      (*(pUVar1->klass->vtable)._159_SetValueWithoutNotify.methodPtr)
                (pUVar1,bVar2,(pUVar1->klass->vtable)._159_SetValueWithoutNotify.method);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicToggleBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x182048f10

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicToggleBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Func_CustomLogicToggleBuiltin__object__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *__this_01;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this_02;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_03;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_04;
  MethodInfo *pMVar4;
  System_Func_CustomLogicToggleBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_18434662e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"OnValueChanged");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"SetValueWithoutNotify");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    Il2CppMethodInitialized_18434662e = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Label",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings)
      ;
    }
    if (Il2CppMethodInitialized_18434662f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicToggleBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_2_1
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicToggleBuiltin_object);
      Il2CppMethodInitialized_18434662f = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicToggleBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_2_0
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicToggleBuiltin_object);
    pMVar4 = 
    MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_2_1;
label_182049038:
    System_Action_object__object____ctor
              (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
               (System_Action_T__object__o *)__this_00,
               (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin_ctor);
    return (CustomLogic_ICLMemberBinding_o *)__this_01;
  }
  bVar2 = System_String__op_Equality(name,"Text",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings)
      ;
    }
    if (Il2CppMethodInitialized_184346630 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicToggleBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_3_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_3_1
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicToggleBuiltin_object);
      Il2CppMethodInitialized_184346630 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicToggleBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_3_0
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicToggleBuiltin_object);
    pMVar4 = 
    MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_3_1;
    goto label_182049038;
  }
  bVar2 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings)
      ;
    }
    if (Il2CppMethodInitialized_184346631 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicToggleBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_4_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_4_1
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicToggleBuiltin_object);
      Il2CppMethodInitialized_184346631 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicToggleBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_4_0
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicToggleBuiltin_object);
    pMVar4 = 
    MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_4_1;
    goto label_182049038;
  }
  bVar2 = System_String__op_Equality(name,"OnValueChanged",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings)
      ;
    }
    if (Il2CppMethodInitialized_184346632 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicToggleBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__5_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c);
      Il2CppMethodInitialized_184346632 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c);
    }
    __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9__5_0;
    if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18204942e;
    if ((TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9;
    __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Func_CustomLogicToggleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this_02,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__5_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicToggleBuiltin__object____object__o *)__this_02;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9__5_0;
  }
  else {
    bVar2 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicToggleBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_04,pSVar3,(MethodInfo *)0x0);
      pMVar4 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar4);
    }
    if ((TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings)
      ;
    }
    if (Il2CppMethodInitialized_184346633 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicToggleBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify_b
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c);
      Il2CppMethodInitialized_184346633 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c);
    }
    __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9__6_0;
    if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18204942e;
    if ((TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9;
    __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Func_CustomLogicToggleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this_02,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicToggleBuiltin__object____object__o *)__this_02;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9__6_0;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this_02);
label_18204942e:
  __this_03 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_03,(System_String_o *)__this_02,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_03;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreatePropertyBinding__Label
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Label (const MethodInfo* method);
// 0x182062a50

CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Label(MethodInfo *method)

{
  System_Func_CustomLogicToggleBuiltin__object__o *__this;
  System_Action_CustomLogicToggleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434662f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicToggleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicToggleBuiltin_object);
    Il2CppMethodInitialized_18434662f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicToggleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicToggleBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_2_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreatePropertyBinding__Text
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Text (const MethodInfo* method);
// 0x182063680

CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Text(MethodInfo *method)

{
  System_Func_CustomLogicToggleBuiltin__object__o *__this;
  System_Action_CustomLogicToggleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184346630 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicToggleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_3_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicToggleBuiltin_object);
    Il2CppMethodInitialized_184346630 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicToggleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicToggleBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_3_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x182063c70

CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Value(MethodInfo *method)

{
  System_Func_CustomLogicToggleBuiltin__object__o *__this;
  System_Action_CustomLogicToggleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184346631 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicToggleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_4_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicToggleBuiltin_object);
    Il2CppMethodInitialized_184346631 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicToggleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicToggleBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_4_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreateMethodBinding__OnValueChanged (const MethodInfo* method);
// 0x18205b880

CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreateMethodBinding__OnValueChanged(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346632 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicToggleBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346632 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9__5_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicToggleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__5_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicToggleBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9__5_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x18205f450

CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346633 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicToggleBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346633 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicToggleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicToggleBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9__6_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x182064d10

void CustomLogic_CustomLogicToggleBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346634 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"OnValueChanged");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"SetValueWithoutNotify");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    Il2CppMethodInitialized_184346634 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Label",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Text",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Value",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OnValueChanged",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetValueWithoutNotify",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0 (CustomLogic_CustomLogicToggleBuiltin_o* __i, const MethodInfo* method);
// 0x182055190

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0
          (CustomLogic_CustomLogicToggleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434662a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_bool_get_label);
      Il2CppMethodInitialized_18434662a = '\x01';
    }
    __this = (__i->fields)._toggle;
    if (__this != (UnityEngine_UIElements_Toggle_o *)0x0) {
      pSVar1 = UnityEngine_UIElements_BaseField_Vector2Int___get_label
                         ((UnityEngine_UIElements_BaseField_TValueType__o *)__this,
                          (MethodInfo_100AEC0 *)MethodInfo_UnityEngine_UIElements_BaseField_bool_get_label);
      return (Il2CppObject *)pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1 (CustomLogic_CustomLogicToggleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x1820552e0

void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1
               (CustomLogic_CustomLogicToggleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184346635 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346635 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434662b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_bool_set_label);
      Il2CppMethodInitialized_18434662b = '\x01';
    }
    __this = (__i->fields)._toggle;
    if (__this != (UnityEngine_UIElements_Toggle_o *)0x0) {
      UnityEngine_UIElements_BaseField_Vector2Int___set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)__this,value,
                 (MethodInfo_100C7D0 *)MethodInfo_UnityEngine_UIElements_BaseField_bool_set_label);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_3_0 (CustomLogic_CustomLogicToggleBuiltin_o* __i, const MethodInfo* method);
// 0x182056210

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_3_0
          (CustomLogic_CustomLogicToggleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_BaseBoolField_o *__this;
  System_String_o *pSVar1;
  
  if ((__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_BaseBoolField_o *)(__i->fields)._toggle,
     __this != (UnityEngine_UIElements_BaseBoolField_o *)0x0)) {
    pSVar1 = UnityEngine_UIElements_BaseBoolField__get_text(__this,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_3_1 (CustomLogic_CustomLogicToggleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182056360

void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_3_1
               (CustomLogic_CustomLogicToggleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_BaseBoolField_o *__this;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184346636 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346636 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_BaseBoolField_o *)(__i->fields)._toggle,
     __this != (UnityEngine_UIElements_BaseBoolField_o *)0x0)) {
    UnityEngine_UIElements_BaseBoolField__set_text(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_4_0 (CustomLogic_CustomLogicToggleBuiltin_o* __i, const MethodInfo* method);
// 0x1820566c0

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_4_0
          (CustomLogic_CustomLogicToggleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._toggle, pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0)) {
    local_res8[0] =
         (*(pUVar1->klass->vtable)._148_get_value.methodPtr)
                   (pUVar1,(pUVar1->klass->vtable)._148_get_value.method);
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_4_1 (CustomLogic_CustomLogicToggleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x1820568b0

void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_4_1
               (CustomLogic_CustomLogicToggleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346637 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346637 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._toggle, pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0)) {
    (*(pUVar1->klass->vtable)._149_set_value.methodPtr)
              (pUVar1,(ulonglong)bVar2,(pUVar1->klass->vtable)._149_set_value.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin___ctor (CustomLogic_CustomLogicToggleBuiltin_o* __this, UnityEngine_UIElements_Toggle_o* toggle, const MethodInfo* method);
// 0x18206a2a0

void CustomLogic_CustomLogicToggleBuiltin___ctor
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,UnityEngine_UIElements_Toggle_o *toggle,
               MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *control;
  DG_Tweening_Core_DOSetter_T__o *__this_00;
  
  if (Il2CppMethodInitialized_184346628 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicToggleBuiltin_ctor_b__2_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_bool
              );
    Il2CppMethodInitialized_184346628 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)toggle,(MethodInfo *)0x0);
  (__this->fields)._toggle = toggle;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._toggle,toggle);
  control = (__this->fields)._toggle;
  __this_00 = (DG_Tweening_Core_DOSetter_T__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_bool);
  UnityEngine_UIElements_EventCallback_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_CustomLogic_CustomLogicToggleBuiltin_ctor_b__2_0,(MethodInfo_EB6EC0 *)0x0);
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_Vector3Int_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,
             (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_00,
             (MethodInfo_7118E0 *)
             MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_bool
            );
  return;
}


// CustomLogic.CustomLogicToggleBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__OnValueChanged (CustomLogic_CustomLogicToggleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x18206a010

void CustomLogic_CustomLogicToggleBuiltin__OnValueChanged
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,bool value,MethodInfo *method)

{
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [8];
  
  if (Il2CppMethodInitialized_184346629 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_184346629 = '\x01';
  }
  if ((__this->fields)._valueChangedEvent == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  userMethod = (__this->fields)._valueChangedEvent;
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  local_res8[0] = value;
  pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
  if (parameterValues != (System_Object_array *)0x0) {
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameterValues->obj).klass)->_1).element_class),
       pIVar2 == (Il2CppObject *)0x0)) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
    if ((int)parameterValues->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameterValues->m_Items[0] = pIVar1;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items,pIVar1);
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin$$get_Label
// il2cpp: System_String_o* CustomLogic_CustomLogicToggleBuiltin__get_Label (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x18206a380

System_String_o *
CustomLogic_CustomLogicToggleBuiltin__get_Label
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this_00;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434662a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_bool_get_label);
    Il2CppMethodInitialized_18434662a = '\x01';
  }
  __this_00 = (__this->fields)._toggle;
  if (__this_00 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    pSVar1 = UnityEngine_UIElements_BaseField_Vector2Int___get_label
                       ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,
                        (MethodInfo_100AEC0 *)MethodInfo_UnityEngine_UIElements_BaseField_bool_get_label);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin$$set_Label
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__set_Label (CustomLogic_CustomLogicToggleBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x18206a3f0

void CustomLogic_CustomLogicToggleBuiltin__set_Label
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this_00;
  
  if (Il2CppMethodInitialized_18434662b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_bool_set_label);
    Il2CppMethodInitialized_18434662b = '\x01';
  }
  __this_00 = (__this->fields)._toggle;
  if (__this_00 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    UnityEngine_UIElements_BaseField_Vector2Int___set_label
              ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,value,
               (MethodInfo_100C7D0 *)MethodInfo_UnityEngine_UIElements_BaseField_bool_set_label);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin$$get_Text
// il2cpp: System_String_o* CustomLogic_CustomLogicToggleBuiltin__get_Text (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x18206a3d0

System_String_o *
CustomLogic_CustomLogicToggleBuiltin__get_Text
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_BaseBoolField_o *__this_00;
  System_String_o *pSVar1;
  
  __this_00 = (UnityEngine_UIElements_BaseBoolField_o *)(__this->fields)._toggle;
  if (__this_00 != (UnityEngine_UIElements_BaseBoolField_o *)0x0) {
    pSVar1 = UnityEngine_UIElements_BaseBoolField__get_text(__this_00,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin$$set_Text
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__set_Text (CustomLogic_CustomLogicToggleBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x18206a450

void CustomLogic_CustomLogicToggleBuiltin__set_Text
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_BaseBoolField_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_BaseBoolField_o *)(__this->fields)._toggle;
  if (__this_00 != (UnityEngine_UIElements_BaseBoolField_o *)0x0) {
    UnityEngine_UIElements_BaseBoolField__set_text(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin$$get_Value
// il2cpp: bool CustomLogic_CustomLogicToggleBuiltin__get_Value (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x182066f00

bool CustomLogic_CustomLogicToggleBuiltin__get_Value
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (__this->fields)._toggle;
  if (pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    uVar2 = (*(pUVar1->klass->vtable)._148_get_value.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._148_get_value.method);
    return (bool)uVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__set_Value (CustomLogic_CustomLogicToggleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x1820671c0

void CustomLogic_CustomLogicToggleBuiltin__set_Value
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  
  pUVar1 = (__this->fields)._toggle;
  if (pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    (*(pUVar1->klass->vtable)._149_set_value.methodPtr)
              (pUVar1,value,(pUVar1->klass->vtable)._149_set_value.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin$$OnValueChanged
// il2cpp: CustomLogic_CustomLogicToggleBuiltin_o* CustomLogic_CustomLogicToggleBuiltin__OnValueChanged (CustomLogic_CustomLogicToggleBuiltin_o* __this, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x18055deb0

CustomLogic_CustomLogicToggleBuiltin_o*
CustomLogic_CustomLogicToggleBuiltin__OnValueChanged(CustomLogic_CustomLogicToggleBuiltin_o* __this, CustomLogic_UserMethod_o* valueChangedEvent, MethodInfo* method)

{
  (__this->fields)._valueChangedEvent = action;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._valueChangedEvent,action);
  return __this;
}


// CustomLogic.CustomLogicToggleBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicToggleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x182066a20

void CustomLogic_CustomLogicToggleBuiltin__SetValueWithoutNotify
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  
  pUVar1 = (__this->fields)._toggle;
  if (pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    (*(pUVar1->klass->vtable)._159_SetValueWithoutNotify.methodPtr)
              (pUVar1,value,(pUVar1->klass->vtable)._159_SetValueWithoutNotify.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicToggleBuiltin__get_ClassName (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x18206a350

System_String_o *
CustomLogic_CustomLogicToggleBuiltin__get_ClassName
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434662c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Toggle");
    Il2CppMethodInitialized_18434662c = '\x01';
  }
  return "Toggle";
}


// CustomLogic.CustomLogicToggleBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicToggleBuiltin__get_IsAbstract (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicToggleBuiltin__get_IsAbstract(CustomLogic_CustomLogicToggleBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicToggleBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicToggleBuiltin__get_IsStatic (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicToggleBuiltin__get_IsStatic(CustomLogic_CustomLogicToggleBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicToggleBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicToggleBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicToggleBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicToggleBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicToggleBuiltin$$<.ctor>b__2_0
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin____ctor_b__2_0 (CustomLogic_CustomLogicToggleBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_bool__o* evt, const MethodInfo* method);
// 0x18206a140

void CustomLogic_CustomLogicToggleBuiltin____ctor_b__2_0
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,UnityEngine_UIElements_ChangeEvent_bool__o *evt
               ,MethodInfo *method)

{
  undefined1 uVar1;
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_res10 [8];
  
  if (Il2CppMethodInitialized_18434662d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_ChangeEvent_bool_get_newValue);
    Il2CppMethodInitialized_18434662d = '\x01';
  }
  if (evt == (UnityEngine_UIElements_ChangeEvent_bool__o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = *(undefined1 *)((longlong)&(*(uint64_t *)((char *)evt + 0x68)) + 1);
  if (Il2CppMethodInitialized_184346629 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_184346629 = '\x01';
  }
  if ((__this->fields)._valueChangedEvent != (CustomLogic_UserMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    userMethod = (__this->fields)._valueChangedEvent;
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_res10[0] = uVar1;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res10);
    if (parameterValues != (System_Object_array *)0x0) {
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameterValues->obj).klass)->_1).element_class),
         pIVar3 == (Il2CppObject *)0x0)) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
      if ((int)parameterValues->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameterValues->m_Items[0] = pIVar2;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items,pIVar2);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
                  (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


