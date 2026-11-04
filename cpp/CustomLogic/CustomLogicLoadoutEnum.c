// Type: CustomLogic.CustomLogicLoadoutEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLoadoutEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLoadoutEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLoadoutEnum_o* CustomLogic_CustomLogicLoadoutEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181ff03b0

CustomLogic_CustomLogicLoadoutEnum_o *
CustomLogic_CustomLogicLoadoutEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicLoadoutEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345ebb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_184345ebb = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
      if (Il2CppMethodInitialized_184345eaf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345eaf = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return __this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLoadoutEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLoadoutEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fd8d70

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLoadoutEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_184345ebc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"HumanBlades");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanLarge");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanAHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanUnarmed");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanSmall");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanThunderspears");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanCivilian");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanMedium");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanAPG");
    Il2CppMethodInitialized_184345ebc = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x7b873af1) {
    if (uVar2 < 0x1ca57969) {
      if (uVar2 == 0x19acadc0) {
        bVar1 = System_String__op_Equality(name,"HumanUnarmed",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ec1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanUnarmed_g____getter_6
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
            Il2CppMethodInitialized_184345ec1 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanUnarmed_g____getter_6
          ;
          goto label_181fd934e;
        }
      }
      else if (uVar2 == 0x1ca57968) {
        bVar1 = System_String__op_Equality(name,"TitanLarge",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ec5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanLarge_g____getter_10_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
            Il2CppMethodInitialized_184345ec5 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanLarge_g____getter_10_0
          ;
          goto label_181fd934e;
        }
      }
    }
    else if (uVar2 == 0x54c554de) {
      bVar1 = System_String__op_Equality(name,"HumanThunderspears",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ec0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanThunderspears_g____get
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
          Il2CppMethodInitialized_184345ec0 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanThunderspears_g____get
        ;
        goto label_181fd934e;
      }
    }
    else if (uVar2 == 0x7b873af0) {
      bVar1 = System_String__op_Equality(name,"TitanSmall",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ec3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanSmall_g____getter_8_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
          Il2CppMethodInitialized_184345ec3 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanSmall_g____getter_8_0
        ;
        goto label_181fd934e;
      }
    }
  }
  else if (uVar2 < 0xb7cd2303) {
    if (uVar2 == 0x927a02b5) {
      bVar1 = System_String__op_Equality(name,"HumanBlades",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ebd == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanBlades_g____getter_2_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
          Il2CppMethodInitialized_184345ebd = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanBlades_g____getter_2_0
        ;
        goto label_181fd934e;
      }
    }
    else if (uVar2 == 0xb7cd2302) {
      bVar1 = System_String__op_Equality(name,"TitanMedium",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ec4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanMedium_g____getter_9_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
          Il2CppMethodInitialized_184345ec4 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanMedium_g____getter_9_0
        ;
        goto label_181fd934e;
      }
    }
  }
  else if (uVar2 == 0xea115bcc) {
    bVar1 = System_String__op_Equality(name,"HumanAPG",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_184345ebf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanAPG_g____getter_4_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
        Il2CppMethodInitialized_184345ebf = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanAPG_g____getter_4_0
      ;
label_181fd934e:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)0x0,
                 (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar2 == 0xea789261) {
    bVar1 = System_String__op_Equality(name,"HumanAHSS",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_184345ebe == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanAHSS_g____getter_3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
        Il2CppMethodInitialized_184345ebe = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanAHSS_g____getter_3_0
      ;
      goto label_181fd934e;
    }
  }
  else if (uVar2 == 0xfacf0a23) {
    bVar1 = System_String__op_Equality(name,"HumanCivilian",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_184345ec2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanCivilian_g____getter_7
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
        Il2CppMethodInitialized_184345ec2 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanCivilian_g____getter_7
      ;
      goto label_181fd934e;
    }
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLoadoutEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanBlades
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanBlades (const MethodInfo* method);
// 0x181fe3e80

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanBlades(MethodInfo *method)

{
  System_Func_CustomLogicLoadoutEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ebd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanBlades_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
    Il2CppMethodInitialized_184345ebd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanBlades_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanAHSS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAHSS (const MethodInfo* method);
// 0x181fe3d40

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAHSS(MethodInfo *method)

{
  System_Func_CustomLogicLoadoutEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ebe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanAHSS_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
    Il2CppMethodInitialized_184345ebe = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanAHSS_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanAPG
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAPG (const MethodInfo* method);
// 0x181fe3de0

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanAPG(MethodInfo *method)

{
  System_Func_CustomLogicLoadoutEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ebf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanAPG_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
    Il2CppMethodInitialized_184345ebf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanAPG_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanThunderspears
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanThunderspears (const MethodInfo* method);
// 0x181fe3fc0

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanThunderspears(MethodInfo *method)

{
  System_Func_CustomLogicLoadoutEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ec0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanThunderspears_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
    Il2CppMethodInitialized_184345ec0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanThunderspears_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanUnarmed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanUnarmed (const MethodInfo* method);
// 0x181fe4060

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanUnarmed(MethodInfo *method)

{
  System_Func_CustomLogicLoadoutEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ec1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanUnarmed_g____getter_6
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
    Il2CppMethodInitialized_184345ec1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanUnarmed_g____getter_6
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__HumanCivilian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanCivilian (const MethodInfo* method);
// 0x181fe3f20

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__HumanCivilian(MethodInfo *method)

{
  System_Func_CustomLogicLoadoutEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ec2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanCivilian_g____getter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
    Il2CppMethodInitialized_184345ec2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__HumanCivilian_g____getter_7
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__TitanSmall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanSmall (const MethodInfo* method);
// 0x181fe8b60

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanSmall(MethodInfo *method)

{
  System_Func_CustomLogicLoadoutEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ec3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanSmall_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
    Il2CppMethodInitialized_184345ec3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanSmall_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__TitanMedium
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanMedium (const MethodInfo* method);
// 0x181fe8ac0

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanMedium(MethodInfo *method)

{
  System_Func_CustomLogicLoadoutEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ec4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanMedium_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
    Il2CppMethodInitialized_184345ec4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanMedium_g____getter_9_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$__CreatePropertyBinding__TitanLarge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o* CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanLarge (const MethodInfo* method);
// 0x181fe8a20

CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *
CustomLogic_CustomLogicLoadoutEnum_Bindings____CreatePropertyBinding__TitanLarge(MethodInfo *method)

{
  System_Func_CustomLogicLoadoutEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ec5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanLarge_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
    Il2CppMethodInitialized_184345ec5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLoadoutEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings___CreatePropertyBinding__TitanLarge_g____getter_10_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLoadoutEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLoadoutEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fe9e30

void CustomLogic_CustomLogicLoadoutEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345ec6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"HumanBlades");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterAnnie");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanLarge");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterArmored");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanAHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanUnarmed");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanSmall");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanThunderspears");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterWallColossal");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanCivilian");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanMedium");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanAPG");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterEren");
    Il2CppMethodInitialized_184345ec6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShifterAnnie",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShifterEren",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShifterArmored",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShifterWallColossal",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HumanBlades",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HumanAHSS",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HumanAPG",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HumanThunderspears",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HumanUnarmed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HumanCivilian",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TitanSmall",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TitanMedium",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TitanLarge",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLoadoutEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanBlades>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanBlades_g____getter_2_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x181fdcea0

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanBlades_g____getter_2_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ec7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_184345ec7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
  }
  if (Il2CppMethodInitialized_1843460c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_1843460c1 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->Blade;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanAHSS>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanAHSS_g____getter_3_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x181fdcda0

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanAHSS_g____getter_3_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ec8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_184345ec8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
  }
  if (Il2CppMethodInitialized_1843460c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_1843460c2 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanAPG>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanAPG_g____getter_4_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x181fdce20

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanAPG_g____getter_4_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ec9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_184345ec9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
  }
  if (Il2CppMethodInitialized_1843460c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_1843460c3 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->APG;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanThunderspears>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanThunderspears_g____getter_5_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x181fdcfa0

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanThunderspears_g____getter_5_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345eca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_184345eca = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
  }
  if (Il2CppMethodInitialized_1843460c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_1843460c4 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanUnarmed>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanUnarmed_g____getter_6_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x181fdd020

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanUnarmed_g____getter_6_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ecb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_184345ecb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
  }
  if (Il2CppMethodInitialized_1843460c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_1843460c5 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__HumanCivilian>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanCivilian_g____getter_7_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x181fdcf20

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__HumanCivilian_g____getter_7_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ecc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_184345ecc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
  }
  if (Il2CppMethodInitialized_1843460c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_1843460c6 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian;
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__TitanSmall>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanSmall_g____getter_8_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x181fde8a0

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanSmall_g____getter_8_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ecd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_184345ecd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
  }
  if (Il2CppMethodInitialized_184345eb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Small");
    Il2CppMethodInitialized_184345eb6 = '\x01';
  }
  return (Il2CppObject *)"Small";
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__TitanMedium>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanMedium_g____getter_9_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x181fde840

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanMedium_g____getter_9_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ece == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_184345ece = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
  }
  if (Il2CppMethodInitialized_184345eb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Medium");
    Il2CppMethodInitialized_184345eb7 = '\x01';
  }
  return (Il2CppObject *)"Medium";
}


// CustomLogic.CustomLogicLoadoutEnum.Bindings$$<__CreatePropertyBinding__TitanLarge>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanLarge_g____getter_10_0 (CustomLogic_CustomLogicLoadoutEnum_o* __i, const MethodInfo* method);
// 0x181fde7e0

Il2CppObject *
CustomLogic_CustomLogicLoadoutEnum_Bindings_____CreatePropertyBinding__TitanLarge_g____getter_10_0
          (CustomLogic_CustomLogicLoadoutEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ecf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    Il2CppMethodInitialized_184345ecf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLoadoutEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
  }
  if (Il2CppMethodInitialized_184345eb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Large");
    Il2CppMethodInitialized_184345eb8 = '\x01';
  }
  return (Il2CppObject *)"Large";
}


// CustomLogic.CustomLogicLoadoutEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicLoadoutEnum___ctor (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x181fee280

void CustomLogic_CustomLogicLoadoutEnum___ctor
               (CustomLogic_CustomLogicLoadoutEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345eaf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345eaf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanBlades
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanBlades (const MethodInfo* method);
// 0x181fee3a0

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanBlades(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345eb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_184345eb0 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return TypeInfo_GameManagers_HumanLoadout->static_fields->Blade;
}


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanAHSS
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanAHSS (const MethodInfo* method);
// 0x181fee300

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanAHSS(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345eb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_184345eb1 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS;
}


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanAPG
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanAPG (const MethodInfo* method);
// 0x181fee350

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanAPG(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345eb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_184345eb2 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return TypeInfo_GameManagers_HumanLoadout->static_fields->APG;
}


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanThunderspears
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanThunderspears (const MethodInfo* method);
// 0x181fee440

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanThunderspears(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345eb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_184345eb3 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear;
}


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanUnarmed
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanUnarmed (const MethodInfo* method);
// 0x181fee490

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanUnarmed(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345eb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_184345eb4 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed;
}


// CustomLogic.CustomLogicLoadoutEnum$$get_HumanCivilian
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_HumanCivilian (const MethodInfo* method);
// 0x181fee3f0

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_HumanCivilian(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345eb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_184345eb5 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian;
}


// CustomLogic.CustomLogicLoadoutEnum$$get_TitanSmall
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_TitanSmall (const MethodInfo* method);
// 0x181fee540

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_TitanSmall(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345eb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Small");
    Il2CppMethodInitialized_184345eb6 = '\x01';
  }
  return "Small";
}


// CustomLogic.CustomLogicLoadoutEnum$$get_TitanMedium
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_TitanMedium (const MethodInfo* method);
// 0x181fee510

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_TitanMedium(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345eb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Medium");
    Il2CppMethodInitialized_184345eb7 = '\x01';
  }
  return "Medium";
}


