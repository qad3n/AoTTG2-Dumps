// Type: CustomLogic.CustomLogicInputHumanEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputHumanEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputHumanEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputHumanEnum_o* CustomLogic_CustomLogicInputHumanEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fce980

CustomLogic_CustomLogicInputHumanEnum_o *
CustomLogic_CustomLogicInputHumanEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicInputHumanEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345c9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345c9f = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
      if (Il2CppMethodInitialized_184345c8c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345c8c = '\x01';
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
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputHumanEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputHumanEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fa6900

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputHumanEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_184345ca0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"HorseWalk");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSpecial");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Dash");
    il2cpp_codegen_initialize_runtime_metadata(&"HookLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Dodge");
    il2cpp_codegen_initialize_runtime_metadata(&"HookBoth");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOut");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseJump");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackDefault");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Reload");
    il2cpp_codegen_initialize_runtime_metadata(&"NapeLock");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelIn");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseMount");
    il2cpp_codegen_initialize_runtime_metadata(&"HookRight");
    Il2CppMethodInitialized_184345ca0 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x540059f0) {
    if (uVar2 < 0x1a5c64b7) {
      if (uVar2 < 0x16ed547b) {
        if (uVar2 == 0xe1ef32d) {
          bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345caa == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Jump_g____getter_11_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
              Il2CppMethodInitialized_184345caa = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Jump_g____getter_11_0
            ;
            goto label_181fa7360;
          }
        }
        else if (uVar2 == 0x16ed547a) {
          bVar1 = System_String__op_Equality(name,"ReelIn",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ca7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__ReelIn_g____getter_8_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
              Il2CppMethodInitialized_184345ca7 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__ReelIn_g____getter_8_0
            ;
            goto label_181fa7360;
          }
        }
      }
      else if (uVar2 == 0x1a43a2ac) {
        bVar1 = System_String__op_Equality(name,"Reload",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345cab == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Reload_g____getter_12_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object)
            ;
            Il2CppMethodInitialized_184345cab = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Reload_g____getter_12_0
          ;
          goto label_181fa7360;
        }
      }
      else if (uVar2 == 0x1a5c64b6) {
        bVar1 = System_String__op_Equality(name,"AttackDefault",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ca1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__AttackDefault_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object)
            ;
            Il2CppMethodInitialized_184345ca1 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__AttackDefault_g____gette
          ;
          goto label_181fa7360;
        }
      }
    }
    else if (uVar2 < 0x2e485539) {
      if (uVar2 == 0x22ccd730) {
        bVar1 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345cb0 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Walk_g____getter_17_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object)
            ;
            Il2CppMethodInitialized_184345cb0 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Walk_g____getter_17_0
          ;
          goto label_181fa7360;
        }
      }
      else if (uVar2 == 0x2e485538) {
        bVar1 = System_String__op_Equality(name,"NapeLock",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345caf == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__NapeLock_g____getter_16
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object)
            ;
            Il2CppMethodInitialized_184345caf = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__NapeLock_g____getter_16
          ;
          goto label_181fa7360;
        }
      }
    }
    else if (uVar2 == 0x41bc24a7) {
      bVar1 = System_String__op_Equality(name,"HookLeft",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ca3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookLeft_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
          Il2CppMethodInitialized_184345ca3 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookLeft_g____getter_4_0
        ;
        goto label_181fa7360;
      }
    }
    else if (uVar2 == 0x540059ef) {
      bVar1 = System_String__op_Equality(name,"HorseWalk",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345cad == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseWalk_g____getter_14
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
          Il2CppMethodInitialized_184345cad = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseWalk_g____getter_14
        ;
        goto label_181fa7360;
      }
    }
    goto label_181fa73a2;
  }
  if (uVar2 < 0x8f5fbe99) {
    if (uVar2 < 0x68597616) {
      if (uVar2 == 0x5be800ee) {
        bVar1 = System_String__op_Equality(name,"HorseJump",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345cae == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseJump_g____getter_15
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object)
            ;
            Il2CppMethodInitialized_184345cae = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseJump_g____getter_15
          ;
          goto label_181fa7360;
        }
      }
      else if (uVar2 == 0x68597615) {
        bVar1 = System_String__op_Equality(name,"Dash",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ca6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Dash_g____getter_7_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object)
            ;
            Il2CppMethodInitialized_184345ca6 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Dash_g____getter_7_0
          ;
          goto label_181fa7360;
        }
      }
    }
    else if (uVar2 == 0x77f33158) {
      bVar1 = System_String__op_Equality(name,"HookRight",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ca4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookRight_g____getter_5
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
          Il2CppMethodInitialized_184345ca4 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookRight_g____getter_5
        ;
        goto label_181fa7360;
      }
    }
    else if (uVar2 == 0x8f5fbe98) {
      bVar1 = System_String__op_Equality(name,"AttackSpecial",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ca2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__AttackSpecial_g____gette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
          Il2CppMethodInitialized_184345ca2 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__AttackSpecial_g____gette
        ;
        goto label_181fa7360;
      }
    }
  }
  else if (uVar2 < 0xc52547e8) {
    if (uVar2 == 0xa114d213) {
      bVar1 = System_String__op_Equality(name,"ReelOut",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ca8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__ReelOut_g____getter_9_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
          Il2CppMethodInitialized_184345ca8 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__ReelOut_g____getter_9_0
        ;
        goto label_181fa7360;
      }
    }
    else if (uVar2 == 0xc52547e7) {
      bVar1 = System_String__op_Equality(name,"HorseMount",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345cac == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseMount_g____getter_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
          Il2CppMethodInitialized_184345cac = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseMount_g____getter_1
        ;
        goto label_181fa7360;
      }
    }
  }
  else if (uVar2 == 0xf526d670) {
    bVar1 = System_String__op_Equality(name,"Dodge",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345ca9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_10_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
        Il2CppMethodInitialized_184345ca9 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object)
      ;
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_10_0
      ;
label_181fa7360:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)0x0,
                 (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor
                );
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar2 == 0xf8af8641) {
    bVar1 = System_String__op_Equality(name,"HookBoth",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345ca5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookBoth_g____getter_6_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
        Il2CppMethodInitialized_184345ca5 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object)
      ;
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookBoth_g____getter_6_0
      ;
      goto label_181fa7360;
    }
  }
