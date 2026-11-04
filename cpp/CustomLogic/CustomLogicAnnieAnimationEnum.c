// Type: CustomLogic.CustomLogicAnnieAnimationEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAnnieAnimationEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicAnnieAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAnnieAnimationEnum_o* CustomLogic_CustomLogicAnnieAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fa4780

CustomLogic_CustomLogicAnnieAnimationEnum_o *
CustomLogic_CustomLogicAnnieAnimationEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843458fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum);
    Il2CppMethodInitialized_1843458fa = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum);
      if (Il2CppMethodInitialized_1843458d6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843458d6 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicAnnieAnimationEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAnnieAnimationEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f81800

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_1843458fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Run");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteWave");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBottomLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Die");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushHeadL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackComboBlind");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushFrontL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushHeadR");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteTaunt");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBottomRight");
    il2cpp_codegen_initialize_runtime_metadata(&"Land");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabUpLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabMidRight");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushBack");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteSalute");
    il2cpp_codegen_initialize_runtime_metadata(&"SitIdle");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBite");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackHead");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabUpRight");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"SitFall");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabUp");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushFrontR");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Fall");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    il2cpp_codegen_initialize_runtime_metadata(&"SitUp");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabMidLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteRoar");
    Il2CppMethodInitialized_1843458fb = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x5376547a) {
    if (uVar2 < 0x350e21b3) {
      if (uVar2 < 0x12a6a2bb) {
        if (uVar2 < 0xab017f0) {
          if (uVar2 == 0x228de11) {
            bVar1 = System_String__op_Equality(name,"EmoteTaunt",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_18434591b == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteTaunt_g____gett
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
                Il2CppMethodInitialized_18434591b = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteTaunt_g____gett
              ;
              goto label_181f82dd4;
            }
          }
          else if (uVar2 == 0xab017ef) {
            bVar1 = System_String__op_Equality(name,"AttackGrabUpLeft",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345914 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabUpLeft_g
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
                Il2CppMethodInitialized_184345914 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabUpLeft_g
              ;
              goto label_181f82dd4;
            }
          }
        }
        else if (uVar2 == 0xe1ef32d) {
          bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843458ff == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_5_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
              Il2CppMethodInitialized_1843458ff = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_5_0
            ;
            goto label_181f82dd4;
          }
        }
        else if (uVar2 == 0x12a6a2ba) {
          bVar1 = System_String__op_Equality(name,"AttackGrabBottomRight",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345910 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBottomRigh
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
              Il2CppMethodInitialized_184345910 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBottomRigh
            ;
            goto label_181f82dd4;
          }
        }
      }
      else if (uVar2 < 0x2cfd24da) {
        if (uVar2 == 0x22ccd730) {
          bVar1 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_1843458fe == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_4_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
              Il2CppMethodInitialized_1843458fe = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_4_0
            ;
            goto label_181f82dd4;
          }
        }
        else if (uVar2 == 0x2cfd24d9) {
          bVar1 = System_String__op_Equality(name,"AttackGrabBottomLeft",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_18434590f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBottomLeft
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
              Il2CppMethodInitialized_18434590f = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBottomLeft
            ;
            goto label_181f82dd4;
          }
        }
      }
      else if (uVar2 == 0x324d8372) {
        bVar1 = System_String__op_Equality(name,"EmoteWave",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434591c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteWave_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            Il2CppMethodInitialized_18434591c = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteWave_g____gette
          ;
          goto label_181f82dd4;
        }
      }
      else if (uVar2 == 0x350e21b2) {
        bVar1 = System_String__op_Equality(name,"AttackBrushFrontL",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434590b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushFrontL_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            Il2CppMethodInitialized_18434590b = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushFrontL_g
          ;
          goto label_181f82dd4;
        }
      }
      goto label_181f82e16;
    }
    if (uVar2 < 0x3d692a72) {
      if (uVar2 < 0x38122e2c) {
        if (uVar2 == 0x371c1522) {
          bVar1 = System_String__op_Equality(name,"AttackStomp",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345917 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackStomp_g____get
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
              Il2CppMethodInitialized_184345917 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackStomp_g____get
            ;
            goto label_181f82dd4;
          }
        }
        else if (uVar2 == 0x38122e2b) {
          bVar1 = System_String__op_Equality(name,"AttackHead",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345918 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackHead_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
              Il2CppMethodInitialized_184345918 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackHead_g____gett
            ;
            goto label_181f82dd4;
          }
        }
      }
      else if (uVar2 == 0x3acb63d7) {
        bVar1 = System_String__op_Equality(name,"AttackBite",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345919 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBite_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            Il2CppMethodInitialized_184345919 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBite_g____gett
          ;
          goto label_181f82dd4;
        }
      }
      else if (uVar2 == 0x3d692a71) {
        bVar1 = System_String__op_Equality(name,"Die",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345902 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Die_g____getter_8_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            Il2CppMethodInitialized_184345902 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Die_g____getter_8_0
          ;
          goto label_181f82dd4;
        }
      }
    }
    else if (uVar2 < 0x45516aab) {
      if (uVar2 == 0x44831a08) {
        bVar1 = System_String__op_Equality(name,"AttackComboBlind",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345908 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackComboBlind_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            Il2CppMethodInitialized_184345908 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackComboBlind_g
          ;
          goto label_181f82dd4;
        }
      }
      else if (uVar2 == 0x45516aaa) {
        bVar1 = System_String__op_Equality(name,"SitUp",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345906 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__SitUp_g____getter_12
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            Il2CppMethodInitialized_184345906 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__SitUp_g____getter_12
          ;
          goto label_181f82dd4;
        }
      }
    }
    else if (uVar2 == 0x45aa17b3) {
      bVar1 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_1843458fc == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          Il2CppMethodInitialized_1843458fc = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
        ;
        goto label_181f82dd4;
      }
    }
    else if (uVar2 == 0x470e3e08) {
      bVar1 = System_String__op_Equality(name,"AttackBrushFrontR",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434590c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushFrontR_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          Il2CppMethodInitialized_18434590c = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushFrontR_g
        ;
        goto label_181f82dd4;
      }
    }
    else if (uVar2 == 0x53765479) {
      bVar1 = System_String__op_Equality(name,"AttackCombo",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345907 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackCombo_g____get
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          Il2CppMethodInitialized_184345907 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackCombo_g____get
        ;
        goto label_181f82dd4;
      }
    }
    goto label_181f82e16;
  }
  if (uVar2 < 0x93e6a9c5) {
    if (uVar2 < 0x8006ece1) {
      if (uVar2 < 0x76917343) {
        if (uVar2 == 0x5d992b41) {
          bVar1 = System_String__op_Equality(name,"Stun",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345903 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Stun_g____getter_9_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
              Il2CppMethodInitialized_184345903 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Stun_g____getter_9_0
            ;
            goto label_181f82dd4;
          }
        }
        else if (uVar2 == 0x76917342) {
          bVar1 = System_String__op_Equality(name,"AttackGrabUp",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345913 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabUp_g____ge
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
              Il2CppMethodInitialized_184345913 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabUp_g____ge
            ;
            goto label_181f82dd4;
          }
        }
      }
      else if (uVar2 == 0x7b00bc80) {
        bVar1 = System_String__op_Equality(name,"Fall",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345900 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_6_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            Il2CppMethodInitialized_184345900 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_6_0
          ;
          goto label_181f82dd4;
        }
      }
      else if (uVar2 == 0x8006ece0) {
        bVar1 = System_String__op_Equality(name,"AttackGrabUpRight",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345915 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabUpRight_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            Il2CppMethodInitialized_184345915 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabUpRight_g
          ;
          goto label_181f82dd4;
        }
      }
    }
    else if (uVar2 < 0x912e23bf) {
      if (uVar2 == 0x8d57e66a) {
        bVar1 = System_String__op_Equality(name,"Run",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_1843458fd == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_3_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            Il2CppMethodInitialized_1843458fd = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_3_0
          ;
          goto label_181f82dd4;
        }
      }
      else if (uVar2 == 0x912e23be) {
        bVar1 = System_String__op_Equality(name,"SitFall",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345904 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__SitFall_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            Il2CppMethodInitialized_184345904 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__SitFall_g____getter
          ;
          goto label_181f82dd4;
        }
      }
    }
    else if (uVar2 == 0x92d2a9f1) {
      bVar1 = System_String__op_Equality(name,"AttackSwing",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345909 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackSwing_g____get
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          Il2CppMethodInitialized_184345909 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackSwing_g____get
        ;
        goto label_181f82dd4;
      }
    }
    else if (uVar2 == 0x93e6a9c4) {
      bVar1 = System_String__op_Equality(name,"AttackBrushBack",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434590a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushBack_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          Il2CppMethodInitialized_18434590a = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushBack_g
        ;
        goto label_181f82dd4;
      }
    }
    goto label_181f82e16;
  }
  if (uVar2 < 0xc8f30ee8) {
    if (uVar2 < 0xc35fd7d4) {
      if (uVar2 == 0xbd457b0a) {
        bVar1 = System_String__op_Equality(name,"AttackGrabMidLeft",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345911 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabMidLeft_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            Il2CppMethodInitialized_184345911 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabMidLeft_g
          ;
          goto label_181f82dd4;
        }
      }
      else if (uVar2 == 0xc35fd7d3) {
        bVar1 = System_String__op_Equality(name,"EmoteSalute",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_18434591a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteSalute_g____get
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
            Il2CppMethodInitialized_18434591a = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteSalute_g____get
          ;
          goto label_181f82dd4;
        }
      }
    }
    else if (uVar2 == 0xc6f75897) {
      bVar1 = System_String__op_Equality(name,"EmoteRoar",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434591d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteRoar_g____gette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          Il2CppMethodInitialized_18434591d = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteRoar_g____gette
        ;
        goto label_181f82dd4;
      }
    }
    else if (uVar2 == 0xc8f30ee7) {
      bVar1 = System_String__op_Equality(name,"AttackKick",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345916 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g____gett
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          Il2CppMethodInitialized_184345916 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g____gett
        ;
        goto label_181f82dd4;
      }
    }
  }
  else if (uVar2 < 0xe308a058) {
    if (uVar2 == 0xdecfe799) {
      bVar1 = System_String__op_Equality(name,"AttackBrushHeadR",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_18434590e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushHeadR_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          Il2CppMethodInitialized_18434590e = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushHeadR_g
        ;
        goto label_181f82dd4;
      }
    }
    else if (uVar2 == 0xe308a057) {
      bVar1 = System_String__op_Equality(name,"AttackGrabMidRight",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345912 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabMidRight_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
          Il2CppMethodInitialized_184345912 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabMidRight_g
        ;
        goto label_181f82dd4;
      }
    }
  }
  else if (uVar2 == 0xe6b2342d) {
    bVar1 = System_String__op_Equality(name,"SitIdle",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345905 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__SitIdle_g____getter
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
        ;
        Il2CppMethodInitialized_184345905 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__SitIdle_g____getter
      ;
label_181f82dd4:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)0x0,
                 (MethodInfo_12B8EE0 *)
                 MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar2 == 0xee1682bc) {
    bVar1 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345901 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_7_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
        ;
        Il2CppMethodInitialized_184345901 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_7_0
      ;
      goto label_181f82dd4;
    }
  }
  else if (uVar2 == 0xf8d01087) {
    bVar1 = System_String__op_Equality(name,"AttackBrushHeadL",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
      }
      if (Il2CppMethodInitialized_18434590d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushHeadL_g
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
        ;
        Il2CppMethodInitialized_18434590d = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushHeadL_g
      ;
      goto label_181f82dd4;
    }
  }
