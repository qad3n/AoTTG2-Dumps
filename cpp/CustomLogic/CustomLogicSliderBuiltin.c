// Type: CustomLogic.CustomLogicSliderBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicSliderBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicSliderBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicSliderBuiltin_o* CustomLogic_CustomLogicSliderBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x1820748a0

CustomLogic_CustomLogicSliderBuiltin_o *
CustomLogic_CustomLogicSliderBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicSliderBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x18207b5f0

void CustomLogic_CustomLogicSliderBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184346608 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346608 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicSliderBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__10_0 (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182077e50

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__10_0
          (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *value;
  
  if (Il2CppMethodInitialized_184346609 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346609 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      (__c->fields)._valueChangedEvent = value;
      Il2CppCodeGenWriteBarrier(&(__c->fields)._valueChangedEvent,value);
      return (Il2CppObject *)__c;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__11_0 (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182079f40

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__11_0
          (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      CustomLogic_CustomLogicSliderBuiltin__SetValueWithoutNotify(__c,__a->m_Items[0],(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicSliderBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x182049b20

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicSliderBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Func_CustomLogicSliderBuiltin__object__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  ExitGames_Client_Photon_SerializeStreamMethod_o *pEVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *pSVar5;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this_01;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_1843465f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"OnValueChanged");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"IsIntSlider");
    il2cpp_codegen_initialize_runtime_metadata(&"SetValueWithoutNotify");
    il2cpp_codegen_initialize_runtime_metadata(&"PageSize");
    il2cpp_codegen_initialize_runtime_metadata(&"HighValue");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowInputField");
    il2cpp_codegen_initialize_runtime_metadata(&"LowValue");
    il2cpp_codegen_initialize_runtime_metadata(&"Direction");
    Il2CppMethodInitialized_1843465f5 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x86253654) {
    if (uVar3 < 0x3a2089b8) {
      if (uVar3 == 0xf54ee6e) {
        bVar2 = System_String__op_Equality(name,"LowValue",(MethodInfo *)0x0);
        if (!bVar2) goto label_18204a52f;
        if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843465f8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__LowValue_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__LowValue_g____setter_4_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
          Il2CppMethodInitialized_1843465f8 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__LowValue_g____getter_4_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__LowValue_g____setter_4_1
        ;
      }
      else {
        if (uVar3 != 0x3a2089b7) goto label_18204a52f;
        bVar2 = System_String__op_Equality(name,"PageSize",(MethodInfo *)0x0);
        if (!bVar2) goto label_18204a52f;
        if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843465fa == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__PageSize_g____getter_6_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__PageSize_g____setter_6_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
          Il2CppMethodInitialized_1843465fa = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__PageSize_g____getter_6_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__PageSize_g____setter_6_1
        ;
      }
    }
    else if (uVar3 == 0x4c979c42) {
      bVar2 = System_String__op_Equality(name,"HighValue",(MethodInfo *)0x0);
      if (!bVar2) goto label_18204a52f;
      if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843465f9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__HighValue_g____getter_5_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__HighValue_g____setter_5_1
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
        Il2CppMethodInitialized_1843465f9 = '\x01';
      }
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__HighValue_g____getter_5_0
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__HighValue_g____setter_5_1
      ;
    }
    else {
      if (uVar3 != 0x61fefc0a) {
        if (uVar3 != 0x86253653) goto label_18204a52f;
        bVar2 = System_String__op_Equality(name,"IsIntSlider",(MethodInfo *)0x0);
        if (!bVar2) goto label_18204a52f;
        if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843465fd == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__IsIntSlider_g____getter_9
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
          Il2CppMethodInitialized_1843465fd = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__IsIntSlider_g____getter_9
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin)
        ;
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
        goto label_18204a50a;
      }
      bVar2 = System_String__op_Equality(name,"Direction",(MethodInfo *)0x0);
      if (!bVar2) goto label_18204a52f;
      if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843465fb == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Direction_g____getter_7_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Direction_g____setter_7_1
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
        Il2CppMethodInitialized_1843465fb = '\x01';
      }
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Direction_g____getter_7_0
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Direction_g____setter_7_1
      ;
    }
  }
  else if (uVar3 < 0xacc881fd) {
    if (uVar3 == 0x9eccf29d) {
      bVar2 = System_String__op_Equality(name,"Label",(MethodInfo *)0x0);
      if (!bVar2) goto label_18204a52f;
      if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843465f6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_2_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_2_1
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
        Il2CppMethodInitialized_1843465f6 = '\x01';
      }
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_2_0
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_2_1;
    }
    else {
      if (uVar3 != 0xacc881fc) goto label_18204a52f;
      bVar2 = System_String__op_Equality(name,"ShowInputField",(MethodInfo *)0x0);
      if (!bVar2) goto label_18204a52f;
      if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843465fc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__ShowInputField_g____gette
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__ShowInputField_g____sette
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
        Il2CppMethodInitialized_1843465fc = '\x01';
      }
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__ShowInputField_g____gette
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__ShowInputField_g____sette
      ;
    }
  }
  else {
    if (uVar3 != 0xd147f96a) {
      if (uVar3 == 0xd1dd43b5) {
        bVar2 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843465ff == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicSliderBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify_b
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843465ff = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9__11_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicSliderBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify_b
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9__11_0 =
                 (System_Func_CustomLogicSliderBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9__11_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0xf722a79f) {
        bVar2 = System_String__op_Equality(name,"OnValueChanged",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843465fe == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicSliderBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__10_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843465fe = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9__10_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicSliderBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__10_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9__10_0 =
                 (System_Func_CustomLogicSliderBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9__10_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
label_18204a52f:
      pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicSliderBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_02,pSVar6,(MethodInfo *)0x0);
      pMVar7 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar7);
    }
    bVar2 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0);
    if (!bVar2) goto label_18204a52f;
    if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings)
      ;
    }
    if (Il2CppMethodInitialized_1843465f7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_3_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_3_1
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
      Il2CppMethodInitialized_1843465f7 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_3_0
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_3_1;
  }
  System_Action_object__object____ctor
            (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
label_18204a50a:
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_01;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__Label
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Label (const MethodInfo* method);
// 0x182062780

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Label(MethodInfo *method)

{
  System_Func_CustomLogicSliderBuiltin__object__o *__this;
  System_Action_CustomLogicSliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843465f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
    Il2CppMethodInitialized_1843465f6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_2_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x182063b80

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Value(MethodInfo *method)

{
  System_Func_CustomLogicSliderBuiltin__object__o *__this;
  System_Action_CustomLogicSliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843465f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_3_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
    Il2CppMethodInitialized_1843465f7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_3_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__LowValue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__LowValue (const MethodInfo* method);
// 0x182062c30

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__LowValue(MethodInfo *method)

{
  System_Func_CustomLogicSliderBuiltin__object__o *__this;
  System_Action_CustomLogicSliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843465f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__LowValue_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__LowValue_g____setter_4_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
    Il2CppMethodInitialized_1843465f8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__LowValue_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__LowValue_g____setter_4_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__HighValue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__HighValue (const MethodInfo* method);
// 0x182062140

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__HighValue(MethodInfo *method)

{
  System_Func_CustomLogicSliderBuiltin__object__o *__this;
  System_Action_CustomLogicSliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843465f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__HighValue_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__HighValue_g____setter_5_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
    Il2CppMethodInitialized_1843465f9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__HighValue_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__HighValue_g____setter_5_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__PageSize
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__PageSize (const MethodInfo* method);
// 0x182062ff0

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__PageSize(MethodInfo *method)

{
  System_Func_CustomLogicSliderBuiltin__object__o *__this;
  System_Action_CustomLogicSliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843465fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__PageSize_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__PageSize_g____setter_6_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
    Il2CppMethodInitialized_1843465fa = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__PageSize_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__PageSize_g____setter_6_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__Direction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Direction (const MethodInfo* method);
// 0x182061a10

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Direction(MethodInfo *method)

{
  System_Func_CustomLogicSliderBuiltin__object__o *__this;
  System_Action_CustomLogicSliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843465fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Direction_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Direction_g____setter_7_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
    Il2CppMethodInitialized_1843465fb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Direction_g____getter_7_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Direction_g____setter_7_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__ShowInputField
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__ShowInputField (const MethodInfo* method);
// 0x1820634a0

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__ShowInputField(MethodInfo *method)

{
  System_Func_CustomLogicSliderBuiltin__object__o *__this;
  System_Action_CustomLogicSliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843465fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__ShowInputField_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__ShowInputField_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
    Il2CppMethodInitialized_1843465fc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__ShowInputField_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__ShowInputField_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__IsIntSlider
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__IsIntSlider (const MethodInfo* method);
// 0x1820626e0

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__IsIntSlider(MethodInfo *method)

{
  System_Func_CustomLogicSliderBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843465fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__IsIntSlider_g____getter_9
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
    Il2CppMethodInitialized_1843465fd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__IsIntSlider_g____getter_9
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__OnValueChanged (const MethodInfo* method);
// 0x18205b760

CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__OnValueChanged(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843465fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSliderBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843465fe = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9__10_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__10_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicSliderBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9__10_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x18205f570

CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843465ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSliderBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843465ff = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9__11_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9__11_0 =
         (System_Func_CustomLogicSliderBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9__11_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x182065940

void CustomLogic_CustomLogicSliderBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346600 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"OnValueChanged");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"IsIntSlider");
    il2cpp_codegen_initialize_runtime_metadata(&"SetValueWithoutNotify");
    il2cpp_codegen_initialize_runtime_metadata(&"PageSize");
    il2cpp_codegen_initialize_runtime_metadata(&"HighValue");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowInputField");
    il2cpp_codegen_initialize_runtime_metadata(&"LowValue");
    il2cpp_codegen_initialize_runtime_metadata(&"Direction");
    Il2CppMethodInitialized_184346600 = '\x01';
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
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Value",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LowValue",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HighValue",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PageSize",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Direction",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowInputField",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsIntSlider",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OnValueChanged",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetValueWithoutNotify",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x1820550c0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *__this;
  UnityEngine_UIElements_Slider_o *__this_00;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843465ea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_float_get_label)
      ;
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_int_get_label);
      Il2CppMethodInitialized_1843465ea = '\x01';
    }
    if ((__i->fields)._isIntSlider == false) {
      __this_00 = (__i->fields)._floatSlider;
      if (__this_00 != (UnityEngine_UIElements_Slider_o *)0x0) {
        pSVar1 = UnityEngine_UIElements_BaseField_Vector2Int___get_label
                           ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,
                            (MethodInfo_100AEC0 *)MethodInfo_UnityEngine_UIElements_BaseField_float_get_label)
        ;
        return (Il2CppObject *)pSVar1;
      }
    }
    else {
      __this = (__i->fields)._intSlider;
      if (__this != (UnityEngine_UIElements_SliderInt_o *)0x0) {
        pSVar1 = UnityEngine_UIElements_BaseField_Vector2Int___get_label
                           ((UnityEngine_UIElements_BaseField_TValueType__o *)__this,
                            (MethodInfo_100AEC0 *)MethodInfo_UnityEngine_UIElements_BaseField_int_get_label);
        return (Il2CppObject *)pSVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182055390

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *__this;
  UnityEngine_UIElements_SliderInt_o *__this_00;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184346601 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346601 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843465eb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_float_set_label)
      ;
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_int_set_label);
      Il2CppMethodInitialized_1843465eb = '\x01';
    }
    if ((__i->fields)._isIntSlider == false) {
      __this = (__i->fields)._floatSlider;
      if (__this != (UnityEngine_UIElements_Slider_o *)0x0) {
        UnityEngine_UIElements_BaseField_Vector2Int___set_label
                  ((UnityEngine_UIElements_BaseField_TValueType__o *)__this,value,
                   (MethodInfo_100C7D0 *)MethodInfo_UnityEngine_UIElements_BaseField_float_set_label);
        return;
      }
    }
    else {
      __this_00 = (__i->fields)._intSlider;
      if (__this_00 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
        UnityEngine_UIElements_BaseField_Vector2Int___set_label
                  ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,value,
                   (MethodInfo_100C7D0 *)MethodInfo_UnityEngine_UIElements_BaseField_int_set_label);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x182056630

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *pUVar1;
  UnityEngine_UIElements_SliderInt_o *pUVar2;
  Il2CppObject *pIVar3;
  undefined4 local_res8 [8];
  
  if (__i == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__i->fields)._isIntSlider == false) {
    pUVar1 = (__i->fields)._floatSlider;
    if (pUVar1 != (UnityEngine_UIElements_Slider_o *)0x0) {
      local_res8[0] =
           (*(pUVar1->klass->vtable)._148_get_value.methodPtr)
                     (pUVar1,(pUVar1->klass->vtable)._148_get_value.method);
      pIVar3 = il2cpp_value_box(g_data_184354e38,local_res8);
      return pIVar3;
    }
    ThrowNullReferenceException();
  }
  pUVar2 = (__i->fields)._intSlider;
  if (pUVar2 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
    local_res8[0] =
         (*(pUVar2->klass->vtable)._148_get_value.methodPtr)
                   (pUVar2,(pUVar2->klass->vtable)._148_get_value.method);
    pIVar3 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x1820567a0

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *value;
  
  if (Il2CppMethodInitialized_184346602 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346602 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    CustomLogic_CustomLogicSliderBuiltin__set_Value(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____getter_4_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x182055650

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____getter_4_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *__this;
  UnityEngine_UIElements_BaseSlider_int__o *__this_00;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_1843465ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_lowValue)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_lowValue);
    Il2CppMethodInitialized_1843465ec = '\x01';
  }
  if ((__i->fields)._isIntSlider == false) {
    __this = (__i->fields)._floatSlider;
    if (__this != (UnityEngine_UIElements_Slider_o *)0x0) {
      local_res8[0] =
           UnityEngine_UIElements_BaseSlider_float___get_lowValue
                     ((UnityEngine_UIElements_MinMaxSlider_o *)__this,
                      MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_lowValue);
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
      return pIVar1;
    }
    ThrowNullReferenceException();
  }
  __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__i->fields)._intSlider;
  if (__this_00 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    local_res8[0] =
         (float)UnityEngine_UIElements_BaseSlider_int___get_lowValue
                          (__this_00,
                           (MethodInfo_12ADD00 *)MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_lowValue
                          );
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____setter_4_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x1820557e0

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____setter_4_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *value;
  
  if (Il2CppMethodInitialized_184346603 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346603 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    CustomLogic_CustomLogicSliderBuiltin__set_LowValue(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____getter_5_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x182054a30

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____getter_5_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_float__o *__this;
  UnityEngine_UIElements_BaseSlider_int__o *__this_00;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_1843465ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_highValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_highValue);
    Il2CppMethodInitialized_1843465ee = '\x01';
  }
  if ((__i->fields)._isIntSlider == false) {
    __this = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
    if (__this != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      local_res8[0] =
           UnityEngine_UIElements_BaseSlider_float___get_highValue
                     (__this,(MethodInfo_12ADBB0 *)
                             MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_highValue);
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
      return pIVar1;
    }
    ThrowNullReferenceException();
  }
  __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__i->fields)._intSlider;
  if (__this_00 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    local_res8[0] =
         (float)UnityEngine_UIElements_BaseSlider_int___get_highValue
                          (__this_00,
                           (MethodInfo_12ADBA0 *)
                           MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_highValue);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____setter_5_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182054af0

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____setter_5_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *value;
  
  if (Il2CppMethodInitialized_184346604 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346604 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    CustomLogic_CustomLogicSliderBuiltin__set_HighValue(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__PageSize>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____getter_6_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x182055a00

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____getter_6_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_UIElements_SliderInt_o *pUVar2;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if ((__i->fields)._isIntSlider == false) {
      pUVar2 = (UnityEngine_UIElements_SliderInt_o *)(__i->fields)._floatSlider;
    }
    else {
      pUVar2 = (__i->fields)._intSlider;
    }
    if (pUVar2 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
      local_res8[0] =
           (*(pUVar2->klass->vtable)._165_get_pageSize.methodPtr)
                     (pUVar2,(pUVar2->klass->vtable)._165_get_pageSize.method);
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__PageSize>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____setter_6_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182055a50

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____setter_6_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *pUVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_184346605 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346605 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if ((__i->fields)._isIntSlider == false) {
      pUVar1 = (UnityEngine_UIElements_SliderInt_o *)(__i->fields)._floatSlider;
    }
    else {
      pUVar1 = (__i->fields)._intSlider;
    }
    if (pUVar1 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
      (*(pUVar1->klass->vtable)._166_set_pageSize.methodPtr)
                (pUVar1,fVar2,(pUVar1->klass->vtable)._166_set_pageSize.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Direction>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Direction_g____getter_7_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x182054380

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Direction_g____getter_7_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_float__o *pUVar1;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843465f0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_direction);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_direction);
      Il2CppMethodInitialized_1843465f0 = '\x01';
    }
    if ((__i->fields)._isIntSlider == false) {
      pUVar1 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
      if (pUVar1 == (UnityEngine_UIElements_BaseSlider_float__o *)0x0) goto label_182054403;
      local_res8[0] =
           UnityEngine_UIElements_BaseSlider_float___get_direction
                     (pUVar1,(MethodInfo_12ADB00 *)
                             MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_direction);
    }
    else {
      pUVar1 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._intSlider;
      if (pUVar1 == (UnityEngine_UIElements_BaseSlider_float__o *)0x0) goto label_182054403;
      local_res8[0] =
           UnityEngine_UIElements_BaseSlider_float___get_direction
                     (pUVar1,(MethodInfo_12ADB00 *)
                             MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_direction);
    }
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
label_182054403:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Direction>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Direction_g____setter_7_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182054410

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Direction_g____setter_7_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_float__o *pUVar1;
  Il2CppType *handle;
  bool bVar2;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184346606 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346606 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843465f1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_BaseSlider_float_set_direction);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_BaseSlider_int_set_direction);
      il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UIElements_SliderDirection);
      Il2CppMethodInitialized_1843465f1 = '\x01';
    }
    handle = TypeRef_UnityEngine_UIElements_SliderDirection;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    local_res8[0] = value;
    pIVar3 = il2cpp_value_box(g_data_184354e08,local_res8);
    if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e58);
    }
    bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
    if (!bVar2) {
      local_res8[0] = value;
      pIVar3 = il2cpp_value_box(g_data_184354e08,local_res8);
      pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Invalid slider direction: {0}");
      pSVar4 = System_String__Format(pSVar4,pIVar3,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      System_ArgumentException___ctor_1a77cc0(__this,pSVar4,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSliderBuiltin_set_Direction)
      ;
      il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
    }
    if ((__i->fields)._isIntSlider == false) {
      pUVar1 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
      if (pUVar1 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_float___set_direction
                  (pUVar1,value,
                   (MethodInfo_12AE660 *)MethodInfo_UnityEngine_UIElements_BaseSlider_float_set_direction);
        return;
      }
    }
    else {
      pUVar1 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._intSlider;
      if (pUVar1 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_float___set_direction
                  (pUVar1,value,
                   (MethodInfo_12AE660 *)MethodInfo_UnityEngine_UIElements_BaseSlider_int_set_direction);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__ShowInputField>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__ShowInputField_g____getter_8_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x1820560d0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__ShowInputField_g____getter_8_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_UIElements_SliderInt_o *pUVar2;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if ((__i->fields)._isIntSlider == false) {
      pUVar2 = (UnityEngine_UIElements_SliderInt_o *)(__i->fields)._floatSlider;
    }
    else {
      pUVar2 = (__i->fields)._intSlider;
    }
    if (pUVar2 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
      local_res8[0] =
           (*(pUVar2->klass->vtable)._167_get_showInputField.methodPtr)
                     (pUVar2,(pUVar2->klass->vtable)._167_get_showInputField.method);
      pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__ShowInputField>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__ShowInputField_g____setter_8_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182056120

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__ShowInputField_g____setter_8_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *pUVar1;
  UnityEngine_UIElements_SliderInt_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346607 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346607 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if ((__i->fields)._isIntSlider == false) {
      pUVar1 = (__i->fields)._floatSlider;
      if (pUVar1 != (UnityEngine_UIElements_Slider_o *)0x0) {
        (*(pUVar1->klass->vtable)._168_set_showInputField.methodPtr)
                  (pUVar1,(ulonglong)bVar3,(pUVar1->klass->vtable)._168_set_showInputField.method);
        return;
      }
    }
    else {
      pUVar2 = (__i->fields)._intSlider;
      if (pUVar2 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
        (*(pUVar2->klass->vtable)._168_set_showInputField.methodPtr)
                  (pUVar2,(ulonglong)bVar3,(pUVar2->klass->vtable)._168_set_showInputField.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__IsIntSlider>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__IsIntSlider_g____getter_9_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x182055090

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__IsIntSlider_g____getter_9_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    local_res8[0] = (__i->fields)._isIntSlider;
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin___ctor (CustomLogic_CustomLogicSliderBuiltin_o* __this, UnityEngine_UIElements_Slider_o* slider, const MethodInfo* method);
// 0x182068cf0

void CustomLogic_CustomLogicSliderBuiltin___ctor
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,UnityEngine_UIElements_Slider_o *slider,
               MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *control;
  DG_Tweening_Core_DOSetter_T__o *__this_00;
  
  if (Il2CppMethodInitialized_1843465e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSliderBuiltin_ctor_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_float
              );
    Il2CppMethodInitialized_1843465e6 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)slider,(MethodInfo *)0x0);
  (__this->fields)._floatSlider = slider;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._floatSlider,slider);
  control = (__this->fields)._floatSlider;
  (__this->fields)._isIntSlider = false;
  __this_00 = (DG_Tweening_Core_DOSetter_T__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_float);
  UnityEngine_UIElements_EventCallback_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_CustomLogic_CustomLogicSliderBuiltin_ctor_b__4_0,(MethodInfo_EB6EC0 *)0x0);
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_Vector3Int_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,
             (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_00,
             (MethodInfo_7118E0 *)
             MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_float
            );
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin___ctor (CustomLogic_CustomLogicSliderBuiltin_o* __this, UnityEngine_UIElements_SliderInt_o* sliderInt, const MethodInfo* method);
// 0x182068c30

void CustomLogic_CustomLogicSliderBuiltin___ctor_2068c30
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,UnityEngine_UIElements_SliderInt_o *sliderInt,
               MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *control;
  DG_Tweening_Core_DOSetter_T__o *__this_00;
  
  if (Il2CppMethodInitialized_1843465e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSliderBuiltin_ctor_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_int)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_int
              );
    Il2CppMethodInitialized_1843465e7 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)sliderInt,(MethodInfo *)0x0);
  (__this->fields)._intSlider = sliderInt;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._intSlider,sliderInt);
  control = (__this->fields)._intSlider;
  (__this->fields)._isIntSlider = true;
  __this_00 = (DG_Tweening_Core_DOSetter_T__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_int);
  UnityEngine_UIElements_EventCallback_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_CustomLogic_CustomLogicSliderBuiltin_ctor_b__5_0,(MethodInfo_EB6EC0 *)0x0);
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_Vector3Int_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,
             (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_00,
             (MethodInfo_7118E0 *)
             MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_int)
  ;
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__OnValueChanged (CustomLogic_CustomLogicSliderBuiltin_o* __this, float value, const MethodInfo* method);
// 0x182068570

