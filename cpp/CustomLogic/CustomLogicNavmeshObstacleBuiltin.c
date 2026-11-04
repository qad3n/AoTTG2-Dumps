// Type: CustomLogic.CustomLogicNavmeshObstacleBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicNavmeshObstacleBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f077b0

CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345404 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin);
    Il2CppMethodInitialized_184345404 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin);
      CustomLogic_BuiltinComponentInstance___ctor
                ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                 (MethodInfo *)0x0);
      return __this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicNavmeshObstacleBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181f0c9b0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184345419 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345419 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings.<>c$$<__CreateMethodBinding__AutoScale>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_____CreateMethodBinding__AutoScale_b__11_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f08550

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_____CreateMethodBinding__AutoScale_b__11_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) {
    CustomLogic_CustomLogicNavmeshObstacleBuiltin__AutoScale(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181eeb210

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  Il2CppObject *object;
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this_01;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_02;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_03;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_04;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_184345405 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"ShapeCapsule");
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"ShapeBox");
    il2cpp_codegen_initialize_runtime_metadata(&"Carving");
    il2cpp_codegen_initialize_runtime_metadata(&"Radius");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoScale");
    il2cpp_codegen_initialize_runtime_metadata(&"CarveOnlyStationary");
    il2cpp_codegen_initialize_runtime_metadata(&"Shape");
    il2cpp_codegen_initialize_runtime_metadata(&"Height");
    Il2CppMethodInitialized_184345405 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x4380ddc7) {
    if (uVar2 < 0x1bd13563) {
      if (uVar2 == 0xfd70833) {
        bVar1 = System_String__op_Equality(name,"ShapeBox",(MethodInfo *)0x0);
        if (!bVar1) goto label_181eebb5d;
        if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor
            == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345406 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__ShapeBox_g____ge
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
          Il2CppMethodInitialized_184345406 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__ShapeBox_g____ge
        ;
        goto label_181eeb589;
      }
      if (uVar2 != 0x1bd13562) goto label_181eebb5d;
      bVar1 = System_String__op_Equality(name,"Height",(MethodInfo *)0x0);
      if (!bVar1) goto label_181eebb5d;
      if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345409 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Height_g____gett
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Height_g____sett
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
        Il2CppMethodInitialized_184345409 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Height_g____gett
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Height_g____sett
      ;
    }
    else if (uVar2 == 0x28528e11) {
      bVar1 = System_String__op_Equality(name,"Scale",(MethodInfo *)0x0);
      if (!bVar1) goto label_181eebb5d;
      if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434540a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Scale_g____gette
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Scale_g____sette
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
        Il2CppMethodInitialized_18434540a = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Scale_g____gette
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Scale_g____sette
      ;
    }
    else if (uVar2 == 0x3a8111d3) {
      bVar1 = System_String__op_Equality(name,"Radius",(MethodInfo *)0x0);
      if (!bVar1) goto label_181eebb5d;
      if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345408 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Radius_g____gett
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Radius_g____sett
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
        Il2CppMethodInitialized_184345408 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Radius_g____gett
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Radius_g____sett
      ;
    }
    else {
      if (uVar2 != 0x4380ddc6) goto label_181eebb5d;
      bVar1 = System_String__op_Equality(name,"Shape",(MethodInfo *)0x0);
      if (!bVar1) goto label_181eebb5d;
      if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434540e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Shape_g____gette
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Shape_g____sette
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
        Il2CppMethodInitialized_18434540e = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Shape_g____gette
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Shape_g____sette
      ;
    }
  }
  else if (uVar2 < 0x4b9fbea5) {
    if (uVar2 == 0x48479f2b) {
      bVar1 = System_String__op_Equality(name,"Carving",(MethodInfo *)0x0);
      if (!bVar1) goto label_181eebb5d;
      if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434540c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Carving_g____get
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Carving_g____set
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
        Il2CppMethodInitialized_18434540c = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Carving_g____get
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Carving_g____set
      ;
    }
    else {
      if (uVar2 != 0x4b9fbea4) goto label_181eebb5d;
      bVar1 = System_String__op_Equality(name,"Center",(MethodInfo *)0x0);
      if (!bVar1) goto label_181eebb5d;
      if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434540b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Center_g____gett
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Center_g____sett
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
        Il2CppMethodInitialized_18434540b = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Center_g____gett
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Center_g____sett
      ;
    }
  }
  else {
    if (uVar2 != 0x7a0c4e3c) {
      if (uVar2 == 0x83a1c814) {
        bVar1 = System_String__op_Equality(name,"AutoScale",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434540f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c___CreateMethodBinding__AutoScale_b__11
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434540f = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->static_fields->
                      __9__11_0;
          if (__this_01 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c);
            }
            object = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object_array_object)
            ;
            ExitGames_Client_Photon_SerializeStreamMethod___ctor
                      (__this_01,object,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c___CreateMethodBinding__AutoScale_b__11
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->static_fields->__9__11_0 =
                 (System_Func_CustomLogicNavmeshObstacleBuiltin__object____object__o *)__this_01;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->static_fields->
                        __9__11_0,__this_01);
          }
          __this_02 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (__this_02,(System_String_o *)__this_01,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)__this_02;
        }