label_181f82e16:
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAnnieAnimationEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x181f97fc0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Idle(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843458fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_1843458fc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Run
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Run (const MethodInfo* method);
// 0x181f9aa40

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Run(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843458fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_1843458fd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x181f9c520

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843458fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_1843458fe = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x181f984c0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_1843458ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_1843458ff = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Fall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Fall (const MethodInfo* method);
// 0x181f96e90

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Fall(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345900 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345900 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x181f986a0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345901 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345901 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_7_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Die
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Die (const MethodInfo* method);
// 0x181f96670

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Die(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345902 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Die_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345902 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Die_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__Stun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Stun (const MethodInfo* method);
// 0x181f9b8f0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__Stun(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345903 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Stun_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345903 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__Stun_g____getter_9_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__SitFall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__SitFall (const MethodInfo* method);
// 0x181f9ae50

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__SitFall(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345904 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__SitFall_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345904 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__SitFall_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__SitIdle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__SitIdle (const MethodInfo* method);
// 0x181f9aef0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__SitIdle(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345905 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__SitIdle_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345905 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__SitIdle_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__SitUp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__SitUp (const MethodInfo* method);
// 0x181f9af90

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__SitUp(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345906 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__SitUp_g____getter_12
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345906 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__SitUp_g____getter_12
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackCombo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackCombo (const MethodInfo* method);
// 0x181f94410

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackCombo(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345907 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackCombo_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345907 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackCombo_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackComboBlind
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackComboBlind (const MethodInfo* method);
// 0x181f94370

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackComboBlind
          (MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345908 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackComboBlind_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345908 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackComboBlind_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSwing
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackSwing (const MethodInfo* method);
// 0x181f94e10

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackSwing(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345909 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackSwing_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345909 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackSwing_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushBack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushBack (const MethodInfo* method);
// 0x181f94050

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushBack
          (MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434590a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushBack_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_18434590a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushBack_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushFrontL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushFrontL (const MethodInfo* method);
// 0x181f940f0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushFrontL
          (MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434590b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushFrontL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_18434590b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushFrontL_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushFrontR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushFrontR (const MethodInfo* method);
// 0x181f94190

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushFrontR
          (MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434590c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushFrontR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_18434590c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushFrontR_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushHeadL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushHeadL (const MethodInfo* method);
// 0x181f94230

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushHeadL
          (MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434590d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushHeadL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_18434590d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushHeadL_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBrushHeadR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushHeadR (const MethodInfo* method);
// 0x181f942d0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBrushHeadR
          (MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434590e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushHeadR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_18434590e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBrushHeadR_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabBottomLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBottomLeft (const MethodInfo* method);
// 0x181f94550

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBottomLeft
          (MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434590f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBottomLeft
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_18434590f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBottomLeft
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabBottomRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBottomRight (const MethodInfo* method);
// 0x181f945f0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabBottomRight
          (MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345910 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBottomRigh
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345910 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabBottomRigh
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabMidLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabMidLeft (const MethodInfo* method);
// 0x181f94690

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabMidLeft
          (MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345911 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabMidLeft_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345911 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabMidLeft_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabMidRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabMidRight (const MethodInfo* method);
// 0x181f94730

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabMidRight
          (MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345912 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabMidRight_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345912 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabMidRight_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabUp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabUp (const MethodInfo* method);
// 0x181f94910

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabUp(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345913 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabUp_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345913 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabUp_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabUpLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabUpLeft (const MethodInfo* method);
// 0x181f947d0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabUpLeft
          (MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345914 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabUpLeft_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345914 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabUpLeft_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackGrabUpRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabUpRight (const MethodInfo* method);
// 0x181f94870

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackGrabUpRight
          (MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345915 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabUpRight_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345915 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackGrabUpRight_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackKick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackKick (const MethodInfo* method);
// 0x181f94af0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackKick(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345916 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345916 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackStomp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackStomp (const MethodInfo* method);
// 0x181f94d70

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackStomp(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345917 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackStomp_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345917 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackStomp_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackHead
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackHead (const MethodInfo* method);
// 0x181f949b0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackHead(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345918 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackHead_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345918 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackHead_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__AttackBite
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBite (const MethodInfo* method);
// 0x181f93fb0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__AttackBite(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345919 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBite_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_184345919 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__AttackBite_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteSalute
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteSalute (const MethodInfo* method);
// 0x181f96a30

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteSalute(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434591a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteSalute_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_18434591a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteSalute_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteTaunt
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteTaunt (const MethodInfo* method);
// 0x181f96ad0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteTaunt(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434591b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteTaunt_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_18434591b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteTaunt_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteWave
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteWave (const MethodInfo* method);
// 0x181f96b70

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteWave(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434591c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteWave_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_18434591c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteWave_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteRoar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar (const MethodInfo* method);
// 0x181f968f0

CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar(MethodInfo *method)

{
  System_Func_CustomLogicAnnieAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434591d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteRoar_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object);
    Il2CppMethodInitialized_18434591d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnnieAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___CreatePropertyBinding__EmoteRoar_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnnieAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x181f9ef90

void CustomLogic_CustomLogicAnnieAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434591e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Run");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteWave");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBottomLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Die");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushHeadL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackComboBlind");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushFrontL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushHeadR");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteTaunt");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBottomRight");
    il2cpp_codegen_initialize_runtime_metadata(&"Land");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabUpLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabMidRight");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushBack");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteSalute");
    il2cpp_codegen_initialize_runtime_metadata(&"SitIdle");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBite");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackHead");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabUpRight");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"SitFall");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabUp");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushFrontR");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Fall");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    il2cpp_codegen_initialize_runtime_metadata(&"SitUp");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabMidLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteRoar");
    Il2CppMethodInitialized_18434591e = '\x01';
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
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stun",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SitFall",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SitIdle",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SitUp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackCombo",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackComboBlind",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSwing",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBrushBack",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBrushFrontL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBrushFrontR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBrushHeadL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBrushHeadR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabBottomLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabBottomRight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabMidLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabMidRight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabUp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabUpLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabUpRight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackKick",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackStomp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackHead",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBite",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteSalute",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteTaunt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteWave",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteRoar",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnnieAnimationEnum_Bindings->static_fields->MemberNames,__this
              );
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8ea60

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_idle");
    Il2CppMethodInitialized_1843458d7 = '\x01';
  }
  return "Armature_FemT|ft_idle";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_3_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f90940

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_3_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_run");
    Il2CppMethodInitialized_1843458d8 = '\x01';
  }
  return "Armature_FemT|ft_run";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f919a0

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_walk");
    Il2CppMethodInitialized_1843458d9 = '\x01';
  }
  return "Armature_FemT|ft_walk";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_5_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8ec60

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_5_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_jump_start");
    Il2CppMethodInitialized_1843458da = '\x01';
  }
  return "Armature_FemT|ft_jump_start";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Fall>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_6_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8e1e0

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_6_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_jump_air");
    Il2CppMethodInitialized_1843458db = '\x01';
  }
  return "Armature_FemT|ft_jump_air";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_7_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8ecc0

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_7_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_jump_land");
    Il2CppMethodInitialized_1843458dc = '\x01';
  }
  return "Armature_FemT|ft_jump_land";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Die>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Die_g____getter_8_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8df20

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Die_g____getter_8_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_die_shifter");
    Il2CppMethodInitialized_1843458dd = '\x01';
  }
  return "Armature_FemT|ft_die_shifter";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__Stun>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_9_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f911f0

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_9_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_hit_titan");
    Il2CppMethodInitialized_1843458de = '\x01';
  }
  return "Armature_FemT|ft_hit_titan";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__SitFall>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__SitFall_g____getter_10_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f90b70

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__SitFall_g____getter_10_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_legHurt");
    Il2CppMethodInitialized_1843458df = '\x01';
  }
  return "Armature_FemT|ft_legHurt";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__SitIdle>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__SitIdle_g____getter_11_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f90ba0

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__SitIdle_g____getter_11_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_legHurt_loop");
    Il2CppMethodInitialized_1843458e0 = '\x01';
  }
  return "Armature_FemT|ft_legHurt_loop";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__SitUp>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__SitUp_g____getter_12_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f90bd0

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__SitUp_g____getter_12_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_legHurt_getup");
    Il2CppMethodInitialized_1843458e1 = '\x01';
  }
  return "Armature_FemT|ft_legHurt_getup";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackCombo>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_13_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8cfd0

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_13_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_combo_full");
    Il2CppMethodInitialized_1843458e2 = '\x01';
  }
  return "Armature_FemT|ft_attack_combo_full";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackComboBlind>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackComboBlind_g____getter_14_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8cfa0

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackComboBlind_g____getter_14_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_combo_blind_full");
    Il2CppMethodInitialized_1843458e3 = '\x01';
  }
  return "Armature_FemT|ft_attack_combo_blind_full";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSwing>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackSwing_g____getter_15_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8d3c0

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackSwing_g____getter_15_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_front");
    Il2CppMethodInitialized_1843458e4 = '\x01';
  }
  return "Armature_FemT|ft_attack_front";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushBack>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushBack_g____getter_16_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8ceb0

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushBack_g____getter_16_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_sweep_back");
    Il2CppMethodInitialized_1843458e5 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_back";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushFrontL>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushFrontL_g____getter_17_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8cee0

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushFrontL_g____getter_17_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_sweep_front_left");
    Il2CppMethodInitialized_1843458e6 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_front_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushFrontR>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushFrontR_g____getter_18_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8cf10

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushFrontR_g____getter_18_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_sweep_front_right");
    Il2CppMethodInitialized_1843458e7 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_front_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushHeadL>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushHeadL_g____getter_19_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8cf40

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushHeadL_g____getter_19_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_sweep_head_b_l");
    Il2CppMethodInitialized_1843458e8 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_head_b_l";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBrushHeadR>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushHeadR_g____getter_20_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8cf70

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBrushHeadR_g____getter_20_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_sweep_head_b_r");
    Il2CppMethodInitialized_1843458e9 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_head_b_r";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBottomLeft>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBottomLeft_g____getter_21_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8d030

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBottomLeft_g____getter_21_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_grab_bottom_left");
    Il2CppMethodInitialized_1843458ea = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_bottom_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBottomRight>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBottomRight_g____getter_22_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8d060

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabBottomRight_g____getter_22_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_grab_bottom_right");
    Il2CppMethodInitialized_1843458eb = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_bottom_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabMidLeft>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabMidLeft_g____getter_23_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8d090

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabMidLeft_g____getter_23_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_grab_mid_left");
    Il2CppMethodInitialized_1843458ec = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_mid_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabMidRight>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabMidRight_g____getter_24_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8d0c0

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabMidRight_g____getter_24_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_grab_mid_right");
    Il2CppMethodInitialized_1843458ed = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_mid_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabUp>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabUp_g____getter_25_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8d150

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabUp_g____getter_25_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_grab_up");
    Il2CppMethodInitialized_1843458ee = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_up";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabUpLeft>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabUpLeft_g____getter_26_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8d0f0

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabUpLeft_g____getter_26_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_grab_up_left");
    Il2CppMethodInitialized_1843458ef = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_up_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackGrabUpRight>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabUpRight_g____getter_27_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8d120

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackGrabUpRight_g____getter_27_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_grab_up_right");
    Il2CppMethodInitialized_1843458f0 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_up_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackKick>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_28_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8d1e0

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_28_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_sweep");
    Il2CppMethodInitialized_1843458f1 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackStomp>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_29_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8d390

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_29_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_core");
    Il2CppMethodInitialized_1843458f2 = '\x01';
  }
  return "Armature_FemT|ft_attack_core";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackHead>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackHead_g____getter_30_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8d180

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackHead_g____getter_30_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_head");
    Il2CppMethodInitialized_1843458f3 = '\x01';
  }
  return "Armature_FemT|ft_attack_head";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackBite>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBite_g____getter_31_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8ce80

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__AttackBite_g____getter_31_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_bite");
    Il2CppMethodInitialized_1843458f4 = '\x01';
  }
  return "Armature_FemT|ft_attack_bite";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteSalute>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteSalute_g____getter_32_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8e010

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteSalute_g____getter_32_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_emote_salute");
    Il2CppMethodInitialized_1843458f5 = '\x01';
  }
  return "Armature_FemT|ft_emote_salute";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteTaunt>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteTaunt_g____getter_33_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8e040

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteTaunt_g____getter_33_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_emote_taunt");
    Il2CppMethodInitialized_1843458f6 = '\x01';
  }
  return "Armature_FemT|ft_emote_taunt";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteWave>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteWave_g____getter_34_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8e070

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteWave_g____getter_34_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_emote_wave");
    Il2CppMethodInitialized_1843458f7 = '\x01';
  }
  return "Armature_FemT|ft_emote_wave";
}


