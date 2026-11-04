// Type: CustomLogic.CustomLogicInputAnnieShifterEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputAnnieShifterEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputAnnieShifterEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputAnnieShifterEnum_o* CustomLogic_CustomLogicInputAnnieShifterEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fce720

CustomLogic_CustomLogicInputAnnieShifterEnum_o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345bf0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345bf0 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)
      ;
      if (Il2CppMethodInitialized_184345bdf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345bdf = '\x01';
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
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputAnnieShifterEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fa9f20

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_184345bf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabMid");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushBack");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBottom");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBite");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackHead");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabUp");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushHead");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushFront");
    Il2CppMethodInitialized_184345bf1 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x42f9ae8b) {
    if (uVar2 < 0x2cfbaa40) {
      if (uVar2 == 0xe1ef32d) {
        bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345bf3 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Jump_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
            Il2CppMethodInitialized_184345bf3 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Jump_g____getter
          ;
          goto label_181faa82e;
        }
      }
      else if (uVar2 == 0x22ccd730) {
        bVar1 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345bf4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Walk_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
            Il2CppMethodInitialized_184345bf4 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Walk_g____getter
          ;
          goto label_181faa82e;
        }
      }
      else if (uVar2 == 0x2cfbaa3f) {
        bVar1 = System_String__op_Equality(name,"Kick",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345bf2 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Kick_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
            Il2CppMethodInitialized_184345bf2 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Kick_g____getter
          ;
          goto label_181faa82e;
        }
      }
    }
    else if (uVar2 < 0x38122e2c) {
      if (uVar2 == 0x371c1522) {
        bVar1 = System_String__op_Equality(name,"AttackStomp",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345bf7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackStomp_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
            Il2CppMethodInitialized_184345bf7 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackStomp_g
          ;
          goto label_181faa82e;
        }
      }
      else if (uVar2 == 0x38122e2b) {
        bVar1 = System_String__op_Equality(name,"AttackHead",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345bf9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackHead_g____g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
            Il2CppMethodInitialized_184345bf9 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackHead_g____g
          ;
          goto label_181faa82e;
        }
      }
    }
    else if (uVar2 == 0x3acb63d7) {
      bVar1 = System_String__op_Equality(name,"AttackBite",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345bf8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBite_g____g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
          Il2CppMethodInitialized_184345bf8 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBite_g____g
        ;
        goto label_181faa82e;
      }
    }
    else if (uVar2 == 0x42f9ae8a) {
      bVar1 = System_String__op_Equality(name,"AttackBrushFront",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345bfb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushFront
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
          Il2CppMethodInitialized_184345bfb = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushFront
        ;
        goto label_181faa82e;
      }
    }
  }
  else if (uVar2 < 0x86ddd849) {
    if (uVar2 == 0x53765479) {
      bVar1 = System_String__op_Equality(name,"AttackCombo",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345bf5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackCombo_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
          Il2CppMethodInitialized_184345bf5 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackCombo_g
        ;
label_181faa82e:
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                   (System_Action_T__object__o *)0x0,
                   (MethodInfo_12B8EE0 *)
                   MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
        return (CustomLogic_ICLMemberBinding_o *)__this_00;
      }
    }
    else if (uVar2 == 0x76917342) {
      bVar1 = System_String__op_Equality(name,"AttackGrabUp",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345bff == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabUp_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
          Il2CppMethodInitialized_184345bff = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabUp_g
        ;
        goto label_181faa82e;
      }
    }
    else if (uVar2 == 0x86ddd848) {
      bVar1 = System_String__op_Equality(name,"AttackGrabBottom",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345bfd == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabBottom
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
          Il2CppMethodInitialized_184345bfd = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabBottom
        ;
        goto label_181faa82e;
      }
    }
  }
  else if (uVar2 < 0x93e6a9c5) {
    if (uVar2 == 0x92d2a9f1) {
      bVar1 = System_String__op_Equality(name,"AttackSwing",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345bf6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackSwing_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
          Il2CppMethodInitialized_184345bf6 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackSwing_g
        ;
        goto label_181faa82e;
      }
    }
    else if (uVar2 == 0x93e6a9c4) {
      bVar1 = System_String__op_Equality(name,"AttackBrushBack",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345bfa == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushBack_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
          Il2CppMethodInitialized_184345bfa = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushBack_g
        ;
        goto label_181faa82e;
      }
    }
  }
  else if (uVar2 == 0xefa1ddf1) {
    bVar1 = System_String__op_Equality(name,"AttackBrushHead",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345bfc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushHead_g
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
        Il2CppMethodInitialized_184345bfc = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushHead_g
      ;
      goto label_181faa82e;
    }
  }
  else if (uVar2 == 0xff226e93) {
    bVar1 = System_String__op_Equality(name,"AttackGrabMid",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345bfe == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabMid_g
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
        Il2CppMethodInitialized_184345bfe = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabMid_g
      ;
      goto label_181faa82e;
    }
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputAnnieShifterEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__Kick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Kick (const MethodInfo* method);
// 0x181fbfd90

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Kick(MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bf2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Kick_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_184345bf2 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Kick_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x181fbfcf0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bf3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Jump_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_184345bf3 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Jump_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x181fc32b0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bf4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Walk_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_184345bf4 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Walk_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackCombo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackCombo (const MethodInfo* method);
// 0x181fbaed0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackCombo
          (MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bf5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackCombo_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_184345bf5 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackCombo_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackSwing
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackSwing (const MethodInfo* method);
// 0x181fbb3d0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackSwing
          (MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bf6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackSwing_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_184345bf6 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackSwing_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackStomp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackStomp (const MethodInfo* method);
// 0x181fbb330

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackStomp
          (MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bf7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackStomp_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_184345bf7 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackStomp_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBite
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBite (const MethodInfo* method);
// 0x181fbabb0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBite(MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bf8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBite_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_184345bf8 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBite_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackHead
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackHead (const MethodInfo* method);
// 0x181fbb1f0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackHead(MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bf9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackHead_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_184345bf9 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackHead_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBrushBack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushBack (const MethodInfo* method);
// 0x181fbac50

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushBack
          (MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushBack_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_184345bfa = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushBack_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBrushFront
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushFront (const MethodInfo* method);
// 0x181fbacf0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushFront
          (MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushFront
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_184345bfb = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushFront
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBrushHead
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushHead (const MethodInfo* method);
// 0x181fbad90

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushHead
          (MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushHead_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_184345bfc = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushHead_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackGrabBottom
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabBottom (const MethodInfo* method);
// 0x181fbb010

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabBottom
          (MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabBottom
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_184345bfd = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabBottom
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackGrabMid
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabMid (const MethodInfo* method);
// 0x181fbb0b0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabMid
          (MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabMid_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_184345bfe = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabMid_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackGrabUp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabUp (const MethodInfo* method);
// 0x181fbb150

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabUp
          (MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabUp_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_184345bff = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabUp_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fc6170

void CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345c00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabMid");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushBack");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBottom");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBite");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackHead");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabUp");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushHead");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushFront");
    Il2CppMethodInitialized_184345c00 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Kick",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jump",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Walk",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackCombo",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSwing",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackStomp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBite",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackHead",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBrushBack",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBrushFront",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBrushHead",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabBottom",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabMid",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabUp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->static_fields->MemberNames,
               __this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__Kick>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x181fb6360

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345c01 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_184345db4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345db4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->KickValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x181fb6240

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345c02 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_184345db5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345db5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->JumpValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x181fb8930

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345c03 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_184345db6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345db6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->WalkValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackCombo>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_5_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x181fb2f50

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_5_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345c04 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_184345db7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345db7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackComboValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackSwing>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackSwing_g____getter_6_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x181fb33d0

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackSwing_g____getter_6_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345c05 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_184345db8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345db8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackSwingValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackStomp>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_7_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x181fb3340

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_7_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345c06 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_184345db9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345db9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackStompValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBite>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBite_g____getter_8_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x181fb2c80

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBite_g____getter_8_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345c07 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_184345dba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345dba = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBiteValue
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackHead>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackHead_g____getter_9_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x181fb3220

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackHead_g____getter_9_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345c08 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_184345dbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345dbb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackHeadValue
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBrushBack>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushBack_g____getter_10_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x181fb2d10

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushBack_g____getter_10_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345c09 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_184345dbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345dbc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBrushBackValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBrushFront>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushFront_g____getter_11_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x181fb2da0

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushFront_g____getter_11_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345c0a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_184345dbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345dbd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBrushFrontValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBrushHead>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushHead_g____getter_12_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x181fb2e30

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushHead_g____getter_12_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345c0b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_184345dbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345dbe = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBrushHeadValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBottom>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabBottom_g____getter_13_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x181fb3070

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabBottom_g____getter_13_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345c0c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_184345dbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345dbf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackGrabBottomValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackGrabMid>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabMid_g____getter_14_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x181fb3100

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabMid_g____getter_14_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345c0d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_184345dc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345dc0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackGrabMidValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackGrabUp>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabUp_g____getter_15_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x181fb3190

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabUp_g____getter_15_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345c0e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_184345dc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345dc1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackGrabUpValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputAnnieShifterEnum___ctor (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x181fcb040

void CustomLogic_CustomLogicInputAnnieShifterEnum___ctor
               (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345bdf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_Kick
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_Kick (const MethodInfo* method);
// 0x181fcb480

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_Kick(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345be0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345be0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->KickValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_Jump (const MethodInfo* method);
// 0x181fcb430

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_Jump(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345be1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345be1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->JumpValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_Walk (const MethodInfo* method);
// 0x181fcb4d0

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_Walk(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345be2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345be2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->WalkValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackCombo
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackCombo (const MethodInfo* method);
// 0x181fcb1d0

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackCombo(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345be3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345be3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackComboValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackSwing
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackSwing (const MethodInfo* method);
// 0x181fcb3b0

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackSwing(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345be4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345be4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackSwingValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackStomp
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackStomp (const MethodInfo* method);
// 0x181fcb360

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackStomp(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345be5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345be5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackStompValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBite
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBite (const MethodInfo* method);
// 0x181fcb090

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBite(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345be6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345be6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBiteValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackHead
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackHead (const MethodInfo* method);
// 0x181fcb310

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackHead(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345be7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345be7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackHeadValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBrushBack
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushBack (const MethodInfo* method);
// 0x181fcb0e0

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushBack(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345be8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345be8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBrushBackValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBrushFront
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushFront (const MethodInfo* method);
// 0x181fcb130

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushFront(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345be9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345be9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBrushFrontValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBrushHead
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushHead (const MethodInfo* method);
// 0x181fcb180

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushHead(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345bea = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBrushHeadValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackGrabBottom
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabBottom (const MethodInfo* method);
// 0x181fcb220

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabBottom(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345beb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345beb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackGrabBottomValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackGrabMid
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabMid (const MethodInfo* method);
// 0x181fcb270

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabMid(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345bec = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackGrabMidValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackGrabUp
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabUp (const MethodInfo* method);
// 0x181fcb2c0

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabUp(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_184345bed = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackGrabUpValue;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_ClassName (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x181fcb400

System_String_o *
CustomLogic_CustomLogicInputAnnieShifterEnum__get_ClassName
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"InputAnnieShifterEnum");
    Il2CppMethodInitialized_184345bee = '\x01';
  }
  return "InputAnnieShifterEnum";
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputAnnieShifterEnum__get_IsAbstract (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputAnnieShifterEnum__get_IsAbstract(CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputAnnieShifterEnum__get_IsStatic (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputAnnieShifterEnum__get_IsStatic(CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputAnnieShifterEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputAnnieShifterEnum__get_InheritBaseMembers(CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputAnnieShifterEnum___cctor (const MethodInfo* method);
// 0x181fcac70

void CustomLogic_CustomLogicInputAnnieShifterEnum___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackGrabMid");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackHead");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackBrushHead");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackBite");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackBrushFront");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackGrabBottom");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackBrushBack");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackGrabUp");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/Walk");
    Il2CppMethodInitialized_184345bef = '\x01';
  }
  TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->KickValue = "AnnieShifter/Kick";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->KickValue,
             "AnnieShifter/Kick");
  TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->JumpValue = "AnnieShifter/Jump";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->JumpValue,
             "AnnieShifter/Jump");
  TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->WalkValue = "AnnieShifter/Walk";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->WalkValue,
             "AnnieShifter/Walk");
  TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackComboValue =
       "AnnieShifter/AttackCombo";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackComboValue,
             "AnnieShifter/AttackCombo");
  TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackSwingValue =
       "AnnieShifter/AttackSwing";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackSwingValue,
             "AnnieShifter/AttackSwing");
  TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackStompValue =
       "AnnieShifter/AttackStomp";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackStompValue,
             "AnnieShifter/AttackStomp");
  TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBiteValue =
       "AnnieShifter/AttackBite";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBiteValue,
             "AnnieShifter/AttackBite");
  TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackHeadValue =
       "AnnieShifter/AttackHead";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackHeadValue,
             "AnnieShifter/AttackHead");
  TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBrushBackValue =
       "AnnieShifter/AttackBrushBack";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBrushBackValue,
             "AnnieShifter/AttackBrushBack");
  TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBrushFrontValue =
       "AnnieShifter/AttackBrushFront";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBrushFrontValue,
             "AnnieShifter/AttackBrushFront");
  TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBrushHeadValue =
       "AnnieShifter/AttackBrushHead";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBrushHeadValue,
             "AnnieShifter/AttackBrushHead");
  TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackGrabBottomValue =
       "AnnieShifter/AttackGrabBottom";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackGrabBottomValue,
             "AnnieShifter/AttackGrabBottom");
  TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackGrabMidValue =
       "AnnieShifter/AttackGrabMid";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackGrabMidValue,
             "AnnieShifter/AttackGrabMid");
  TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackGrabUpValue =
       "AnnieShifter/AttackGrabUp";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackGrabUpValue,
             "AnnieShifter/AttackGrabUp");
  return;
}


