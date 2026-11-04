// Type: CustomLogic.CustomLogicErenAnimationEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicErenAnimationEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicErenAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicErenAnimationEnum_o* CustomLogic_CustomLogicErenAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fa4190

CustomLogic_CustomLogicErenAnimationEnum_o *
CustomLogic_CustomLogicErenAnimationEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843459d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicErenAnimationEnum);
    Il2CppMethodInitialized_1843459d0 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum);
      if (Il2CppMethodInitialized_1843459be == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843459be = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicErenAnimationEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicErenAnimationEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicErenAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f84d40

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_1843459d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Run");
    il2cpp_codegen_initialize_runtime_metadata(&"Die");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteNod");
    il2cpp_codegen_initialize_runtime_metadata(&"RockWalk");
    il2cpp_codegen_initialize_runtime_metadata(&"RockLift");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"Land");
    il2cpp_codegen_initialize_runtime_metadata(&"RockLift001");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Fall");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    il2cpp_codegen_initialize_runtime_metadata(&"RockFixHole");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteRoar");
    Il2CppMethodInitialized_1843459d1 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x5376547a) {
    if (uVar2 < 0x3c572baa) {
      if (uVar2 < 0xff8caa9) {
        if (uVar2 == 0xe1ef32d) {
          bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843459d5 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_5_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
              Il2CppMethodInitialized_1843459d5 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_5_0
            ;
            goto label_181f857a0;
          }
        }
        else if (uVar2 == 0xff8caa8) {
          bVar1 = System_String__op_Equality(name,"RockLift001",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843459df == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockLift001_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
              Il2CppMethodInitialized_1843459df = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockLift001_g____gett
            ;
            goto label_181f857a0;
          }
        }
      }
      else if (uVar2 == 0x22ccd730) {
        bVar1 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843459d4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_4_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
            Il2CppMethodInitialized_1843459d4 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_4_0
          ;
          goto label_181f857a0;
        }
      }
      else if (uVar2 == 0x3c572ba9) {
        bVar1 = System_String__op_Equality(name,"RockFixHole",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843459e1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockFixHole_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
            Il2CppMethodInitialized_1843459e1 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockFixHole_g____gett
          ;
          goto label_181f857a0;
        }
      }
    }
    else if (uVar2 < 0x40e2cf22) {
      if (uVar2 == 0x3d692a71) {
        bVar1 = System_String__op_Equality(name,"Die",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843459d8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Die_g____getter_8_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
            Il2CppMethodInitialized_1843459d8 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Die_g____getter_8_0
          ;
          goto label_181f857a0;
        }
      }
      else if (uVar2 == 0x40e2cf21) {
        bVar1 = System_String__op_Equality(name,"RockLift",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843459de == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockLift_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
            Il2CppMethodInitialized_1843459de = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockLift_g____getter
          ;
          goto label_181f857a0;
        }
      }
    }
    else if (uVar2 == 0x45aa17b3) {
      bVar1 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843459d2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
          Il2CppMethodInitialized_1843459d2 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
        ;
        goto label_181f857a0;
      }
    }
    else if (uVar2 == 0x53765479) {
      bVar1 = System_String__op_Equality(name,"AttackCombo",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843459d9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__AttackCombo_g____gett
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
          Il2CppMethodInitialized_1843459d9 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__AttackCombo_g____gett
        ;
        goto label_181f857a0;
      }
    }
    goto label_181f857e2;
  }
  if (uVar2 < 0xad225086) {
    if (uVar2 < 0x7b00bc81) {
      if (uVar2 == 0x5d992b41) {
        bVar1 = System_String__op_Equality(name,"Stun",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843459db == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Stun_g____getter_11_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
            Il2CppMethodInitialized_1843459db = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Stun_g____getter_11_0
          ;
          goto label_181f857a0;
        }
      }
      else if (uVar2 == 0x7b00bc80) {
        bVar1 = System_String__op_Equality(name,"Fall",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843459d6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_6_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
            Il2CppMethodInitialized_1843459d6 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_6_0
          ;
          goto label_181f857a0;
        }
      }
    }
    else if (uVar2 == 0x8d57e66a) {
      bVar1 = System_String__op_Equality(name,"Run",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843459d3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_3_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
          Il2CppMethodInitialized_1843459d3 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_3_0
        ;
        goto label_181f857a0;
      }
    }
    else if (uVar2 == 0xad225085) {
      bVar1 = System_String__op_Equality(name,"RockWalk",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843459e0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockWalk_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
          Il2CppMethodInitialized_1843459e0 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockWalk_g____getter
        ;
        goto label_181f857a0;
      }
    }
  }
  else if (uVar2 < 0xc6f75898) {
    if (uVar2 == 0xc1018924) {
      bVar1 = System_String__op_Equality(name,"EmoteNod",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843459dc == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__EmoteNod_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
          Il2CppMethodInitialized_1843459dc = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__EmoteNod_g____getter
        ;
        goto label_181f857a0;
      }
    }
    else if (uVar2 == 0xc6f75897) {
      bVar1 = System_String__op_Equality(name,"EmoteRoar",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843459dd == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__EmoteRoar_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
          Il2CppMethodInitialized_1843459dd = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__EmoteRoar_g____getter
        ;
        goto label_181f857a0;
      }
    }
  }
  else if (uVar2 == 0xc8f30ee7) {
    bVar1 = System_String__op_Equality(name,"AttackKick",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
      }
      if (Il2CppMethodInitialized_1843459da == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g____gette
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
        Il2CppMethodInitialized_1843459da = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g____gette
      ;
label_181f857a0:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)0x0,
                 (MethodInfo_12B8EE0 *)
                 MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar2 == 0xee1682bc) {
    bVar1 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
      }
      if (Il2CppMethodInitialized_1843459d7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_7_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
        Il2CppMethodInitialized_1843459d7 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_7_0
      ;
      goto label_181f857a0;
    }
  }