// CustomLogic.CustomLogicAnnieAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteRoar>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteRoar_g____getter_35_0 (CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, const MethodInfo* method);
// 0x181f8dfe0

Il2CppObject*
CustomLogic_CustomLogicAnnieAnimationEnum_Bindings_____CreatePropertyBinding__EmoteRoar_g____getter_35_0(CustomLogic_CustomLogicAnnieAnimationEnum_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_1843458f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_mad1");
    Il2CppMethodInitialized_1843458f8 = '\x01';
  }
  return "Armature_FemT|ft_mad1";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnnieAnimationEnum___ctor (CustomLogic_CustomLogicAnnieAnimationEnum_o* __this, const MethodInfo* method);
// 0x181f9f6d0

void CustomLogic_CustomLogicAnnieAnimationEnum___ctor
               (CustomLogic_CustomLogicAnnieAnimationEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843458d6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Idle (const MethodInfo* method);
// 0x181f8ea60

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Idle(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_idle");
    Il2CppMethodInitialized_1843458d7 = '\x01';
  }
  return "Armature_FemT|ft_idle";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Run
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Run (const MethodInfo* method);
// 0x181f90940

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Run(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_run");
    Il2CppMethodInitialized_1843458d8 = '\x01';
  }
  return "Armature_FemT|ft_run";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Walk (const MethodInfo* method);
// 0x181f919a0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Walk(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_walk");
    Il2CppMethodInitialized_1843458d9 = '\x01';
  }
  return "Armature_FemT|ft_walk";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Jump (const MethodInfo* method);
