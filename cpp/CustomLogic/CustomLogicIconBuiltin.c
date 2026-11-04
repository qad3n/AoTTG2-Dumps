// Type: CustomLogic.CustomLogicIconBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicIconBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicIconBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicIconBuiltin_o* CustomLogic_CustomLogicIconBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182074bb0

CustomLogic_CustomLogicIconBuiltin_o *
CustomLogic_CustomLogicIconBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicIconBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicIconBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x18207b3c0

void CustomLogic_CustomLogicIconBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843465a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843465a3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicIconBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicIconBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetIcon>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicIconBuiltin_Bindings___c_____CreateMethodBinding__SetIcon_b__4_0 (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicIconBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182078d70

Il2CppObject *
CustomLogic_CustomLogicIconBuiltin_Bindings___c_____CreateMethodBinding__SetIcon_b__4_0
          (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicIconBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *iconPath;
  CustomLogic_CustomLogicIconBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_1843465a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465a4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    iconPath = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicIconBuiltin__SetIcon(__c,iconPath,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTintColor>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicIconBuiltin_Bindings___c_____CreateMethodBinding__SetTintColor_b__5_0 (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicIconBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182079e70

Il2CppObject *
CustomLogic_CustomLogicIconBuiltin_Bindings___c_____CreateMethodBinding__SetTintColor_b__5_0
          (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicIconBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Utility_Color255_o *__this_00;
  UnityEngine_UIElements_Image_o *__this_01;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar1;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_1843465a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465a5 = '\x01';
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
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if (((__c != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicColorBuiltin_o *)0x0)) &&
       (__this_00 = (pCVar1->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
      __this_01 = (__c->fields)._image;
      pUVar2 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_18,__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_UIElements_Image_o *)0x0) {
        local_18.r = (pUVar2->fields).r;
        local_18.g = (pUVar2->fields).g;
        local_18.b = (pUVar2->fields).b;
        local_18.a = (pUVar2->fields).a;
        UnityEngine_UIElements_Image__set_tintColor
                  (__this_01,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
        return (Il2CppObject *)__c;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicIconBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x18204b160

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicIconBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Func_CustomLogicIconBuiltin__object__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *__this_01;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this_02;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_03;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_04;
  MethodInfo *pMVar4;
  System_Func_CustomLogicIconBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_18434659b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"IconPath");
    il2cpp_codegen_initialize_runtime_metadata(&"SetTintColor");
    il2cpp_codegen_initialize_runtime_metadata(&"SetIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleMode");
    Il2CppMethodInitialized_18434659b = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"IconPath",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_18434659c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicIconBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__IconPath_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__IconPath_g____setter_2_1
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicIconBuiltin_object);
      Il2CppMethodInitialized_18434659c = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicIconBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__IconPath_g____getter_2_0
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicIconBuiltin_object)
    ;
    pMVar4 = 
    MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__IconPath_g____setter_2_1;
label_18204b27c:
    Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
              (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
               (System_Action_T__object__o *)__this_00,
               (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin_ctor);
    return (CustomLogic_ICLMemberBinding_o *)__this_01;
  }
  bVar2 = System_String__op_Equality(name,"ScaleMode",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_18434659d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicIconBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__ScaleMode_g____getter_3_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__ScaleMode_g____setter_3_1
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicIconBuiltin_object);
      Il2CppMethodInitialized_18434659d = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicIconBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__ScaleMode_g____getter_3_0
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicIconBuiltin_object)
    ;
    pMVar4 = 
    MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__ScaleMode_g____setter_3_1;
    goto label_18204b27c;
  }
  bVar2 = System_String__op_Equality(name,"SetIcon",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_18434659e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin)
      ;
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicIconBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c___CreateMethodBinding__SetIcon_b__4_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c);
      Il2CppMethodInitialized_18434659e = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c)
      ;
    }
    __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9__4_0;
    if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18204b5b0;
    if ((TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c)
      ;
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9;
    __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Func_CustomLogicIconBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this_02,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c___CreateMethodBinding__SetIcon_b__4_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicIconBuiltin__object____object__o *)__this_02;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9__4_0;
  }
  else {
    bVar2 = System_String__op_Equality(name,"SetTintColor",(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicIconBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_04,pSVar3,(MethodInfo *)0x0);
      pMVar4 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar4);
    }
    if ((TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_18434659f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin)
      ;
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicIconBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c___CreateMethodBinding__SetTintColor_b__5_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c);
      Il2CppMethodInitialized_18434659f = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c)
      ;
    }
    __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9__5_0;
    if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18204b5b0;
    if ((TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c)
      ;
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9;
    __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Func_CustomLogicIconBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this_02,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c___CreateMethodBinding__SetTintColor_b__5_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicIconBuiltin__object____object__o *)__this_02;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9__5_0;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this_02);