label_181fa73a2:
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputHumanEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__AttackDefault
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackDefault (const MethodInfo* method);
// 0x181fbaf70

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackDefault(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ca1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__AttackDefault_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_184345ca1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__AttackDefault_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__AttackSpecial
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackSpecial (const MethodInfo* method);
// 0x181fbb290

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackSpecial(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ca2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__AttackSpecial_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_184345ca2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__AttackSpecial_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HookLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookLeft (const MethodInfo* method);
// 0x181fbe8f0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookLeft(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ca3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookLeft_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_184345ca3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookLeft_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HookRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookRight (const MethodInfo* method);
// 0x181fbead0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookRight(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ca4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookRight_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_184345ca4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookRight_g____getter_5
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HookBoth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookBoth (const MethodInfo* method);
// 0x181fbe670

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookBoth(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ca5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookBoth_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_184345ca5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookBoth_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Dash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Dash (const MethodInfo* method);
// 0x181fbc9b0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Dash(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ca6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Dash_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_184345ca6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Dash_g____getter_7_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__ReelIn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__ReelIn (const MethodInfo* method);
// 0x181fc10f0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__ReelIn(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ca7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__ReelIn_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_184345ca7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__ReelIn_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__ReelOut
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__ReelOut (const MethodInfo* method);
// 0x181fc1230

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__ReelOut(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ca8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__ReelOut_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_184345ca8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__ReelOut_g____getter_9_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Dodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Dodge (const MethodInfo* method);
// 0x181fbcf50

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Dodge(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ca9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_184345ca9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_10_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x181fbfc50

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345caa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Jump_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_184345caa = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Jump_g____getter_11_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Reload
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Reload (const MethodInfo* method);
// 0x181fc15f0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Reload(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345cab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Reload_g____getter_12_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_184345cab = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Reload_g____getter_12_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HorseMount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseMount (const MethodInfo* method);
// 0x181fbed50

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseMount(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345cac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseMount_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_184345cac = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseMount_g____getter_1
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HorseWalk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseWalk (const MethodInfo* method);
// 0x181fbef30

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseWalk(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345cad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseWalk_g____getter_14
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_184345cad = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseWalk_g____getter_14
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HorseJump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseJump (const MethodInfo* method);
// 0x181fbecb0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseJump(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345cae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseJump_g____getter_15
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_184345cae = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseJump_g____getter_15
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__NapeLock
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__NapeLock (const MethodInfo* method);
// 0x181fc0470

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__NapeLock(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__NapeLock_g____getter_16
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_184345caf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__NapeLock_g____getter_16
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x181fc3350

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345cb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Walk_g____getter_17_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_184345cb0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Walk_g____getter_17_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputHumanEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fc4210

void CustomLogic_CustomLogicInputHumanEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345cb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"HorseWalk");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSpecial");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Dash");
    il2cpp_codegen_initialize_runtime_metadata(&"HookLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Dodge");
    il2cpp_codegen_initialize_runtime_metadata(&"HookBoth");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOut");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseJump");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackDefault");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Reload");
    il2cpp_codegen_initialize_runtime_metadata(&"NapeLock");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelIn");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseMount");
    il2cpp_codegen_initialize_runtime_metadata(&"HookRight");
    Il2CppMethodInitialized_184345cb1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackDefault",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSpecial",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HookLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HookRight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HookBoth",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dash",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ReelIn",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ReelOut",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dodge",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jump",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Reload",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseMount",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseWalk",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseJump",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NapeLock",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Walk",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__AttackDefault>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__AttackDefault_g____getter_2_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x181fb2fe0

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__AttackDefault_g____getter_2_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345cb2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_184345de2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345de2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->AttackDefaultValue;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__AttackSpecial>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__AttackSpecial_g____getter_3_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x181fb32b0

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__AttackSpecial_g____getter_3_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345cb3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_184345de3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345de3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->AttackSpecialValue;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HookLeft>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookLeft_g____getter_4_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x181fb55e0

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookLeft_g____getter_4_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345cb4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_184345de4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345de4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HookLeftValue;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HookRight>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookRight_g____getter_5_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x181fb5730

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookRight_g____getter_5_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345cb5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_184345de5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345de5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HookRightValue;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HookBoth>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookBoth_g____getter_6_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x181fb5430

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookBoth_g____getter_6_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345cb6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_184345de6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345de6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HookBothValue;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Dash>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Dash_g____getter_7_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x181fb4150

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Dash_g____getter_7_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345cb7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_184345de7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345de7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->DashValue;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__ReelIn>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__ReelIn_g____getter_8_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x181fb7260

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__ReelIn_g____getter_8_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345cb8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_184345de8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345de8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->ReelInValue;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__ReelOut>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__ReelOut_g____getter_9_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x181fb7350

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__ReelOut_g____getter_9_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345cb9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_184345de9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345de9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->ReelOutValue;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Dodge>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_10_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x181fb44e0

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_10_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345cba = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_184345dea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345dea = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->DodgeValue;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_11_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x181fb6100

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_11_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345cbb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_184345deb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345deb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->JumpValue;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Reload>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Reload_g____getter_12_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x181fb7530

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Reload_g____getter_12_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345cbc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_184345dec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345dec = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->ReloadValue;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HorseMount>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseMount_g____getter_13_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x181fb58f0

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseMount_g____getter_13_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345cbd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_184345ded == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345ded = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HorseMountValue;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HorseWalk>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseWalk_g____getter_14_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x181fb5a20

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseWalk_g____getter_14_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345cbe = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_184345dee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345dee = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HorseWalkValue;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HorseJump>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseJump_g____getter_15_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x181fb5860

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseJump_g____getter_15_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345cbf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_184345def == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345def = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HorseJumpValue;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__NapeLock>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__NapeLock_g____getter_16_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x181fb68a0

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__NapeLock_g____getter_16_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345cc0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_184345df0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345df0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->NapeLockValue;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_17_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x181fb88a0

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_17_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345cc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345cc1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_184345df1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345df1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->WalkValue;
}


// CustomLogic.CustomLogicInputHumanEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputHumanEnum___ctor (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x181fcceb0

void CustomLogic_CustomLogicInputHumanEnum___ctor
               (CustomLogic_CustomLogicInputHumanEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345c8c = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_AttackDefault
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_AttackDefault (const MethodInfo* method);
// 0x181fccf00

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_AttackDefault(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345c8d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->AttackDefaultValue;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_AttackSpecial
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_AttackSpecial (const MethodInfo* method);
// 0x181fccf50

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_AttackSpecial(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345c8e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->AttackSpecialValue;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HookLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HookLeft (const MethodInfo* method);
// 0x181fcd0c0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HookLeft(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345c8f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HookLeftValue;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HookRight
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HookRight (const MethodInfo* method);
// 0x181fcd110

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HookRight(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345c90 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HookRightValue;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HookBoth
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HookBoth (const MethodInfo* method);
// 0x181fcd070

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HookBoth(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345c91 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HookBothValue;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_Dash
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_Dash (const MethodInfo* method);
// 0x181fccfd0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_Dash(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345c92 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->DashValue;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_ReelIn
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_ReelIn (const MethodInfo* method);
// 0x181fcd2f0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_ReelIn(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345c93 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->ReelInValue;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_ReelOut
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_ReelOut (const MethodInfo* method);
// 0x181fcd340

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_ReelOut(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345c94 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->ReelOutValue;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_Dodge
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_Dodge (const MethodInfo* method);
// 0x181fcd020

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_Dodge(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345c95 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->DodgeValue;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_Jump (const MethodInfo* method);
// 0x181fcd250

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_Jump(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345c96 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->JumpValue;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_Reload
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_Reload (const MethodInfo* method);
// 0x181fcd390

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_Reload(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345c97 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->ReloadValue;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HorseMount
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HorseMount (const MethodInfo* method);
// 0x181fcd1b0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HorseMount(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345c98 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HorseMountValue;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HorseWalk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HorseWalk (const MethodInfo* method);
// 0x181fcd200

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HorseWalk(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345c99 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HorseWalkValue;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HorseJump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HorseJump (const MethodInfo* method);
// 0x181fcd160

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HorseJump(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345c9a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HorseJumpValue;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_NapeLock
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_NapeLock (const MethodInfo* method);
// 0x181fcd2a0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_NapeLock(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345c9b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->NapeLockValue;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_Walk (const MethodInfo* method);
// 0x181fcd3e0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_Walk(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_184345c9c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->WalkValue;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_ClassName (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x181fccfa0

System_String_o *
CustomLogic_CustomLogicInputHumanEnum__get_ClassName
          (CustomLogic_CustomLogicInputHumanEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"InputHumanEnum");
    Il2CppMethodInitialized_184345c9d = '\x01';
  }
  return "InputHumanEnum";
}


// CustomLogic.CustomLogicInputHumanEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputHumanEnum__get_IsAbstract (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputHumanEnum__get_IsAbstract(CustomLogic_CustomLogicInputHumanEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputHumanEnum__get_IsStatic (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputHumanEnum__get_IsStatic(CustomLogic_CustomLogicInputHumanEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputHumanEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputHumanEnum__get_InheritBaseMembers(CustomLogic_CustomLogicInputHumanEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputHumanEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputHumanEnum___cctor (const MethodInfo* method);
// 0x181fcca50

void CustomLogic_CustomLogicInputHumanEnum___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345c9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&"Human/AttackSpecial");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/HookBoth");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/HorseJump");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Dodge");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/ReelOut");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/HookLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/HookRight");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Dash");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/HorseWalk");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/NapeLock");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/AttackDefault");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/HorseMount");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/ReelIn");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Reload");
    Il2CppMethodInitialized_184345c9e = '\x01';
  }
  TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->WalkValue = "Human/Walk";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->WalkValue,"Human/Walk");
  TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->AttackDefaultValue = "Human/AttackDefault";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->AttackDefaultValue,
             "Human/AttackDefault");
  TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->AttackSpecialValue = "Human/AttackSpecial";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->AttackSpecialValue,
             "Human/AttackSpecial");
  TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HookLeftValue = "Human/HookLeft";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HookLeftValue,
             "Human/HookLeft");
  TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HookRightValue = "Human/HookRight";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HookRightValue,
             "Human/HookRight");
  TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HookBothValue = "Human/HookBoth";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HookBothValue,
             "Human/HookBoth");
  TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->DashValue = "Human/Dash";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->DashValue,"Human/Dash");
  TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->ReelInValue = "Human/ReelIn";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->ReelInValue,"Human/ReelIn"
            );
  TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->ReelOutValue = "Human/ReelOut";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->ReelOutValue,
             "Human/ReelOut");
  TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->DodgeValue = "Human/Dodge";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->DodgeValue,"Human/Dodge")
  ;
  TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->JumpValue = "Human/Jump";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->JumpValue,"Human/Jump");
  TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->ReloadValue = "Human/Reload";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->ReloadValue,"Human/Reload"
            );
  TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HorseMountValue = "Human/HorseMount";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HorseMountValue,
             "Human/HorseMount");
  TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HorseWalkValue = "Human/HorseWalk";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HorseWalkValue,
             "Human/HorseWalk");
  TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HorseJumpValue = "Human/HorseJump";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HorseJumpValue,
             "Human/HorseJump");
  TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->NapeLockValue = "Human/NapeLock";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->NapeLockValue,
             "Human/NapeLock");
  return;
}