// 0x181f8ec60

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Jump(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_jump_start");
    Il2CppMethodInitialized_1843458da = '\x01';
  }
  return "Armature_FemT|ft_jump_start";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Fall
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Fall (const MethodInfo* method);
// 0x181f8e1e0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Fall(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_jump_air");
    Il2CppMethodInitialized_1843458db = '\x01';
  }
  return "Armature_FemT|ft_jump_air";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Land (const MethodInfo* method);
// 0x181f8ecc0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Land(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_jump_land");
    Il2CppMethodInitialized_1843458dc = '\x01';
  }
  return "Armature_FemT|ft_jump_land";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Die
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Die (const MethodInfo* method);
// 0x181f8df20

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Die(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_die_shifter");
    Il2CppMethodInitialized_1843458dd = '\x01';
  }
  return "Armature_FemT|ft_die_shifter";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_Stun
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_Stun (const MethodInfo* method);
// 0x181f911f0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_Stun(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_hit_titan");
    Il2CppMethodInitialized_1843458de = '\x01';
  }
  return "Armature_FemT|ft_hit_titan";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_SitFall
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_SitFall (const MethodInfo* method);
// 0x181f90b70

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_SitFall(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_legHurt");
    Il2CppMethodInitialized_1843458df = '\x01';
  }
  return "Armature_FemT|ft_legHurt";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_SitIdle
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_SitIdle (const MethodInfo* method);
// 0x181f90ba0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_SitIdle(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_legHurt_loop");
    Il2CppMethodInitialized_1843458e0 = '\x01';
  }
  return "Armature_FemT|ft_legHurt_loop";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_SitUp
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_SitUp (const MethodInfo* method);
// 0x181f90bd0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_SitUp(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_legHurt_getup");
    Il2CppMethodInitialized_1843458e1 = '\x01';
  }
  return "Armature_FemT|ft_legHurt_getup";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackCombo
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackCombo (const MethodInfo* method);
// 0x181f8cfd0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackCombo(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_combo_full");
    Il2CppMethodInitialized_1843458e2 = '\x01';
  }
  return "Armature_FemT|ft_attack_combo_full";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackComboBlind
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackComboBlind (const MethodInfo* method);
// 0x181f8cfa0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackComboBlind(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_combo_blind_full");
    Il2CppMethodInitialized_1843458e3 = '\x01';
  }
  return "Armature_FemT|ft_attack_combo_blind_full";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackSwing
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackSwing (const MethodInfo* method);
// 0x181f8d3c0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackSwing(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_front");
    Il2CppMethodInitialized_1843458e4 = '\x01';
  }
  return "Armature_FemT|ft_attack_front";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushBack
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushBack (const MethodInfo* method);
// 0x181f8ceb0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushBack(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_sweep_back");
    Il2CppMethodInitialized_1843458e5 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_back";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushFrontL
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushFrontL (const MethodInfo* method);
// 0x181f8cee0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushFrontL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_sweep_front_left");
    Il2CppMethodInitialized_1843458e6 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_front_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushFrontR
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushFrontR (const MethodInfo* method);
// 0x181f8cf10

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushFrontR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_sweep_front_right");
    Il2CppMethodInitialized_1843458e7 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_front_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushHeadL
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushHeadL (const MethodInfo* method);
// 0x181f8cf40

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushHeadL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_sweep_head_b_l");
    Il2CppMethodInitialized_1843458e8 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_head_b_l";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBrushHeadR
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushHeadR (const MethodInfo* method);
// 0x181f8cf70

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBrushHeadR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_sweep_head_b_r");
    Il2CppMethodInitialized_1843458e9 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep_head_b_r";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabBottomLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabBottomLeft (const MethodInfo* method);