void CustomLogic_CustomLogicSliderBuiltin__OnValueChanged
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,float value,MethodInfo *method)

{
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_1843465e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_1843465e8 = '\x01';
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
  pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
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


// CustomLogic.CustomLogicSliderBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__OnValueChanged (CustomLogic_CustomLogicSliderBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x1820686a0

void CustomLogic_CustomLogicSliderBuiltin__OnValueChanged_20686a0
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843465e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_1843465e9 = '\x01';
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
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
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


// CustomLogic.CustomLogicSliderBuiltin$$get_Label
// il2cpp: System_String_o* CustomLogic_CustomLogicSliderBuiltin__get_Label (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x182068f10

System_String_o *
CustomLogic_CustomLogicSliderBuiltin__get_Label
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *__this_00;
  UnityEngine_UIElements_Slider_o *__this_01;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843465ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_float_get_label);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_int_get_label);
    Il2CppMethodInitialized_1843465ea = '\x01';
  }
  if ((__this->fields)._isIntSlider == false) {
    __this_01 = (__this->fields)._floatSlider;
    if (__this_01 != (UnityEngine_UIElements_Slider_o *)0x0) {
      pSVar1 = UnityEngine_UIElements_BaseField_Vector2Int___get_label
                         ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_01,
                          (MethodInfo_100AEC0 *)MethodInfo_UnityEngine_UIElements_BaseField_float_get_label);
      return pSVar1;
    }
  }
  else {
    __this_00 = (__this->fields)._intSlider;
    if (__this_00 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
      pSVar1 = UnityEngine_UIElements_BaseField_Vector2Int___get_label
                         ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,
                          (MethodInfo_100AEC0 *)MethodInfo_UnityEngine_UIElements_BaseField_int_get_label);
      return pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin$$set_Label
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_Label (CustomLogic_CustomLogicSliderBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182069460

void CustomLogic_CustomLogicSliderBuiltin__set_Label
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *__this_00;
  UnityEngine_UIElements_SliderInt_o *__this_01;
  
  if (Il2CppMethodInitialized_1843465eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_float_set_label);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_int_set_label);
    Il2CppMethodInitialized_1843465eb = '\x01';
  }
  if ((__this->fields)._isIntSlider == false) {
    __this_00 = (__this->fields)._floatSlider;
    if (__this_00 != (UnityEngine_UIElements_Slider_o *)0x0) {
      UnityEngine_UIElements_BaseField_Vector2Int___set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,value,
                 (MethodInfo_100C7D0 *)MethodInfo_UnityEngine_UIElements_BaseField_float_set_label);
      return;
    }
  }
  else {
    __this_01 = (__this->fields)._intSlider;
    if (__this_01 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
      UnityEngine_UIElements_BaseField_Vector2Int___set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_01,value,
                 (MethodInfo_100C7D0 *)MethodInfo_UnityEngine_UIElements_BaseField_int_set_label);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin$$get_Value
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin__get_Value (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x1820690c0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin__get_Value
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *pUVar1;
  UnityEngine_UIElements_SliderInt_o *pUVar2;
  Il2CppObject *pIVar3;
  undefined4 local_res8 [8];
  
  if ((__this->fields)._isIntSlider != false) {
    pUVar2 = (__this->fields)._intSlider;
    if (pUVar2 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
      local_res8[0] =
           (*(pUVar2->klass->vtable)._148_get_value.methodPtr)
                     (pUVar2,(pUVar2->klass->vtable)._148_get_value.method);
      pIVar3 = il2cpp_value_box(g_data_184354e08,local_res8);
      return pIVar3;
    }
    ThrowNullReferenceException();
  }
  pUVar1 = (__this->fields)._floatSlider;
  if (pUVar1 != (UnityEngine_UIElements_Slider_o *)0x0) {
    local_res8[0] =
         (*(pUVar1->klass->vtable)._148_get_value.methodPtr)
                   (pUVar1,(pUVar1->klass->vtable)._148_get_value.method);
    pIVar3 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_Value (CustomLogic_CustomLogicSliderBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x182069720

void CustomLogic_CustomLogicSliderBuiltin__set_Value
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *pUVar1;
  UnityEngine_UIElements_Slider_c *pUVar2;
  UnityEngine_UIElements_SliderInt_o *pUVar3;
  Il2CppObject *pIVar4;
  float *pfVar5;
  uint *puVar6;
  
  if ((__this->fields)._isIntSlider == false) {
    if (value != (Il2CppObject *)0x0) {
      pIVar4 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e38) {
        pIVar4 = value;
      }
      if (pIVar4 == (Il2CppObject *)0x0) {
        pIVar4 = (Il2CppObject *)0x0;
        if (value->klass == g_data_184354e08) {
          pIVar4 = value;
        }
        if (pIVar4 == (Il2CppObject *)0x0) {
          return;
        }
        if ((value->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(value,g_data_184354e08);
        }
        il2cpp_object_unbox(value);
        pUVar1 = (__this->fields)._floatSlider;
        if (pUVar1 != (UnityEngine_UIElements_Slider_o *)0x0) {
          pUVar2 = pUVar1->klass;
          (*(pUVar2->vtable)._149_set_value.methodPtr)(pUVar1,pUVar2,(pUVar2->vtable)._149_set_value.method);
          return;
        }
      }
      else {
        if ((value->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(value,g_data_184354e38);
        }
        il2cpp_object_unbox(value);
        pUVar1 = (__this->fields)._floatSlider;
        if (pUVar1 != (UnityEngine_UIElements_Slider_o *)0x0) {
          pUVar2 = pUVar1->klass;
          (*(pUVar2->vtable)._149_set_value.methodPtr)(pUVar1,pUVar2,(pUVar2->vtable)._149_set_value.method);
          return;
        }
      }
label_1820698af:
      ThrowNullReferenceException();
    }
  }
  else if (value != (Il2CppObject *)0x0) {
    pIVar4 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e08) {
      pIVar4 = value;
    }
    if (pIVar4 == (Il2CppObject *)0x0) {
      pIVar4 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e38) {
        pIVar4 = value;
      }
      if (pIVar4 == (Il2CppObject *)0x0) {
        return;
      }
      if ((value->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(value,g_data_184354e38);
      }
      pfVar5 = il2cpp_object_unbox(value);
      pUVar3 = (__this->fields)._intSlider;
      if (pUVar3 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
        (*(pUVar3->klass->vtable)._149_set_value.methodPtr)
                  (pUVar3,(ulonglong)(uint)(int)*pfVar5,(pUVar3->klass->vtable)._149_set_value.method);
        return;
      }
    }
    else {
      if ((value->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(value,g_data_184354e08);
      }
      puVar6 = il2cpp_object_unbox(value);
      pUVar3 = (__this->fields)._intSlider;
      if (pUVar3 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
        (*(pUVar3->klass->vtable)._149_set_value.methodPtr)
                  (pUVar3,(ulonglong)*puVar6,(pUVar3->klass->vtable)._149_set_value.method);
        return;
      }
    }
    goto label_1820698af;
  }
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_LowValue
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin__get_LowValue (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x182068f90

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin__get_LowValue
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *__this_00;
  UnityEngine_UIElements_BaseSlider_int__o *__this_01;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (Il2CppMethodInitialized_1843465ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_lowValue)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_lowValue);
    Il2CppMethodInitialized_1843465ec = '\x01';
  }
  if ((__this->fields)._isIntSlider == false) {
    __this_00 = (__this->fields)._floatSlider;
    if (__this_00 != (UnityEngine_UIElements_Slider_o *)0x0) {
      local_res8[0] =
           UnityEngine_UIElements_BaseSlider_float___get_lowValue
                     ((UnityEngine_UIElements_MinMaxSlider_o *)__this_00,
                      MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_lowValue);
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
      return pIVar1;
    }
    ThrowNullReferenceException();
  }
  __this_01 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
  if (__this_01 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    local_res8[0] =
         (float)UnityEngine_UIElements_BaseSlider_int___get_lowValue
                          (__this_01,
                           (MethodInfo_12ADD00 *)MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_lowValue
                          );
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin$$set_LowValue
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_LowValue (CustomLogic_CustomLogicSliderBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x1820694f0

void CustomLogic_CustomLogicSliderBuiltin__set_LowValue
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_float__o *pUVar1;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar2;
  int *piVar3;
  float *pfVar4;
  Il2CppObject *pIVar5;
  int32_t *piVar6;
  
  if (Il2CppMethodInitialized_1843465ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseSlider_int_set_lowValue)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_float_set_lowValue);
    Il2CppMethodInitialized_1843465ed = '\x01';
  }
  if ((__this->fields)._isIntSlider == false) {
    if (value != (Il2CppObject *)0x0) {
      pIVar5 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e38) {
        pIVar5 = value;
      }
      if (pIVar5 != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pfVar4 = il2cpp_object_unbox(value);
        pUVar1 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
        if (pUVar1 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          UnityEngine_UIElements_BaseSlider_float___set_lowValue
                    (pUVar1,*pfVar4,
                     (MethodInfo_12AF880 *)MethodInfo_UnityEngine_UIElements_BaseSlider_float_set_lowValue);
          return;
        }
label_18206969a:
        ThrowNullReferenceException();
      }
      pIVar5 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e08) {
        pIVar5 = value;
      }
      if (pIVar5 != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        piVar3 = il2cpp_object_unbox(value);
        pUVar1 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
        if (pUVar1 == (UnityEngine_UIElements_BaseSlider_float__o *)0x0) goto label_18206969a;
        UnityEngine_UIElements_BaseSlider_float___set_lowValue
                  (pUVar1,(float)*piVar3,
                   (MethodInfo_12AF880 *)MethodInfo_UnityEngine_UIElements_BaseSlider_float_set_lowValue);
      }
    }
  }
  else if (value != (Il2CppObject *)0x0) {
    pIVar5 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e08) {
      pIVar5 = value;
    }
    if (pIVar5 == (Il2CppObject *)0x0) {
      pIVar5 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e38) {
        pIVar5 = value;
      }
      if (pIVar5 == (Il2CppObject *)0x0) {
        return;
      }
      if ((value->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pfVar4 = il2cpp_object_unbox(value);
      pUVar2 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
      if (pUVar2 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_int___set_lowValue
                  (pUVar2,(int)*pfVar4,
                   (MethodInfo_12AF740 *)MethodInfo_UnityEngine_UIElements_BaseSlider_int_set_lowValue);
        return;
      }
    }
    else {
      if ((value->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      piVar6 = il2cpp_object_unbox(value);
      pUVar2 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
      if (pUVar2 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_int___set_lowValue
                  (pUVar2,*piVar6,
                   (MethodInfo_12AF740 *)MethodInfo_UnityEngine_UIElements_BaseSlider_int_set_lowValue);
        return;
      }
    }
    goto label_18206969a;
  }
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_HighValue
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin__get_HighValue (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x182068e60

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin__get_HighValue
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_float__o *__this_00;
  UnityEngine_UIElements_BaseSlider_int__o *__this_01;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (Il2CppMethodInitialized_1843465ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_highValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_highValue);
    Il2CppMethodInitialized_1843465ee = '\x01';
  }
  if ((__this->fields)._isIntSlider == false) {
    __this_00 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
    if (__this_00 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      local_res8[0] =
           UnityEngine_UIElements_BaseSlider_float___get_highValue
                     (__this_00,
                      (MethodInfo_12ADBB0 *)MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_highValue);
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
      return pIVar1;
    }
    ThrowNullReferenceException();
  }
  __this_01 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
  if (__this_01 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
    local_res8[0] =
         (float)UnityEngine_UIElements_BaseSlider_int___get_highValue
                          (__this_01,
                           (MethodInfo_12ADBA0 *)
                           MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_highValue);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin$$set_HighValue
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_HighValue (CustomLogic_CustomLogicSliderBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x1820692b0

void CustomLogic_CustomLogicSliderBuiltin__set_HighValue
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_float__o *pUVar1;
  UnityEngine_UIElements_BaseSlider_int__o *pUVar2;
  int *piVar3;
  float *pfVar4;
  Il2CppObject *pIVar5;
  int32_t *piVar6;
  
  if (Il2CppMethodInitialized_1843465ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_float_set_highValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_int_set_highValue);
    Il2CppMethodInitialized_1843465ef = '\x01';
  }
  if ((__this->fields)._isIntSlider == false) {
    if (value != (Il2CppObject *)0x0) {
      pIVar5 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e38) {
        pIVar5 = value;
      }
      if (pIVar5 != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pfVar4 = il2cpp_object_unbox(value);
        pUVar1 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
        if (pUVar1 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          UnityEngine_UIElements_BaseSlider_float___set_highValue
                    (pUVar1,*pfVar4,
                     (MethodInfo_12AEF10 *)MethodInfo_UnityEngine_UIElements_BaseSlider_float_set_highValue);
          return;
        }
label_18206945a:
        ThrowNullReferenceException();
      }
      pIVar5 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e08) {
        pIVar5 = value;
      }
      if (pIVar5 != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        piVar3 = il2cpp_object_unbox(value);
        pUVar1 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
        if (pUVar1 == (UnityEngine_UIElements_BaseSlider_float__o *)0x0) goto label_18206945a;
        UnityEngine_UIElements_BaseSlider_float___set_highValue
                  (pUVar1,(float)*piVar3,
                   (MethodInfo_12AEF10 *)MethodInfo_UnityEngine_UIElements_BaseSlider_float_set_highValue);
      }
    }
  }
  else if (value != (Il2CppObject *)0x0) {
    pIVar5 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e08) {
      pIVar5 = value;
    }
    if (pIVar5 == (Il2CppObject *)0x0) {
      pIVar5 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e38) {
        pIVar5 = value;
      }
      if (pIVar5 == (Il2CppObject *)0x0) {
        return;
      }
      if ((value->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pfVar4 = il2cpp_object_unbox(value);
      pUVar2 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
      if (pUVar2 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_int___set_highValue
                  (pUVar2,(int)*pfVar4,
                   (MethodInfo_12AF060 *)MethodInfo_UnityEngine_UIElements_BaseSlider_int_set_highValue);
        return;
      }
    }
    else {
      if ((value->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      piVar6 = il2cpp_object_unbox(value);
      pUVar2 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
      if (pUVar2 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_int___set_highValue
                  (pUVar2,*piVar6,
                   (MethodInfo_12AF060 *)MethodInfo_UnityEngine_UIElements_BaseSlider_int_set_highValue);
        return;
      }
    }
    goto label_18206945a;
  }
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_PageSize
// il2cpp: float CustomLogic_CustomLogicSliderBuiltin__get_PageSize (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x182069040

float CustomLogic_CustomLogicSliderBuiltin__get_PageSize
                (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *pUVar1;
  float fVar2;
  
  if ((__this->fields)._isIntSlider == false) {
    pUVar1 = (UnityEngine_UIElements_SliderInt_o *)(__this->fields)._floatSlider;
  }
  else {
    pUVar1 = (__this->fields)._intSlider;
  }
  if (pUVar1 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
    fVar2 = (*(pUVar1->klass->vtable)._165_get_pageSize.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._165_get_pageSize.method);
    return fVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin$$set_PageSize
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_PageSize (CustomLogic_CustomLogicSliderBuiltin_o* __this, float value, const MethodInfo* method);
// 0x1820696a0

void CustomLogic_CustomLogicSliderBuiltin__set_PageSize
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *pUVar1;
  
  if ((__this->fields)._isIntSlider == false) {
    pUVar1 = (UnityEngine_UIElements_SliderInt_o *)(__this->fields)._floatSlider;
  }
  else {
    pUVar1 = (__this->fields)._intSlider;
  }
  if (pUVar1 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
    (*(pUVar1->klass->vtable)._166_set_pageSize.methodPtr)
              (pUVar1,value,(pUVar1->klass->vtable)._166_set_pageSize.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin$$get_Direction
// il2cpp: int32_t CustomLogic_CustomLogicSliderBuiltin__get_Direction (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x182068de0

int32_t CustomLogic_CustomLogicSliderBuiltin__get_Direction
                  (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_float__o *pUVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_1843465f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_direction);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_direction);
    Il2CppMethodInitialized_1843465f0 = '\x01';
  }
  if ((__this->fields)._isIntSlider == false) {
    pUVar1 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
    if (pUVar1 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      iVar2 = UnityEngine_UIElements_BaseSlider_float___get_direction
                        (pUVar1,(MethodInfo_12ADB00 *)
                                MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_direction);
      return iVar2;
    }
  }
  else {
    pUVar1 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._intSlider;
    if (pUVar1 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      iVar2 = UnityEngine_UIElements_BaseSlider_float___get_direction
                        (pUVar1,(MethodInfo_12ADB00 *)
                                MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_direction);
      return iVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin$$set_Direction
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_Direction (CustomLogic_CustomLogicSliderBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x182069140

void CustomLogic_CustomLogicSliderBuiltin__set_Direction
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_float__o *pUVar1;
  Il2CppType *handle;
  bool bVar2;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res10 [6];
  
  if (Il2CppMethodInitialized_1843465f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_float_set_direction);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_int_set_direction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UIElements_SliderDirection);
    Il2CppMethodInitialized_1843465f1 = '\x01';
  }
  handle = TypeRef_UnityEngine_UIElements_SliderDirection;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  local_res10[0] = value;
  pIVar3 = il2cpp_value_box(g_data_184354e08,local_res10);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
  if (bVar2) {
    if ((__this->fields)._isIntSlider == false) {
      pUVar1 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
      if (pUVar1 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_float___set_direction
                  (pUVar1,value,
                   (MethodInfo_12AE660 *)MethodInfo_UnityEngine_UIElements_BaseSlider_float_set_direction);
        return;
      }
    }
    else {
      pUVar1 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._intSlider;
      if (pUVar1 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
        UnityEngine_UIElements_BaseSlider_float___set_direction
                  (pUVar1,value,
                   (MethodInfo_12AE660 *)MethodInfo_UnityEngine_UIElements_BaseSlider_int_set_direction);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  local_res10[0] = value;
  pIVar3 = il2cpp_value_box(g_data_184354e08,local_res10);
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Invalid slider direction: {0}");
  pSVar4 = System_String__Format(pSVar4,pIVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this_00,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSliderBuiltin_set_Direction);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicSliderBuiltin$$get_ShowInputField
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_ShowInputField (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x182069080

bool CustomLogic_CustomLogicSliderBuiltin__get_ShowInputField
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  undefined1 uVar1;
  UnityEngine_UIElements_SliderInt_o *pUVar2;
  
  if ((__this->fields)._isIntSlider == false) {
    pUVar2 = (UnityEngine_UIElements_SliderInt_o *)(__this->fields)._floatSlider;
  }
  else {
    pUVar2 = (__this->fields)._intSlider;
  }
  if (pUVar2 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
    uVar1 = (*(pUVar2->klass->vtable)._167_get_showInputField.methodPtr)
                      (pUVar2,(pUVar2->klass->vtable)._167_get_showInputField.method);
    return (bool)uVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin$$set_ShowInputField
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_ShowInputField (CustomLogic_CustomLogicSliderBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x1820696e0

void CustomLogic_CustomLogicSliderBuiltin__set_ShowInputField
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *pUVar1;
  
  if ((__this->fields)._isIntSlider == false) {
    pUVar1 = (UnityEngine_UIElements_SliderInt_o *)(__this->fields)._floatSlider;
  }
  else {
    pUVar1 = (__this->fields)._intSlider;
  }
  if (pUVar1 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
    (*(pUVar1->klass->vtable)._168_set_showInputField.methodPtr)
              (pUVar1,value,(pUVar1->klass->vtable)._168_set_showInputField.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin$$get_IsIntSlider
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_IsIntSlider (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x180abd390

bool
CustomLogic_CustomLogicSliderBuiltin__get_IsIntSlider(CustomLogic_CustomLogicSliderBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields)._isIntSlider;
}


// CustomLogic.CustomLogicSliderBuiltin$$OnValueChanged
// il2cpp: CustomLogic_CustomLogicSliderBuiltin_o* CustomLogic_CustomLogicSliderBuiltin__OnValueChanged (CustomLogic_CustomLogicSliderBuiltin_o* __this, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x182068550

CustomLogic_CustomLogicSliderBuiltin_o *
CustomLogic_CustomLogicSliderBuiltin__OnValueChanged_2068550
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,CustomLogic_UserMethod_o *valueChangedEvent,
          MethodInfo *method)

{
  (__this->fields)._valueChangedEvent = valueChangedEvent;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._valueChangedEvent,valueChangedEvent);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicSliderBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x1820687d0

void CustomLogic_CustomLogicSliderBuiltin__SetValueWithoutNotify
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *pUVar1;
  UnityEngine_UIElements_Slider_c *pUVar2;
  UnityEngine_UIElements_SliderInt_o *pUVar3;
  Il2CppObject *pIVar4;
  float *pfVar5;
  uint *puVar6;
  
  if ((__this->fields)._isIntSlider == false) {
    if (value != (Il2CppObject *)0x0) {
      pIVar4 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e38) {
        pIVar4 = value;
      }
      if (pIVar4 == (Il2CppObject *)0x0) {
        pIVar4 = (Il2CppObject *)0x0;
        if (value->klass == g_data_184354e08) {
          pIVar4 = value;
        }
        if (pIVar4 == (Il2CppObject *)0x0) {
          return;
        }
        if ((value->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(value,g_data_184354e08);
        }
        il2cpp_object_unbox(value);
        pUVar1 = (__this->fields)._floatSlider;
        if (pUVar1 != (UnityEngine_UIElements_Slider_o *)0x0) {
          pUVar2 = pUVar1->klass;
          (*(pUVar2->vtable)._159_SetValueWithoutNotify.methodPtr)
                    (pUVar1,pUVar2,(pUVar2->vtable)._159_SetValueWithoutNotify.method);
          return;
        }
      }
      else {
        if ((value->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(value,g_data_184354e38);
        }
        il2cpp_object_unbox(value);
        pUVar1 = (__this->fields)._floatSlider;
        if (pUVar1 != (UnityEngine_UIElements_Slider_o *)0x0) {
          pUVar2 = pUVar1->klass;
          (*(pUVar2->vtable)._159_SetValueWithoutNotify.methodPtr)
                    (pUVar1,pUVar2,(pUVar2->vtable)._159_SetValueWithoutNotify.method);
          return;
        }
      }
label_18206895f:
      ThrowNullReferenceException();
    }
  }
  else if (value != (Il2CppObject *)0x0) {
    pIVar4 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e08) {
      pIVar4 = value;
    }
    if (pIVar4 == (Il2CppObject *)0x0) {
      pIVar4 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e38) {
        pIVar4 = value;
      }
      if (pIVar4 == (Il2CppObject *)0x0) {
        return;
      }
      if ((value->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(value,g_data_184354e38);
      }
      pfVar5 = il2cpp_object_unbox(value);
      pUVar3 = (__this->fields)._intSlider;
      if (pUVar3 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
        (*(pUVar3->klass->vtable)._159_SetValueWithoutNotify.methodPtr)
                  (pUVar3,(ulonglong)(uint)(int)*pfVar5,
                   (pUVar3->klass->vtable)._159_SetValueWithoutNotify.method);
        return;
      }
    }
    else {
      if ((value->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(value,g_data_184354e08);
      }
      puVar6 = il2cpp_object_unbox(value);
      pUVar3 = (__this->fields)._intSlider;
      if (pUVar3 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
        (*(pUVar3->klass->vtable)._159_SetValueWithoutNotify.methodPtr)
                  (pUVar3,(ulonglong)*puVar6,(pUVar3->klass->vtable)._159_SetValueWithoutNotify.method);
        return;
      }
    }
    goto label_18206895f;
  }
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicSliderBuiltin__get_ClassName (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x182068db0

System_String_o *
CustomLogic_CustomLogicSliderBuiltin__get_ClassName
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843465f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Slider");
    Il2CppMethodInitialized_1843465f2 = '\x01';
  }
  return "Slider";
}


// CustomLogic.CustomLogicSliderBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_IsAbstract (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicSliderBuiltin__get_IsAbstract(CustomLogic_CustomLogicSliderBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_IsStatic (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicSliderBuiltin__get_IsStatic(CustomLogic_CustomLogicSliderBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicSliderBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicSliderBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicSliderBuiltin$$<.ctor>b__4_0
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin____ctor_b__4_0 (CustomLogic_CustomLogicSliderBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_float__o* evt, const MethodInfo* method);
// 0x182068970

void CustomLogic_CustomLogicSliderBuiltin____ctor_b__4_0
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,
               UnityEngine_UIElements_ChangeEvent_float__o *evt,MethodInfo *method)

{
  undefined4 uVar1;
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined4 local_res10 [2];
  
  if (Il2CppMethodInitialized_1843465f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_ChangeEvent_float_get_newValue);
    Il2CppMethodInitialized_1843465f3 = '\x01';
  }
  if (evt == (UnityEngine_UIElements_ChangeEvent_float__o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = *(undefined4 *)&(evt->fields).field_0x5c;
  if (Il2CppMethodInitialized_1843465e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_1843465e8 = '\x01';
  }
  if ((__this->fields)._valueChangedEvent != (CustomLogic_UserMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    userMethod = (__this->fields)._valueChangedEvent;
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_res10[0] = uVar1;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res10);
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


// CustomLogic.CustomLogicSliderBuiltin$$<.ctor>b__5_0
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin____ctor_b__5_0 (CustomLogic_CustomLogicSliderBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_int__o* evt, const MethodInfo* method);
// 0x182068ad0

void CustomLogic_CustomLogicSliderBuiltin____ctor_b__5_0
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,UnityEngine_UIElements_ChangeEvent_int__o *evt,
               MethodInfo *method)

{
  undefined4 uVar1;
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined4 local_res10 [2];
  
  if (Il2CppMethodInitialized_1843465f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_ChangeEvent_int_get_newValue);
    Il2CppMethodInitialized_1843465f4 = '\x01';
  }
  if (evt == (UnityEngine_UIElements_ChangeEvent_int__o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = *(undefined4 *)&(evt->fields).field_0x5c;
  if (Il2CppMethodInitialized_1843465e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_1843465e9 = '\x01';
  }
  if ((__this->fields)._valueChangedEvent != (CustomLogic_UserMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    userMethod = (__this->fields)._valueChangedEvent;
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_res10[0] = uVar1;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res10);
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


