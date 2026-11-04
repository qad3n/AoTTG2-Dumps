// Type: CustomLogic.CustomLogicJsonBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicJsonBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicJsonBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicJsonBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicJsonBuiltin_o* CustomLogic_CustomLogicJsonBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x1820ab400

CustomLogic_CustomLogicJsonBuiltin_o *
CustomLogic_CustomLogicJsonBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843467f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicJsonBuiltin);
    Il2CppMethodInitialized_1843467f9 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin);
      if (Il2CppMethodInitialized_1843467f5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843467f5 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicJsonBuiltin_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicJsonBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicJsonBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x1820b4ff0

void CustomLogic_CustomLogicJsonBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843467fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843467fe = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicJsonBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicJsonBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$<__CreateMethodBinding__LoadFromString>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJsonBuiltin_Bindings___c_____CreateMethodBinding__LoadFromString_b__2_0 (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicJsonBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b0040

Il2CppObject *
CustomLogic_CustomLogicJsonBuiltin_Bindings___c_____CreateMethodBinding__LoadFromString_b__2_0
          (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicJsonBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *json;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843467ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843467ff = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      json = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar1,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      pIVar1 = CustomLogic_CustomLogicJsonBuiltin__LoadFromString(json,(MethodInfo *)0x0);
      return pIVar1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$<__CreateMethodBinding__SaveToString>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJsonBuiltin_Bindings___c_____CreateMethodBinding__SaveToString_b__3_0 (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicJsonBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b2b60

Il2CppObject *
CustomLogic_CustomLogicJsonBuiltin_Bindings___c_____CreateMethodBinding__SaveToString_b__3_0
          (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicJsonBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *pSVar2;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar1 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON(__a->m_Items[0],(MethodInfo *)0x0);
    if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar2 = (*(pSVar1->klass->vtable)._30_ToString.methodPtr)
                         (pSVar1,4,(pSVar1->klass->vtable)._30_ToString.method);
      return (Il2CppObject *)pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicJsonBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x182090ab0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicJsonBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *lastManagedFrame;
  System_Func_CustomLogicJsonBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_1843467fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadFromString");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveToString");
    Il2CppMethodInitialized_1843467fa = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"LoadFromString",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843467fb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin)
      ;
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicJsonBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c___CreateMethodBinding__LoadFromString_b__2_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c);
      Il2CppMethodInitialized_1843467fb = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c)
      ;
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9__2_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182090d1d;
    if ((TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c)
      ;
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicJsonBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c___CreateMethodBinding__LoadFromString_b__2_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicJsonBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9__2_0;
  }
  else {
    bVar2 = System_String__op_Equality(name,"SaveToString",(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicJsonBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
    }
    if ((TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843467fc == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin)
      ;
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicJsonBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c___CreateMethodBinding__SaveToString_b__3_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c);
      Il2CppMethodInitialized_1843467fc = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c)
      ;
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9__3_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182090d1d;
    if ((TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c)
      ;
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicJsonBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c___CreateMethodBinding__SaveToString_b__3_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicJsonBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9__3_0;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_182090d1d:
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings$$__CreateMethodBinding__LoadFromString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o* CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__LoadFromString (const MethodInfo* method);
// 0x182097010

CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *
CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__LoadFromString(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843467fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicJsonBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c___CreateMethodBinding__LoadFromString_b__2_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843467fb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9__2_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicJsonBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c___CreateMethodBinding__LoadFromString_b__2_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicJsonBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9__2_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings$$__CreateMethodBinding__SaveToString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o* CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__SaveToString (const MethodInfo* method);
// 0x182098810

CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *
CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__SaveToString(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843467fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicJsonBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c___CreateMethodBinding__SaveToString_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843467fc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9__3_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicJsonBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c___CreateMethodBinding__SaveToString_b__3_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicJsonBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings_c->static_fields->__9__3_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicJsonBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x18209ada0

void CustomLogic_CustomLogicJsonBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843467fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadFromString");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveToString");
    Il2CppMethodInitialized_1843467fd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LoadFromString",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SaveToString",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicJsonBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicJsonBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicJsonBuiltin___ctor (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x1820a1890

void CustomLogic_CustomLogicJsonBuiltin___ctor
               (CustomLogic_CustomLogicJsonBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843467f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843467f5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicJsonBuiltin$$LoadFromString
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJsonBuiltin__LoadFromString (System_String_o* json, const MethodInfo* method);
// 0x1820a0190
// eh: try 0x1820a01af..0x1820a01ec -> pad 0x183332080 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 57 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820a01b9: lea rcx, [rip + 0x20104f0]  ; TypeInfo_SimpleJSONFixed_JSONString
// asm:   0x1820a01c0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820a01c5: mov rcx, rax
// asm:   0x1820a01c8: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x1820a01cd: mov rbx, rax
// asm:   0x1820a01d0: xor r8d, r8d
// asm:   0x1820a01d3: mov rdx, qword ptr [rsp + 0x50]
// asm:   0x1820a01d8: mov rcx, rax
// asm:   0x1820a01db: call 0x181dc7080  ; SimpleJSONFixed_JSONString___ctor()
// asm:   0x1820a01e0: nop 
// asm:   0x1820a01ee: xor eax, eax
// asm:   0x183332080: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183332085: push rbx
// asm:   0x183332086: push rbp
// asm:   0x183332087: sub rsp, 0x28
// asm:   0x18333208b: mov rbp, rdx
// asm:   0x18333208e: mov rbx, qword ptr [rbp + 0x30]
// asm:   0x183332092: mov rdx, qword ptr [rbx]
// asm:   0x183332095: mov rdx, qword ptr [rdx]
// asm:   0x183332098: mov rcx, qword ptr [rip + 0x1022d31]
// asm:   0x18333209f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833320a4: test al, al
// asm:   0x1833320a6: je 0x1833320b4
// asm:   0x1833320a8: movabs rax, 0
// asm:   0x1833320b2: jmp 0x1833320cc
// asm:   0x1833320b4: mov rax, qword ptr [rbx]
// asm:   0x1833320b7: mov qword ptr [rbp + 0x28], rax
// asm:   0x1833320bb: lea rdx, [rip + 0xca9ec6]
// asm:   0x1833320c2: lea rcx, [rbp + 0x28]
// asm:   0x1833320c6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833320cc: add rsp, 0x28
// asm:   0x1833320d0: pop rbp
// asm:   0x1833320d1: pop rbx
// asm:   0x1833320d2: ret 
// asm:   0x18333ddf0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333ddf5: push rbx
// asm:   0x18333ddf6: push rbp
// asm:   0x18333ddf7: sub rsp, 0x28
// asm:   0x18333ddfb: mov rbp, rdx
// asm:   0x18333ddfe: mov rbx, qword ptr [rbp + 0x38]
// asm:   0x18333de02: mov rdx, qword ptr [rbx]
// asm:   0x18333de05: mov rdx, qword ptr [rdx]
// asm:   0x18333de08: mov rcx, qword ptr [rip + 0x1016fc1]
// asm:   0x18333de0f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333de14: test al, al
// asm:   0x18333de16: je 0x18333de24
// asm:   0x18333de18: movabs rax, 0
// asm:   0x18333de22: jmp 0x18333de3c
// asm:   0x18333de24: mov rax, qword ptr [rbx]
// asm:   0x18333de27: mov qword ptr [rbp + 0x20], rax
// asm:   0x18333de2b: lea rdx, [rip + 0xc9e156]
// asm:   0x18333de32: lea rcx, [rbp + 0x20]
// asm:   0x18333de36: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333de3c: add rsp, 0x28
// asm:   0x18333de40: pop rbp
// asm:   0x18333de41: pop rbx
// asm:   0x18333de42: ret 

Il2CppObject * CustomLogic_CustomLogicJsonBuiltin__LoadFromString(System_String_o *json,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *json_00;
  Il2CppObject *pIVar1;
  
  if (json != (System_String_o *)0x0) {
    System_String__Trim(json,(MethodInfo *)0x0);
    json_00 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
    pIVar1 = CustomLogic_CustomLogicJsonBuiltin__LoadJSON(json_00,(MethodInfo *)0x0);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicJsonBuiltin$$SaveToString
// il2cpp: System_String_o* CustomLogic_CustomLogicJsonBuiltin__SaveToString (Il2CppObject* obj, const MethodInfo* method);
// 0x1820a1850

System_String_o * CustomLogic_CustomLogicJsonBuiltin__SaveToString(Il2CppObject *obj,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *pSVar2;
  
  pSVar1 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON(obj,(MethodInfo *)0x0);
  if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(pSVar1->klass->vtable)._30_ToString.methodPtr)
                       (pSVar1,4,(pSVar1->klass->vtable)._30_ToString.method);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicJsonBuiltin$$LoadJSON
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJsonBuiltin__LoadJSON (SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x1820a0200
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820a09bd: mov rax, rsi
// asm:   0x1820a09c0: jmp 0x1820a07d0
// asm:   0x1820a0a68: nop dword ptr [rax + rax]
// asm:   0x1820a0b05: mov rax, rdi
// asm:   0x1820a0b08: jmp 0x1820a07d0

Il2CppObject *
CustomLogic_CustomLogicJsonBuiltin__LoadJSON(SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *a;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Object_array *pSVar3;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar4;
  bool bVar5;
  int32_t iVar6;
  int32_t tryEnd;
  int32_t finallyStart;
  int32_t finallyEnd;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  Utility_Color255_o *value;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  CustomLogic_CustomLogicDictBuiltin_o *__this_03;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o *pSVar9;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar10;
  System_Xml_Schema_XmlSchema_o *json_00;
  Il2CppObject *pIVar11;
  SimpleJSONFixed_JSONNode_o *json_01;
  Il2CppClass *pIVar12;
  System_Exception_o *__this_04;
  MethodInfo *pMVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double local_res8;
  UnityEngine_Quaternion_o local_1f8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_1e8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_198;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_148;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_f8;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o local_a8 [2];
  
  if (Il2CppMethodInitialized_1843467f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"double");
    il2cpp_codegen_initialize_runtime_metadata(&"int");
    il2cpp_codegen_initialize_runtime_metadata(&"string");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"quaternion");
    il2cpp_codegen_initialize_runtime_metadata(&"bool");
    il2cpp_codegen_initialize_runtime_metadata(&"vector3");
    il2cpp_codegen_initialize_runtime_metadata(&"color");
    il2cpp_codegen_initialize_runtime_metadata(&"float");
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    Il2CppMethodInitialized_1843467f6 = '\x01';
  }
  local_198.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_f8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_1e8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_148.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_198.type = 0;
  local_198._4_4_ = 0;
  local_198.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_198.m_Object.fields._version = 0;
  local_198.m_Object.fields._index = 0;
  local_198.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_198.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_198.m_Object.fields._getEnumeratorRetType = 0;
  local_198.m_Object.fields._36_4_ = 0;
  local_198.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_198.m_Array.fields._index = 0;
  local_198.m_Array.fields._version = 0;
  local_f8.type = 0;
  local_f8._4_4_ = 0;
  local_f8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8.m_Object.fields._version = 0;
  local_f8.m_Object.fields._index = 0;
  local_f8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._getEnumeratorRetType = 0;
  local_f8.m_Object.fields._36_4_ = 0;
  local_f8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_f8.m_Array.fields._index = 0;
  local_f8.m_Array.fields._version = 0;
  local_1e8.type = 0;
  local_1e8._4_4_ = 0;
  local_1e8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_1e8.m_Object.fields._version = 0;
  local_1e8.m_Object.fields._index = 0;
  local_1e8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_1e8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_1e8.m_Object.fields._getEnumeratorRetType = 0;
  local_1e8.m_Object.fields._36_4_ = 0;
  local_1e8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_1e8.m_Array.fields._index = 0;
  local_1e8.m_Array.fields._version = 0;
  local_148.type = 0;
  local_148._4_4_ = 0;
  local_148.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_148.m_Object.fields._version = 0;
  local_148.m_Object.fields._index = 0;
  local_148.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_148.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_148.m_Object.fields._getEnumeratorRetType = 0;
  local_148.m_Object.fields._36_4_ = 0;
  local_148.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_148.m_Array.fields._index = 0;
  local_148.m_Array.fields._version = 0;
  if (json == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_1820a0b0d;
  bVar5 = (*(json->klass->vtable)._16_get_IsArray.methodPtr)
                    (json,(json->klass->vtable)._16_get_IsArray.method);
  if (bVar5) {
    __this_03 = (CustomLogic_CustomLogicDictBuiltin_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor
              ((CustomLogic_CustomLogicListBuiltin_o *)__this_03,(MethodInfo *)0x0);
    pSVar9 = SimpleJSONFixed_JSONNode__get_Values(local_a8,json,(MethodInfo *)0x0);
    local_f8.type = (pSVar9->fields).m_Enumerator.fields.type;
    local_f8._4_4_ = *(undefined4 *)&(pSVar9->fields).m_Enumerator.fields.field_0x4;
    local_f8.m_Object.fields._dictionary = (pSVar9->fields).m_Enumerator.fields.m_Object.fields._dictionary;
    pSVar4 = &(pSVar9->fields).m_Enumerator;
    local_f8.m_Object.fields._version = (pSVar4->fields).m_Object.fields._version;
    local_f8.m_Object.fields._index = (pSVar4->fields).m_Object.fields._index;
    local_f8.m_Object.fields._current.fields.key =
         (pSVar9->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
    local_f8.m_Object.fields._current.fields.value =
         (pSVar9->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
    pSVar4 = &(pSVar9->fields).m_Enumerator;
    local_f8.m_Object.fields._getEnumeratorRetType = (pSVar4->fields).m_Object.fields._getEnumeratorRetType;
    local_f8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar4->fields).m_Object.fields.field_0x24;
    local_f8.m_Array.fields._list = (pSVar9->fields).m_Enumerator.fields.m_Array.fields._list;
    pSVar4 = &(pSVar9->fields).m_Enumerator;
    local_f8.m_Array.fields._index = (pSVar4->fields).m_Array.fields._index;
    local_f8.m_Array.fields._version = (pSVar4->fields).m_Array.fields._version;
    local_f8.m_Array.fields._current = (pSVar9->fields).m_Enumerator.fields.m_Array.fields._current;
    pSVar10 = SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)local_a8,
                         (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
    local_198.type = (pSVar10->fields).m_Enumerator.fields.type;
    local_198._4_4_ = *(undefined4 *)&(pSVar10->fields).m_Enumerator.fields.field_0x4;
    local_198.m_Object.fields._dictionary = (pSVar10->fields).m_Enumerator.fields.m_Object.fields._dictionary;
    pSVar4 = &(pSVar10->fields).m_Enumerator;
    local_198.m_Object.fields._version = (pSVar4->fields).m_Object.fields._version;
    local_198.m_Object.fields._index = (pSVar4->fields).m_Object.fields._index;
    local_198.m_Object.fields._current.fields.key =
         (pSVar10->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
    local_198.m_Object.fields._current.fields.value =
         (pSVar10->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
    pSVar4 = &(pSVar10->fields).m_Enumerator;
    local_198.m_Object.fields._getEnumeratorRetType = (pSVar4->fields).m_Object.fields._getEnumeratorRetType;
    local_198.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar4->fields).m_Object.fields.field_0x24;
    local_198.m_Array.fields._list = (pSVar10->fields).m_Enumerator.fields.m_Array.fields._list;
    pSVar4 = &(pSVar10->fields).m_Enumerator;
    local_198.m_Array.fields._index = (pSVar4->fields).m_Array.fields._index;
    local_198.m_Array.fields._version = (pSVar4->fields).m_Array.fields._version;
    local_198.m_Array.fields._current = (pSVar10->fields).m_Enumerator.fields.m_Array.fields._current;
    bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_198,(MethodInfo *)0x0);
    if (bVar5) {
      do {
        json_01 = SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current
                            ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&local_198,(MethodInfo *)0x0);
        if (__this_03 == (CustomLogic_CustomLogicDictBuiltin_o *)0x0) goto label_1820a0b0d;
        __this = (__this_03->fields)._dict;
        pIVar11 = CustomLogic_CustomLogicJsonBuiltin__LoadJSON(json_01,(MethodInfo *)0x0);
        pMVar13 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1820a0b0d;
        piVar1 = (int32_t *)((longlong)&(__this->fields)._entries + 4);
        *piVar1 = *piVar1 + 1;
        pSVar3 = (System_Object_array *)(__this->fields)._buckets;
        if (pSVar3 == (System_Object_array *)0x0) goto label_1820a0b0d;
        uVar2 = *(uint *)&(__this->fields)._entries;
        if (uVar2 < (uint)pSVar3->max_length) {
          *(uint *)&(__this->fields)._entries = uVar2 + 1;
          if ((uint)pSVar3->max_length <= uVar2) goto label_1820a0b5c;
          pSVar3->m_Items[(int)uVar2] = pIVar11;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pIVar11);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,pIVar11,
                     (MethodInfo_93DD50 *)pMVar13->klass->rgctx_data[0xe].method);
        }
        bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_198,(MethodInfo *)0x0);
      } while (bVar5);
    }
  }
  else {
    bVar5 = (*(json->klass->vtable)._17_get_IsObject.methodPtr)
                      (json,(json->klass->vtable)._17_get_IsObject.method);
    if (bVar5) {
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin);
      CustomLogic_CustomLogicDictBuiltin___ctor(__this_03,(MethodInfo *)0x0);
      pSVar9 = SimpleJSONFixed_JSONNode__get_Values(local_a8,json,(MethodInfo *)0x0);
      local_148.type = (pSVar9->fields).m_Enumerator.fields.type;
      local_148._4_4_ = *(undefined4 *)&(pSVar9->fields).m_Enumerator.fields.field_0x4;
      local_148.m_Object.fields._dictionary = (pSVar9->fields).m_Enumerator.fields.m_Object.fields._dictionary
      ;
      pSVar4 = &(pSVar9->fields).m_Enumerator;
      local_148.m_Object.fields._version = (pSVar4->fields).m_Object.fields._version;
      local_148.m_Object.fields._index = (pSVar4->fields).m_Object.fields._index;
      local_148.m_Object.fields._current.fields.key =
           (pSVar9->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
      local_148.m_Object.fields._current.fields.value =
           (pSVar9->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
      pSVar4 = &(pSVar9->fields).m_Enumerator;
      local_148.m_Object.fields._getEnumeratorRetType = (pSVar4->fields).m_Object.fields._getEnumeratorRetType
      ;
      local_148.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar4->fields).m_Object.fields.field_0x24;
      local_148.m_Array.fields._list = (pSVar9->fields).m_Enumerator.fields.m_Array.fields._list;
      pSVar4 = &(pSVar9->fields).m_Enumerator;
      local_148.m_Array.fields._index = (pSVar4->fields).m_Array.fields._index;
      local_148.m_Array.fields._version = (pSVar4->fields).m_Array.fields._version;
      local_148.m_Array.fields._current = (pSVar9->fields).m_Enumerator.fields.m_Array.fields._current;
      pSVar10 = SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)local_a8,
                           (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_148,(MethodInfo *)0x0);
      local_1e8.type = (pSVar10->fields).m_Enumerator.fields.type;
      local_1e8._4_4_ = *(undefined4 *)&(pSVar10->fields).m_Enumerator.fields.field_0x4;
      local_1e8.m_Object.fields._dictionary =
           (pSVar10->fields).m_Enumerator.fields.m_Object.fields._dictionary;
      pSVar4 = &(pSVar10->fields).m_Enumerator;
      local_1e8.m_Object.fields._version = (pSVar4->fields).m_Object.fields._version;
      local_1e8.m_Object.fields._index = (pSVar4->fields).m_Object.fields._index;
      local_1e8.m_Object.fields._current.fields.key =
           (pSVar10->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
      local_1e8.m_Object.fields._current.fields.value =
           (pSVar10->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
      pSVar4 = &(pSVar10->fields).m_Enumerator;
      local_1e8.m_Object.fields._getEnumeratorRetType = (pSVar4->fields).m_Object.fields._getEnumeratorRetType
      ;
      local_1e8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar4->fields).m_Object.fields.field_0x24;
      local_1e8.m_Array.fields._list = (pSVar10->fields).m_Enumerator.fields.m_Array.fields._list;
      pSVar4 = &(pSVar10->fields).m_Enumerator;
      local_1e8.m_Array.fields._index = (pSVar4->fields).m_Array.fields._index;
      local_1e8.m_Array.fields._version = (pSVar4->fields).m_Array.fields._version;
      local_1e8.m_Array.fields._current = (pSVar10->fields).m_Enumerator.fields.m_Array.fields._current;
      bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_1e8,(MethodInfo *)0x0);
      if (bVar5) {
        do {
          pMVar13 = (MethodInfo *)
                    SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_1e8,(MethodInfo *)0x0);
          json_00 = (*(json->klass->vtable)._7_get_Item.methodPtr)(json,pMVar13);
          pIVar11 = CustomLogic_CustomLogicJsonBuiltin__LoadJSON
                              ((SimpleJSONFixed_JSONNode_o *)json_00,(MethodInfo *)0x0);
          if (__this_03 == (CustomLogic_CustomLogicDictBuiltin_o *)0x0) goto label_1820a0b0d;
          CustomLogic_CustomLogicDictBuiltin__Set(__this_03,(Il2CppObject *)pMVar13,pIVar11,(MethodInfo *)0x0)
          ;
          bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_1e8,(MethodInfo *)0x0);
        } while (bVar5);
      }
    }
    else {
      bVar5 = (*(json->klass->vtable)._13_get_IsString.methodPtr)
                        (json,(json->klass->vtable)._13_get_IsString.method);
      if (!bVar5) {
label_1820a0b13:
        pIVar12 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar12);
        pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Loading invalid json format.");
        System_Exception___ctor_1b6abf0(__this_04,pSVar7,(MethodInfo *)0x0);
        pMVar13 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicJsonBuiltin_LoadJSON)
        ;
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar13);
      }
      pSVar7 = (*(json->klass->vtable)._9_get_Value.methodPtr)(json,(json->klass->vtable)._9_get_Value.method)
      ;
      if ((pSVar7 == (System_String_o *)0x0) ||
         (pSVar8 = System_String__Split(pSVar7,0x3a,0,(MethodInfo *)0x0), pSVar8 == (System_String_array *)0x0
         )) goto label_1820a0b0d;
      if ((int)pSVar8->max_length == 0) goto label_1820a0b5c;
      a = pSVar8->m_Items[0];
      bVar5 = System_String__op_Equality(a,"float",(MethodInfo *)0x0);
      if (bVar5) {
        pSVar7 = System_String__Substring(pSVar7,6,(MethodInfo *)0x0);
        fVar14 = System_Single__Parse(pSVar7,(MethodInfo *)0x0);
        local_res8 = (double)CONCAT44(local_res8._4_4_,fVar14);
        pIVar12 = g_data_184354e38;
      }
      else {
        bVar5 = System_String__op_Equality(a,"double",(MethodInfo *)0x0);
        if (bVar5) {
          pSVar7 = System_String__Substring(pSVar7,7,(MethodInfo *)0x0);
          local_res8 = System_Double__Parse(pSVar7,(MethodInfo *)0x0);
          pIVar12 = g_data_184354e40;
        }
        else {
          bVar5 = System_String__op_Equality(a,"int",(MethodInfo *)0x0);
          if (bVar5) {
            pSVar7 = System_String__Substring(pSVar7,4,(MethodInfo *)0x0);
            iVar6 = System_Int32__Parse(pSVar7,(MethodInfo *)0x0);
            local_res8 = (double)CONCAT44(local_res8._4_4_,iVar6);
            pIVar12 = g_data_184354e08;
          }
          else {
            bVar5 = System_String__op_Equality(a,"string",(MethodInfo *)0x0);
            if (bVar5) {
              pSVar7 = System_String__Substring(pSVar7,7,(MethodInfo *)0x0);
              return (Il2CppObject *)pSVar7;
            }
            bVar5 = System_String__op_Equality(a,"bool",(MethodInfo *)0x0);
            if (!bVar5) {
              bVar5 = System_String__op_Equality(a,"null",(MethodInfo *)0x0);
              if (bVar5) {
                return (Il2CppObject *)0x0;
              }
              bVar5 = System_String__op_Equality(a,"vector3",(MethodInfo *)0x0);
              if (bVar5) {
                pSVar7 = System_String__Substring(pSVar7,8,(MethodInfo *)0x0);
                if ((pSVar7 != (System_String_o *)0x0) &&
                   (pSVar8 = System_String__Split(pSVar7,0x2c,0,(MethodInfo *)0x0),
                   pSVar8 != (System_String_array *)0x0)) {
                  if (((int)pSVar8->max_length != 0) &&
                     ((fVar14 = System_Single__Parse(pSVar8->m_Items[0],(MethodInfo *)0x0),
                      1 < (uint)pSVar8->max_length &&
                      (local_1f8.fields.y = System_Single__Parse(pSVar8->m_Items[1],(MethodInfo *)0x0),
                      2 < (uint)pSVar8->max_length)))) {
                    fVar15 = System_Single__Parse(pSVar8->m_Items[2],(MethodInfo *)0x0);
                    __this_02 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
                    local_1f8.fields.x = fVar14;
                    local_1f8.fields.z = fVar15;
                    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                              (__this_02,(UnityEngine_Vector3_o *)&local_1f8,(MethodInfo *)0x0);
                    return (Il2CppObject *)__this_02;
                  }
label_1820a0b5c:
                  ThrowIndexOutOfRangeException();
                }
              }
              else {
                bVar5 = System_String__op_Equality(a,"quaternion",(MethodInfo *)0x0);
                if (bVar5) {
                  pSVar7 = System_String__Substring(pSVar7,0xb,(MethodInfo *)0x0);
                  if ((pSVar7 != (System_String_o *)0x0) &&
                     (pSVar8 = System_String__Split(pSVar7,0x2c,0,(MethodInfo *)0x0),
                     pSVar8 != (System_String_array *)0x0)) {
                    if (((int)pSVar8->max_length != 0) &&
                       (((fVar14 = System_Single__Parse(pSVar8->m_Items[0],(MethodInfo *)0x0),
                         1 < (uint)pSVar8->max_length &&
                         (fVar15 = System_Single__Parse(pSVar8->m_Items[1],(MethodInfo *)0x0),
                         2 < (uint)pSVar8->max_length)) &&
                        (local_1f8.fields.z = System_Single__Parse(pSVar8->m_Items[2],(MethodInfo *)0x0),
                        3 < (uint)pSVar8->max_length)))) {
                      fVar16 = System_Single__Parse(pSVar8->m_Items[3],(MethodInfo *)0x0);
                      __this_01 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)
                      ;
                      local_1f8.fields.x = fVar14;
                      local_1f8.fields.y = fVar15;
                      local_1f8.fields.w = fVar16;
                      CustomLogic_CustomLogicQuaternionBuiltin___ctor_1ed2b60
                                (__this_01,&local_1f8,(MethodInfo *)0x0);
                      return (Il2CppObject *)__this_01;
                    }
                    goto label_1820a0b5c;
                  }
                }
                else {
                  bVar5 = System_String__op_Equality(a,"color",(MethodInfo *)0x0);
                  if (!bVar5) goto label_1820a0b13;
                  pSVar7 = System_String__Substring(pSVar7,6,(MethodInfo *)0x0);
                  if ((pSVar7 != (System_String_o *)0x0) &&
                     (pSVar8 = System_String__Split(pSVar7,0x2c,0,(MethodInfo *)0x0),
                     pSVar8 != (System_String_array *)0x0)) {
                    if ((((int)pSVar8->max_length != 0) &&
                        ((iVar6 = System_Int32__Parse(pSVar8->m_Items[0],(MethodInfo *)0x0),
                         1 < (uint)pSVar8->max_length &&
                         (tryEnd = System_Int32__Parse(pSVar8->m_Items[1],(MethodInfo *)0x0),
                         2 < (uint)pSVar8->max_length)))) &&
                       (finallyStart = System_Int32__Parse(pSVar8->m_Items[2],(MethodInfo *)0x0),
                       3 < (uint)pSVar8->max_length)) {
                      finallyEnd = System_Int32__Parse(pSVar8->m_Items[3],(MethodInfo *)0x0);
                      value = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
                      Utility_Color255___ctor
                                ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)value,iVar6,tryEnd,
                                 finallyStart,finallyEnd,(MethodInfo *)0x0);
                      __this_00 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
                      CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470(__this_00,value,(MethodInfo *)0x0);
                      return (Il2CppObject *)__this_00;
                    }
                    goto label_1820a0b5c;
                  }
                }
              }
label_1820a0b0d:
              ThrowNullReferenceException();
            }
            pSVar7 = System_String__Substring(pSVar7,5,(MethodInfo *)0x0);
            bVar5 = System_String__op_Equality(pSVar7,"1",(MethodInfo *)0x0);
            local_res8 = (double)CONCAT71(local_res8._1_7_,bVar5);
            pIVar12 = g_data_184354de8;
          }
        }
      }
      __this_03 = (CustomLogic_CustomLogicDictBuiltin_o *)il2cpp_value_box(pIVar12,&local_res8);
    }
  }
  return (Il2CppObject *)__this_03;
}