label_181f857e2:
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicErenAnimationEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x181f97e80

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Idle(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_1843459d2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Run
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Run (const MethodInfo* method);
// 0x181f9aae0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Run(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_1843459d3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x181f9c5c0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_1843459d4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x181f98560

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_1843459d5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Fall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Fall (const MethodInfo* method);
// 0x181f96df0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Fall(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_1843459d6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x181f98600

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_1843459d7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_7_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Die
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Die (const MethodInfo* method);
// 0x181f96710

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Die(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Die_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_1843459d8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Die_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__AttackCombo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__AttackCombo (const MethodInfo* method);
// 0x181f944b0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__AttackCombo(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__AttackCombo_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_1843459d9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__AttackCombo_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__AttackKick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__AttackKick (const MethodInfo* method);
// 0x181f94a50

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__AttackKick(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_1843459da = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Stun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Stun (const MethodInfo* method);
// 0x181f9b850

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Stun(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Stun_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_1843459db = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Stun_g____getter_11_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteNod
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__EmoteNod (const MethodInfo* method);
// 0x181f96850

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__EmoteNod(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__EmoteNod_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_1843459dc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__EmoteNod_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteRoar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar (const MethodInfo* method);
// 0x181f96990

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__EmoteRoar_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_1843459dd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__EmoteRoar_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockLift
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockLift (const MethodInfo* method);
// 0x181f9a400

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockLift(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockLift_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_1843459de = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockLift_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockLift001
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockLift001 (const MethodInfo* method);
// 0x181f9a360

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockLift001(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockLift001_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_1843459df = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockLift001_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockWalk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockWalk (const MethodInfo* method);
// 0x181f9a4a0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockWalk(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockWalk_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_1843459e0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockWalk_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockFixHole
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockFixHole (const MethodInfo* method);
// 0x181f9a2c0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockFixHole(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843459e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockFixHole_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_1843459e1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockFixHole_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicErenAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x181f9d280

void CustomLogic_CustomLogicErenAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843459e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Run");
    il2cpp_codegen_initialize_runtime_metadata(&"Die");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteNod");
    il2cpp_codegen_initialize_runtime_metadata(&"RockWalk");
    il2cpp_codegen_initialize_runtime_metadata(&"RockLift");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"Land");
    il2cpp_codegen_initialize_runtime_metadata(&"RockLift001");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Fall");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    il2cpp_codegen_initialize_runtime_metadata(&"RockFixHole");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteRoar");
    Il2CppMethodInitialized_1843459e2 = '\x01';
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
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Run",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Walk",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jump",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Fall",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Land",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Die",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackCombo",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackKick",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stun",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteNod",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteRoar",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RockLift",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RockLift001",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RockWalk",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RockFixHole",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->static_fields->MemberNames,__this)
    ;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8ea00

Il2CppObject*
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0(CustomLogic_CustomLogicErenAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843459bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_idle");
    Il2CppMethodInitialized_1843459bf = '\x01';
  }
  return "ErenRig_VER2|et_idle";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_3_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f90910

Il2CppObject*
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_3_0(CustomLogic_CustomLogicErenAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843459c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_run");
    Il2CppMethodInitialized_1843459c0 = '\x01';
  }
  return "ErenRig_VER2|et_run";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f91970

Il2CppObject*
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0(CustomLogic_CustomLogicErenAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843459c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_walk");
    Il2CppMethodInitialized_1843459c1 = '\x01';
  }
  return "ErenRig_VER2|et_walk";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_5_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8ec90

Il2CppObject*
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_5_0(CustomLogic_CustomLogicErenAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843459c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_jump_start");
    Il2CppMethodInitialized_1843459c2 = '\x01';
  }
  return "ErenRig_VER2|et_jump_start";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Fall>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_6_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8e1b0

Il2CppObject*
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_6_0(CustomLogic_CustomLogicErenAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843459c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_jump_air");
    Il2CppMethodInitialized_1843459c3 = '\x01';
  }
  return "ErenRig_VER2|et_jump_air";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_7_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8ecf0

Il2CppObject*
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_7_0(CustomLogic_CustomLogicErenAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843459c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_jump_land");
    Il2CppMethodInitialized_1843459c4 = '\x01';
  }
  return "ErenRig_VER2|et_jump_land";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Die>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Die_g____getter_8_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8df50

Il2CppObject*
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Die_g____getter_8_0(CustomLogic_CustomLogicErenAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843459c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_die");
    Il2CppMethodInitialized_1843459c5 = '\x01';
  }
  return "ErenRig_VER2|et_die";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackCombo>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_9_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8d000

Il2CppObject*
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_9_0(CustomLogic_CustomLogicErenAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843459c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_attack_combo_full");
    Il2CppMethodInitialized_1843459c6 = '\x01';
  }
  return "ErenRig_VER2|et_attack_combo_full";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackKick>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_10_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8d1b0

Il2CppObject*
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_10_0(CustomLogic_CustomLogicErenAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843459c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_attack_kick");
    Il2CppMethodInitialized_1843459c7 = '\x01';
  }
  return "ErenRig_VER2|et_attack_kick";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Stun>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_11_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f911c0

Il2CppObject*
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_11_0(CustomLogic_CustomLogicErenAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843459c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_hit_titan");
    Il2CppMethodInitialized_1843459c8 = '\x01';
  }
  return "ErenRig_VER2|et_hit_titan";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteNod>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNod_g____getter_12_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8df80

Il2CppObject*
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNod_g____getter_12_0(CustomLogic_CustomLogicErenAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843459c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_yes");
    Il2CppMethodInitialized_1843459c9 = '\x01';
  }
  return "ErenRig_VER2|et_yes";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteRoar>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__EmoteRoar_g____getter_13_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8dfb0

Il2CppObject*
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__EmoteRoar_g____getter_13_0(CustomLogic_CustomLogicErenAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843459ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_born");
    Il2CppMethodInitialized_1843459ca = '\x01';
  }
  return "ErenRig_VER2|et_born";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockLift>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockLift_g____getter_14_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f904b0

Il2CppObject*
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockLift_g____getter_14_0(CustomLogic_CustomLogicErenAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843459cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_lift");
    Il2CppMethodInitialized_1843459cb = '\x01';
  }
  return "ErenRig_VER2|et_rock_lift";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockLift001>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockLift001_g____getter_15_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f90480

Il2CppObject*
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockLift001_g____getter_15_0(CustomLogic_CustomLogicErenAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843459cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_lift.001");
    Il2CppMethodInitialized_1843459cc = '\x01';
  }
  return "ErenRig_VER2|et_rock_lift.001";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockWalk>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockWalk_g____getter_16_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f904e0

Il2CppObject*
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockWalk_g____getter_16_0(CustomLogic_CustomLogicErenAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843459cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_walk");
    Il2CppMethodInitialized_1843459cd = '\x01';
  }
  return "ErenRig_VER2|et_rock_walk";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockFixHole>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockFixHole_g____getter_17_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f90450

Il2CppObject*
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockFixHole_g____getter_17_0(CustomLogic_CustomLogicErenAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843459ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_fix_hole");
    Il2CppMethodInitialized_1843459ce = '\x01';
  }
  return "ErenRig_VER2|et_rock_fix_hole";
}


// CustomLogic.CustomLogicErenAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicErenAnimationEnum___ctor (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x181fa0dd0

void CustomLogic_CustomLogicErenAnimationEnum___ctor
               (CustomLogic_CustomLogicErenAnimationEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843459be = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Idle (const MethodInfo* method);
// 0x181f8ea00

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Idle(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_idle");
    Il2CppMethodInitialized_1843459bf = '\x01';
  }
  return "ErenRig_VER2|et_idle";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Run
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Run (const MethodInfo* method);
// 0x181f90910

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Run(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_run");
    Il2CppMethodInitialized_1843459c0 = '\x01';
  }
  return "ErenRig_VER2|et_run";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Walk (const MethodInfo* method);
// 0x181f91970

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Walk(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_walk");
    Il2CppMethodInitialized_1843459c1 = '\x01';
  }
  return "ErenRig_VER2|et_walk";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Jump (const MethodInfo* method);
// 0x181f8ec90

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Jump(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_jump_start");
    Il2CppMethodInitialized_1843459c2 = '\x01';
  }
  return "ErenRig_VER2|et_jump_start";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Fall
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Fall (const MethodInfo* method);
// 0x181f8e1b0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Fall(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_jump_air");
    Il2CppMethodInitialized_1843459c3 = '\x01';
  }
  return "ErenRig_VER2|et_jump_air";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Land (const MethodInfo* method);
// 0x181f8ecf0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Land(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_jump_land");
    Il2CppMethodInitialized_1843459c4 = '\x01';
  }
  return "ErenRig_VER2|et_jump_land";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Die
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Die (const MethodInfo* method);
// 0x181f8df50

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Die(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_die");
    Il2CppMethodInitialized_1843459c5 = '\x01';
  }
  return "ErenRig_VER2|et_die";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_AttackCombo
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_AttackCombo (const MethodInfo* method);
// 0x181f8d000

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_AttackCombo(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_attack_combo_full");
    Il2CppMethodInitialized_1843459c6 = '\x01';
  }
  return "ErenRig_VER2|et_attack_combo_full";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_AttackKick
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_AttackKick (const MethodInfo* method);
// 0x181f8d1b0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_AttackKick(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_attack_kick");
    Il2CppMethodInitialized_1843459c7 = '\x01';
  }
  return "ErenRig_VER2|et_attack_kick";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Stun
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Stun (const MethodInfo* method);
// 0x181f911c0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Stun(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_hit_titan");
    Il2CppMethodInitialized_1843459c8 = '\x01';
  }
  return "ErenRig_VER2|et_hit_titan";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_EmoteNod
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_EmoteNod (const MethodInfo* method);
// 0x181f8df80

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_EmoteNod(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_yes");
    Il2CppMethodInitialized_1843459c9 = '\x01';
  }
  return "ErenRig_VER2|et_yes";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_EmoteRoar
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_EmoteRoar (const MethodInfo* method);
// 0x181f8dfb0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_EmoteRoar(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_born");
    Il2CppMethodInitialized_1843459ca = '\x01';
  }
  return "ErenRig_VER2|et_born";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_RockLift
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_RockLift (const MethodInfo* method);
// 0x181f904b0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_RockLift(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_lift");
    Il2CppMethodInitialized_1843459cb = '\x01';
  }
  return "ErenRig_VER2|et_rock_lift";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_RockLift001
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_RockLift001 (const MethodInfo* method);
// 0x181f90480

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_RockLift001(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_lift.001");
    Il2CppMethodInitialized_1843459cc = '\x01';
  }
  return "ErenRig_VER2|et_rock_lift.001";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_RockWalk
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_RockWalk (const MethodInfo* method);
// 0x181f904e0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_RockWalk(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_walk");
    Il2CppMethodInitialized_1843459cd = '\x01';
  }
  return "ErenRig_VER2|et_rock_walk";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_RockFixHole
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_RockFixHole (const MethodInfo* method);
// 0x181f90450

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_RockFixHole(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_fix_hole");
    Il2CppMethodInitialized_1843459ce = '\x01';
  }
  return "ErenRig_VER2|et_rock_fix_hole";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_ClassName (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x181fa0e20

System_String_o *
CustomLogic_CustomLogicErenAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicErenAnimationEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843459cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenAnimationEnum");
    Il2CppMethodInitialized_1843459cf = '\x01';
  }
  return "ErenAnimationEnum";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicErenAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicErenAnimationEnum__get_IsAbstract(CustomLogic_CustomLogicErenAnimationEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicErenAnimationEnum__get_IsStatic (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicErenAnimationEnum__get_IsStatic(CustomLogic_CustomLogicErenAnimationEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicErenAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicErenAnimationEnum__get_InheritBaseMembers(CustomLogic_CustomLogicErenAnimationEnum_o* __this, MethodInfo* method)

{
  return true;
}


