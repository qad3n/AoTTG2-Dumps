// Type: CustomLogic.CustomLogicHumanStateEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHumanStateEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicHumanStateEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHumanStateEnum_o* CustomLogic_CustomLogicHumanStateEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fced10

CustomLogic_CustomLogicHumanStateEnum_o *
CustomLogic_CustomLogicHumanStateEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicHumanStateEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345bba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bba = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
      if (Il2CppMethodInitialized_184345ba6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345ba6 = '\x01';
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
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHumanStateEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHumanStateEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fa7410

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHumanStateEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_184345bbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Run");
    il2cpp_codegen_initialize_runtime_metadata(&"GroundDodge");
    il2cpp_codegen_initialize_runtime_metadata(&"Die");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialAction");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialAttack");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    il2cpp_codegen_initialize_runtime_metadata(&"Land");
    il2cpp_codegen_initialize_runtime_metadata(&"AirDodge");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteAction");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    il2cpp_codegen_initialize_runtime_metadata(&"WallSlide");
    il2cpp_codegen_initialize_runtime_metadata(&"Refill");
    il2cpp_codegen_initialize_runtime_metadata(&"Slide");
    il2cpp_codegen_initialize_runtime_metadata(&"MountingHorse");
    il2cpp_codegen_initialize_runtime_metadata(&"Reload");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Grab");
    Il2CppMethodInitialized_184345bbb = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x5d992b42) {
    if (uVar2 < 0x2ea46ab7) {
      if (uVar2 < 0x1a43a2ad) {
        if (uVar2 == 0x47d8d69) {
          bVar1 = System_String__op_Equality(name,"GroundDodge",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345bbe == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__GroundDodge_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
              Il2CppMethodInitialized_184345bbe = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__GroundDodge_g____getter
            ;
            goto label_181fa7f0e;
          }
        }
        else if (uVar2 == 0x1a43a2ac) {
          bVar1 = System_String__op_Equality(name,"Reload",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345bc0 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Reload_g____getter_6_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
              Il2CppMethodInitialized_184345bc0 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Reload_g____getter_6_0
            ;
            goto label_181fa7f0e;
          }
        }
      }
      else if (uVar2 == 0x21c6d85f) {
        bVar1 = System_String__op_Equality(name,"Grab",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345bc3 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Grab_g____getter_9_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object)
            ;
            Il2CppMethodInitialized_184345bc3 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Grab_g____getter_9_0
          ;
          goto label_181fa7f0e;
        }
      }
      else if (uVar2 == 0x2ea46ab6) {
        bVar1 = System_String__op_Equality(name,"WallSlide",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345bcc == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__WallSlide_g____getter_18
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object)
            ;
            Il2CppMethodInitialized_184345bcc = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__WallSlide_g____getter_18
          ;
          goto label_181fa7f0e;
        }
      }
    }
    else if (uVar2 < 0x3d692a72) {
      if (uVar2 == 0x3cd2b931) {
        bVar1 = System_String__op_Equality(name,"EmoteAction",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345bc4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__EmoteAction_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object)
            ;
            Il2CppMethodInitialized_184345bc4 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__EmoteAction_g____getter
          ;
          goto label_181fa7f0e;
        }
      }
      else if (uVar2 == 0x3d692a71) {
        bVar1 = System_String__op_Equality(name,"Die",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345bc2 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Die_g____getter_8_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object)
            ;
            Il2CppMethodInitialized_184345bc2 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Die_g____getter_8_0
          ;
          goto label_181fa7f0e;
        }
      }
    }
    else if (uVar2 == 0x45aa17b3) {
      bVar1 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345bbc == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
          Il2CppMethodInitialized_184345bbc = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
        ;
        goto label_181fa7f0e;
      }
    }
    else if (uVar2 == 0x5d992b41) {
      bVar1 = System_String__op_Equality(name,"Stun",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345bcb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Stun_g____getter_17_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
          Il2CppMethodInitialized_184345bcb = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Stun_g____getter_17_0
        ;
        goto label_181fa7f0e;
      }
    }
    goto label_181fa7f50;
  }
  if (uVar2 < 0xb460940d) {
    if (uVar2 < 0x8ba9331e) {
      if (uVar2 == 0x6c198db1) {
        bVar1 = System_String__op_Equality(name,"Refill",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345bc1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Refill_g____getter_7_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object)
            ;
            Il2CppMethodInitialized_184345bc1 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Refill_g____getter_7_0
          ;
          goto label_181fa7f0e;
        }
      }
      else if (uVar2 == 0x8ba9331d) {
        bVar1 = System_String__op_Equality(name,"Attack",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345bbd == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Attack_g____getter_3_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object)
            ;
            Il2CppMethodInitialized_184345bbd = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Attack_g____getter_3_0
          ;
          goto label_181fa7f0e;
        }
      }
    }
    else if (uVar2 == 0x8d57e66a) {
      bVar1 = System_String__op_Equality(name,"Run",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345bc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Run_g____getter_14_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
          Il2CppMethodInitialized_184345bc8 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Run_g____getter_14_0
        ;
        goto label_181fa7f0e;
      }
    }
    else if (uVar2 == 0xb460940c) {
      bVar1 = System_String__op_Equality(name,"SpecialAttack",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345bc5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__SpecialAttack_g____gette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
          Il2CppMethodInitialized_184345bc5 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__SpecialAttack_g____gette
        ;
        goto label_181fa7f0e;
      }
    }
  }
  else if (uVar2 < 0xd92f4bcb) {
    if (uVar2 == 0xc7f8c02e) {
      bVar1 = System_String__op_Equality(name,"AirDodge",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345bbf == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__AirDodge_g____getter_5_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
          Il2CppMethodInitialized_184345bbf = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__AirDodge_g____getter_5_0
        ;
        goto label_181fa7f0e;
      }
    }
    else if (uVar2 == 0xd92f4bca) {
      bVar1 = System_String__op_Equality(name,"SpecialAction",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345bc6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__SpecialAction_g____gette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
          Il2CppMethodInitialized_184345bc6 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__SpecialAction_g____gette
        ;
        goto label_181fa7f0e;
      }
    }
  }
  else if (uVar2 == 0xee1682bc) {
    bVar1 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345bc9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Land_g____getter_15_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
        Il2CppMethodInitialized_184345bc9 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object)
      ;
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Land_g____getter_15_0
      ;