// CustomLogic.CustomLogicJsonBuiltin$$SaveJSON
// il2cpp: SimpleJSONFixed_JSONNode_o* CustomLogic_CustomLogicJsonBuiltin__SaveJSON (Il2CppObject* obj, const MethodInfo* method);
// 0x1820a0b70
// eh: try 0x1820a0de1..0x1820a1767 -> pad 0x183318100 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820a0e86: mov rdx, qword ptr [rip + 0x1fedffb]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x1820a0e8d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820a0e92: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820a0e97: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1820a0e9c: test rcx, rcx
// asm:   0x1820a0e9f: jne 0x1820a1752
// asm:   0x1820a0ea5: mov r14, qword ptr [rsp + 0x48]
// asm:   0x1820a0fd4: mov rdx, qword ptr [rip + 0x1fedead]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x1820a0fdb: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820a0fe0: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820a0fe5: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1820a0fea: test rcx, rcx
// asm:   0x1820a0fed: jne 0x1820a1767
// asm:   0x1820a0ff3: mov rsi, qword ptr [rsp + 0x48]
// asm:   0x1820a1752: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820a1767: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318100: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318105: push rbp
// asm:   0x183318106: sub rsp, 0x20
// asm:   0x18331810a: mov rbp, rdx
// asm:   0x18331810d: mov rax, qword ptr [rbp + 0x78]
// asm:   0x183318111: mov rcx, qword ptr [rax]
// asm:   0x183318114: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183318118: movabs rax, 0
// asm:   0x183318122: add rsp, 0x20
// asm:   0x183318126: pop rbp
// asm:   0x183318127: ret 
// asm:   0x183318130: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318135: push rbp
// asm:   0x183318136: sub rsp, 0x20
// asm:   0x18331813a: mov rbp, rdx
// asm:   0x18331813d: mov rax, qword ptr [rbp + 0x80]
// asm:   0x183318144: mov rcx, qword ptr [rax]
// asm:   0x183318147: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18331814b: movabs rax, 0
// asm:   0x183318155: add rsp, 0x20
// asm:   0x183318159: pop rbp
// asm:   0x18331815a: ret 

