// Type: CustomLogic.CustomLogicPhysicsMaterialBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPhysicsMaterialBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f08020

CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434541c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin);
    Il2CppMethodInitialized_18434541c = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin);
      CustomLogic_BuiltinComponentInstance___ctor
                ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                 (MethodInfo *)0x0);
      return __this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPhysicsMaterialBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181f59e20

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843454e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843454e9 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings.<>c$$<__CreateMethodBinding__Setup>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_____CreateMethodBinding__Setup_b__7_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f598a0

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_____CreateMethodBinding__Setup_b__7_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool allChildColliders;
  
  if (Il2CppMethodInitialized_1843454ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843454ea = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    allChildColliders =
         CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                   (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if (__c != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) {
      CustomLogic_CustomLogicPhysicsMaterialBuiltin__Setup(__c,allChildColliders,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181eeabd0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  Il2CppObject *object;
  bool bVar1;
  System_Func_CustomLogicPhysicsMaterialBuiltin__object__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this_01;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this_02;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_03;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_04;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_18434541d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Bounciness");
    il2cpp_codegen_initialize_runtime_metadata(&"Setup");
    il2cpp_codegen_initialize_runtime_metadata(&"StaticFriction");
    il2cpp_codegen_initialize_runtime_metadata(&"BounceCombine");
    il2cpp_codegen_initialize_runtime_metadata(&"DynamicFriction");
    il2cpp_codegen_initialize_runtime_metadata(&"FrictionCombine");
    Il2CppMethodInitialized_18434541d = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"StaticFriction",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_18434541e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__StaticFriction_g
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__StaticFriction_g_40c7bd0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
      Il2CppMethodInitialized_18434541e = '\x01';
    }
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__StaticFriction_g
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__StaticFriction_g_40c7bd0
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"DynamicFriction",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434541f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__DynamicFriction
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__DynamicFriction_40c7850
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
        Il2CppMethodInitialized_18434541f = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__DynamicFriction
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__DynamicFriction_40c7850
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"Bounciness",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings->_2).cctor_finished_or_no_cctor
            == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345420 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__Bounciness_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__Bounciness_g_40c7690
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
          Il2CppMethodInitialized_184345420 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__Bounciness_g
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object)
        ;
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__Bounciness_g_40c7690
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"FrictionCombine",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345421 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__FrictionCombine
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__FrictionCombine_40c7a10
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
            Il2CppMethodInitialized_184345421 = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__FrictionCombine
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
          pMVar3 = 
          MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__FrictionCombine_40c7a10
          ;
        }
        else {
          bVar1 = System_String__op_Equality(name,"BounceCombine",(MethodInfo *)0x0);
          if (!bVar1) {
            bVar1 = System_String__op_Equality(name,"Setup",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_184345423 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object_array_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c___CreateMethodBinding__Setup_b__7_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c);
                Il2CppMethodInitialized_184345423 = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c);
              }
              __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                          TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->static_fields->
                          __9__7_0;
              if (__this_02 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
                if ((TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c)
                  ;
                }
                object = (Il2CppObject *)
                         TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->static_fields->__9
                ;
                __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                            il2cpp_codegen_object_new
                                      ((Il2CppClass *)
                                       TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object_array_object
                                      );
                System_Func_object__object__object____ctor
                          (__this_02,object,
                           (intptr_t)
                           MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c___CreateMethodBinding__Setup_b__7_0
                           ,(MethodInfo *)0x0);
                TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->static_fields->__9__7_0 =
                     (System_Func_CustomLogicPhysicsMaterialBuiltin__object____object__o *)__this_02;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->static_fields->
                            __9__7_0,__this_02);
              }
              __this_03 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin);
              CustomLogic_CLMethodBinding_object____ctor
                        (__this_03,(System_String_o *)__this_02,
                         MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
              return (CustomLogic_ICLMemberBinding_o *)__this_03;
            }
            pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPhysicsMaterialBuiltin not found");
            str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
            pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
            klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
            __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
            System_Exception___ctor_1b6abf0(__this_04,pSVar2,(MethodInfo *)0x0);
            pMVar3 = il2cpp_codegen_get_runtime_metadata
                               (&
                                MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_CreateMemberBinding
                               );
            il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar3);
          }
          if ((TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345422 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__BounceCombine_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__BounceCombine_g_40c74d0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
            Il2CppMethodInitialized_184345422 = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__BounceCombine_g
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
          pMVar3 = 
          MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__BounceCombine_g_40c74d0
          ;
        }
      }
    }
  }
  System_Action_object__object____ctor
            (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_01;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__StaticFriction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__StaticFriction (const MethodInfo* method);
// 0x181efe360

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__StaticFriction
          (MethodInfo *method)

{
  System_Func_CustomLogicPhysicsMaterialBuiltin__object__o *__this;
  System_Action_CustomLogicPhysicsMaterialBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434541e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__StaticFriction_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__StaticFriction_g_40c7bd0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object)
    ;
    Il2CppMethodInitialized_18434541e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__StaticFriction_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__StaticFriction_g_40c7bd0
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__DynamicFriction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__DynamicFriction (const MethodInfo* method);
// 0x181efb8e0

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__DynamicFriction
          (MethodInfo *method)

{
  System_Func_CustomLogicPhysicsMaterialBuiltin__object__o *__this;
  System_Action_CustomLogicPhysicsMaterialBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434541f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__DynamicFriction
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__DynamicFriction_40c7850
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object)
    ;
    Il2CppMethodInitialized_18434541f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__DynamicFriction
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__DynamicFriction_40c7850
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__Bounciness
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__Bounciness (const MethodInfo* method);
// 0x181efabc0

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__Bounciness
          (MethodInfo *method)

{
  System_Func_CustomLogicPhysicsMaterialBuiltin__object__o *__this;
  System_Action_CustomLogicPhysicsMaterialBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345420 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__Bounciness_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__Bounciness_g_40c7690
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object)
    ;
    Il2CppMethodInitialized_184345420 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__Bounciness_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__Bounciness_g_40c7690
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__FrictionCombine
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__FrictionCombine (const MethodInfo* method);
// 0x181efbf20

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__FrictionCombine
          (MethodInfo *method)

{
  System_Func_CustomLogicPhysicsMaterialBuiltin__object__o *__this;
  System_Action_CustomLogicPhysicsMaterialBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345421 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__FrictionCombine
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__FrictionCombine_40c7a10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object)
    ;
    Il2CppMethodInitialized_184345421 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__FrictionCombine
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__FrictionCombine_40c7a10
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreatePropertyBinding__BounceCombine
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__BounceCombine (const MethodInfo* method);
// 0x181efa9e0

CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreatePropertyBinding__BounceCombine
          (MethodInfo *method)

{
  System_Func_CustomLogicPhysicsMaterialBuiltin__object__o *__this;
  System_Action_CustomLogicPhysicsMaterialBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345422 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__BounceCombine_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__BounceCombine_g_40c74d0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object)
    ;
    Il2CppMethodInitialized_184345422 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__BounceCombine_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPhysicsMaterialBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___CreatePropertyBinding__BounceCombine_g_40c74d0
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$__CreateMethodBinding__Setup
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin__o* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreateMethodBinding__Setup (const MethodInfo* method);
// 0x181ef8fc0

CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin__o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings____CreateMethodBinding__Setup(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345423 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c___CreateMethodBinding__Setup_b__7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345423 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
        0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicPhysicsMaterialBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c___CreateMethodBinding__Setup_b__7_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicPhysicsMaterialBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_c->static_fields->__9__7_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin
                        );
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPhysicsMaterialBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181effc50

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345424 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Bounciness");
    il2cpp_codegen_initialize_runtime_metadata(&"Setup");
    il2cpp_codegen_initialize_runtime_metadata(&"StaticFriction");
    il2cpp_codegen_initialize_runtime_metadata(&"BounceCombine");
    il2cpp_codegen_initialize_runtime_metadata(&"DynamicFriction");
    il2cpp_codegen_initialize_runtime_metadata(&"FrictionCombine");
    Il2CppMethodInitialized_184345424 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StaticFriction",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DynamicFriction",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Bounciness",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FrictionCombine",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BounceCombine",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Setup",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings->static_fields->MemberNames,
               __this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__StaticFriction>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__StaticFriction_g____getter_2_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x181ef3530

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__StaticFriction_g____getter_2_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    local_res8[0] = Map_CustomPhysicsMaterial__get_StaticFriction(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__StaticFriction>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__StaticFriction_g____setter_2_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef3570

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__StaticFriction_g____setter_2_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_184345425 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345425 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    Map_CustomPhysicsMaterial__set_StaticFriction(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__DynamicFriction>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__DynamicFriction_g____getter_3_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x181ef1710

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__DynamicFriction_g____getter_3_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    local_res8[0] = Map_CustomPhysicsMaterial__get_DynamicFriction(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__DynamicFriction>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__DynamicFriction_g____setter_3_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef1750

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__DynamicFriction_g____setter_3_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_184345426 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345426 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    Map_CustomPhysicsMaterial__set_DynamicFriction(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__Bounciness>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__Bounciness_g____getter_4_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x181ef0910

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__Bounciness_g____getter_4_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    local_res8[0] = Map_CustomPhysicsMaterial__get_Bounciness(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__Bounciness>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__Bounciness_g____setter_4_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef0950

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__Bounciness_g____setter_4_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_184345427 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345427 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    Map_CustomPhysicsMaterial__set_Bounciness(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__FrictionCombine>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__FrictionCombine_g____getter_5_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x181ef1c00

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__FrictionCombine_g____getter_5_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    local_res8[0] = Map_CustomPhysicsMaterial__get_FrictionCombine(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__FrictionCombine>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__FrictionCombine_g____setter_5_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef1c40

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__FrictionCombine_g____setter_5_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  int32_t value;
  
  if (Il2CppMethodInitialized_184345428 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345428 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    Map_CustomPhysicsMaterial__set_FrictionCombine(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__BounceCombine>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__BounceCombine_g____getter_6_0 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, const MethodInfo* method);
// 0x181ef0760

Il2CppObject *
CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__BounceCombine_g____getter_6_0
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    local_res8[0] = Map_CustomPhysicsMaterial__get_BounceCombine(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin.Bindings$$<__CreatePropertyBinding__BounceCombine>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__BounceCombine_g____setter_6_1 (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef07a0

void CustomLogic_CustomLogicPhysicsMaterialBuiltin_Bindings_____CreatePropertyBinding__BounceCombine_g____setter_6_1
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this;
  int32_t value;
  
  if (Il2CppMethodInitialized_184345429 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345429 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (Map_CustomPhysicsMaterial_o *)0x0)) {
    Map_CustomPhysicsMaterial__set_BounceCombine(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin___ctor (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x181f01510

void
CustomLogic_CustomLogicPhysicsMaterialBuiltin___ctor(CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, MethodInfo* method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin___ctor (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* owner, const MethodInfo* method);
// 0x181f07400

void CustomLogic_CustomLogicPhysicsMaterialBuiltin___ctor_1f07400
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,
               CustomLogic_CustomLogicMapObjectBuiltin_o *owner,MethodInfo *method)

{
  byte bVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_GameObject_o *value;
  Map_CustomPhysicsMaterial_o *pMVar3;
  
  if (Il2CppMethodInitialized_18434541a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_CustomPhysicsMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomPhysicsMaterial);
    Il2CppMethodInitialized_18434541a = '\x01';
  }
  if ((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar2 = (owner->fields).Value, pMVar2 != (Map_MapObject_o *)0x0)) {
    pMVar3 = CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_
                       ((pMVar2->fields).GameObject,
                        (MethodInfo_659F10 *)
                        MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_CustomPhysicsMaterial
                       );
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)pMVar3,
               (MethodInfo *)0x0);
    (__this->fields).OwnerMapObject = owner;
    Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerMapObject,owner);
    pMVar2 = (owner->fields).Value;
    if (pMVar2 != (Map_MapObject_o *)0x0) {
      value = (pMVar2->fields).GameObject;
      (__this->fields).Owner = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Owner,value);
      pMVar3 = (Map_CustomPhysicsMaterial_o *)(__this->fields).Component;
      if (pMVar3 == (Map_CustomPhysicsMaterial_o *)0x0) {
        (__this->fields).Value = (Map_CustomPhysicsMaterial_o *)0x0;
      }
      else {
        bVar1 = (TypeInfo_Map_CustomPhysicsMaterial->_2).typeHierarchyDepth;
        if (((((UnityEngine_Component_c *)pMVar3->klass)->_2).typeHierarchyDepth < bVar1) ||
           ((((UnityEngine_Component_c *)pMVar3->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Map_CustomPhysicsMaterial)) {
          il2cpp_codegen_raise_invalid_cast_exception(pMVar3);
        }
        (__this->fields).Value = pMVar3;
        bVar1 = (TypeInfo_Map_CustomPhysicsMaterial->_2).typeHierarchyDepth;
        if (((((UnityEngine_Component_c *)pMVar3->klass)->_2).typeHierarchyDepth < bVar1) ||
           ((((UnityEngine_Component_c *)pMVar3->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Map_CustomPhysicsMaterial)) {
          il2cpp_codegen_raise_invalid_cast_exception(pMVar3);
        }
      }
      Il2CppCodeGenWriteBarrier(&(__this->fields).Value,pMVar3);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_StaticFriction
// il2cpp: float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_StaticFriction (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x181f075f0

float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_StaticFriction
                (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    fVar1 = Map_CustomPhysicsMaterial__get_StaticFriction(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_StaticFriction
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_StaticFriction (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f07690

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_StaticFriction
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    Map_CustomPhysicsMaterial__set_StaticFriction(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_DynamicFriction
// il2cpp: float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_DynamicFriction (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x181f075b0

float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_DynamicFriction
                (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    fVar1 = Map_CustomPhysicsMaterial__get_DynamicFriction(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_DynamicFriction
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_DynamicFriction (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f07650

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_DynamicFriction
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    Map_CustomPhysicsMaterial__set_DynamicFriction(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_Bounciness
// il2cpp: float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_Bounciness (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x181f07560

float CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_Bounciness
                (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    fVar1 = Map_CustomPhysicsMaterial__get_Bounciness(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_Bounciness
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_Bounciness (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f07630

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_Bounciness
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,float value,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    Map_CustomPhysicsMaterial__set_Bounciness(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_FrictionCombine
// il2cpp: int32_t CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_FrictionCombine (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x181f075d0

int32_t CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_FrictionCombine
                  (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    iVar1 = Map_CustomPhysicsMaterial__get_FrictionCombine(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_FrictionCombine
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_FrictionCombine (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f07670

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_FrictionCombine
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    Map_CustomPhysicsMaterial__set_FrictionCombine(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_BounceCombine
// il2cpp: int32_t CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_BounceCombine (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x181f07540

int32_t CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_BounceCombine
                  (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    iVar1 = Map_CustomPhysicsMaterial__get_BounceCombine(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$set_BounceCombine
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_BounceCombine (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f07610

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__set_BounceCombine
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    Map_CustomPhysicsMaterial__set_BounceCombine(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$Setup
// il2cpp: void CustomLogic_CustomLogicPhysicsMaterialBuiltin__Setup (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, bool allChildColliders, const MethodInfo* method);
// 0x181f073e0

void CustomLogic_CustomLogicPhysicsMaterialBuiltin__Setup
               (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,bool allChildColliders,
               MethodInfo *method)

{
  Map_CustomPhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Map_CustomPhysicsMaterial_o *)0x0) {
    Map_CustomPhysicsMaterial__Setup(__this_00,allChildColliders,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_ClassName (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x181f07580

System_String_o *
CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_ClassName
          (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434541b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PhysicsMaterialBuiltin");
    Il2CppMethodInitialized_18434541b = '\x01';
  }
  return "PhysicsMaterialBuiltin";
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_IsAbstract (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_IsAbstract(CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_IsStatic (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_IsStatic(CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicPhysicsMaterialBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicPhysicsMaterialBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicPhysicsMaterialBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


