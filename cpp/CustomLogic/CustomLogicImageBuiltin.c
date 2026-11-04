// Type: CustomLogic.CustomLogicImageBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicImageBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicImageBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicImageBuiltin_o* CustomLogic_CustomLogicImageBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182074480

CustomLogic_CustomLogicImageBuiltin_o *
CustomLogic_CustomLogicImageBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicImageBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843465a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicImageBuiltin);
    Il2CppMethodInitialized_1843465a9 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicImageBuiltin);
      CustomLogic_CustomLogicImageBuiltin___ctor(__this,(MethodInfo *)0x0);
      return __this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicImageBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicImageBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicImageBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicImageBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x18207b580

void CustomLogic_CustomLogicImageBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicImageBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843465af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843465af = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicImageBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicImageBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicImageBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicImageBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetImage>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicImageBuiltin_Bindings___c_____CreateMethodBinding__SetImage_b__3_0 (CustomLogic_CustomLogicImageBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicImageBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182078e10

Il2CppObject *
CustomLogic_CustomLogicImageBuiltin_Bindings___c_____CreateMethodBinding__SetImage_b__3_0
          (CustomLogic_CustomLogicImageBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicImageBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *imagePath;
  CustomLogic_CustomLogicImageBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_1843465b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465b0 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    imagePath = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicImageBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicImageBuiltin__SetImage(__c,imagePath,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicImageBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x18204b650

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicImageBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *object;
  bool bVar1;
  System_Func_CustomLogicImageBuiltin__object__o *__this;
  System_Action_CustomLogicImageBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin__o *__this_01;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this_02;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_03;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_04;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_1843465aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"ImagePath");
    il2cpp_codegen_initialize_runtime_metadata(&"SetImage");
    Il2CppMethodInitialized_1843465aa = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"ImagePath",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843465ab == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicImageBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings___CreatePropertyBinding__ImagePath_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings___CreatePropertyBinding__ImagePath_g____setter_2_1
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicImageBuiltin_object);
      Il2CppMethodInitialized_1843465ab = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicImageBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings___CreatePropertyBinding__ImagePath_g____getter_2_0
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicImageBuiltin_object);
    System_Action_object__object____ctor
              ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
               (Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings___CreatePropertyBinding__ImagePath_g____setter_2_1
               ,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
               (System_Action_T__object__o *)__this_00,
               (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin_ctor);
    return (CustomLogic_ICLMemberBinding_o *)__this_01;
  }
  bVar1 = System_String__op_Equality(name,"SetImage",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843465ac == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicImageBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicImageBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicImageBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c___CreateMethodBinding__SetImage_b__3_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c);
      Il2CppMethodInitialized_1843465ac = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c);
    }
    __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->static_fields->__9__3_0;
    if (__this_02 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
      if ((TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c);
      }
      object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->static_fields->__9;
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicImageBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_02,object,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c___CreateMethodBinding__SetImage_b__3_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->static_fields->__9__3_0 =
           (System_Func_CustomLogicImageBuiltin__object____object__o *)__this_02;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->static_fields->__9__3_0,__this_02);
    }
    __this_03 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicImageBuiltin);
    CustomLogic_CLMethodBinding_object____ctor
              (__this_03,(System_String_o *)__this_02,
               MethodInfo_CustomLogic_CLMethodBinding_CustomLogicImageBuiltin_ctor);
    return (CustomLogic_ICLMemberBinding_o *)__this_03;
  }
  pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicImageBuiltin not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_04,pSVar2,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,lastManagedFrame);
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$__CreatePropertyBinding__ImagePath
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin__o* CustomLogic_CustomLogicImageBuiltin_Bindings____CreatePropertyBinding__ImagePath (const MethodInfo* method);
// 0x182062410

CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin__o *
CustomLogic_CustomLogicImageBuiltin_Bindings____CreatePropertyBinding__ImagePath(MethodInfo *method)

{
  System_Func_CustomLogicImageBuiltin__object__o *__this;
  System_Action_CustomLogicImageBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843465ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicImageBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings___CreatePropertyBinding__ImagePath_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings___CreatePropertyBinding__ImagePath_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicImageBuiltin_object);
    Il2CppMethodInitialized_1843465ab = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicImageBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings___CreatePropertyBinding__ImagePath_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicImageBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings___CreatePropertyBinding__ImagePath_g____setter_2_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$__CreateMethodBinding__SetImage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicImageBuiltin__o* CustomLogic_CustomLogicImageBuiltin_Bindings____CreateMethodBinding__SetImage (const MethodInfo* method);
// 0x18205dc40

CustomLogic_CLMethodBinding_CustomLogicImageBuiltin__o *
CustomLogic_CustomLogicImageBuiltin_Bindings____CreateMethodBinding__SetImage(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843465ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicImageBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicImageBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicImageBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c___CreateMethodBinding__SetImage_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843465ac = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->static_fields->__9__3_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicImageBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c___CreateMethodBinding__SetImage_b__3_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicImageBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->static_fields->__9__3_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicImageBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicImageBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicImageBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicImageBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x1820661a0

void CustomLogic_CustomLogicImageBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843465ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"ImagePath");
    il2cpp_codegen_initialize_runtime_metadata(&"SetImage");
    Il2CppMethodInitialized_1843465ad = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ImagePath",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetImage",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$<__CreatePropertyBinding__ImagePath>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicImageBuiltin_Bindings_____CreatePropertyBinding__ImagePath_g____getter_2_0 (CustomLogic_CustomLogicImageBuiltin_o* __i, const MethodInfo* method);