label_181eebb5d:
        pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicNavmeshObstacleBuiltin not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_04,pSVar3,(MethodInfo *)0x0);
        pMVar4 = il2cpp_codegen_get_runtime_metadata
                           (&
                            MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_CreateMemberBinding
                           );
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar4);
      }
      if (uVar2 != 0xf50bdc61) goto label_181eebb5d;
      bVar1 = System_String__op_Equality(name,"ShapeCapsule",(MethodInfo *)0x0);
      if (!bVar1) goto label_181eebb5d;
      if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345407 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__ShapeCapsule_g
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
        Il2CppMethodInitialized_184345407 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__ShapeCapsule_g
      ;
label_181eeb589:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
      __this_03 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
      goto label_181eebb38;
    }
    bVar1 = System_String__op_Equality(name,"CarveOnlyStationary",(MethodInfo *)0x0);
    if (!bVar1) goto label_181eebb5d;
    if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_18434540d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__CarveOnlyStation
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__CarveOnlyStation_40c4138
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
      Il2CppMethodInitialized_18434540d = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
    System_Func_object__object____ctor
              (__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__CarveOnlyStation
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
    pMVar4 = 
    MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__CarveOnlyStation_40c4138
    ;
  }
  System_Action_object__object____ctor
            (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo *)0x0);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
label_181eebb38:
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_03,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_03;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__ShapeBox
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeBox (const MethodInfo* method);
// 0x181efde10

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeBox(MethodInfo *method)

{
  System_Func_CustomLogicNavmeshObstacleBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345406 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__ShapeBox_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object)
    ;
    Il2CppMethodInitialized_184345406 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__ShapeBox_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__ShapeCapsule
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeCapsule (const MethodInfo* method);
// 0x181efdeb0

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeCapsule
          (MethodInfo *method)

{
  System_Func_CustomLogicNavmeshObstacleBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345407 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__ShapeCapsule_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object)
    ;
    Il2CppMethodInitialized_184345407 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__ShapeCapsule_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Radius
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Radius (const MethodInfo* method);
// 0x181efd460

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Radius(MethodInfo *method)

{
  System_Func_CustomLogicNavmeshObstacleBuiltin__object__o *__this;
  System_Action_CustomLogicNavmeshObstacleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345408 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Radius_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Radius_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object)
    ;
    Il2CppMethodInitialized_184345408 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Radius_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Radius_g____sett
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Height
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Height (const MethodInfo* method);
// 0x181efc150

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Height(MethodInfo *method)

{
  System_Func_CustomLogicNavmeshObstacleBuiltin__object__o *__this;
  System_Action_CustomLogicNavmeshObstacleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345409 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Height_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Height_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object)
    ;
    Il2CppMethodInitialized_184345409 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Height_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Height_g____sett
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Scale
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Scale (const MethodInfo* method);
// 0x181efd870

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Scale(MethodInfo *method)

{
  System_Func_CustomLogicNavmeshObstacleBuiltin__object__o *__this;
  System_Action_CustomLogicNavmeshObstacleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434540a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Scale_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Scale_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object)
    ;
    Il2CppMethodInitialized_18434540a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Scale_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Scale_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Center
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Center (const MethodInfo* method);
// 0x181efae90

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Center(MethodInfo *method)

{
  System_Func_CustomLogicNavmeshObstacleBuiltin__object__o *__this;
  System_Action_CustomLogicNavmeshObstacleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434540b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Center_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Center_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object)
    ;
    Il2CppMethodInitialized_18434540b = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Center_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Center_g____sett
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Carving
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Carving (const MethodInfo* method);
// 0x181efada0

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Carving(MethodInfo *method)

{
  System_Func_CustomLogicNavmeshObstacleBuiltin__object__o *__this;
  System_Action_CustomLogicNavmeshObstacleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434540c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Carving_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Carving_g____set
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object)
    ;
    Il2CppMethodInitialized_18434540c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Carving_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Carving_g____set
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__CarveOnlyStationary
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__CarveOnlyStationary (const MethodInfo* method);
// 0x181efacb0

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__CarveOnlyStationary
          (MethodInfo *method)

{
  System_Func_CustomLogicNavmeshObstacleBuiltin__object__o *__this;
  System_Action_CustomLogicNavmeshObstacleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434540d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__CarveOnlyStation
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__CarveOnlyStation_40c4138
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object)
    ;
    Il2CppMethodInitialized_18434540d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__CarveOnlyStation
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__CarveOnlyStation_40c4138
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Shape
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Shape (const MethodInfo* method);
// 0x181efdf50

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Shape(MethodInfo *method)

{
  System_Func_CustomLogicNavmeshObstacleBuiltin__object__o *__this;
  System_Action_CustomLogicNavmeshObstacleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434540e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Shape_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Shape_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object)
    ;
    Il2CppMethodInitialized_18434540e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Shape_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___CreatePropertyBinding__Shape_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreateMethodBinding__AutoScale
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreateMethodBinding__AutoScale (const MethodInfo* method);
// 0x181ef44c0

CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreateMethodBinding__AutoScale(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434540f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c___CreateMethodBinding__AutoScale_b__11
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434540f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->static_fields->__9__11_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
        0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicNavmeshObstacleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c___CreateMethodBinding__AutoScale_b__11
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->static_fields->__9__11_0 =
         (System_Func_CustomLogicNavmeshObstacleBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_c->static_fields->__9__11_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin
                        );
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181eff740

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345410 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"ShapeCapsule");
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"ShapeBox");
    il2cpp_codegen_initialize_runtime_metadata(&"Carving");
    il2cpp_codegen_initialize_runtime_metadata(&"Radius");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoScale");
    il2cpp_codegen_initialize_runtime_metadata(&"CarveOnlyStationary");
    il2cpp_codegen_initialize_runtime_metadata(&"Shape");
    il2cpp_codegen_initialize_runtime_metadata(&"Height");
    Il2CppMethodInitialized_184345410 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShapeBox",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShapeCapsule",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Radius",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Height",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Scale",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Center",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Carving",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CarveOnlyStationary",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Shape",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AutoScale",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings->static_fields->MemberNames,
               __this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__ShapeBox>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__ShapeBox_g____getter_2_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2200