SimpleJSONFixed_JSONNode_o *
CustomLogic_CustomLogicJsonBuiltin__SaveJSON(Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_object__o *__this;
  bool bVar2;
  SimpleJSONFixed_JSONObject_o *__this_00;
  CustomLogic_CustomLogicListBuiltin_o *pCVar3;
  Il2CppObject *obj_00;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  Il2CppObject *pIVar5;
  System_String_array *values;
  char *pcVar6;
  SimpleJSONFixed_JSONString_o *pSVar7;
  int32_t *piVar8;
  double *pdVar9;
  float *pfVar10;
  Il2CppClass *pIVar11;
  System_Exception_o *pSVar12;
  System_String_o *pSVar13;
  MethodInfo *pMVar14;
  System_Type_o *p;
  System_String_o *str0;
  System_String_o **targetAddress;
  int32_t local_res8 [2];
  float local_res18 [2];
  double local_res20;
  undefined1 local_88 [16];
  System_String_o *local_78;
  undefined8 local_70;
  float local_68 [2];
  SimpleJSONFixed_JSONObject_o *local_60;
  System_Collections_Generic_List_Enumerator_object__o local_58;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (Il2CppMethodInitialized_1843467f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"int:");
    il2cpp_codegen_initialize_runtime_metadata(&"null:null");
    il2cpp_codegen_initialize_runtime_metadata(&"bool:");
    il2cpp_codegen_initialize_runtime_metadata(&"float:");
    il2cpp_codegen_initialize_runtime_metadata(&"string:");
    il2cpp_codegen_initialize_runtime_metadata(&"quaternion:");
    il2cpp_codegen_initialize_runtime_metadata(&"double:");
    il2cpp_codegen_initialize_runtime_metadata(&",");
    il2cpp_codegen_initialize_runtime_metadata(&"color:");
    il2cpp_codegen_initialize_runtime_metadata(&"vector3:");
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_1843467f7 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  local_res18[0] = 0.0;
  local_res20 = 0.0;
  local_res8[0] = 0;
  local_70 = (Il2CppClass *)0x0;
  local_68[0] = 0.0;
  local_40 = (Il2CppClass *)0x0;
  uStack_38 = (void *)0x0;
  if (obj == (Il2CppObject *)0x0) {
    __this_00 = (SimpleJSONFixed_JSONObject_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
    SimpleJSONFixed_JSONString___ctor
              ((SimpleJSONFixed_JSONString_o *)__this_00,"null:null",(MethodInfo *)0x0);
  }
  else {
    pIVar11 = obj->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin->_2).typeHierarchyDepth;
    if (((pIVar11->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar11->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
      if (((pIVar11->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar11->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin)) {
        pIVar5 = (Il2CppObject *)0x0;
        if (pIVar11 == g_data_184354e50) {
          pIVar5 = obj;
        }
        if (pIVar5 == (Il2CppObject *)0x0) {
          pIVar5 = (Il2CppObject *)0x0;
          if (pIVar11 == g_data_184354e38) {
            pIVar5 = obj;
          }
          if (pIVar5 != (Il2CppObject *)0x0) {
            if ((pIVar11->_1).element_class == (g_data_184354e38->_1).element_class) {
              pfVar10 = il2cpp_object_unbox(obj);
              local_res18[0] = *pfVar10;
              pSVar13 = System_Single__ToString(local_res18,(MethodInfo *)0x0);
              pSVar13 = System_String__Concat_1969e50("float:",pSVar13,(MethodInfo *)0x0);
              pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
              SimpleJSONFixed_JSONString___ctor(pSVar7,pSVar13,(MethodInfo *)0x0);
              return (SimpleJSONFixed_JSONNode_o *)pSVar7;
            }
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          pIVar5 = (Il2CppObject *)0x0;
          if (pIVar11 == g_data_184354e40) {
            pIVar5 = obj;
          }
          if (pIVar5 != (Il2CppObject *)0x0) {
            if ((pIVar11->_1).element_class == (g_data_184354e40->_1).element_class) {
              pdVar9 = il2cpp_object_unbox(obj);
              local_res20 = *pdVar9;
              pSVar13 = System_Double__ToString(&local_res20,(MethodInfo *)0x0);
              pSVar13 = System_String__Concat_1969e50("double:",pSVar13,(MethodInfo *)0x0);
              pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
              SimpleJSONFixed_JSONString___ctor(pSVar7,pSVar13,(MethodInfo *)0x0);
              return (SimpleJSONFixed_JSONNode_o *)pSVar7;
            }
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          pIVar5 = (Il2CppObject *)0x0;
          if (pIVar11 == g_data_184354e08) {
            pIVar5 = obj;
          }
          if (pIVar5 != (Il2CppObject *)0x0) {
            if ((pIVar11->_1).element_class == (g_data_184354e08->_1).element_class) {
              piVar8 = il2cpp_object_unbox(obj);
              local_res8[0] = *piVar8;
              pSVar13 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
              pSVar13 = System_String__Concat_1969e50("int:",pSVar13,(MethodInfo *)0x0);
              pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
              SimpleJSONFixed_JSONString___ctor(pSVar7,pSVar13,(MethodInfo *)0x0);
              return (SimpleJSONFixed_JSONNode_o *)pSVar7;
            }
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          pIVar5 = (Il2CppObject *)0x0;
          if (pIVar11 == g_data_184354de8) {
            pIVar5 = obj;
          }
          if (pIVar5 != (Il2CppObject *)0x0) {
            if ((pIVar11->_1).element_class == (g_data_184354de8->_1).element_class) {
              pcVar6 = il2cpp_object_unbox(obj);
              pSVar13 = "1";
              if (*pcVar6 == '\0') {
                pSVar13 = "0";
              }
              pSVar13 = System_String__Concat_1969e50("bool:",pSVar13,(MethodInfo *)0x0);
              pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
              SimpleJSONFixed_JSONString___ctor(pSVar7,pSVar13,(MethodInfo *)0x0);
              return (SimpleJSONFixed_JSONNode_o *)pSVar7;
            }
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          bVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
          if (((pIVar11->_2).typeHierarchyDepth < bVar1) ||
             ((pIVar11->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
            bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
            if (((pIVar11->_2).typeHierarchyDepth < bVar1) ||
               ((pIVar11->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
              bVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
              if (((pIVar11->_2).typeHierarchyDepth < bVar1) ||
                 ((pIVar11->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) {
                NullCheck(obj);
                p = System_Object__GetType(obj,(MethodInfo *)0x0);
                NullCheck(p);
                pSVar13 = (System_String_o *)il2cpp_runtime_helper_180003110(3,p);
                str0 = il2cpp_codegen_get_runtime_metadata(&"Saving invalid json type: only list, dict, structs, and primitives allowed, got ");
                pSVar13 = System_String__Concat_1969e50(str0,pSVar13,(MethodInfo *)0x0);
                pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
                pSVar12 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar11);
                System_Exception___ctor_1b6abf0(pSVar12,pSVar13,(MethodInfo *)0x0);
                pMVar14 = il2cpp_codegen_get_runtime_metadata
                                    (&MethodInfo_CustomLogic_CustomLogicJsonBuiltin_SaveJSON);
                il2cpp_codegen_raise_exception((Il2CppObject *)pSVar12,pMVar14);
              }
              bVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
              if (((pIVar11->_2).typeHierarchyDepth < bVar1) ||
                 ((pIVar11->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) {
                il2cpp_codegen_raise_invalid_cast_exception(obj);
              }
              local_40 = obj[3].klass;
              uStack_38 = obj[3].monitor;
              values = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
              pSVar13 = "quaternion:";
              if (values == (System_String_array *)0x0) goto label_1820a178e;
              if ((int)values->max_length == 0) goto label_1820a1788;
              values->m_Items[0] = "quaternion:";
              Il2CppCodeGenWriteBarrier(values->m_Items,pSVar13);
              pSVar13 = System_Single__ToString((float *)&local_40,(MethodInfo *)0x0);
              if ((uint)values->max_length < 2) goto label_1820a1788;
              values->m_Items[1] = pSVar13;
              Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar13);
              pSVar13 = ",";
              if ((uint)values->max_length < 3) goto label_1820a1788;
              values->m_Items[2] = ",";
              Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar13);
              pSVar13 = System_Single__ToString((float *)((longlong)&local_40 + 4),(MethodInfo *)0x0);
              if ((uint)values->max_length < 4) goto label_1820a1788;
              values->m_Items[3] = pSVar13;
              Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar13);
              pSVar13 = ",";
              if ((uint)values->max_length < 5) goto label_1820a1788;
              values->m_Items[4] = ",";
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar13);
              pSVar13 = System_Single__ToString((float *)&uStack_38,(MethodInfo *)0x0);
              if ((uint)values->max_length < 6) goto label_1820a1788;
              values->m_Items[5] = pSVar13;
              Il2CppCodeGenWriteBarrier(values->m_Items + 5,pSVar13);
              pSVar13 = ",";
              if ((uint)values->max_length < 7) goto label_1820a1788;
              values->m_Items[6] = ",";
              Il2CppCodeGenWriteBarrier(values->m_Items + 6,pSVar13);
              pSVar13 = System_Single__ToString((float *)((longlong)&uStack_38 + 4),(MethodInfo *)0x0);
            }
            else {
              bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
              if (((pIVar11->_2).typeHierarchyDepth < bVar1) ||
                 ((pIVar11->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
                il2cpp_codegen_raise_invalid_cast_exception(obj);
              }
              pIVar11 = obj[3].klass;
              values = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
              pSVar13 = "color:";
              if (values == (System_String_array *)0x0) {
label_1820a178e:
                ThrowNullReferenceException();
              }
              if ((int)values->max_length == 0) goto label_1820a1788;
              values->m_Items[0] = "color:";
              Il2CppCodeGenWriteBarrier(values->m_Items,pSVar13);
              if (pIVar11 == (Il2CppClass *)0x0) goto label_1820a178e;
              pSVar13 = System_Int32__ToString((int32_t *)&(pIVar11->_1).name,(MethodInfo *)0x0);
              if ((uint)values->max_length < 2) goto label_1820a1788;
              values->m_Items[1] = pSVar13;
              Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar13);
              pSVar13 = ",";
              if ((uint)values->max_length < 3) goto label_1820a1788;
              values->m_Items[2] = ",";
              Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar13);
              pSVar13 = System_Int32__ToString
                                  ((int32_t *)((longlong)&(pIVar11->_1).name + 4),(MethodInfo *)0x0);
              if ((uint)values->max_length < 4) goto label_1820a1788;
              values->m_Items[3] = pSVar13;
              Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar13);
              pSVar13 = ",";
              if ((uint)values->max_length < 5) goto label_1820a1788;
              values->m_Items[4] = ",";
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar13);
              pSVar13 = System_Int32__ToString((int32_t *)&(pIVar11->_1).namespaze,(MethodInfo *)0x0);
              if ((uint)values->max_length < 6) goto label_1820a1788;
              values->m_Items[5] = pSVar13;
              Il2CppCodeGenWriteBarrier(values->m_Items + 5,pSVar13);
              pSVar13 = ",";
              if ((uint)values->max_length < 7) goto label_1820a1788;
              values->m_Items[6] = ",";
              Il2CppCodeGenWriteBarrier(values->m_Items + 6,pSVar13);
              pSVar13 = System_Int32__ToString
                                  ((int32_t *)((longlong)&(pIVar11->_1).namespaze + 4),(MethodInfo *)0x0);
            }
            if ((uint)values->max_length < 8) goto label_1820a1788;
            values->m_Items[7] = pSVar13;
            targetAddress = values->m_Items + 7;
          }
          else {
            bVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
            if (((pIVar11->_2).typeHierarchyDepth < bVar1) ||
               ((pIVar11->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
              il2cpp_codegen_raise_invalid_cast_exception(obj);
            }
            local_70 = obj[3].klass;
            local_68[0] = *(float *)&obj[3].monitor;
            values = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
            pSVar13 = "vector3:";
            if (values == (System_String_array *)0x0) goto label_1820a178e;
            if ((int)values->max_length == 0) {
label_1820a1788:
              ThrowIndexOutOfRangeException();
            }
            values->m_Items[0] = "vector3:";
            Il2CppCodeGenWriteBarrier(values->m_Items,pSVar13);
            pSVar13 = System_Single__ToString((float *)&local_70,(MethodInfo *)0x0);
            if ((uint)values->max_length < 2) goto label_1820a1788;
            values->m_Items[1] = pSVar13;
            Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar13);
            pSVar13 = ",";
            if ((uint)values->max_length < 3) goto label_1820a1788;
            values->m_Items[2] = ",";
            Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar13);
            pSVar13 = System_Single__ToString((float *)((longlong)&local_70 + 4),(MethodInfo *)0x0);
            if ((uint)values->max_length < 4) goto label_1820a1788;
            values->m_Items[3] = pSVar13;
            Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar13);
            pSVar13 = ",";
            if ((uint)values->max_length < 5) goto label_1820a1788;
            values->m_Items[4] = ",";
            Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar13);
            pSVar13 = System_Single__ToString(local_68,(MethodInfo *)0x0);
            if ((uint)values->max_length < 6) goto label_1820a1788;
            values->m_Items[5] = pSVar13;
            targetAddress = values->m_Items + 5;
          }
          Il2CppCodeGenWriteBarrier(targetAddress,pSVar13);
          pSVar13 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
        }
        else {
          pSVar13 = (System_String_o *)0x0;
          if (pIVar11 == g_data_184354e50) {
            pSVar13 = (System_String_o *)obj;
          }
          if (pSVar13 == (System_String_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e50);
          }
          pSVar13 = System_String__Concat_1969e50("string:",pSVar13,(MethodInfo *)0x0);
        }
        __this_00 = (SimpleJSONFixed_JSONObject_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
        SimpleJSONFixed_JSONString___ctor((SimpleJSONFixed_JSONString_o *)__this_00,pSVar13,(MethodInfo *)0x0)
        ;
      }
      else {
        __this_00 = (SimpleJSONFixed_JSONObject_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
        SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)__this_00,(MethodInfo *)0x0);
        bVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
        if (((obj->klass->_2).typeHierarchyDepth < bVar1) ||
           ((obj->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin)) {
          il2cpp_codegen_raise_invalid_cast_exception(obj);
        }
        if (obj[3].klass == (Il2CppClass *)0x0) goto label_1820a178e;
        local_60 = __this_00;
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_88,
                   (System_Collections_Generic_List_T__o *)obj[3].klass,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
        local_58.fields._list = (System_Collections_Generic_List_T__o *)local_88._0_8_;
        local_58.fields._index = local_88._8_4_;
        local_58.fields._version = local_88._12_4_;
        local_58.fields._current = (Il2CppObject *)local_78;
        local_88._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_88._8_8_ = &local_58;
        while (bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 (&local_58,
                                  (MethodInfo_153A2A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext),
              bVar2) {
          pSVar4 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON(local_58.fields._current,(MethodInfo *)0x0);
          if (__this_00 == (SimpleJSONFixed_JSONObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          (*(__this_00->klass->vtable)._21_Add.methodPtr)
                    (__this_00,pSVar4,(__this_00->klass->vtable)._21_Add.method);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                   MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
      }
    }
    else {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
      bVar1 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin->_2).typeHierarchyDepth;
      if (((obj->klass->_2).typeHierarchyDepth < bVar1) ||
         ((obj->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin)) {
        il2cpp_codegen_raise_invalid_cast_exception(obj);
      }
      pCVar3 = CustomLogic_CustomLogicDictBuiltin__get_Keys
                         ((CustomLogic_CustomLogicDictBuiltin_o *)obj,(MethodInfo *)0x0);
      if ((pCVar3 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) ||
         (__this = (pCVar3->fields).List, __this == (System_Collections_Generic_List_object__o *)0x0))
      goto label_1820a178e;
      local_60 = __this_00;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_88,
                 (System_Collections_Generic_List_T__o *)__this,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
      local_58.fields._list = (System_Collections_Generic_List_T__o *)local_88._0_8_;
      local_58.fields._index = local_88._8_4_;
      local_58.fields._version = local_88._12_4_;
      local_58.fields._current = (Il2CppObject *)local_78;
      local_88._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_88._8_8_ = &local_58;
      while (bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (&local_58,
                                (MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext),
            pIVar5 = local_58.fields._current, bVar2) {
        if ((System_String_o *)local_58.fields._current == (System_String_o *)0x0) {
label_1820a1709:
          pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          pSVar12 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar11);
          pSVar13 = il2cpp_codegen_get_runtime_metadata(&"Saving invalid json type: dict must have string keys.");
          System_Exception___ctor_1b6abf0(pSVar12,pSVar13,(MethodInfo *)0x0);
          pMVar14 = il2cpp_codegen_get_runtime_metadata
                              (&MethodInfo_CustomLogic_CustomLogicJsonBuiltin_SaveJSON);
          il2cpp_codegen_raise_exception((Il2CppObject *)pSVar12,pMVar14);
        }
        pSVar13 = (System_String_o *)0x0;
        if ((local_58.fields._current)->klass == g_data_184354e50) {
          pSVar13 = (System_String_o *)local_58.fields._current;
        }
        if (pSVar13 == (System_String_o *)0x0) goto label_1820a1709;
        obj_00 = CustomLogic_CustomLogicDictBuiltin__Get
                           ((CustomLogic_CustomLogicDictBuiltin_o *)obj,local_58.fields._current,
                            (Il2CppObject *)0x0,(MethodInfo *)0x0);
        pSVar4 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON(obj_00,(MethodInfo *)0x0);
        if (__this_00 == (SimpleJSONFixed_JSONObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar13 = (System_String_o *)0x0;
        if (pIVar5->klass == g_data_184354e50) {
          pSVar13 = (System_String_o *)pIVar5;
        }
        if (pSVar13 == (System_String_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar5,g_data_184354e50);
        }
        (*(__this_00->klass->vtable)._20_Add.methodPtr)
                  (__this_00,pSVar13,pSVar4,(__this_00->klass->vtable)._20_Add.method);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                 MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    }
  }
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// CustomLogic.CustomLogicJsonBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicJsonBuiltin__get_ClassName (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x1820a18e0

System_String_o *
CustomLogic_CustomLogicJsonBuiltin__get_ClassName
          (CustomLogic_CustomLogicJsonBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843467f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Json");
    Il2CppMethodInitialized_1843467f8 = '\x01';
  }
  return "Json";
}


// CustomLogic.CustomLogicJsonBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicJsonBuiltin__get_IsAbstract (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicJsonBuiltin__get_IsAbstract(CustomLogic_CustomLogicJsonBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicJsonBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicJsonBuiltin__get_IsStatic (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicJsonBuiltin__get_IsStatic(CustomLogic_CustomLogicJsonBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicJsonBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicJsonBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicJsonBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicJsonBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