// CustomLogic.CustomLogicLoadoutEnum$$get_TitanLarge
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_TitanLarge (const MethodInfo* method);
// 0x181fee4e0

System_String_o * CustomLogic_CustomLogicLoadoutEnum__get_TitanLarge(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345eb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Large");
    Il2CppMethodInitialized_184345eb8 = '\x01';
  }
  return "Large";
}


// CustomLogic.CustomLogicLoadoutEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLoadoutEnum__get_ClassName (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x181fee2d0

System_String_o *
CustomLogic_CustomLogicLoadoutEnum__get_ClassName
          (CustomLogic_CustomLogicLoadoutEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345eb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LoadoutEnum");
    Il2CppMethodInitialized_184345eb9 = '\x01';
  }
  return "LoadoutEnum";
}


// CustomLogic.CustomLogicLoadoutEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLoadoutEnum__get_IsAbstract (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLoadoutEnum__get_IsAbstract(CustomLogic_CustomLogicLoadoutEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLoadoutEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLoadoutEnum__get_IsStatic (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLoadoutEnum__get_IsStatic(CustomLogic_CustomLogicLoadoutEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLoadoutEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLoadoutEnum__get_InheritBaseMembers (CustomLogic_CustomLogicLoadoutEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLoadoutEnum__get_InheritBaseMembers(CustomLogic_CustomLogicLoadoutEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLoadoutEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicLoadoutEnum___cctor (const MethodInfo* method);
// 0x181fee150

void CustomLogic_CustomLogicLoadoutEnum___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345eba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLoadoutEnum);
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"WallColossal");
    il2cpp_codegen_initialize_runtime_metadata(&"Armored");
    Il2CppMethodInitialized_184345eba = '\x01';
  }
  TypeInfo_CustomLogic_CustomLogicLoadoutEnum->static_fields->ShifterAnnie = "Annie";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLoadoutEnum->static_fields->ShifterAnnie,"Annie");
  TypeInfo_CustomLogic_CustomLogicLoadoutEnum->static_fields->ShifterEren = "Eren";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLoadoutEnum->static_fields->ShifterEren,"Eren");
  TypeInfo_CustomLogic_CustomLogicLoadoutEnum->static_fields->ShifterArmored = "Armored";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLoadoutEnum->static_fields->ShifterArmored,"Armored"
            );
  TypeInfo_CustomLogic_CustomLogicLoadoutEnum->static_fields->ShifterWallColossal = "WallColossal";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLoadoutEnum->static_fields->ShifterWallColossal,
             "WallColossal");
  return;
}


