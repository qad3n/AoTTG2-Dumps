// Type: CustomLogic.CustomLogicButtonBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicButtonBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicButtonBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicButtonBuiltin_o* CustomLogic_CustomLogicButtonBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182074760

CustomLogic_CustomLogicButtonBuiltin_o *
CustomLogic_CustomLogicButtonBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicButtonBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x18207b200

void CustomLogic_CustomLogicButtonBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184346572 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346572 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicButtonBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnClick>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicButtonBuiltin_Bindings___c_____CreateMethodBinding__OnClick_b__4_0 (CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicButtonBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182077db0

Il2CppObject *
CustomLogic_CustomLogicButtonBuiltin_Bindings___c_____CreateMethodBinding__OnClick_b__4_0
          (CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicButtonBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *value;
  
  if (Il2CppMethodInitialized_184346573 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346573 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) {
      (__c->fields)._clickEvent = value;
      Il2CppCodeGenWriteBarrier(&(__c->fields)._clickEvent,value);
      return (Il2CppObject *)__c;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicButtonBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x1820494d0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicButtonBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *object;
  bool bVar1;
  System_Func_CustomLogicButtonBuiltin__object__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *__this_01;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this_02;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_03;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_04;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_18434656b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"OnClick");
    il2cpp_codegen_initialize_runtime_metadata(&"EnableRichText");
    Il2CppMethodInitialized_18434656b = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Text",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings)
      ;
    }
    if (Il2CppMethodInitialized_18434656c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicButtonBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_2_1
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicButtonBuiltin_object);
      Il2CppMethodInitialized_18434656c = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicButtonBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_2_0
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicButtonBuiltin_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_2_1;
  }
  else {
    bVar1 = System_String__op_Equality(name,"EnableRichText",(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__op_Equality(name,"OnClick",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434656e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicButtonBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c___CreateMethodBinding__OnClick_b__4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434656e = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->static_fields->__9__4_0;
        if (__this_02 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c);
          }
          object = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->static_fields->__9;
          __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicButtonBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_02,object,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c___CreateMethodBinding__OnClick_b__4_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->static_fields->__9__4_0 =
               (System_Func_CustomLogicButtonBuiltin__object____object__o *)__this_02;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->static_fields->__9__4_0,
                     __this_02);
        }
        __this_03 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (__this_03,(System_String_o *)__this_02,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)__this_03;
      }
      pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicButtonBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_04,pSVar2,(MethodInfo *)0x0);
      pMVar3 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar3);
    }
    if ((TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings)
      ;
    }
    if (Il2CppMethodInitialized_18434656d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicButtonBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____gette
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____sette
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicButtonBuiltin_object);
      Il2CppMethodInitialized_18434656d = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicButtonBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____gette
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicButtonBuiltin_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____sette
    ;
  }
  System_Action_object__object____ctor
            (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_01;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$__CreatePropertyBinding__Text
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o* CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__Text (const MethodInfo* method);
// 0x182063590

CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *
CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__Text(MethodInfo *method)

{
  System_Func_CustomLogicButtonBuiltin__object__o *__this;
  System_Action_CustomLogicButtonBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434656c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicButtonBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicButtonBuiltin_object);
    Il2CppMethodInitialized_18434656c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicButtonBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicButtonBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_2_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$__CreatePropertyBinding__EnableRichText
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o* CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__EnableRichText (const MethodInfo* method);
// 0x182061bf0

CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *
CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__EnableRichText(MethodInfo *method)

{
  System_Func_CustomLogicButtonBuiltin__object__o *__this;
  System_Action_CustomLogicButtonBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434656d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicButtonBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicButtonBuiltin_object);
    Il2CppMethodInitialized_18434656d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicButtonBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicButtonBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$__CreateMethodBinding__OnClick
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin__o* CustomLogic_CustomLogicButtonBuiltin_Bindings____CreateMethodBinding__OnClick (const MethodInfo* method);
// 0x18205b520

CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin__o *
CustomLogic_CustomLogicButtonBuiltin_Bindings____CreateMethodBinding__OnClick(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434656e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicButtonBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c___CreateMethodBinding__OnClick_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434656e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->static_fields->__9__4_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicButtonBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c___CreateMethodBinding__OnClick_b__4_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicButtonBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->static_fields->__9__4_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x182066280

void CustomLogic_CustomLogicButtonBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434656f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"OnClick");
    il2cpp_codegen_initialize_runtime_metadata(&"EnableRichText");
    Il2CppMethodInitialized_18434656f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Text",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EnableRichText",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OnClick",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_2_0 (CustomLogic_CustomLogicButtonBuiltin_o* __i, const MethodInfo* method);
// 0x1820561e0

Il2CppObject*
CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_2_0(CustomLogic_CustomLogicButtonBuiltin_o* __i, MethodInfo* method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  System_String_o *pSVar2;
  
  if ((__i != (CustomLogic_CustomLogicLabelBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._label, pUVar1 != (UnityEngine_UIElements_Label_o *)0x0)) {
    pSVar2 = (*(pUVar1->klass->vtable)._211_get_text.methodPtr)
                       (pUVar1,(pUVar1->klass->vtable)._211_get_text.method);
    return (Il2CppObject *)pSVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_2_1 (CustomLogic_CustomLogicButtonBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x1820562d0

void CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_2_1
               (CustomLogic_CustomLogicButtonBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *pUVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184346570 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346570 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._button, pUVar1 != (UnityEngine_UIElements_Button_o *)0x0)) {
    (*(pUVar1->klass->vtable)._212_set_text.methodPtr)
              (pUVar1,pSVar2,(pUVar1->klass->vtable)._212_set_text.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____getter_3_0 (CustomLogic_CustomLogicButtonBuiltin_o* __i, const MethodInfo* method);
// 0x1820545f0

Il2CppObject*
CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____getter_3_0(CustomLogic_CustomLogicButtonBuiltin_o* __i, MethodInfo* method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicLabelBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._label, pUVar1 != (UnityEngine_UIElements_Label_o *)0x0)) {
    local_res8[0] = (pUVar1->fields).m_EnableRichText;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____setter_3_1 (CustomLogic_CustomLogicButtonBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182054630

void CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____setter_3_1
               (CustomLogic_CustomLogicButtonBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_184346571 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346571 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) &&
     (__this = (__i->fields)._button, __this != (UnityEngine_UIElements_Button_o *)0x0)) {
    UnityEngine_UIElements_TextElement__set_enableRichText
              ((UnityEngine_UIElements_TextElement_o *)__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicButtonBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin___ctor (CustomLogic_CustomLogicButtonBuiltin_o* __this, UnityEngine_UIElements_Button_o* button, const MethodInfo* method);
// 0x182066410

void CustomLogic_CustomLogicButtonBuiltin___ctor
               (CustomLogic_CustomLogicButtonBuiltin_o *__this,UnityEngine_UIElements_Button_o *button,
               MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *__this_01;
  System_Action_o *__this_02;
  
  if (Il2CppMethodInitialized_184346568 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicButtonBuiltin_OnClick);
    Il2CppMethodInitialized_184346568 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)button,(MethodInfo *)0x0);
  (__this->fields)._button = button;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._button,button);
  __this_00 = (__this->fields)._button;
  if (__this_00 != (UnityEngine_UIElements_Button_o *)0x0) {
    __this_01 = UnityEngine_UIElements_PopupWindow__get_contentContainer
                          ((UnityEngine_UIElements_PopupWindow_o *)__this_00,(MethodInfo *)0x0);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_CustomLogic_CustomLogicButtonBuiltin_OnClick,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_UIElements_VisualElement_o *)0x0) {
      UnityEngine_UIElements_Clickable__add_clicked
                ((UnityEngine_UIElements_Clickable_o *)__this_01,__this_02,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicButtonBuiltin$$OnClick
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin__OnClick (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x182066390

void CustomLogic_CustomLogicButtonBuiltin__OnClick
               (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  
  if (Il2CppMethodInitialized_184346569 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346569 = '\x01';
  }
  if ((__this->fields)._clickEvent == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
              (__this_00,(__this->fields)._clickEvent,(System_Object_array *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicButtonBuiltin$$get_Text
// il2cpp: System_String_o* CustomLogic_CustomLogicButtonBuiltin__get_Text (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x182066520

System_String_o*
CustomLogic_CustomLogicButtonBuiltin__get_Text(CustomLogic_CustomLogicButtonBuiltin_o* __this, MethodInfo* method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  System_String_o *pSVar2;
  
  pUVar1 = (__this->fields)._button;
  if (pUVar1 != (UnityEngine_UIElements_Label_o *)0x0) {
    pSVar2 = (*(pUVar1->klass->vtable)._211_get_text.methodPtr)
                       (pUVar1,(pUVar1->klass->vtable)._211_get_text.method);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicButtonBuiltin$$set_Text
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin__set_Text (CustomLogic_CustomLogicButtonBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182066570

void
CustomLogic_CustomLogicButtonBuiltin__set_Text(CustomLogic_CustomLogicButtonBuiltin_o* __this, System_String_o* value, MethodInfo* method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  
  pUVar1 = (__this->fields)._button;
  if (pUVar1 != (UnityEngine_UIElements_Label_o *)0x0) {
    (*(pUVar1->klass->vtable)._212_set_text.methodPtr)
              (pUVar1,value,(pUVar1->klass->vtable)._212_set_text.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicButtonBuiltin$$get_EnableRichText
// il2cpp: bool CustomLogic_CustomLogicButtonBuiltin__get_EnableRichText (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x182066500

bool
CustomLogic_CustomLogicButtonBuiltin__get_EnableRichText(CustomLogic_CustomLogicButtonBuiltin_o* __this, MethodInfo* method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  
  pUVar1 = (__this->fields)._button;
  if (pUVar1 != (UnityEngine_UIElements_Label_o *)0x0) {
    return (pUVar1->fields).m_EnableRichText;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicButtonBuiltin$$set_EnableRichText
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin__set_EnableRichText (CustomLogic_CustomLogicButtonBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x182066550

void
CustomLogic_CustomLogicButtonBuiltin__set_EnableRichText(CustomLogic_CustomLogicButtonBuiltin_o* __this, bool value, MethodInfo* method)

{
  UnityEngine_UIElements_TextElement_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_TextElement_o *)(__this->fields)._button;
  if (__this_00 != (UnityEngine_UIElements_TextElement_o *)0x0) {
    UnityEngine_UIElements_TextElement__set_enableRichText(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicButtonBuiltin$$OnClick
// il2cpp: CustomLogic_CustomLogicButtonBuiltin_o* CustomLogic_CustomLogicButtonBuiltin__OnClick (CustomLogic_CustomLogicButtonBuiltin_o* __this, CustomLogic_UserMethod_o* clickEvent, const MethodInfo* method);
// 0x18055deb0

CustomLogic_CustomLogicButtonBuiltin_o*
CustomLogic_CustomLogicButtonBuiltin__OnClick(CustomLogic_CustomLogicButtonBuiltin_o* __this, CustomLogic_UserMethod_o* clickEvent, MethodInfo* method)

{
  (__this->fields)._clickEvent = action;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._clickEvent,action);
  return __this;
}


// CustomLogic.CustomLogicButtonBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicButtonBuiltin__get_ClassName (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x1820664d0

System_String_o *
CustomLogic_CustomLogicButtonBuiltin__get_ClassName
          (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434656a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    Il2CppMethodInitialized_18434656a = '\x01';
  }
  return "Button";
}


// CustomLogic.CustomLogicButtonBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicButtonBuiltin__get_IsAbstract (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicButtonBuiltin__get_IsAbstract(CustomLogic_CustomLogicButtonBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicButtonBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicButtonBuiltin__get_IsStatic (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicButtonBuiltin__get_IsStatic(CustomLogic_CustomLogicButtonBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicButtonBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicButtonBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicButtonBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicButtonBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


