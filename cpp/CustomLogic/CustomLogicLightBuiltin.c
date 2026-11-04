// Type: CustomLogic.CustomLogicLightBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLightBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLightBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLightBuiltin_o* CustomLogic_CustomLogicLightBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f076b0

CustomLogic_CustomLogicLightBuiltin_o *
CustomLogic_CustomLogicLightBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicLightBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434538a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLightBuiltin);
    Il2CppMethodInitialized_18434538a = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin);
      CustomLogic_BuiltinComponentInstance___ctor
                ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                 (MethodInfo *)0x0);
      return __this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLightBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicLightBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLightBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ee9620

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLightBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_01;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_18434538b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"BounceIntensity");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowTypeSoft");
    il2cpp_codegen_initialize_runtime_metadata(&"TypeOfLight");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowStrength");
    il2cpp_codegen_initialize_runtime_metadata(&"Intensity");
    il2cpp_codegen_initialize_runtime_metadata(&"LightTypeSpot");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowTypeHard");
    il2cpp_codegen_initialize_runtime_metadata(&"WeatherControlled");
    il2cpp_codegen_initialize_runtime_metadata(&"LightTypePoint");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowTypeNone");
    il2cpp_codegen_initialize_runtime_metadata(&"SpotAngle");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowType");
    il2cpp_codegen_initialize_runtime_metadata(&"Range");
    il2cpp_codegen_initialize_runtime_metadata(&"LightTypeDirectional");
    Il2CppMethodInitialized_18434538b = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x67b0f90a) {
    if (uVar2 < 0x3cf8f4e5) {
      if (uVar2 == 0x6bb3b2f) {
        bVar1 = System_String__op_Equality(name,"LightTypeSpot",(MethodInfo *)0x0);
        if (!bVar1) goto label_181eea258;
        if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434538e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypeSpot_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
          Il2CppMethodInitialized_18434538e = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object)
        ;
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypeSpot_g____getter
        ;
        goto label_181ee9afe;
      }
      if (uVar2 == 0x2d3acfd4) {
        bVar1 = System_String__op_Equality(name,"TypeOfLight",(MethodInfo *)0x0);
        if (!bVar1) goto label_181eea258;
        if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345392 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__TypeOfLight_g____getter_8
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__TypeOfLight_g____setter_8
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
          Il2CppMethodInitialized_184345392 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__TypeOfLight_g____getter_8
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__TypeOfLight_g____setter_8
        ;
      }
      else {
        if (uVar2 != 0x3cf8f4e4) goto label_181eea258;
        bVar1 = System_String__op_Equality(name,"ShadowStrength",(MethodInfo *)0x0);
        if (!bVar1) goto label_181eea258;
        if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345399 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowStrength_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowStrength_g____setter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
          Il2CppMethodInitialized_184345399 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowStrength_g____getter
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowStrength_g____setter
        ;
      }
    }
    else {
      if (uVar2 < 0x48a10dd9) {
        if (uVar2 == 0x44ba848f) {
          bVar1 = System_String__op_Equality(name,"ShadowTypeNone",(MethodInfo *)0x0);
          if (!bVar1) goto label_181eea258;
          if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434538f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeNone_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
            Il2CppMethodInitialized_18434538f = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeNone_g____getter
          ;
        }
        else {
          if (uVar2 != 0x48a10dd8) goto label_181eea258;
          bVar1 = System_String__op_Equality(name,"ShadowTypeHard",(MethodInfo *)0x0);
          if (!bVar1) goto label_181eea258;
          if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345390 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeHard_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
            Il2CppMethodInitialized_184345390 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeHard_g____getter
          ;
        }
label_181ee9afe:
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
        goto label_181eea233;
      }
      if (uVar2 == 0x53b4f9aa) {
        bVar1 = System_String__op_Equality(name,"Intensity",(MethodInfo *)0x0);
        if (!bVar1) goto label_181eea258;
        if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345396 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Intensity_g____getter_12_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Intensity_g____setter_12_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
          Il2CppMethodInitialized_184345396 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Intensity_g____getter_12_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Intensity_g____setter_12_1
        ;
      }
      else {
        if (uVar2 != 0x67b0f909) goto label_181eea258;
        bVar1 = System_String__op_Equality(name,"WeatherControlled",(MethodInfo *)0x0);
        if (!bVar1) goto label_181eea258;
        if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434539a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__WeatherControlled_g____get
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__WeatherControlled_g____set
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
          Il2CppMethodInitialized_18434539a = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__WeatherControlled_g____get
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__WeatherControlled_g____set
        ;
      }
    }
  }
  else {
    if (uVar2 < 0xd9e6934e) {
      if (uVar2 < 0xa8d979d0) {
        if (uVar2 == 0xa311e772) {
          bVar1 = System_String__op_Equality(name,"Range",(MethodInfo *)0x0);
          if (!bVar1) goto label_181eea258;
          if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345393 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object)
            ;
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Range_g____getter_9_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Range_g____setter_9_1
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
            Il2CppMethodInitialized_184345393 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Range_g____getter_9_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Range_g____setter_9_1
          ;
          goto label_181eea211;
        }
        if (uVar2 != 0xa8d979cf) goto label_181eea258;
        bVar1 = System_String__op_Equality(name,"LightTypePoint",(MethodInfo *)0x0);
        if (!bVar1) goto label_181eea258;
        if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434538d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypePoint_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
          Il2CppMethodInitialized_18434538d = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object)
        ;
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypePoint_g____getter
        ;
      }
      else if (uVar2 == 0xab6315a1) {
        bVar1 = System_String__op_Equality(name,"ShadowTypeSoft",(MethodInfo *)0x0);
        if (!bVar1) goto label_181eea258;
        if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345391 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeSoft_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
          Il2CppMethodInitialized_184345391 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object)
        ;
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeSoft_g____getter
        ;
      }
      else {
        if (uVar2 != 0xd9e6934d) goto label_181eea258;
        bVar1 = System_String__op_Equality(name,"LightTypeDirectional",(MethodInfo *)0x0);
        if (!bVar1) goto label_181eea258;
        if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434538c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypeDirectional_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
          Il2CppMethodInitialized_18434538c = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object)
        ;
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypeDirectional_g
        ;
      }
      goto label_181ee9afe;
    }
    if (uVar2 < 0xe5b43cf9) {
      if (uVar2 == 0xe2c2c340) {
        bVar1 = System_String__op_Equality(name,"SpotAngle",(MethodInfo *)0x0);
        if (!bVar1) goto label_181eea258;
        if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345394 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__SpotAngle_g____getter_10_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__SpotAngle_g____setter_10_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
          Il2CppMethodInitialized_184345394 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__SpotAngle_g____getter_10_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__SpotAngle_g____setter_10_1
        ;
      }
      else {
        if (uVar2 != 0xe5b43cf8) goto label_181eea258;
        bVar1 = System_String__op_Equality(name,"Color",(MethodInfo *)0x0);
        if (!bVar1) goto label_181eea258;
        if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345395 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Color_g____getter_11_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Color_g____setter_11_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
          Il2CppMethodInitialized_184345395 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Color_g____getter_11_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Color_g____setter_11_1
        ;
      }
    }
    else if (uVar2 == 0xf6a210e9) {
      bVar1 = System_String__op_Equality(name,"ShadowType",(MethodInfo *)0x0);
      if (!bVar1) goto label_181eea258;
      if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345398 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowType_g____getter_14
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowType_g____setter_14
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
        Il2CppMethodInitialized_184345398 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowType_g____getter_14
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowType_g____setter_14
      ;
    }
    else {
      if (uVar2 != 0xf950f202) {
label_181eea258:
        pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLightBuiltin not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_02,pSVar3,(MethodInfo *)0x0);
        pMVar4 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings_CreateMemberBinding);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar4);
      }
      bVar1 = System_String__op_Equality(name,"BounceIntensity",(MethodInfo *)0x0);
      if (!bVar1) goto label_181eea258;
      if ((TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345397 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__BounceIntensity_g____gette
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__BounceIntensity_g____sette
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
        Il2CppMethodInitialized_184345397 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__BounceIntensity_g____gette
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__BounceIntensity_g____sette
      ;
    }
  }