Il2CppObject*
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__ShapeBox_g____getter_2_0(CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 1;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__ShapeCapsule>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__ShapeCapsule_g____getter_3_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2260

Il2CppObject*
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__ShapeCapsule_g____getter_3_0(CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Radius>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Radius_g____getter_4_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2a70

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Radius_g____getter_4_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    local_res8[0] = UnityEngine_AI_NavMeshObstacle__get_radius(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Radius>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Radius_g____setter_4_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef2ab0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Radius_g____setter_4_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_184345411 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345411 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_radius(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Height>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Height_g____getter_5_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x181ef1da0

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Height_g____getter_5_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    local_res8[0] = UnityEngine_AI_NavMeshObstacle__get_height(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Height>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Height_g____setter_5_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef1de0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Height_g____setter_5_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_184345412 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345412 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_height(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_6_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2d50

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_6_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  UnityEngine_AI_NavMeshObstacle_o *__this;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345400 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345400 = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
      pUVar3 = UnityEngine_AI_NavMeshObstacle__get_size
                         ((UnityEngine_Vector3_o *)local_28,__this,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar3->fields).x;
      uVar1._4_4_ = (pUVar3->fields).y;
      fVar2 = (pUVar3->fields).z;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_28[0]._0_8_ = uVar1;
      local_28[0].z = fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_6_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef2df0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_6_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184345413 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345413 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
      (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    local_18.x = (pCVar1->fields).Value.fields.x;
    local_18.y = (pCVar1->fields).Value.fields.y;
    local_18.z = (pCVar1->fields).Value.fields.z;
    UnityEngine_AI_NavMeshObstacle__set_size(__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Center>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____getter_7_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x181ef0b80

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____getter_7_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  UnityEngine_Vector3_o *pUVar1;
  Il2CppObject *pIVar2;
  undefined8 local_28;
  float local_20;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184345414 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_184345414 = '\x01';
  }
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    pUVar1 = UnityEngine_AI_NavMeshObstacle__get_center(&local_18,__this,(MethodInfo *)0x0);
    local_28._0_4_ = (pUVar1->fields).x;
    local_28._4_4_ = (pUVar1->fields).y;
    local_20 = (pUVar1->fields).z;
    pIVar2 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_28);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Center>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____setter_7_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef0ca0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____setter_7_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184345415 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_Vector3)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345415 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  CustomLogic_CustomLogicEvaluator__ConvertTo_Vector3_
            ((UnityEngine_Vector3_o *)&local_28,__v,
             (MethodInfo_66EF10 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_Vector3);
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    local_18.x = local_28.x;
    local_18.y = local_28.y;
    local_18.z = local_28.z;
    UnityEngine_AI_NavMeshObstacle__set_center(__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Carving>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Carving_g____getter_8_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x181ef0ab0

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Carving_g____getter_8_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    local_res8[0] = UnityEngine_AI_NavMeshObstacle__get_carving(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Carving>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Carving_g____setter_8_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef0af0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Carving_g____setter_8_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_184345416 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345416 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carving(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__CarveOnlyStationary>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____getter_9_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x181ef09e0

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____getter_9_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    local_res8[0] = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__CarveOnlyStationary>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____setter_9_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef0a20

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____setter_9_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_184345417 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345417 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Shape>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____getter_10_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x181ef3230

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____getter_10_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    local_res8[0] = UnityEngine_AI_NavMeshObstacle__get_shape(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Shape>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____setter_10_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef3270

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____setter_10_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  int32_t value;
  
  if (Il2CppMethodInitialized_184345418 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345418 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_shape(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x181f01510

void
CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor(CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, MethodInfo* method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* owner, const MethodInfo* method);
// 0x181f07020

void CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor_1f07020
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,
               CustomLogic_CustomLogicMapObjectBuiltin_o *owner,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *value;
  UnityEngine_Component_o *pUVar2;
  UnityEngine_AI_NavMeshObstacle_o *component;
  UnityEngine_Component_o *pUVar3;
  UnityEngine_Component_o *value_00;
  
  if (Il2CppMethodInitialized_1843453ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_NavMeshObstacle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AI_NavMeshObstacle);
    Il2CppMethodInitialized_1843453ff = '\x01';
  }
  if ((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar1 = (owner->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) {
    component = CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_
                          ((pMVar1->fields).GameObject,
                           (MethodInfo_659F10 *)
                           MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_NavMeshObstacle);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)component,
               (MethodInfo *)0x0);
    (__this->fields).OwnerMapObject = owner;
    Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerMapObject,owner);
    pMVar1 = (owner->fields).Value;
    if (pMVar1 != (Map_MapObject_o *)0x0) {
      value = (pMVar1->fields).GameObject;
      (__this->fields).Owner = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Owner,value);
      pUVar2 = (__this->fields).Component;
      value_00 = (UnityEngine_Component_o *)0x0;
      if (pUVar2 == (UnityEngine_Component_o *)0x0) {
        (__this->fields).Value = (UnityEngine_AI_NavMeshObstacle_o *)0x0;
      }
      else {
        pUVar3 = value_00;
        if ((UnityEngine_AI_NavMeshObstacle_c *)pUVar2->klass == TypeInfo_UnityEngine_AI_NavMeshObstacle) {
          pUVar3 = pUVar2;
        }
        if (pUVar3 == (UnityEngine_Component_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UnityEngine_AI_NavMeshObstacle);
        }
        (__this->fields).Value = (UnityEngine_AI_NavMeshObstacle_o *)pUVar3;
        if ((UnityEngine_AI_NavMeshObstacle_c *)pUVar2->klass == TypeInfo_UnityEngine_AI_NavMeshObstacle) {
          value_00 = pUVar2;
        }
        if (value_00 == (UnityEngine_Component_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UnityEngine_AI_NavMeshObstacle);
        }
      }
      Il2CppCodeGenWriteBarrier(&(__this->fields).Value,value_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_ShapeBox
// il2cpp: int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ShapeBox (const MethodInfo* method);
// 0x180564040

int32_t
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ShapeBox(MethodInfo* method)

{
  return 1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_ShapeCapsule
// il2cpp: int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ShapeCapsule (const MethodInfo* method);
// 0x18059b2e0

int32_t
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ShapeCapsule(MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Radius
// il2cpp: float CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Radius (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x181f071f0

float CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Radius
                (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    fVar1 = UnityEngine_AI_NavMeshObstacle__get_radius(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Radius
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Radius (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f07360

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Radius
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_radius(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Height
// il2cpp: float CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Height (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x181f071d0

float CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Height
                (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    fVar1 = UnityEngine_AI_NavMeshObstacle__get_height(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Height
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Height (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f07340

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Height
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_height(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Scale
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Scale (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x181f07210

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Scale
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184345400 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345400 = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    pUVar3 = UnityEngine_AI_NavMeshObstacle__get_size
                       ((UnityEngine_Vector3_o *)local_28,__this_00,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar3->fields).x;
    uVar1._4_4_ = (pUVar3->fields).y;
    fVar2 = (pUVar3->fields).z;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Scale
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Scale (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f07380

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Scale
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    local_18[0].x = (value->fields).Value.fields.x;
    local_18[0].y = (value->fields).Value.fields.y;
    local_18[0].z = (value->fields).Value.fields.z;
    UnityEngine_AI_NavMeshObstacle__set_size(__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Center
// il2cpp: UnityEngine_Vector3_o CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Center (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x181f07160

UnityEngine_Vector3_o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Center
          (UnityEngine_Vector3_o *__return_storage_ptr__,
          CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  float fVar2;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Vector3_o local_18;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    pUVar3 = UnityEngine_AI_NavMeshObstacle__get_center(&local_18,__this_00,(MethodInfo *)0x0);
    fVar2 = (pUVar3->fields).y;
    fVar1 = (pUVar3->fields).z;
    (__return_storage_ptr__->fields).x = (pUVar3->fields).x;
    (__return_storage_ptr__->fields).y = fVar2;
    (__return_storage_ptr__->fields).z = fVar1;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Center
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Center (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x181f07300

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Center
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,UnityEngine_Vector3_o *value,
               MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    local_18[0].x = (value->fields).x;
    local_18[0].y = (value->fields).y;
    local_18[0].z = (value->fields).z;
    UnityEngine_AI_NavMeshObstacle__set_center(__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Carving
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Carving (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x181f07140

bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Carving
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    bVar1 = UnityEngine_AI_NavMeshObstacle__get_carving(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Carving
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Carving (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f072e0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Carving
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carving(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_CarveOnlyStationary
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_CarveOnlyStationary (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x181f07120

bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_CarveOnlyStationary
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    bVar1 = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_CarveOnlyStationary
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_CarveOnlyStationary (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f072c0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_CarveOnlyStationary
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Shape
// il2cpp: int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Shape (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x181f072a0

int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Shape
                  (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    iVar1 = UnityEngine_AI_NavMeshObstacle__get_shape(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Shape
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Shape (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f073c0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Shape
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_shape(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$AutoScale
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__AutoScale (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x181f06780

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__AutoScale
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_Collider_array *pUVar3;
  UnityEngine_Collider_o *collider;
  UnityEngine_AI_NavMeshObstacle_o *pUVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  bool bVar28;
  UnityEngine_Transform_o *pUVar29;
  UnityEngine_Matrix4x4_o *pUVar30;
  UnityEngine_Bounds_o *pUVar31;
  uint uVar32;
  UnityEngine_Bounds_o local_1f8;
  UnityEngine_Bounds_o local_1d8;
  UnityEngine_Bounds_o local_1b8;
  UnityEngine_Matrix4x4_Fields local_198;
  UnityEngine_Matrix4x4_Fields local_158;
  UnityEngine_Bounds_o local_118;
  UnityEngine_Matrix4x4_o local_100 [3];
  
  if (Il2CppMethodInitialized_184345401 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184345401 = '\x01';
  }
  __this_00 = (__this->fields).Owner;
  local_1f8.fields.m_Extents.fields.y = 0.0;
  local_1f8.fields.m_Extents.fields.z = 0.0;
  local_1f8.fields.m_Center.fields.x = 0.0;
  local_1f8.fields.m_Center.fields.y = 0.0;
  local_1f8.fields.m_Center.fields.z = 0.0;
  local_1f8.fields.m_Extents.fields.x = 0.0;
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar29 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     pUVar29 != (UnityEngine_Transform_o *)0x0)) {
    pUVar30 = UnityEngine_Transform__get_worldToLocalMatrix
                        ((UnityEngine_Matrix4x4_o *)&local_198,pUVar29,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).OwnerMapObject;
    local_1d8.fields.m_Extents.fields.y = 0.0;
    local_1d8.fields.m_Extents.fields.z = 0.0;
    local_1d8.fields.m_Center.fields.x = 0.0;
    local_1d8.fields.m_Center.fields.y = 0.0;
    local_1d8.fields.m_Center.fields.z = 0.0;
    local_1d8.fields.m_Extents.fields.x = 0.0;
    if ((pCVar1 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
       ((pMVar2 = (pCVar1->fields).Value, pMVar2 != (Map_MapObject_o *)0x0 &&
        (pUVar3 = (pMVar2->fields).colliderCache, pUVar3 != (UnityEngine_Collider_array *)0x0)))) {
      uVar5._0_4_ = (pUVar30->fields).m00;
      uVar5._4_4_ = (pUVar30->fields).m10;
      uVar6._0_4_ = (pUVar30->fields).m20;
      uVar6._4_4_ = (pUVar30->fields).m30;
      bVar21 = false;
      uVar32 = 0;
      uVar7._0_4_ = (pUVar30->fields).m01;
      uVar7._4_4_ = (pUVar30->fields).m11;
      uVar8._0_4_ = (pUVar30->fields).m21;
      uVar8._4_4_ = (pUVar30->fields).m31;
      uVar9._0_4_ = (pUVar30->fields).m02;
      uVar9._4_4_ = (pUVar30->fields).m12;
      uVar10._0_4_ = (pUVar30->fields).m22;
      uVar10._4_4_ = (pUVar30->fields).m32;
      uVar11._0_4_ = (pUVar30->fields).m03;
      uVar11._4_4_ = (pUVar30->fields).m13;
      uVar12._0_4_ = (pUVar30->fields).m23;
      uVar12._4_4_ = (pUVar30->fields).m33;
      while ((int)uVar32 < (int)pUVar3->max_length) {
        if ((uint)pUVar3->max_length <= uVar32) {
          ThrowIndexOutOfRangeException();
        }
        collider = pUVar3->m_Items[(int)uVar32];
        bVar28 = CustomLogic_CustomLogicNavmeshObstacleBuiltin__TryGetColliderBounds
                           (collider,&local_1f8,(MethodInfo *)0x0);
        if (bVar28) {
          if ((collider == (UnityEngine_Collider_o *)0x0) ||
             (pUVar29 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)collider,(MethodInfo *)0x0),
             uVar26 = local_1f8.fields.m_Extents.fields._4_8_, uVar24 = local_1f8.fields._8_8_,
             uVar22 = local_1f8.fields.m_Center.fields._0_8_, pUVar29 == (UnityEngine_Transform_o *)0x0))
          goto label_181f06b33;
          pUVar30 = UnityEngine_Transform__get_localToWorldMatrix
                              ((UnityEngine_Matrix4x4_o *)&local_198,pUVar29,(MethodInfo *)0x0);
          local_158.m00 = (pUVar30->fields).m00;
          local_158.m10 = (pUVar30->fields).m10;
          local_158.m20 = (pUVar30->fields).m20;
          local_158.m30 = (pUVar30->fields).m30;
          local_158.m01 = (pUVar30->fields).m01;
          local_158.m11 = (pUVar30->fields).m11;
          local_158.m21 = (pUVar30->fields).m21;
          local_158.m31 = (pUVar30->fields).m31;
          local_158.m02 = (pUVar30->fields).m02;
          local_158.m12 = (pUVar30->fields).m12;
          local_158.m22 = (pUVar30->fields).m22;
          local_158.m32 = (pUVar30->fields).m32;
          local_158.m03 = (pUVar30->fields).m03;
          local_158.m13 = (pUVar30->fields).m13;
          local_158.m23 = (pUVar30->fields).m23;
          local_158.m33 = (pUVar30->fields).m33;
          local_198._0_8_ = uVar5;
          local_198._8_8_ = uVar6;
          local_198._16_8_ = uVar7;
          local_198._24_8_ = uVar8;
          local_198._32_8_ = uVar9;
          local_198._40_8_ = uVar10;
          local_198._48_8_ = uVar11;
          local_198._56_8_ = uVar12;
          pUVar30 = UnityEngine_Matrix4x4__op_Multiply
                              (local_100,(UnityEngine_Matrix4x4_o *)&local_198,
                               (UnityEngine_Matrix4x4_o *)&local_158,(MethodInfo *)0x0);
          uVar13._0_4_ = (pUVar30->fields).m00;
          uVar13._4_4_ = (pUVar30->fields).m10;
          uVar14._0_4_ = (pUVar30->fields).m20;
          uVar14._4_4_ = (pUVar30->fields).m30;
          uVar15._0_4_ = (pUVar30->fields).m01;
          uVar15._4_4_ = (pUVar30->fields).m11;
          uVar16._0_4_ = (pUVar30->fields).m21;
          uVar16._4_4_ = (pUVar30->fields).m31;
          uVar17._0_4_ = (pUVar30->fields).m02;
          uVar17._4_4_ = (pUVar30->fields).m12;
          uVar18._0_4_ = (pUVar30->fields).m22;
          uVar18._4_4_ = (pUVar30->fields).m32;
          uVar19._0_4_ = (pUVar30->fields).m03;
          uVar19._4_4_ = (pUVar30->fields).m13;
          uVar20._0_4_ = (pUVar30->fields).m23;
          uVar20._4_4_ = (pUVar30->fields).m33;
          if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
          }
          uVar27 = local_1f8.fields.m_Extents.fields._4_8_;
          uVar25 = local_1f8.fields._8_8_;
          uVar23 = local_1f8.fields.m_Center.fields._0_8_;
          local_1f8.fields.m_Center.fields.x = (float)uVar22;
          local_1f8.fields.m_Center.fields.y = SUB84(uVar22,4);
          local_1b8.fields.m_Center.fields.x = local_1f8.fields.m_Center.fields.x;
          local_1b8.fields.m_Center.fields.y = local_1f8.fields.m_Center.fields.y;
          local_1f8.fields.m_Center.fields.z = (float)uVar24;
          local_1f8.fields.m_Extents.fields.x = SUB84(uVar24,4);
          local_1b8.fields.m_Center.fields.z = local_1f8.fields.m_Center.fields.z;
          local_1b8.fields.m_Extents.fields.x = local_1f8.fields.m_Extents.fields.x;
          local_1f8.fields.m_Extents.fields.y = (float)uVar26;
          local_1f8.fields.m_Extents.fields.z = SUB84(uVar26,4);
          local_1b8.fields.m_Extents.fields.y = local_1f8.fields.m_Extents.fields.y;
          local_1b8.fields.m_Extents.fields.z = local_1f8.fields.m_Extents.fields.z;
          local_1f8.fields.m_Center.fields._0_8_ = uVar23;
          local_1f8.fields._8_8_ = uVar25;
          local_1f8.fields.m_Extents.fields._4_8_ = uVar27;
          local_198._0_8_ = uVar13;
          local_198._8_8_ = uVar14;
          local_198._16_8_ = uVar15;
          local_198._24_8_ = uVar16;
          local_198._32_8_ = uVar17;
          local_198._40_8_ = uVar18;
          local_198._48_8_ = uVar19;
          local_198._56_8_ = uVar20;
          pUVar31 = Utility_Util__TransformBounds
                              (&local_118,&local_1b8,(UnityEngine_Matrix4x4_o *)&local_198,(MethodInfo *)0x0);
          local_1f8.fields.m_Extents.fields.y = (pUVar31->fields).m_Extents.fields.y;
          local_1f8.fields.m_Extents.fields.z = (pUVar31->fields).m_Extents.fields.z;
          local_1f8.fields.m_Center.fields.x = (pUVar31->fields).m_Center.fields.x;
          local_1f8.fields.m_Center.fields.y = (pUVar31->fields).m_Center.fields.y;
          local_1f8.fields._8_8_ = *(undefined8 *)&(pUVar31->fields).m_Center.fields.z;
          if (bVar21) {
            local_1b8.fields.m_Center.fields._0_8_ = local_1f8.fields.m_Center.fields._0_8_;
            local_1b8.fields._8_8_ = local_1f8.fields._8_8_;
            local_1b8.fields.m_Extents.fields._4_8_ = local_1f8.fields.m_Extents.fields._4_8_;
            UnityEngine_Bounds__Encapsulate_1e7c200(&local_1d8,&local_1b8,(MethodInfo *)0x0);
            goto label_181f06a0c;
          }
          uVar32 = uVar32 + 1;
          bVar21 = true;
          local_1d8.fields.m_Center.fields._0_8_ = local_1f8.fields.m_Center.fields._0_8_;
          local_1d8.fields._8_8_ = local_1f8.fields._8_8_;
          local_1d8.fields.m_Extents.fields._4_8_ = local_1f8.fields.m_Extents.fields._4_8_;
        }
        else {
label_181f06a0c:
          uVar32 = uVar32 + 1;
        }
      }
      if (!bVar21) {
        return;
      }
      pUVar4 = (__this->fields).Value;
      if (pUVar4 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
        UnityEngine_AI_NavMeshObstacle__set_shape(pUVar4,1,(MethodInfo *)0x0);
        pUVar4 = (__this->fields).Value;
        if (pUVar4 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
          local_1f8.fields.m_Center.fields.y =
               local_1d8.fields.m_Extents.fields.y + local_1d8.fields.m_Extents.fields.y;
          local_1f8.fields.m_Center.fields.x =
               local_1d8.fields.m_Extents.fields.x + local_1d8.fields.m_Extents.fields.x;
          local_1f8.fields.m_Center.fields.z =
               local_1d8.fields.m_Extents.fields.z + local_1d8.fields.m_Extents.fields.z;
          UnityEngine_AI_NavMeshObstacle__set_size
                    (pUVar4,(UnityEngine_Vector3_o *)&local_1f8,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).Value;
          if (pUVar4 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
            local_1f8.fields.m_Center.fields.x = local_1d8.fields.m_Center.fields.x;
            local_1f8.fields.m_Center.fields.y = local_1d8.fields.m_Center.fields.y;
            local_1f8.fields.m_Center.fields.z = local_1d8.fields.m_Center.fields.z;
            UnityEngine_AI_NavMeshObstacle__set_center
                      (pUVar4,(UnityEngine_Vector3_o *)&local_1f8,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_181f06b33:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$TryGetColliderBounds
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__TryGetColliderBounds (UnityEngine_Collider_o* collider, UnityEngine_Bounds_o* bounds, const MethodInfo* method);
// 0x181f06b40
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f06e28: movaps xmm0, xmm7
// asm:   0x181f06e2b: jmp 0x181f06e37
// asm:   0x181f06e2d: movaps xmm0, xmm9
// asm:   0x181f06e31: jmp 0x181f06e37
// asm:   0x181f06e33: movaps xmm0, xmm8
// asm:   0x181f06e4d: movaps xmm7, xmm6
// asm:   0x181f06e50: jmp 0x181f06e5c
// asm:   0x181f06e52: movaps xmm9, xmm6
// asm:   0x181f06e56: jmp 0x181f06e5c
// asm:   0x181f06e58: movaps xmm8, xmm6

bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__TryGetColliderBounds
               (UnityEngine_Collider_o *collider,UnityEngine_Bounds_o *bounds,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  UnityEngine_Collider_c *pUVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  undefined8 uVar6;
  bool bVar7;
  int32_t iVar8;
  int32_t iVar9;
  UnityEngine_Vector3_o *pUVar10;
  UnityEngine_Object_o *x;
  UnityEngine_Mesh_o *__this;
  UnityEngine_Bounds_o *pUVar11;
  Il2CppClass *pIVar12;
  System_IndexOutOfRangeException_o *pSVar13;
  System_String_o *pSVar14;
  MethodInfo *pMVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Bounds_o local_88 [5];
  
  if (Il2CppMethodInitialized_184345402 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
    Il2CppMethodInitialized_184345402 = '\x01';
  }
  if (collider != (UnityEngine_Collider_o *)0x0) {
    pUVar4 = collider->klass;
    bVar3 = (TypeInfo_UnityEngine_BoxCollider->_2).typeHierarchyDepth;
    if ((bVar3 <= (pUVar4->_2).typeHierarchyDepth) &&
       ((pUVar4->_2).typeHierarchy[(ulonglong)bVar3 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_BoxCollider))
    {
      pUVar10 = UnityEngine_BoxCollider__get_center
                          ((UnityEngine_Vector3_o *)local_88,(UnityEngine_BoxCollider_o *)collider,
                           (MethodInfo *)0x0);
      fVar21 = (pUVar10->fields).x;
      fVar22 = (pUVar10->fields).y;
      fVar19 = (pUVar10->fields).z;
      pUVar10 = UnityEngine_BoxCollider__get_size
                          ((UnityEngine_Vector3_o *)local_88,(UnityEngine_BoxCollider_o *)collider,
                           (MethodInfo *)0x0);
      uVar1 = (pUVar10->fields).x;
      uVar2 = (pUVar10->fields).y;
      fVar17 = (pUVar10->fields).z;
      (bounds->fields).m_Center.fields.x = fVar21;
      (bounds->fields).m_Extents.fields.x = (float)uVar1 * 0.5;
      (bounds->fields).m_Extents.fields.y = (float)uVar2 * 0.5;
      (bounds->fields).m_Center.fields.y = fVar22;
      (bounds->fields).m_Center.fields.z = fVar19;
      (bounds->fields).m_Extents.fields.z = fVar17 * 0.5;
      return true;
    }
    bVar3 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
    if ((bVar3 <= (pUVar4->_2).typeHierarchyDepth) &&
       ((pUVar4->_2).typeHierarchy[(ulonglong)bVar3 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider
       )) {
      pUVar10 = UnityEngine_SphereCollider__get_center
                          ((UnityEngine_Vector3_o *)local_88,(UnityEngine_SphereCollider_o *)collider,
                           (MethodInfo *)0x0);
      fVar21 = (pUVar10->fields).x;
      fVar22 = (pUVar10->fields).y;
      fVar19 = (pUVar10->fields).z;
      if (Il2CppMethodInitialized_18433dbeb == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbeb = '\x01';
      }
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar17 = (pUVar5->oneVector).fields.x;
      fVar18 = (pUVar5->oneVector).fields.y;
      fVar20 = (pUVar5->oneVector).fields.z;
      fVar16 = UnityEngine_SphereCollider__get_radius
                         ((UnityEngine_SphereCollider_o *)collider,(MethodInfo *)0x0);
      fVar17 = fVar17 * fVar16;
      fVar18 = fVar18 * fVar16;
      fVar20 = fVar20 * fVar16;
      (bounds->fields).m_Center.fields.y = fVar22;
      (bounds->fields).m_Center.fields.z = fVar19;
      (bounds->fields).m_Extents.fields.x = (fVar17 + fVar17) * 0.5;
      (bounds->fields).m_Extents.fields.y = (fVar18 + fVar18) * 0.5;
      (bounds->fields).m_Extents.fields.z = (fVar20 + fVar20) * 0.5;
      (bounds->fields).m_Center.fields.x = fVar21;
      return true;
    }
    bVar3 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
    if ((bVar3 <= (pUVar4->_2).typeHierarchyDepth) &&
       ((pUVar4->_2).typeHierarchy[(ulonglong)bVar3 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
      if (Il2CppMethodInitialized_18433dbeb == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbeb = '\x01';
      }
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar21 = (pUVar5->oneVector).fields.x;
      fVar22 = (pUVar5->oneVector).fields.y;
      fVar19 = (pUVar5->oneVector).fields.z;
      fVar17 = UnityEngine_CapsuleCollider__get_radius
                         ((UnityEngine_CapsuleCollider_o *)collider,(MethodInfo *)0x0);
      fVar21 = fVar21 * fVar17;
      fVar22 = fVar22 * fVar17;
      fVar19 = fVar19 * fVar17;
      fVar21 = fVar21 + fVar21;
      fVar22 = fVar22 + fVar22;
      fVar19 = fVar19 + fVar19;
      iVar8 = UnityEngine_CapsuleCollider__get_direction
                        ((UnityEngine_CapsuleCollider_o *)collider,(MethodInfo *)0x0);
      fVar18 = UnityEngine_CapsuleCollider__get_height
                         ((UnityEngine_CapsuleCollider_o *)collider,(MethodInfo *)0x0);
      iVar9 = UnityEngine_CapsuleCollider__get_direction
                        ((UnityEngine_CapsuleCollider_o *)collider,(MethodInfo *)0x0);
      fVar17 = fVar21;
      if (((iVar9 != 0) && (fVar17 = fVar22, iVar9 != 1)) && (fVar17 = fVar19, iVar9 != 2)) {
        pIVar12 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IndexOutOfRangeException);
        pSVar13 = (System_IndexOutOfRangeException_o *)il2cpp_codegen_object_new(pIVar12);
        pSVar14 = il2cpp_codegen_get_runtime_metadata(&"Invalid Vector3 index!");
        System_IndexOutOfRangeException___ctor_1b27db0(pSVar13,pSVar14,(MethodInfo *)0x0);
        pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UnityEngine_Vector3_get_Item);
        il2cpp_codegen_raise_exception((Il2CppObject *)pSVar13,pMVar15);
      }
      if (fVar18 <= fVar17) {
        fVar18 = fVar17;
      }
      fVar17 = fVar18;
      fVar20 = fVar22;
      if (((iVar8 != 0) && (fVar17 = fVar21, fVar20 = fVar18, iVar8 != 1)) &&
         (fVar19 = fVar18, fVar20 = fVar22, iVar8 != 2)) {
        pIVar12 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IndexOutOfRangeException);
        pSVar13 = (System_IndexOutOfRangeException_o *)il2cpp_codegen_object_new(pIVar12);
        pSVar14 = il2cpp_codegen_get_runtime_metadata(&"Invalid Vector3 index!");
        System_IndexOutOfRangeException___ctor_1b27db0(pSVar13,pSVar14,(MethodInfo *)0x0);
        pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UnityEngine_Vector3_set_Item);
        il2cpp_codegen_raise_exception((Il2CppObject *)pSVar13,pMVar15);
      }
      pUVar10 = UnityEngine_CapsuleCollider__get_center
                          ((UnityEngine_Vector3_o *)local_88,(UnityEngine_CapsuleCollider_o *)collider,
                           (MethodInfo *)0x0);
      fVar21 = (pUVar10->fields).z;
      fVar22 = (pUVar10->fields).x;
      (bounds->fields).m_Center.fields.y = (pUVar10->fields).y;
      (bounds->fields).m_Center.fields.x = fVar22;
      (bounds->fields).m_Extents.fields.x = fVar17 * 0.5;
      (bounds->fields).m_Extents.fields.y = fVar20 * 0.5;
      (bounds->fields).m_Extents.fields.z = fVar19 * 0.5;
      (bounds->fields).m_Center.fields.z = fVar21;
      return true;
    }
    bVar3 = (TypeInfo_UnityEngine_MeshCollider->_2).typeHierarchyDepth;
    if ((bVar3 <= (pUVar4->_2).typeHierarchyDepth) &&
       ((pUVar4->_2).typeHierarchy[(ulonglong)bVar3 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_MeshCollider))
    {
      x = (UnityEngine_Object_o *)
          UnityEngine_MeshCollider__get_sharedMesh((UnityEngine_MeshCollider_o *)collider,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        __this = UnityEngine_MeshCollider__get_sharedMesh
                           ((UnityEngine_MeshCollider_o *)collider,(MethodInfo *)0x0);
        if (__this != (UnityEngine_Mesh_o *)0x0) {
          pUVar11 = UnityEngine_Mesh__get_bounds(local_88,__this,(MethodInfo *)0x0);
          fVar21 = (pUVar11->fields).m_Center.fields.y;
          uVar6 = *(undefined8 *)&(pUVar11->fields).m_Center.fields.z;
          fVar22 = (pUVar11->fields).m_Extents.fields.y;
          fVar19 = (pUVar11->fields).m_Extents.fields.z;
          (bounds->fields).m_Center.fields.x = (pUVar11->fields).m_Center.fields.x;
          (bounds->fields).m_Center.fields.y = fVar21;
          *(undefined8 *)&(bounds->fields).m_Center.fields.z = uVar6;
          (bounds->fields).m_Extents.fields.y = fVar22;
          (bounds->fields).m_Extents.fields.z = fVar19;
          return true;
        }
        ThrowNullReferenceException();
      }
    }
  }
  (bounds->fields).m_Center.fields.x = 0.0;
  (bounds->fields).m_Center.fields.y = 0.0;
  *(undefined8 *)&(bounds->fields).m_Center.fields.z = 0;
  (bounds->fields).m_Extents.fields.y = 0.0;
  (bounds->fields).m_Extents.fields.z = 0.0;
  return false;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ClassName (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x181f071a0

System_String_o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ClassName
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345403 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"NavmeshObstacleBuiltin");
    Il2CppMethodInitialized_184345403 = '\x01';
  }
  return "NavmeshObstacleBuiltin";
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_IsAbstract (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_IsAbstract(CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_IsStatic (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_IsStatic(CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