// 0x181f8d030

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabBottomLeft(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_grab_bottom_left");
    Il2CppMethodInitialized_1843458ea = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_bottom_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabBottomRight
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabBottomRight (const MethodInfo* method);
// 0x181f8d060

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabBottomRight(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_grab_bottom_right");
    Il2CppMethodInitialized_1843458eb = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_bottom_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabMidLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabMidLeft (const MethodInfo* method);
// 0x181f8d090

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabMidLeft(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_grab_mid_left");
    Il2CppMethodInitialized_1843458ec = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_mid_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabMidRight
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabMidRight (const MethodInfo* method);
// 0x181f8d0c0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabMidRight(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_grab_mid_right");
    Il2CppMethodInitialized_1843458ed = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_mid_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabUp
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabUp (const MethodInfo* method);
// 0x181f8d150

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabUp(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_grab_up");
    Il2CppMethodInitialized_1843458ee = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_up";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabUpLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabUpLeft (const MethodInfo* method);
// 0x181f8d0f0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabUpLeft(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_grab_up_left");
    Il2CppMethodInitialized_1843458ef = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_up_left";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackGrabUpRight
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabUpRight (const MethodInfo* method);
// 0x181f8d120

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackGrabUpRight(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_grab_up_right");
    Il2CppMethodInitialized_1843458f0 = '\x01';
  }
  return "Armature_FemT|ft_attack_grab_up_right";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackKick
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackKick (const MethodInfo* method);
// 0x181f8d1e0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackKick(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_sweep");
    Il2CppMethodInitialized_1843458f1 = '\x01';
  }
  return "Armature_FemT|ft_attack_sweep";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackStomp
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackStomp (const MethodInfo* method);
// 0x181f8d390

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackStomp(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_core");
    Il2CppMethodInitialized_1843458f2 = '\x01';
  }
  return "Armature_FemT|ft_attack_core";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackHead
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackHead (const MethodInfo* method);
// 0x181f8d180

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackHead(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_head");
    Il2CppMethodInitialized_1843458f3 = '\x01';
  }
  return "Armature_FemT|ft_attack_head";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_AttackBite
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBite (const MethodInfo* method);
// 0x181f8ce80

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_AttackBite(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_attack_bite");
    Il2CppMethodInitialized_1843458f4 = '\x01';
  }
  return "Armature_FemT|ft_attack_bite";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_EmoteSalute
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteSalute (const MethodInfo* method);
// 0x181f8e010

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteSalute(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_emote_salute");
    Il2CppMethodInitialized_1843458f5 = '\x01';
  }
  return "Armature_FemT|ft_emote_salute";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_EmoteTaunt
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteTaunt (const MethodInfo* method);
// 0x181f8e040

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteTaunt(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_emote_taunt");
    Il2CppMethodInitialized_1843458f6 = '\x01';
  }
  return "Armature_FemT|ft_emote_taunt";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_EmoteWave
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteWave (const MethodInfo* method);
// 0x181f8e070

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteWave(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_emote_wave");
    Il2CppMethodInitialized_1843458f7 = '\x01';
  }
  return "Armature_FemT|ft_emote_wave";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_EmoteRoar
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteRoar (const MethodInfo* method);
// 0x181f8dfe0

System_String_o * CustomLogic_CustomLogicAnnieAnimationEnum__get_EmoteRoar(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_FemT|ft_mad1");
    Il2CppMethodInitialized_1843458f8 = '\x01';
  }
  return "Armature_FemT|ft_mad1";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAnnieAnimationEnum__get_ClassName (CustomLogic_CustomLogicAnnieAnimationEnum_o* __this, const MethodInfo* method);
// 0x181f9f720

System_String_o *
CustomLogic_CustomLogicAnnieAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicAnnieAnimationEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843458f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieAnimationEnum");
    Il2CppMethodInitialized_1843458f9 = '\x01';
  }
  return "AnnieAnimationEnum";
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAnnieAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicAnnieAnimationEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicAnnieAnimationEnum__get_IsAbstract(CustomLogic_CustomLogicAnnieAnimationEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAnnieAnimationEnum__get_IsStatic (CustomLogic_CustomLogicAnnieAnimationEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicAnnieAnimationEnum__get_IsStatic(CustomLogic_CustomLogicAnnieAnimationEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicAnnieAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAnnieAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicAnnieAnimationEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicAnnieAnimationEnum__get_InheritBaseMembers(CustomLogic_CustomLogicAnnieAnimationEnum_o* __this, MethodInfo* method)

{
  return true;
}