// 0x181fa29b0

Il2CppObject *
CustomLogic_CustomLogicImageBuiltin_Bindings_____CreatePropertyBinding__ImagePath_g____getter_2_0
          (CustomLogic_CustomLogicImageBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicImageBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields)._currentImagePath;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$<__CreatePropertyBinding__ImagePath>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicImageBuiltin_Bindings_____CreatePropertyBinding__ImagePath_g____setter_2_1 (CustomLogic_CustomLogicImageBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182054df0

void CustomLogic_CustomLogicImageBuiltin_Bindings_____CreatePropertyBinding__ImagePath_g____setter_2_1
               (CustomLogic_CustomLogicImageBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  System_String_o *imagePath;
  
  if (Il2CppMethodInitialized_1843465ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465ae = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  imagePath = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                        );
  if (__i != (CustomLogic_CustomLogicImageBuiltin_o *)0x0) {
    CustomLogic_CustomLogicImageBuiltin__SetImage(__i,imagePath,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicImageBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicImageBuiltin___ctor (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x1820678b0

void CustomLogic_CustomLogicImageBuiltin___ctor
               (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  System_String_o *value;
  
  if (Il2CppMethodInitialized_1843465a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843465a6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._currentImagePath = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentImagePath,value);
  (__this->fields)._currentTexture = (UnityEngine_Texture2D_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentTexture,(void *)0x0);
  return;
}


// CustomLogic.CustomLogicImageBuiltin$$SetImage
// il2cpp: CustomLogic_CustomLogicImageBuiltin_o* CustomLogic_CustomLogicImageBuiltin__SetImage (CustomLogic_CustomLogicImageBuiltin_o* __this, System_String_o* imagePath, const MethodInfo* method);
// 0x182067650

CustomLogic_CustomLogicImageBuiltin_o *
CustomLogic_CustomLogicImageBuiltin__SetImage
          (CustomLogic_CustomLogicImageBuiltin_o *__this,System_String_o *imagePath,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Texture2D_o *x;
  System_String_o *pSVar2;
  UnityEngine_Texture2D_o *value;
  
  if (Il2CppMethodInitialized_1843465a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Failed to load image at path: ");
    Il2CppMethodInitialized_1843465a7 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(imagePath,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    (__this->fields)._currentImagePath = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentImagePath,pSVar2);
    (__this->fields)._currentTexture = (UnityEngine_Texture2D_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentTexture,(void *)0x0);
    return __this;
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  bVar1 = Utility_Util__IsValidResourcePath(imagePath,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    x = (UnityEngine_Texture2D_o *)
        ApplicationManagers_ResourceManager__LoadAsset(pSVar2,imagePath,true,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((bVar1) && (x != (UnityEngine_Texture2D_o *)0x0)) {
      value = (UnityEngine_Texture2D_o *)0x0;
      if (x->klass == TypeInfo_UnityEngine_Texture2D) {
        value = x;
      }
      if (value != (UnityEngine_Texture2D_o *)0x0) {
        (__this->fields)._currentTexture = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._currentTexture,value);
        (__this->fields)._currentImagePath = imagePath;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._currentImagePath,imagePath);
        return __this;
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    pSVar2 = System_String__Concat_1969e50("Failed to load image at path: ",imagePath,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    return __this;
  }
  pSVar2 = System_String__Concat_1969e50("Failed to load image at path: ",imagePath,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicImageBuiltin$$get_ImagePath
// il2cpp: System_String_o* CustomLogic_CustomLogicImageBuiltin__get_ImagePath (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x1805853f0

System_String_o*
CustomLogic_CustomLogicImageBuiltin__get_ImagePath(CustomLogic_CustomLogicImageBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields)._currentImagePath;
}


// CustomLogic.CustomLogicImageBuiltin$$set_ImagePath
// il2cpp: void CustomLogic_CustomLogicImageBuiltin__set_ImagePath (CustomLogic_CustomLogicImageBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182067960

void CustomLogic_CustomLogicImageBuiltin__set_ImagePath
               (CustomLogic_CustomLogicImageBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  CustomLogic_CustomLogicImageBuiltin__SetImage(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicImageBuiltin$$GetTexture
// il2cpp: UnityEngine_Texture2D_o* CustomLogic_CustomLogicImageBuiltin__GetTexture (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x180c8eec0

UnityEngine_Texture2D_o*
CustomLogic_CustomLogicImageBuiltin__GetTexture(CustomLogic_CustomLogicImageBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields)._currentTexture;
}


// CustomLogic.CustomLogicImageBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicImageBuiltin__get_ClassName (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x182067930

System_String_o *
CustomLogic_CustomLogicImageBuiltin__get_ClassName
          (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843465a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    Il2CppMethodInitialized_1843465a8 = '\x01';
  }
  return "Image";
}


// CustomLogic.CustomLogicImageBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicImageBuiltin__get_IsAbstract (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicImageBuiltin__get_IsAbstract(CustomLogic_CustomLogicImageBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicImageBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicImageBuiltin__get_IsStatic (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicImageBuiltin__get_IsStatic(CustomLogic_CustomLogicImageBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicImageBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicImageBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicImageBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicImageBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