label_18204b5b0:
  __this_03 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_03,(System_String_o *)__this_02,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_03;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreatePropertyBinding__IconPath
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o* CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__IconPath (const MethodInfo* method);
// 0x182062320

CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *
CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__IconPath(MethodInfo *method)

{
  System_Func_CustomLogicIconBuiltin__object__o *__this;
  System_Action_CustomLogicIconBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434659c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicIconBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__IconPath_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__IconPath_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicIconBuiltin_object);
    Il2CppMethodInitialized_18434659c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicIconBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__IconPath_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicIconBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__IconPath_g____setter_2_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreatePropertyBinding__ScaleMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o* CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__ScaleMode (const MethodInfo* method);
// 0x1820630e0

CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *
CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__ScaleMode(MethodInfo *method)

{
  System_Func_CustomLogicIconBuiltin__object__o *__this;
  System_Action_CustomLogicIconBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434659d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicIconBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__ScaleMode_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__ScaleMode_g____setter_3_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicIconBuiltin_object);
    Il2CppMethodInitialized_18434659d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicIconBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__ScaleMode_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicIconBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__ScaleMode_g____setter_3_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreateMethodBinding__SetIcon
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o* CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetIcon (const MethodInfo* method);
// 0x18205db20

CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *
CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetIcon(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434659e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicIconBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c___CreateMethodBinding__SetIcon_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434659e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9__4_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicIconBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c___CreateMethodBinding__SetIcon_b__4_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicIconBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9__4_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreateMethodBinding__SetTintColor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o* CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetTintColor (const MethodInfo* method);
// 0x18205eea0

CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *
CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetTintColor(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434659f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicIconBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c___CreateMethodBinding__SetTintColor_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434659f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9__5_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicIconBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c___CreateMethodBinding__SetTintColor_b__5_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicIconBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9__5_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x182065810

void CustomLogic_CustomLogicIconBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843465a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"IconPath");
    il2cpp_codegen_initialize_runtime_metadata(&"SetTintColor");
    il2cpp_codegen_initialize_runtime_metadata(&"SetIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleMode");
    Il2CppMethodInitialized_1843465a0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IconPath",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ScaleMode",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetIcon",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetTintColor",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__IconPath>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__IconPath_g____getter_2_0 (CustomLogic_CustomLogicIconBuiltin_o* __i, const MethodInfo* method);
// 0x181f64640

Il2CppObject *
CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__IconPath_g____getter_2_0
          (CustomLogic_CustomLogicIconBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._currentIconPath;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__IconPath>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__IconPath_g____setter_2_1 (CustomLogic_CustomLogicIconBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182054d70

void CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__IconPath_g____setter_2_1
               (CustomLogic_CustomLogicIconBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  System_String_o *iconPath;
  
  if (Il2CppMethodInitialized_1843465a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465a1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iconPath = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
  ;
  if (__i != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
    CustomLogic_CustomLogicIconBuiltin__SetIcon(__i,iconPath,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__ScaleMode>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__ScaleMode_g____getter_3_0 (CustomLogic_CustomLogicIconBuiltin_o* __i, const MethodInfo* method);
// 0x182055af0

Il2CppObject *
CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__ScaleMode_g____getter_3_0
          (CustomLogic_CustomLogicIconBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *pUVar1;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._image, pUVar1 != (UnityEngine_UIElements_Image_o *)0x0)) {
    local_res8[0] = (pUVar1->fields).m_ScaleMode;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__ScaleMode>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__ScaleMode_g____setter_3_1 (CustomLogic_CustomLogicIconBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182055b30

void CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__ScaleMode_g____setter_3_1
               (CustomLogic_CustomLogicIconBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *__this;
  Il2CppType *handle;
  bool bVar1;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843465a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465a2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184346599 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_ScaleMode);
      Il2CppMethodInitialized_184346599 = '\x01';
    }
    handle = TypeRef_UnityEngine_ScaleMode;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    local_res8[0] = value;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e58);
    }
    bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      local_res8[0] = value;
      pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
      pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Invalid scale mode: {0}.");
      pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      System_ArgumentException___ctor_1a77cc0(__this_00,pSVar3,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicIconBuiltin_set_ScaleMode);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    __this = (__i->fields)._image;
    if (__this != (UnityEngine_UIElements_Image_o *)0x0) {
      UnityEngine_UIElements_Image__set_scaleMode(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicIconBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicIconBuiltin___ctor (CustomLogic_CustomLogicIconBuiltin_o* __this, UnityEngine_UIElements_Image_o* image, const MethodInfo* method);
// 0x182067470

void CustomLogic_CustomLogicIconBuiltin___ctor
               (CustomLogic_CustomLogicIconBuiltin_o *__this,UnityEngine_UIElements_Image_o *image,
               MethodInfo *method)

{
  System_String_o *value;
  
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)image,(MethodInfo *)0x0);
  (__this->fields)._image = image;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._image,image);
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._currentIconPath = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentIconPath,value);
  return;
}


// CustomLogic.CustomLogicIconBuiltin$$SetIcon
// il2cpp: CustomLogic_CustomLogicIconBuiltin_o* CustomLogic_CustomLogicIconBuiltin__SetIcon (CustomLogic_CustomLogicIconBuiltin_o* __this, System_String_o* iconPath, const MethodInfo* method);
// 0x1820671f0

CustomLogic_CustomLogicIconBuiltin_o *
CustomLogic_CustomLogicIconBuiltin__SetIcon
          (CustomLogic_CustomLogicIconBuiltin_o *__this,System_String_o *iconPath,MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *pUVar1;
  bool bVar2;
  UnityEngine_Texture_o *x;
  System_String_o *pSVar3;
  UnityEngine_Texture_o *value;
  
  if (Il2CppMethodInitialized_184346598 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Failed to load icon at path: ");
    Il2CppMethodInitialized_184346598 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(iconPath,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._image;
    if (pUVar1 == (UnityEngine_UIElements_Image_o *)0x0) {
label_182067406:
      ThrowNullReferenceException();
    }
    UnityEngine_UIElements_Image__set_image(pUVar1,(UnityEngine_Texture_o *)0x0,(MethodInfo *)0x0);
    iconPath = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    (__this->fields)._currentIconPath = iconPath;
label_182067354:
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentIconPath,iconPath);
    return __this;
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  bVar2 = Utility_Util__IsValidResourcePath(iconPath,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    x = (UnityEngine_Texture_o *)
        ApplicationManagers_ResourceManager__LoadAsset(pSVar3,iconPath,true,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((bVar2) && (x != (UnityEngine_Texture_o *)0x0)) {
      value = (UnityEngine_Texture_o *)0x0;
      if (x->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
        value = x;
      }
      if (value != (UnityEngine_Texture_o *)0x0) {
        pUVar1 = (__this->fields)._image;
        if (pUVar1 == (UnityEngine_UIElements_Image_o *)0x0) goto label_182067406;
        UnityEngine_UIElements_Image__set_image(pUVar1,value,(MethodInfo *)0x0);
        (__this->fields)._currentIconPath = iconPath;
        goto label_182067354;
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
  }
  pSVar3 = System_String__Concat_1969e50("Failed to load icon at path: ",iconPath,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicIconBuiltin$$get_IconPath
// il2cpp: System_String_o* CustomLogic_CustomLogicIconBuiltin__get_IconPath (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x18058a6f0

System_String_o*
CustomLogic_CustomLogicIconBuiltin__get_IconPath(CustomLogic_CustomLogicIconBuiltin_o* __this, MethodInfo* method)

{
  return (Unity_IntegerTime_DiscreteTime_o)
         (Unity_IntegerTime_DiscreteTime_Fields)(__this->fields)._currentIconPath.fields.Value;
}


// CustomLogic.CustomLogicIconBuiltin$$set_IconPath
// il2cpp: void CustomLogic_CustomLogicIconBuiltin__set_IconPath (CustomLogic_CustomLogicIconBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182067510

void CustomLogic_CustomLogicIconBuiltin__set_IconPath
               (CustomLogic_CustomLogicIconBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  CustomLogic_CustomLogicIconBuiltin__SetIcon(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicIconBuiltin$$SetTintColor
// il2cpp: CustomLogic_CustomLogicIconBuiltin_o* CustomLogic_CustomLogicIconBuiltin__SetTintColor (CustomLogic_CustomLogicIconBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x182067410

CustomLogic_CustomLogicIconBuiltin_o *
CustomLogic_CustomLogicIconBuiltin__SetTintColor
          (CustomLogic_CustomLogicIconBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *color,
          MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  UnityEngine_UIElements_Image_o *__this_01;
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Color_Fields local_18;
  
  if ((color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (__this_00 = (color->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
    __this_01 = (__this->fields)._image;
    pUVar1 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_18,__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_UIElements_Image_o *)0x0) {
      local_18.r = (pUVar1->fields).r;
      local_18.g = (pUVar1->fields).g;
      local_18.b = (pUVar1->fields).b;
      local_18.a = (pUVar1->fields).a;
      UnityEngine_UIElements_Image__set_tintColor
                (__this_01,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicIconBuiltin$$get_ScaleMode
// il2cpp: int32_t CustomLogic_CustomLogicIconBuiltin__get_ScaleMode (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x1820674f0

int32_t CustomLogic_CustomLogicIconBuiltin__get_ScaleMode
                  (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *pUVar1;
  
  pUVar1 = (__this->fields)._image;
  if (pUVar1 != (UnityEngine_UIElements_Image_o *)0x0) {
    return (pUVar1->fields).m_ScaleMode;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicIconBuiltin$$set_ScaleMode
// il2cpp: void CustomLogic_CustomLogicIconBuiltin__set_ScaleMode (CustomLogic_CustomLogicIconBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x182067520

void CustomLogic_CustomLogicIconBuiltin__set_ScaleMode
               (CustomLogic_CustomLogicIconBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *__this_00;
  Il2CppType *handle;
  bool bVar1;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  int32_t local_res10 [6];
  
  if (Il2CppMethodInitialized_184346599 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_ScaleMode);
    Il2CppMethodInitialized_184346599 = '\x01';
  }
  handle = TypeRef_UnityEngine_ScaleMode;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  local_res10[0] = value;
  pIVar2 = il2cpp_value_box(g_data_184354e08,local_res10);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._image;
    if (__this_00 != (UnityEngine_UIElements_Image_o *)0x0) {
      UnityEngine_UIElements_Image__set_scaleMode(__this_00,value,(MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  local_res10[0] = value;
  pIVar2 = il2cpp_value_box(g_data_184354e08,local_res10);
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Invalid scale mode: {0}.");
  pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this_01,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicIconBuiltin_set_ScaleMode);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// CustomLogic.CustomLogicIconBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicIconBuiltin__get_ClassName (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x1820674c0

System_String_o *
CustomLogic_CustomLogicIconBuiltin__get_ClassName
          (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434659a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    Il2CppMethodInitialized_18434659a = '\x01';
  }
  return "Icon";
}


// CustomLogic.CustomLogicIconBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicIconBuiltin__get_IsAbstract (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicIconBuiltin__get_IsAbstract(CustomLogic_CustomLogicIconBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicIconBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicIconBuiltin__get_IsStatic (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicIconBuiltin__get_IsStatic(CustomLogic_CustomLogicIconBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicIconBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicIconBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicIconBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicIconBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