label_181eea211:
  System_Action_object__object____ctor
            (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
label_181eea233:
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__LightTypeDirectional
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeDirectional (const MethodInfo* method);
// 0x181efc790

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeDirectional
          (MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434538c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypeDirectional_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_18434538c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypeDirectional_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__LightTypePoint
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypePoint (const MethodInfo* method);
// 0x181efc830

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypePoint(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434538d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypePoint_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_18434538d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypePoint_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__LightTypeSpot
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeSpot (const MethodInfo* method);
// 0x181efc8d0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__LightTypeSpot(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434538e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypeSpot_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_18434538e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__LightTypeSpot_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowTypeNone
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeNone (const MethodInfo* method);
// 0x181efdbe0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeNone(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434538f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeNone_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_18434538f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeNone_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowTypeHard
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeHard (const MethodInfo* method);
// 0x181efdb40

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeHard(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345390 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeHard_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_184345390 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeHard_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowTypeSoft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeSoft (const MethodInfo* method);
// 0x181efdc80

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowTypeSoft(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345391 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeSoft_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_184345391 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowTypeSoft_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__TypeOfLight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__TypeOfLight (const MethodInfo* method);
// 0x181efe7c0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__TypeOfLight(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  System_Action_CustomLogicLightBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345392 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__TypeOfLight_g____getter_8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__TypeOfLight_g____setter_8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_184345392 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__TypeOfLight_g____getter_8
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__TypeOfLight_g____setter_8
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__Range
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Range (const MethodInfo* method);
// 0x181efd550

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Range(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  System_Action_CustomLogicLightBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345393 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Range_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Range_g____setter_9_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_184345393 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Range_g____getter_9_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Range_g____setter_9_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__SpotAngle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__SpotAngle (const MethodInfo* method);
// 0x181efe0e0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__SpotAngle(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  System_Action_CustomLogicLightBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345394 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__SpotAngle_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__SpotAngle_g____setter_10_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_184345394 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__SpotAngle_g____getter_10_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__SpotAngle_g____setter_10_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__Color
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Color (const MethodInfo* method);
// 0x181efb2a0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Color(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  System_Action_CustomLogicLightBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345395 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Color_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Color_g____setter_11_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_184345395 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Color_g____getter_11_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Color_g____setter_11_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__Intensity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Intensity (const MethodInfo* method);
// 0x181efc3d0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__Intensity(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  System_Action_CustomLogicLightBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345396 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Intensity_g____getter_12_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Intensity_g____setter_12_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_184345396 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Intensity_g____getter_12_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__Intensity_g____setter_12_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__BounceIntensity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__BounceIntensity (const MethodInfo* method);
// 0x181efaad0

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__BounceIntensity(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  System_Action_CustomLogicLightBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345397 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__BounceIntensity_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__BounceIntensity_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_184345397 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__BounceIntensity_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__BounceIntensity_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowType
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowType (const MethodInfo* method);
// 0x181efdd20

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowType(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  System_Action_CustomLogicLightBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345398 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowType_g____getter_14
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowType_g____setter_14
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_184345398 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowType_g____getter_14
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowType_g____setter_14
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__ShadowStrength
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowStrength (const MethodInfo* method);
// 0x181efda50

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__ShadowStrength(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  System_Action_CustomLogicLightBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345399 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowStrength_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowStrength_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_184345399 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowStrength_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__ShadowStrength_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$__CreatePropertyBinding__WeatherControlled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o* CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__WeatherControlled (const MethodInfo* method);
// 0x181efeb30

CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *
CustomLogic_CustomLogicLightBuiltin_Bindings____CreatePropertyBinding__WeatherControlled(MethodInfo *method)

{
  System_Func_CustomLogicLightBuiltin__object__o *__this;
  System_Action_CustomLogicLightBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434539a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLightBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__WeatherControlled_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__WeatherControlled_g____set
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLightBuiltin_object);
    Il2CppMethodInitialized_18434539a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLightBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__WeatherControlled_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLightBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLightBuiltin_Bindings___CreatePropertyBinding__WeatherControlled_g____set
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLightBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181eff250

void CustomLogic_CustomLogicLightBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434539b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"BounceIntensity");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowTypeSoft");
    il2cpp_codegen_initialize_runtime_metadata(&"TypeOfLight");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowStrength");
    il2cpp_codegen_initialize_runtime_metadata(&"Intensity");
    il2cpp_codegen_initialize_runtime_metadata(&"LightTypeSpot");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowTypeHard");
    il2cpp_codegen_initialize_runtime_metadata(&"WeatherControlled");
    il2cpp_codegen_initialize_runtime_metadata(&"LightTypePoint");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowTypeNone");
    il2cpp_codegen_initialize_runtime_metadata(&"SpotAngle");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowType");
    il2cpp_codegen_initialize_runtime_metadata(&"Range");
    il2cpp_codegen_initialize_runtime_metadata(&"LightTypeDirectional");
    Il2CppMethodInitialized_18434539b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LightTypeDirectional",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LightTypePoint",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LightTypeSpot",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShadowTypeNone",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShadowTypeHard",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShadowTypeSoft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TypeOfLight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Range",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpotAngle",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Color",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Intensity",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BounceIntensity",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShadowType",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShadowStrength",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WeatherControlled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLightBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__LightTypeDirectional>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypeDirectional_g____getter_2_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypeDirectional_g____getter_2_0(CustomLogic_CustomLogicLightBuiltin_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__LightTypePoint>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypePoint_g____getter_3_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2230

Il2CppObject*
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypePoint_g____getter_3_0(CustomLogic_CustomLogicLightBuiltin_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 2;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__LightTypeSpot>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypeSpot_g____getter_4_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__LightTypeSpot_g____getter_4_0(CustomLogic_CustomLogicLightBuiltin_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowTypeNone>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeNone_g____getter_5_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeNone_g____getter_5_0(CustomLogic_CustomLogicLightBuiltin_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowTypeHard>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeHard_g____getter_6_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeHard_g____getter_6_0(CustomLogic_CustomLogicLightBuiltin_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowTypeSoft>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeSoft_g____getter_7_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2230

Il2CppObject*
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowTypeSoft_g____getter_7_0(CustomLogic_CustomLogicLightBuiltin_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 2;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__TypeOfLight>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__TypeOfLight_g____getter_8_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x181ef39f0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__TypeOfLight_g____getter_8_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    local_res8[0] = UnityEngine_Light__get_type(__this,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__TypeOfLight>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__TypeOfLight_g____setter_8_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef3a40

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__TypeOfLight_g____setter_8_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  int32_t value;
  
  if (Il2CppMethodInitialized_18434539c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434539c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_type(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Range>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Range_g____getter_9_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2b40

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Range_g____getter_9_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    local_res8[0] = UnityEngine_Light__get_range(__this,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Range>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Range_g____setter_9_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef2b90

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Range_g____setter_9_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_18434539d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434539d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_range(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__SpotAngle>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__SpotAngle_g____getter_10_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x181ef3340

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__SpotAngle_g____getter_10_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    local_res8[0] = UnityEngine_Light__get_spotAngle(__this,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__SpotAngle>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__SpotAngle_g____setter_10_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef3390

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__SpotAngle_g____setter_10_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_18434539e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434539e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_spotAngle(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Color>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Color_g____getter_11_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x181ef10e0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Color_g____getter_11_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  undefined8 uVar2;
  undefined8 uVar3;
  UnityEngine_Color_o *pUVar4;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  UnityEngine_Color_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345387 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      Il2CppMethodInitialized_184345387 = '\x01';
    }
    pMVar1 = (__i->fields).Value;
    if ((pMVar1 != (Map_MapLight_o *)0x0) &&
       (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
      pUVar4 = UnityEngine_Light__get_color((UnityEngine_Color_o *)local_28,__this,(MethodInfo *)0x0);
      uVar2._0_4_ = (pUVar4->fields).r;
      uVar2._4_4_ = (pUVar4->fields).g;
      uVar3._0_4_ = (pUVar4->fields).b;
      uVar3._4_4_ = (pUVar4->fields).a;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      local_28[0]._0_8_ = uVar2;
      local_28[0]._8_8_ = uVar3;
      CustomLogic_CustomLogicColorBuiltin___ctor_1ecf3a0
                (__this_00,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Color>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Color_g____setter_11_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef1170

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Color_g____setter_11_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  Utility_Color255_o *__this;
  UnityEngine_Light_o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar2;
  UnityEngine_Color_o *pUVar3;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_18434539f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434539f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
  if ((((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
       (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
      (pCVar2 != (CustomLogic_CustomLogicColorBuiltin_o *)0x0)) &&
     (__this = (pCVar2->fields).Value, __this != (Utility_Color255_o *)0x0)) {
    __this_00 = (pMVar1->fields).Light;
    pUVar3 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_18,__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Light_o *)0x0) {
      local_18.r = (pUVar3->fields).r;
      local_18.g = (pUVar3->fields).g;
      local_18.b = (pUVar3->fields).b;
      local_18.a = (pUVar3->fields).a;
      UnityEngine_Light__set_color(__this_00,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Intensity>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Intensity_g____getter_12_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x181ef1fa0

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Intensity_g____getter_12_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) {
    local_res8[0] = (pMVar1->fields).MaxIntensity;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__Intensity>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Intensity_g____setter_12_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef1fe0

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__Intensity_g____setter_12_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_1843453a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453a0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) {
    (pMVar1->fields).MaxIntensity = fVar2;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__BounceIntensity>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__BounceIntensity_g____getter_13_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x181ef0830

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__BounceIntensity_g____getter_13_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    local_res8[0] = UnityEngine_Light__get_bounceIntensity(__this,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__BounceIntensity>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__BounceIntensity_g____setter_13_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef0880

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__BounceIntensity_g____setter_13_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_1843453a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453a1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowType>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowType_g____getter_14_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x181ef3150

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowType_g____getter_14_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    local_res8[0] = UnityEngine_Light__get_shadows(__this,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowType>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowType_g____setter_14_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef31a0

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowType_g____setter_14_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  int32_t value;
  
  if (Il2CppMethodInitialized_1843453a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453a2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowStrength>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowStrength_g____getter_15_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x181ef3070

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowStrength_g____getter_15_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    local_res8[0] = UnityEngine_Light__get_shadowStrength(__this,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__ShadowStrength>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowStrength_g____setter_15_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef30c0

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__ShadowStrength_g____setter_15_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_1843453a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453a3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (((__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) &&
      (pMVar1 = (__i->fields).Value, pMVar1 != (Map_MapLight_o *)0x0)) &&
     (__this = (pMVar1->fields).Light, __this != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__WeatherControlled>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__WeatherControlled_g____getter_16_0 (CustomLogic_CustomLogicLightBuiltin_o* __i, const MethodInfo* method);
// 0x181ef3c80

Il2CppObject *
CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__WeatherControlled_g____getter_16_0
          (CustomLogic_CustomLogicLightBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) {
    local_res8[0] = (__i->fields)._weatherControlled;
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin.Bindings$$<__CreatePropertyBinding__WeatherControlled>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__WeatherControlled_g____setter_16_1 (CustomLogic_CustomLogicLightBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef3cb0

void CustomLogic_CustomLogicLightBuiltin_Bindings_____CreatePropertyBinding__WeatherControlled_g____setter_16_1
               (CustomLogic_CustomLogicLightBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Map_MapLight_o *pMVar3;
  System_Collections_Generic_List_Light__o *pSVar4;
  UnityEngine_Light_o *item;
  UnityEngine_Light_array *pUVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  
  if (Il2CppMethodInitialized_1843453a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453a4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicLightBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345388 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Light_Add);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Light_Contains);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Light_Remove);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
      Il2CppMethodInitialized_184345388 = '\x01';
    }
    (__i->fields)._weatherControlled = bVar7;
    if (bVar7) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pMVar3 = (__i->fields).Value;
      if ((pMVar3 != (Map_MapLight_o *)0x0) &&
         (pSVar4 = TypeInfo_Map_MapLoader->static_fields->Daylight,
         pSVar4 != (System_Collections_Generic_List_Light__o *)0x0)) {
        bVar7 = System_Collections_Generic_List_object___Contains
                          ((System_Collections_Generic_List_object__o *)pSVar4,
                           (Il2CppObject *)(pMVar3->fields).Light,
                           (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_Light_Contains);
        if (bVar7) {
          return;
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pMVar6 = MethodInfo_System_Collections_Generic_List_Light_Add;
        pMVar3 = (__i->fields).Value;
        if ((pMVar3 != (Map_MapLight_o *)0x0) &&
           (pSVar4 = TypeInfo_Map_MapLoader->static_fields->Daylight,
           pSVar4 != (System_Collections_Generic_List_Light__o *)0x0)) {
          item = (pMVar3->fields).Light;
          piVar1 = &(pSVar4->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar5 = (pSVar4->fields)._items;
          if (pUVar5 != (UnityEngine_Light_array *)0x0) {
            uVar2 = (pSVar4->fields)._size;
            if ((uint)pUVar5->max_length <= uVar2) {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                         (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
              return;
            }
            (pSVar4->fields)._size = uVar2 + 1;
            if ((uint)pUVar5->max_length <= uVar2) {
              ThrowIndexOutOfRangeException();
            }
            pUVar5->m_Items[(int)uVar2] = item;
            Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2,item);
            return;
          }
        }
      }
    }
    else {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pMVar3 = (__i->fields).Value;
      if ((pMVar3 != (Map_MapLight_o *)0x0) &&
         (pSVar4 = TypeInfo_Map_MapLoader->static_fields->Daylight,
         pSVar4 != (System_Collections_Generic_List_Light__o *)0x0)) {
        System_Collections_Generic_List_object___Remove
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)(pMVar3->fields).Light,
                   (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_Light_Remove);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLightBuiltin___ctor (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x181f01510

void
CustomLogic_CustomLogicLightBuiltin___ctor(CustomLogic_CustomLogicLightBuiltin_o* __this, MethodInfo* method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicLightBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLightBuiltin___ctor (CustomLogic_CustomLogicLightBuiltin_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* owner, int32_t type, const MethodInfo* method);
// 0x181f035e0

void CustomLogic_CustomLogicLightBuiltin___ctor_1f035e0
               (CustomLogic_CustomLogicLightBuiltin_o *__this,CustomLogic_CustomLogicMapObjectBuiltin_o *owner
               ,int32_t type,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *value;
  UnityEngine_Light_o *pUVar2;
  Map_MapLight_o *pMVar3;
  UnityEngine_Light_o *light;
  
  if (Il2CppMethodInitialized_184345386 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_Light);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Light);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184345386 = '\x01';
  }
  if ((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar1 = (owner->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) {
    pUVar2 = CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_
                       ((pMVar1->fields).GameObject,
                        (MethodInfo_659F10 *)
                        MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_Light);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)pUVar2,
               (MethodInfo *)0x0);
    (__this->fields).OwnerMapObject = owner;
    Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerMapObject,owner);
    pMVar1 = (owner->fields).Value;
    if (pMVar1 != (Map_MapObject_o *)0x0) {
      value = (pMVar1->fields).GameObject;
      (__this->fields).Owner = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Owner,value);
      pUVar2 = (UnityEngine_Light_o *)(__this->fields).Component;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      light = (UnityEngine_Light_o *)0x0;
      if (pUVar2 != (UnityEngine_Light_o *)0x0) {
        if (pUVar2->klass == TypeInfo_UnityEngine_Light) {
          light = pUVar2;
        }
        if (light == (UnityEngine_Light_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
        }
      }
      pMVar3 = Map_MapLoader__RegisterMapLight(light,type == 1,(MethodInfo *)0x0);
      (__this->fields).Value = pMVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Value,pMVar3);
      pMVar3 = (__this->fields).Value;
      if (pMVar3 != (Map_MapLight_o *)0x0) {
        (pMVar3->fields).MaxIntensity = 1.0;
        pMVar3 = (__this->fields).Value;
        if ((pMVar3 != (Map_MapLight_o *)0x0) &&
           (pUVar2 = (pMVar3->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
          UnityEngine_Light__set_type(pUVar2,type,(MethodInfo *)0x0);
          pMVar3 = (__this->fields).Value;
          if (pMVar3 != (Map_MapLight_o *)0x0) {
            pUVar2 = (pMVar3->fields).Light;
            if (type == 1) {
              if (pUVar2 != (UnityEngine_Light_o *)0x0) {
                UnityEngine_Light__set_shadows(pUVar2,2,(MethodInfo *)0x0);
                pMVar3 = (__this->fields).Value;
                if ((pMVar3 != (Map_MapLight_o *)0x0) &&
                   (pUVar2 = (pMVar3->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
                  UnityEngine_Light__set_shadowStrength(pUVar2,0.8,(MethodInfo *)0x0);
                  pMVar3 = (__this->fields).Value;
                  if ((pMVar3 != (Map_MapLight_o *)0x0) &&
                     (pUVar2 = (pMVar3->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
                    UnityEngine_Light__set_shadowBias(pUVar2,0.2,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
            else if (pUVar2 != (UnityEngine_Light_o *)0x0) {
              UnityEngine_Light__set_shadows(pUVar2,0,(MethodInfo *)0x0);
              pMVar3 = (__this->fields).Value;
              if ((pMVar3 != (Map_MapLight_o *)0x0) &&
                 (pUVar2 = (pMVar3->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
                UnityEngine_Light__set_renderMode(pUVar2,1,(MethodInfo *)0x0);
                pMVar3 = (__this->fields).Value;
                if ((pMVar3 != (Map_MapLight_o *)0x0) &&
                   (pUVar2 = (pMVar3->fields).Light, pUVar2 != (UnityEngine_Light_o *)0x0)) {
                  UnityEngine_Light__set_bounceIntensity(pUVar2,0.0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$get_LightTypeDirectional
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypeDirectional (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicLightBuiltin__get_LightTypeDirectional(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicLightBuiltin$$get_LightTypePoint
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypePoint (const MethodInfo* method);
// 0x180846f80

int32_t
CustomLogic_CustomLogicLightBuiltin__get_LightTypePoint(MethodInfo* method)

{
  return 2;
}


// CustomLogic.CustomLogicLightBuiltin$$get_LightTypeSpot
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_LightTypeSpot (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicLightBuiltin__get_LightTypeSpot(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowTypeNone
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeNone (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeNone(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowTypeHard
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeHard (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeHard(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowTypeSoft
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeSoft (const MethodInfo* method);
// 0x180846f80

int32_t
CustomLogic_CustomLogicLightBuiltin__get_ShadowTypeSoft(MethodInfo* method)

{
  return 2;
}


// CustomLogic.CustomLogicLightBuiltin$$get_TypeOfLight
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_TypeOfLight (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x181f039e0

int32_t CustomLogic_CustomLogicLightBuiltin__get_TypeOfLight
                  (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  int32_t iVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    iVar2 = UnityEngine_Light__get_type(__this_00,(MethodInfo *)0x0);
    return iVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$set_TypeOfLight
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_TypeOfLight (CustomLogic_CustomLogicLightBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f03b80

void CustomLogic_CustomLogicLightBuiltin__set_TypeOfLight
               (CustomLogic_CustomLogicLightBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_type(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$get_Range
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_Range (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x181f03920

float CustomLogic_CustomLogicLightBuiltin__get_Range
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  float fVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    fVar2 = UnityEngine_Light__get_range(__this_00,(MethodInfo *)0x0);
    return fVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$set_Range
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_Range (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f03ac0

void CustomLogic_CustomLogicLightBuiltin__set_Range
               (CustomLogic_CustomLogicLightBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_range(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$get_SpotAngle
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_SpotAngle (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x181f039b0

float CustomLogic_CustomLogicLightBuiltin__get_SpotAngle
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  float fVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    fVar2 = UnityEngine_Light__get_spotAngle(__this_00,(MethodInfo *)0x0);
    return fVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$set_SpotAngle
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_SpotAngle (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f03b50

void CustomLogic_CustomLogicLightBuiltin__set_SpotAngle
               (CustomLogic_CustomLogicLightBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_spotAngle(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$get_Color
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicLightBuiltin__get_Color (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x181f03870

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicLightBuiltin__get_Color
          (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  UnityEngine_Color_o *pUVar4;
  CustomLogic_CustomLogicColorBuiltin_o *__this_01;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184345387 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_184345387 = '\x01';
  }
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    pUVar4 = UnityEngine_Light__get_color((UnityEngine_Color_o *)local_28,__this_00,(MethodInfo *)0x0);
    uVar2._0_4_ = (pUVar4->fields).r;
    uVar2._4_4_ = (pUVar4->fields).g;
    uVar3._0_4_ = (pUVar4->fields).b;
    uVar3._4_4_ = (pUVar4->fields).a;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    local_28[0]._0_8_ = uVar2;
    local_28[0]._8_8_ = uVar3;
    CustomLogic_CustomLogicColorBuiltin___ctor_1ecf3a0
              (__this_01,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$set_Color
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_Color (CustomLogic_CustomLogicLightBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x181f03a40

void CustomLogic_CustomLogicLightBuiltin__set_Color
               (CustomLogic_CustomLogicLightBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *value,
               MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  Utility_Color255_o *__this_00;
  UnityEngine_Light_o *__this_01;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_Color_Fields local_18;
  
  pMVar1 = (__this->fields).Value;
  if (((pMVar1 != (Map_MapLight_o *)0x0) && (value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0)) &&
     (__this_00 = (value->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
    __this_01 = (pMVar1->fields).Light;
    pUVar2 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_18,__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Light_o *)0x0) {
      local_18.r = (pUVar2->fields).r;
      local_18.g = (pUVar2->fields).g;
      local_18.b = (pUVar2->fields).b;
      local_18.a = (pUVar2->fields).a;
      UnityEngine_Light__set_color(__this_01,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$get_Intensity
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_Intensity (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x181f03900

float CustomLogic_CustomLogicLightBuiltin__get_Intensity
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapLight_o *)0x0) {
    return (pMVar1->fields).MaxIntensity;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$set_Intensity
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_Intensity (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f03aa0

void CustomLogic_CustomLogicLightBuiltin__set_Intensity
               (CustomLogic_CustomLogicLightBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  
  pMVar1 = (__this->fields).Value;
  if (pMVar1 != (Map_MapLight_o *)0x0) {
    (pMVar1->fields).MaxIntensity = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$get_BounceIntensity
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_BounceIntensity (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x181f03810

float CustomLogic_CustomLogicLightBuiltin__get_BounceIntensity
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  float fVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    fVar2 = UnityEngine_Light__get_bounceIntensity(__this_00,(MethodInfo *)0x0);
    return fVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$set_BounceIntensity
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_BounceIntensity (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f03a10

void CustomLogic_CustomLogicLightBuiltin__set_BounceIntensity
               (CustomLogic_CustomLogicLightBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_bounceIntensity(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowType
// il2cpp: int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowType (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x181f03980

int32_t CustomLogic_CustomLogicLightBuiltin__get_ShadowType
                  (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  int32_t iVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    iVar2 = UnityEngine_Light__get_shadows(__this_00,(MethodInfo *)0x0);
    return iVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$set_ShadowType
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_ShadowType (CustomLogic_CustomLogicLightBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f03b20

void CustomLogic_CustomLogicLightBuiltin__set_ShadowType
               (CustomLogic_CustomLogicLightBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadows(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$get_ShadowStrength
// il2cpp: float CustomLogic_CustomLogicLightBuiltin__get_ShadowStrength (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x181f03950

float CustomLogic_CustomLogicLightBuiltin__get_ShadowStrength
                (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  float fVar2;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    fVar2 = UnityEngine_Light__get_shadowStrength(__this_00,(MethodInfo *)0x0);
    return fVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$set_ShadowStrength
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_ShadowStrength (CustomLogic_CustomLogicLightBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f03af0

void CustomLogic_CustomLogicLightBuiltin__set_ShadowStrength
               (CustomLogic_CustomLogicLightBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_MapLight_o *pMVar1;
  UnityEngine_Light_o *__this_00;
  
  pMVar1 = (__this->fields).Value;
  if ((pMVar1 != (Map_MapLight_o *)0x0) &&
     (__this_00 = (pMVar1->fields).Light, __this_00 != (UnityEngine_Light_o *)0x0)) {
    UnityEngine_Light__set_shadowStrength(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$get_WeatherControlled
// il2cpp: bool CustomLogic_CustomLogicLightBuiltin__get_WeatherControlled (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x180c7fb40

bool
CustomLogic_CustomLogicLightBuiltin__get_WeatherControlled(CustomLogic_CustomLogicLightBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields)._weatherControlled;
}


// CustomLogic.CustomLogicLightBuiltin$$set_WeatherControlled
// il2cpp: void CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled (CustomLogic_CustomLogicLightBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f03bb0

void CustomLogic_CustomLogicLightBuiltin__set_WeatherControlled
               (CustomLogic_CustomLogicLightBuiltin_o *__this,bool value,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Map_MapLight_o *pMVar3;
  System_Collections_Generic_List_Light__o *pSVar4;
  UnityEngine_Light_o *item;
  UnityEngine_Light_array *pUVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  
  if (Il2CppMethodInitialized_184345388 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Light_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Light_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Light_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184345388 = '\x01';
  }
  (__this->fields)._weatherControlled = value;
  if (value) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pMVar3 = (__this->fields).Value;
    if ((pMVar3 != (Map_MapLight_o *)0x0) &&
       (pSVar4 = TypeInfo_Map_MapLoader->static_fields->Daylight,
       pSVar4 != (System_Collections_Generic_List_Light__o *)0x0)) {
      bVar7 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)pSVar4,
                         (Il2CppObject *)(pMVar3->fields).Light,
                         (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_Light_Contains);
      if (bVar7) {
        return;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pMVar6 = MethodInfo_System_Collections_Generic_List_Light_Add;
      pMVar3 = (__this->fields).Value;
      if ((pMVar3 != (Map_MapLight_o *)0x0) &&
         (pSVar4 = TypeInfo_Map_MapLoader->static_fields->Daylight,
         pSVar4 != (System_Collections_Generic_List_Light__o *)0x0)) {
        item = (pMVar3->fields).Light;
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar5 = (pSVar4->fields)._items;
        if (pUVar5 != (UnityEngine_Light_array *)0x0) {
          uVar2 = (pSVar4->fields)._size;
          if ((uint)pUVar5->max_length <= uVar2) {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                       (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
            return;
          }
          (pSVar4->fields)._size = uVar2 + 1;
          if ((uint)pUVar5->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pUVar5->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2,item);
          return;
        }
      }
    }
  }
  else {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pMVar3 = (__this->fields).Value;
    if ((pMVar3 != (Map_MapLight_o *)0x0) &&
       (pSVar4 = TypeInfo_Map_MapLoader->static_fields->Daylight,
       pSVar4 != (System_Collections_Generic_List_Light__o *)0x0)) {
      System_Collections_Generic_List_object___Remove
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)(pMVar3->fields).Light,
                 (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_Light_Remove);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLightBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLightBuiltin__get_ClassName (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x181f03840

System_String_o *
CustomLogic_CustomLogicLightBuiltin__get_ClassName
          (CustomLogic_CustomLogicLightBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345389 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LightBuiltin");
    Il2CppMethodInitialized_184345389 = '\x01';
  }
  return "LightBuiltin";
}


// CustomLogic.CustomLogicLightBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLightBuiltin__get_IsAbstract (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLightBuiltin__get_IsAbstract(CustomLogic_CustomLogicLightBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLightBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLightBuiltin__get_IsStatic (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLightBuiltin__get_IsStatic(CustomLogic_CustomLogicLightBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLightBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLightBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLightBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLightBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicLightBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