label_181fa7f0e:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)0x0,
                 (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor
                );
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar2 == 0xf972e12b) {
    bVar1 = System_String__op_Equality(name,"MountingHorse",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345bca == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__MountingHorse_g____gette
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
        Il2CppMethodInitialized_184345bca = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object)
      ;
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__MountingHorse_g____gette
      ;
      goto label_181fa7f0e;
    }
  }
  else if (uVar2 == 0xffc7c086) {
    bVar1 = System_String__op_Equality(name,"Slide",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345bc7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Slide_g____getter_13_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
        Il2CppMethodInitialized_184345bc7 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object)
      ;
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Slide_g____getter_13_0
      ;
      goto label_181fa7f0e;
    }
  }
label_181fa7f50:
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHumanStateEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x181fbf6b0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Idle(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_184345bbc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Attack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Attack (const MethodInfo* method);
// 0x181fbb470

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Attack(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Attack_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_184345bbd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Attack_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__GroundDodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__GroundDodge (const MethodInfo* method);
// 0x181fbe030

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__GroundDodge(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__GroundDodge_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_184345bbe = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__GroundDodge_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__AirDodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__AirDodge (const MethodInfo* method);
// 0x181fba110

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__AirDodge(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__AirDodge_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_184345bbf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__AirDodge_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Reload
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Reload (const MethodInfo* method);
// 0x181fc1550

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Reload(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Reload_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_184345bc0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Reload_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Refill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Refill (const MethodInfo* method);
// 0x181fc1410

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Refill(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Refill_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_184345bc1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Refill_g____getter_7_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Die
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Die (const MethodInfo* method);
// 0x181fbceb0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Die(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Die_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_184345bc2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Die_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Grab
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Grab (const MethodInfo* method);
// 0x181fbdef0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Grab(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Grab_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_184345bc3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Grab_g____getter_9_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__EmoteAction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__EmoteAction (const MethodInfo* method);
// 0x181fbd1d0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__EmoteAction(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__EmoteAction_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_184345bc4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__EmoteAction_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__SpecialAttack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__SpecialAttack (const MethodInfo* method);
// 0x181fc1ff0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__SpecialAttack(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__SpecialAttack_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_184345bc5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__SpecialAttack_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__SpecialAction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__SpecialAction (const MethodInfo* method);
// 0x181fc1eb0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__SpecialAction(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__SpecialAction_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_184345bc6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__SpecialAction_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Slide
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Slide (const MethodInfo* method);
// 0x181fc1cd0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Slide(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Slide_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_184345bc7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Slide_g____getter_13_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Run
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Run (const MethodInfo* method);
// 0x181fc1a50

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Run(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Run_g____getter_14_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_184345bc8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Run_g____getter_14_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x181fbff70

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Land_g____getter_15_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_184345bc9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Land_g____getter_15_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__MountingHorse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__MountingHorse (const MethodInfo* method);
// 0x181fc0330

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__MountingHorse(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__MountingHorse_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_184345bca = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__MountingHorse_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Stun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Stun (const MethodInfo* method);
// 0x181fc2770

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Stun(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bcb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Stun_g____getter_17_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_184345bcb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Stun_g____getter_17_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__WallSlide
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__WallSlide (const MethodInfo* method);
// 0x181fc3530

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__WallSlide(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345bcc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__WallSlide_g____getter_18
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_184345bcc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__WallSlide_g____getter_18
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanStateEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fc5d50

void CustomLogic_CustomLogicHumanStateEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345bcd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Run");
    il2cpp_codegen_initialize_runtime_metadata(&"GroundDodge");
    il2cpp_codegen_initialize_runtime_metadata(&"Die");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialAction");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialAttack");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    il2cpp_codegen_initialize_runtime_metadata(&"Land");
    il2cpp_codegen_initialize_runtime_metadata(&"AirDodge");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteAction");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    il2cpp_codegen_initialize_runtime_metadata(&"WallSlide");
    il2cpp_codegen_initialize_runtime_metadata(&"Refill");
    il2cpp_codegen_initialize_runtime_metadata(&"Slide");
    il2cpp_codegen_initialize_runtime_metadata(&"MountingHorse");
    il2cpp_codegen_initialize_runtime_metadata(&"Reload");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Grab");
    Il2CppMethodInitialized_184345bcd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Idle",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GroundDodge",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AirDodge",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Reload",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Refill",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Die",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grab",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteAction",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialAttack",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialAction",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Slide",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Run",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Land",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MountingHorse",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stun",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WallSlide",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x181fb5e00

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bce = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_184345da3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345da3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->IdleValue;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Attack>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Attack_g____getter_3_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x181fb3460

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Attack_g____getter_3_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bcf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bcf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_184345da4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345da4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->AttackValue;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__GroundDodge>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__GroundDodge_g____getter_4_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x181fb5020

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__GroundDodge_g____getter_4_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bd0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_184345da5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345da5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->GroundDodgeValue;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__AirDodge>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__AirDodge_g____getter_5_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x181fb2620

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__AirDodge_g____getter_5_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bd1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_184345da6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345da6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->AirDodgeValue;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Reload>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Reload_g____getter_6_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x181fb75c0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Reload_g____getter_6_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bd2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_184345da7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345da7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->ReloadValue;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Refill>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_7_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x181fb74a0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_7_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bd3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_184345da8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345da8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->RefillValue;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Die>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Die_g____getter_8_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x181fb4450

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Die_g____getter_8_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bd4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_184345da9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345da9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->DieValue;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Grab>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Grab_g____getter_9_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x181fb4f30

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Grab_g____getter_9_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bd5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_184345daa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345daa = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->GrabValue;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__EmoteAction>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__EmoteAction_g____getter_10_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x181fb46a0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__EmoteAction_g____getter_10_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bd6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_184345dab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345dab = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->EmoteActionValue;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__SpecialAttack>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__SpecialAttack_g____getter_11_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x181fb7ca0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__SpecialAttack_g____getter_11_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bd7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_184345dac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345dac = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->SpecialAttackValue;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__SpecialAction>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__SpecialAction_g____getter_12_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x181fb7bb0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__SpecialAction_g____getter_12_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bd8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_184345dad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345dad = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->SpecialActionValue;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Slide>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_13_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x181fb7a60

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_13_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bd9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_184345dae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345dae = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->SlideValue;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Run_g____getter_14_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x181fb78f0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Run_g____getter_14_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bda = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_184345daf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345daf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->RunValue;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Land_g____getter_15_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x181fb6480

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Land_g____getter_15_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bdb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_184345db0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345db0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->LandValue;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__MountingHorse>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__MountingHorse_g____getter_16_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x181fb67c0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__MountingHorse_g____getter_16_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bdc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_184345db1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345db1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->MountingHorseValue;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Stun>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_17_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x181fb81b0

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_17_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bdd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bdd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_184345db2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345db2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->StunValue;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__WallSlide>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__WallSlide_g____getter_18_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x181fb8b00

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__WallSlide_g____getter_18_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bde = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_184345db3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345db3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->WallSlideValue;
}


// CustomLogic.CustomLogicHumanStateEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanStateEnum___ctor (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x181fca690

void CustomLogic_CustomLogicHumanStateEnum___ctor
               (CustomLogic_CustomLogicHumanStateEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ba6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345ba6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Idle (const MethodInfo* method);
// 0x181fca8f0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Idle(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ba7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345ba7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->IdleValue;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Attack
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Attack (const MethodInfo* method);
// 0x181fca730

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Attack(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ba8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345ba8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->AttackValue;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_GroundDodge
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_GroundDodge (const MethodInfo* method);
// 0x181fca8a0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_GroundDodge(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ba9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345ba9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->GroundDodgeValue;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_AirDodge
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_AirDodge (const MethodInfo* method);
// 0x181fca6e0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_AirDodge(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345baa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345baa = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->AirDodgeValue;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Reload
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Reload (const MethodInfo* method);
// 0x181fcaa30

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Reload(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bab = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->ReloadValue;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Refill
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Refill (const MethodInfo* method);
// 0x181fca9e0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Refill(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bac = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->RefillValue;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Die
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Die (const MethodInfo* method);
// 0x181fca7b0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Die(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bad = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->DieValue;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Grab
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Grab (const MethodInfo* method);
// 0x181fca850

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Grab(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bae = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->GrabValue;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_EmoteAction
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_EmoteAction (const MethodInfo* method);
// 0x181fca800

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_EmoteAction(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345baf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345baf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->EmoteActionValue;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_SpecialAttack
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_SpecialAttack (const MethodInfo* method);
// 0x181fcab70

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_SpecialAttack(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bb0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->SpecialAttackValue;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_SpecialAction
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_SpecialAction (const MethodInfo* method);
// 0x181fcab20

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_SpecialAction(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bb1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->SpecialActionValue;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Slide
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Slide (const MethodInfo* method);
// 0x181fcaad0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Slide(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bb2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->SlideValue;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Run
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Run (const MethodInfo* method);
// 0x181fcaa80

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Run(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bb3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->RunValue;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Land (const MethodInfo* method);
// 0x181fca940

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Land(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bb4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->LandValue;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_MountingHorse
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_MountingHorse (const MethodInfo* method);
// 0x181fca990

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_MountingHorse(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bb5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->MountingHorseValue;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Stun
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Stun (const MethodInfo* method);
// 0x181fcabc0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Stun(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bb6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->StunValue;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_WallSlide
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_WallSlide (const MethodInfo* method);
// 0x181fcac10

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_WallSlide(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_184345bb7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->WallSlideValue;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_ClassName (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x181fca780

System_String_o *
CustomLogic_CustomLogicHumanStateEnum__get_ClassName
          (CustomLogic_CustomLogicHumanStateEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345bb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"HumanStateEnum");
    Il2CppMethodInitialized_184345bb8 = '\x01';
  }
  return "HumanStateEnum";
}


// CustomLogic.CustomLogicHumanStateEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHumanStateEnum__get_IsAbstract (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicHumanStateEnum__get_IsAbstract(CustomLogic_CustomLogicHumanStateEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHumanStateEnum__get_IsStatic (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicHumanStateEnum__get_IsStatic(CustomLogic_CustomLogicHumanStateEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHumanStateEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicHumanStateEnum__get_InheritBaseMembers(CustomLogic_CustomLogicHumanStateEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicHumanStateEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanStateEnum___cctor (const MethodInfo* method);
// 0x181fca0c0

void CustomLogic_CustomLogicHumanStateEnum___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_1a8;
  undefined4 local_198;
  System_Enum_o local_190;
  undefined4 local_180;
  System_Enum_o local_178;
  undefined4 local_168;
  System_Enum_o local_160;
  undefined4 local_150;
  System_Enum_o local_148;
  undefined4 local_138;
  System_Enum_o local_130;
  undefined4 local_120;
  System_Enum_o local_118;
  undefined4 local_108;
  System_Enum_o local_100;
  undefined4 local_f0;
  System_Enum_o local_e8;
  undefined4 local_d8;
  System_Enum_o local_d0;
  undefined4 local_c0;
  System_Enum_o local_b8;
  undefined4 local_a8;
  System_Enum_o local_a0;
  undefined4 local_90;
  System_Enum_o local_88;
  undefined4 local_78;
  System_Enum_o local_70;
  undefined4 local_60;
  System_Enum_o local_58;
  undefined4 local_48;
  System_Enum_o local_40;
  undefined4 local_30;
  System_Enum_o local_28;
  undefined4 local_18;
  
  if (Il2CppMethodInitialized_184345bb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanState);
    Il2CppMethodInitialized_184345bb9 = '\x01';
  }
  local_1a8.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  local_1a8.monitor = &g_data_ffffffffffffffff;
  local_198 = 0;
  pSVar1 = System_Enum__ToString(&local_1a8,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->IdleValue = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->IdleValue,pSVar1);
  local_190.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  local_190.monitor = &g_data_ffffffffffffffff;
  local_180 = 1;
  pSVar1 = System_Enum__ToString(&local_190,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->AttackValue = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->AttackValue,pSVar1);
  local_178.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  local_178.monitor = &g_data_ffffffffffffffff;
  local_168 = 2;
  pSVar1 = System_Enum__ToString(&local_178,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->GroundDodgeValue = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->GroundDodgeValue,pSVar1);
  local_160.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  local_160.monitor = &g_data_ffffffffffffffff;
  local_150 = 3;
  pSVar1 = System_Enum__ToString(&local_160,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->AirDodgeValue = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->AirDodgeValue,pSVar1);
  local_148.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  local_148.monitor = &g_data_ffffffffffffffff;
  local_138 = 4;
  pSVar1 = System_Enum__ToString(&local_148,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->ReloadValue = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->ReloadValue,pSVar1);
  local_130.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  local_130.monitor = &g_data_ffffffffffffffff;
  local_120 = 5;
  pSVar1 = System_Enum__ToString(&local_130,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->RefillValue = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->RefillValue,pSVar1);
  local_118.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  local_118.monitor = &g_data_ffffffffffffffff;
  local_108 = 6;
  pSVar1 = System_Enum__ToString(&local_118,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->DieValue = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->DieValue,pSVar1);
  local_100.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  local_100.monitor = &g_data_ffffffffffffffff;
  local_f0 = 7;
  pSVar1 = System_Enum__ToString(&local_100,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->GrabValue = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->GrabValue,pSVar1);
  local_e8.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  local_e8.monitor = &g_data_ffffffffffffffff;
  local_d8 = 8;
  pSVar1 = System_Enum__ToString(&local_e8,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->EmoteActionValue = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->EmoteActionValue,pSVar1);
  local_d0.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  local_d0.monitor = &g_data_ffffffffffffffff;
  local_c0 = 9;
  pSVar1 = System_Enum__ToString(&local_d0,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->SpecialAttackValue = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->SpecialAttackValue,pSVar1);
  local_b8.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  local_b8.monitor = &g_data_ffffffffffffffff;
  local_a8 = 10;
  pSVar1 = System_Enum__ToString(&local_b8,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->SpecialActionValue = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->SpecialActionValue,pSVar1);
  local_a0.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  local_a0.monitor = &g_data_ffffffffffffffff;
  local_90 = 0xb;
  pSVar1 = System_Enum__ToString(&local_a0,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->SlideValue = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->SlideValue,pSVar1)
  ;
  local_88.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  local_88.monitor = &g_data_ffffffffffffffff;
  local_78 = 0xc;
  pSVar1 = System_Enum__ToString(&local_88,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->RunValue = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->RunValue,pSVar1);
  local_70.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  local_70.monitor = &g_data_ffffffffffffffff;
  local_60 = 0xd;
  pSVar1 = System_Enum__ToString(&local_70,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->LandValue = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->LandValue,pSVar1);
  local_58.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  local_58.monitor = &g_data_ffffffffffffffff;
  local_48 = 0xe;
  pSVar1 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->MountingHorseValue = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->MountingHorseValue,pSVar1);
  local_40.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  local_40.monitor = &g_data_ffffffffffffffff;
  local_30 = 0xf;
  pSVar1 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->StunValue = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->StunValue,pSVar1);
  local_28.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  local_28.monitor = &g_data_ffffffffffffffff;
  local_18 = 0x10;
  pSVar1 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->WallSlideValue = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->WallSlideValue,pSVar1);
  return;
}


