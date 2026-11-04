// Type: CustomLogic.CustomLogicHumanAnimationEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHumanAnimationEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicHumanAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHumanAnimationEnum_o* CustomLogic_CustomLogicHumanAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fceab0

CustomLogic_CustomLogicHumanAnimationEnum_o *
CustomLogic_CustomLogicHumanAnimationEnum_Factory__CreateInstance
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
  
  if (Il2CppMethodInitialized_184345aa9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum);
    Il2CppMethodInitialized_184345aa9 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum);
      if (Il2CppMethodInitialized_184345a5b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345a5b = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicHumanAnimationEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHumanAnimationEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fadbe0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_184345aaa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialMarco0");
    il2cpp_codegen_initialize_runtime_metadata(&"Run");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteWave");
    il2cpp_codegen_initialize_runtime_metadata(&"IdleTSF");
    il2cpp_codegen_initialize_runtime_metadata(&"AirRelease");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack1HookR1");
    il2cpp_codegen_initialize_runtime_metadata(&"HoodPullAir");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialPetra");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialMikasa1");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSShootLAir");
    il2cpp_codegen_initialize_runtime_metadata(&"RunTS");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialMarco1");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseDismount");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack1HookL1");
    il2cpp_codegen_initialize_runtime_metadata(&"IdleM");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialSasha");
    il2cpp_codegen_initialize_runtime_metadata(&"AirRise");
    il2cpp_codegen_initialize_runtime_metadata(&"ChangeBladeAir");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialMikasa2");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack4");
    il2cpp_codegen_initialize_runtime_metadata(&"AirHookRJust");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialArmin");
    il2cpp_codegen_initialize_runtime_metadata(&"TSShootR");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSHookForwardR");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseRun");
    il2cpp_codegen_initialize_runtime_metadata(&"IdleTSM");
    il2cpp_codegen_initialize_runtime_metadata(&"TSShootRAir");
    il2cpp_codegen_initialize_runtime_metadata(&"TSShootL");
    il2cpp_codegen_initialize_runtime_metadata(&"TSShootLAir");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSShootRAir");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteYes");
    il2cpp_codegen_initialize_runtime_metadata(&"Land");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack1HookR2");
    il2cpp_codegen_initialize_runtime_metadata(&"Air2Left");
    il2cpp_codegen_initialize_runtime_metadata(&"AirHookLJust");
    il2cpp_codegen_initialize_runtime_metadata(&"AirHook");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"HoodPull");
    il2cpp_codegen_initialize_runtime_metadata(&"Dash");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSShootBothAir");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseIdle");
    il2cpp_codegen_initialize_runtime_metadata(&"OnWall");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialLevi");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteSalute");
    il2cpp_codegen_initialize_runtime_metadata(&"IdleAHSSF");
    il2cpp_codegen_initialize_runtime_metadata(&"Air2Backward");
    il2cpp_codegen_initialize_runtime_metadata(&"Dodge");
    il2cpp_codegen_initialize_runtime_metadata(&"Grabbed");
    il2cpp_codegen_initialize_runtime_metadata(&"Air2");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialJean");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunReloadBoth");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack1");
    il2cpp_codegen_initialize_runtime_metadata(&"Refill");
    il2cpp_codegen_initialize_runtime_metadata(&"Slide");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSShootR");
    il2cpp_codegen_initialize_runtime_metadata(&"ChangeBlade");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialShifter");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSHookForwardL");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack1HookL2");
    il2cpp_codegen_initialize_runtime_metadata(&"IdleF");
    il2cpp_codegen_initialize_runtime_metadata(&"AirHookR");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSShootBoth");
    il2cpp_codegen_initialize_runtime_metadata(&"IdleAHSSM");
    il2cpp_codegen_initialize_runtime_metadata(&"AirFall");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSHookForwardBoth");
    il2cpp_codegen_initialize_runtime_metadata(&"WallRun");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteNo");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunReloadBothAir");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSShootL");
    il2cpp_codegen_initialize_runtime_metadata(&"AirHookL");
    il2cpp_codegen_initialize_runtime_metadata(&"ToRoof");
    il2cpp_codegen_initialize_runtime_metadata(&"RunBuffed");
    il2cpp_codegen_initialize_runtime_metadata(&"Air2Right");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseMount");
    Il2CppMethodInitialized_184345aaa = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x6e8be55e) {
    if (uVar2 < 0x3c73ce13) {
      if (uVar2 < 0xdb32d0a) {
        if (uVar2 < 0x75b8e45) {
          if (uVar2 < 0x45b898c) {
            if (uVar2 == 0x331aacb) {
              bVar1 = System_String__op_Equality(name,"Air2Right",(MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
                }
                if (Il2CppMethodInitialized_184345add == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&
                             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Right_g____gette
                            );
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
                  Il2CppMethodInitialized_184345add = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
                pMVar4 = 
                MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Right_g____gette
                ;
                goto label_181fb0c50;
              }
            }
            else if (uVar2 == 0x45b898b) {
              bVar1 = System_String__op_Equality(name,"Attack4",(MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
                }
                if (Il2CppMethodInitialized_184345ae6 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&
                             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack4_g____getter
                            );
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
                  Il2CppMethodInitialized_184345ae6 = '\x01';
                }
                __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
                pMVar4 = 
                MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack4_g____getter
                ;
                goto label_181fb0c50;
              }
            }
          }
          else if (uVar2 == 0x520dc57) {
            bVar1 = System_String__op_Equality(name,"TSShootR",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345ad0 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootR_g____getter
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
                Il2CppMethodInitialized_184345ad0 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootR_g____getter
              ;
              goto label_181fb0c50;
            }
          }
          else if (uVar2 == 0x75b8e44) {
            bVar1 = System_String__op_Equality(name,"Attack1",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345ae4 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1_g____getter
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
                Il2CppMethodInitialized_184345ae4 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1_g____getter
              ;
              goto label_181fb0c50;
            }
          }
        }
        else if (uVar2 < 0xb20e5ca) {
          if (uVar2 == 0xa5b92fd) {
            bVar1 = System_String__op_Equality(name,"Attack2",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345ae5 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack2_g____getter
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
                Il2CppMethodInitialized_184345ae5 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack2_g____getter
              ;
              goto label_181fb0c50;
            }
          }
          else if (uVar2 == 0xb20e5c9) {
            bVar1 = System_String__op_Equality(name,"TSShootL",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345ad1 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootL_g____getter
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
                Il2CppMethodInitialized_184345ad1 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootL_g____getter
              ;
              goto label_181fb0c50;
            }
          }
        }
        else if (uVar2 == 0xc43456b) {
          bVar1 = System_String__op_Equality(name,"RunTS",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ab8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__RunTS_g____getter_15
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345ab8 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__RunTS_g____getter_15
            ;
            goto label_181fb0c50;
          }
        }
        else if (uVar2 == 0xcb32b76) {
          bVar1 = System_String__op_Equality(name,"SpecialMarco0",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ae8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMarco0_g____g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345ae8 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMarco0_g____g
            ;
            goto label_181fb0c50;
          }
        }
        else if (uVar2 == 0xdb32d09) {
          bVar1 = System_String__op_Equality(name,"SpecialMarco1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ae9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMarco1_g____g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345ae9 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMarco1_g____g
            ;
            goto label_181fb0c50;
          }
        }
        goto label_181fb0c92;
      }
      if (uVar2 < 0x1eea5c97) {
        if (uVar2 < 0x11ff6d0c) {
          if (uVar2 == 0xe1ef32d) {
            bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345ab5 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_12
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
                Il2CppMethodInitialized_184345ab5 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_12
              ;
              goto label_181fb0c50;
            }
          }
          else if (uVar2 == 0x11ff6d0b) {
            bVar1 = System_String__op_Equality(name,"AHSSShootRAir",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345acb == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootRAir_g____g
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
                Il2CppMethodInitialized_184345acb = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootRAir_g____g
              ;
              goto label_181fb0c50;
            }
          }
        }
        else if (uVar2 == 0x18ea5324) {
          bVar1 = System_String__op_Equality(name,"AirHookL",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ad6 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookL_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345ad6 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookL_g____getter
            ;
            goto label_181fb0c50;
          }
        }
        else if (uVar2 == 0x1ddf2a11) {
          bVar1 = System_String__op_Equality(name,"AHSSShootR",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ac8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootR_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345ac8 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootR_g____gett
            ;
            goto label_181fb0c50;
          }
        }
        else if (uVar2 == 0x1eea5c96) {
          bVar1 = System_String__op_Equality(name,"AirHookR",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ad7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookR_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345ad7 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookR_g____getter
            ;
            goto label_181fb0c50;
          }
        }
      }
      else if (uVar2 < 0x27df39d0) {
        if (uVar2 == 0x22ccd730) {
          bVar1 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ab7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_14
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345ab7 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_14
            ;
            goto label_181fb0c50;
          }
        }
        else if (uVar2 == 0x27df39cf) {
          bVar1 = System_String__op_Equality(name,"AHSSShootL",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ac9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootL_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345ac9 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootL_g____gett
            ;
            goto label_181fb0c50;
          }
        }
      }
      else if (uVar2 == 0x2ea8c1d5) {
        bVar1 = System_String__op_Equality(name,"SpecialArmin",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ae7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialArmin_g____ge
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345ae7 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialArmin_g____ge
          ;
          goto label_181fb0c50;
        }
      }
      else if (uVar2 == 0x324d8372) {
        bVar1 = System_String__op_Equality(name,"EmoteWave",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345af4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteWave_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345af4 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteWave_g____gette
          ;
          goto label_181fb0c50;
        }
      }
      else if (uVar2 == 0x3c73ce12) {
        bVar1 = System_String__op_Equality(name,"AHSSShootBothAir",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345acd == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootBothAir_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345acd = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootBothAir_g
          ;
          goto label_181fb0c50;
        }
      }
      goto label_181fb0c92;
    }
    if (uVar2 < 0x502d6444) {
      if (uVar2 < 0x43ea2092) {
        if (uVar2 < 0x40ea1bd9) {
          if (uVar2 == 0x3d57045f) {
            bVar1 = System_String__op_Equality(name,"Air2",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345adc == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2_g____getter_51
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
                Il2CppMethodInitialized_184345adc = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2_g____getter_51
              ;
              goto label_181fb0c50;
            }
          }
          else if (uVar2 == 0x40ea1bd8) {
            bVar1 = System_String__op_Equality(name,"SpecialMikasa2",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345aec == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMikasa2_g
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
                Il2CppMethodInitialized_184345aec = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMikasa2_g
              ;
              goto label_181fb0c50;
            }
          }
        }
        else if (uVar2 == 0x42bf6b8e) {
          bVar1 = System_String__op_Equality(name,"AHSSGunReloadBothAir",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345acf == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSGunReloadBothAir
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345acf = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSGunReloadBothAir
            ;
            goto label_181fb0c50;
          }
        }
        else if (uVar2 == 0x43ea2091) {
          bVar1 = System_String__op_Equality(name,"SpecialMikasa1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345aeb == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMikasa1_g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345aeb = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMikasa1_g
            ;
            goto label_181fb0c50;
          }
        }
      }
      else if (uVar2 < 0x48d20264) {
        if (uVar2 == 0x47ae9c66) {
          bVar1 = System_String__op_Equality(name,"EmoteYes",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345af3 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteYes_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345af3 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteYes_g____getter
            ;
            goto label_181fb0c50;
          }
        }
        else if (uVar2 == 0x48d20263) {
          bVar1 = System_String__op_Equality(name,"ChangeBladeAir",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ac4 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ChangeBladeAir_g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345ac4 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ChangeBladeAir_g
            ;
            goto label_181fb0c50;
          }
        }
      }
      else if (uVar2 == 0x4928501c) {
        bVar1 = System_String__op_Equality(name,"AirHookRJust",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ad5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookRJust_g____ge
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345ad5 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookRJust_g____ge
          ;
          goto label_181fb0c50;
        }
      }
      else if (uVar2 == 0x4a4b98a8) {
        bVar1 = System_String__op_Equality(name,"EmoteNo",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345af2 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteNo_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345af2 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteNo_g____getter
          ;
          goto label_181fb0c50;
        }
      }
      else if (uVar2 == 0x502d6443) {
        bVar1 = System_String__op_Equality(name,"TSShootLAir",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ad3 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootLAir_g____get
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345ad3 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootLAir_g____get
          ;
          goto label_181fb0c50;
        }
      }
      goto label_181fb0c92;
    }
    if (uVar2 < 0x5e0c8deb) {
      if (uVar2 < 0x5a18e72b) {
        if (uVar2 == 0x569fee3e) {
          bVar1 = System_String__op_Equality(name,"SpecialSasha",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345aea == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialSasha_g____ge
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345aea = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialSasha_g____ge
            ;
            goto label_181fb0c50;
          }
        }
        else if (uVar2 == 0x5a18e72a) {
          bVar1 = System_String__op_Equality(name,"ToRoof",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ac0 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ToRoof_g____getter_2
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345ac0 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ToRoof_g____getter_2
            ;
            goto label_181fb0c50;
          }
        }
      }
      else if (uVar2 == 0x5a234b86) {
        bVar1 = System_String__op_Equality(name,"Grabbed",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345abd == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Grabbed_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345abd = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Grabbed_g____getter
          ;
          goto label_181fb0c50;
        }
      }
      else if (uVar2 == 0x5a8567fe) {
        bVar1 = System_String__op_Equality(name,"RunBuffed",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ab9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__RunBuffed_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345ab9 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__RunBuffed_g____gette
          ;
          goto label_181fb0c50;
        }
      }
      else if (uVar2 == 0x5e0c8dea) {
        bVar1 = System_String__op_Equality(name,"AHSSGunReloadBoth",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ace == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSGunReloadBoth_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345ace = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSGunReloadBoth_g
          ;
          goto label_181fb0c50;
        }
      }
    }
    else if (uVar2 < 0x68597616) {
      if (uVar2 == 0x6153e692) {
        bVar1 = System_String__op_Equality(name,"AirRise",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345adb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirRise_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345adb = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirRise_g____getter
          ;
          goto label_181fb0c50;
        }
      }
      else if (uVar2 == 0x68597615) {
        bVar1 = System_String__op_Equality(name,"Dash",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345abe == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Dash_g____getter_21
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345abe = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Dash_g____getter_21
          ;
          goto label_181fb0c50;
        }
      }
    }
    else if (uVar2 == 0x6b8be0a4) {
      bVar1 = System_String__op_Equality(name,"Attack1HookL1",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ae0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookL1_g____g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          Il2CppMethodInitialized_184345ae0 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookL1_g____g
        ;
        goto label_181fb0c50;
      }
    }
    else if (uVar2 == 0x6c198db1) {
      bVar1 = System_String__op_Equality(name,"Refill",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345abf == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Refill_g____getter_2
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          Il2CppMethodInitialized_184345abf = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Refill_g____getter_2
        ;
        goto label_181fb0c50;
      }
    }
    else if (uVar2 == 0x6e8be55d) {
      bVar1 = System_String__op_Equality(name,"Attack1HookL2",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ae1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookL2_g____g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          Il2CppMethodInitialized_184345ae1 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookL2_g____g
        ;
        goto label_181fb0c50;
      }
    }
    goto label_181fb0c92;
  }
  if (uVar2 < 0xade67049) {
    if (uVar2 < 0x95a8311d) {
      if (uVar2 < 0x82a65fa0) {
        if (uVar2 < 0x76a54823) {
          if (uVar2 == 0x71e5e680) {
            bVar1 = System_String__op_Equality(name,"AirHook",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345ad8 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHook_g____getter
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
                Il2CppMethodInitialized_184345ad8 = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHook_g____getter
              ;
              goto label_181fb0c50;
            }
          }
          else if (uVar2 == 0x76a54822) {
            bVar1 = System_String__op_Equality(name,"Air2Backward",(MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              if (Il2CppMethodInitialized_184345adf == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Backward_g____ge
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
                Il2CppMethodInitialized_184345adf = '\x01';
              }
              __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              pMVar4 = 
              MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Backward_g____ge
              ;
              goto label_181fb0c50;
            }
          }
        }
        else if (uVar2 == 0x8149ffda) {
          bVar1 = System_String__op_Equality(name,"SpecialJean",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345aef == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialJean_g____get
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345aef = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialJean_g____get
            ;
            goto label_181fb0c50;
          }
        }
        else if (uVar2 == 0x82a65f9f) {
          bVar1 = System_String__op_Equality(name,"HorseRun",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345aae == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseRun_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345aae = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseRun_g____getter
            ;
            goto label_181fb0c50;
          }
        }
      }
      else if (uVar2 < 0x897c9be9) {
        if (uVar2 == 0x89394d92) {
          bVar1 = System_String__op_Equality(name,"SpecialLevi",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345aed == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialLevi_g____get
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345aed = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialLevi_g____get
            ;
            goto label_181fb0c50;
          }
        }
        else if (uVar2 == 0x897c9be8) {
          bVar1 = System_String__op_Equality(name,"HoodPullAir",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345af6 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HoodPullAir_g____get
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345af6 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HoodPullAir_g____get
            ;
            goto label_181fb0c50;
          }
        }
      }
      else if (uVar2 == 0x8bdddf4c) {
        bVar1 = System_String__op_Equality(name,"IdleTSF",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ab3 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleTSF_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345ab3 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleTSF_g____getter
          ;
          goto label_181fb0c50;
        }
      }
      else if (uVar2 == 0x8d57e66a) {
        bVar1 = System_String__op_Equality(name,"Run",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ab6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_13_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345ab6 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_13_0
          ;
          goto label_181fb0c50;
        }
      }
      else if (uVar2 == 0x95a8311c) {
        bVar1 = System_String__op_Equality(name,"HoodPull",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345af5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HoodPull_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345af5 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HoodPull_g____getter
          ;
          goto label_181fb0c50;
        }
      }
      goto label_181fb0c92;
    }
    if (uVar2 < 0xa7c39be9) {
      if (uVar2 < 0x9be653f3) {
        if (uVar2 == 0x96ddf09d) {
          bVar1 = System_String__op_Equality(name,"IdleTSM",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ab4 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleTSM_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345ab4 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleTSM_g____getter
            ;
            goto label_181fb0c50;
          }
        }
        else if (uVar2 == 0x9be653f2) {
          bVar1 = System_String__op_Equality(name,"AHSSHookForwardL",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ac6 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardL_g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345ac6 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardL_g
            ;
            goto label_181fb0c50;
          }
        }
      }
      else if (uVar2 == 0x9dce8fa9) {
        bVar1 = System_String__op_Equality(name,"ChangeBlade",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ac3 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ChangeBlade_g____get
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345ac3 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ChangeBlade_g____get
          ;
          goto label_181fb0c50;
        }
      }
      else if (uVar2 == 0x9fc3b6af) {
        bVar1 = System_String__op_Equality(name,"IdleF",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345aaf == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleF_g____getter_6
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345aaf = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleF_g____getter_6
          ;
          goto label_181fb0c50;
        }
      }
      else if (uVar2 == 0xa7c39be8) {
        bVar1 = System_String__op_Equality(name,"SpecialPetra",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345aee == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialPetra_g____ge
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345aee = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialPetra_g____ge
          ;
          goto label_181fb0c50;
        }
      }
    }
    else if (uVar2 < 0xa8c3c4db) {
      if (uVar2 == 0xa80c6d01) {
        bVar1 = System_String__op_Equality(name,"AHSSHookForwardBoth",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ac5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardBoth
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345ac5 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardBoth
          ;
          goto label_181fb0c50;
        }
      }
      else if (uVar2 == 0xa8c3c4da) {
        bVar1 = System_String__op_Equality(name,"IdleM",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ab0 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleM_g____getter_7
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345ab0 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleM_g____getter_7
          ;
          goto label_181fb0c50;
        }
      }
    }
    else if (uVar2 == 0xa97fed56) {
      bVar1 = System_String__op_Equality(name,"AirFall",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ada == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirFall_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          Il2CppMethodInitialized_184345ada = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirFall_g____getter
        ;
        goto label_181fb0c50;
      }
    }
    else if (uVar2 == 0xa9da7dea) {
      bVar1 = System_String__op_Equality(name,"AirHookLJust",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ad4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookLJust_g____ge
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          Il2CppMethodInitialized_184345ad4 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookLJust_g____ge
        ;
        goto label_181fb0c50;
      }
    }
    else if (uVar2 == 0xade67048) {
      bVar1 = System_String__op_Equality(name,"AHSSHookForwardR",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ac7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardR_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          Il2CppMethodInitialized_184345ac7 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardR_g
        ;
        goto label_181fb0c50;
      }
    }
    goto label_181fb0c92;
  }
  if (uVar2 < 0xd79107d7) {
    if (uVar2 < 0xc35fd7d4) {
      if (uVar2 < 0xbe4185ab) {
        if (uVar2 == 0xb541777f) {
          bVar1 = System_String__op_Equality(name,"IdleAHSSM",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ab1 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleAHSSM_g____gette
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345ab1 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleAHSSM_g____gette
            ;
            goto label_181fb0c50;
          }
        }
        else if (uVar2 == 0xbe4185aa) {
          bVar1 = System_String__op_Equality(name,"IdleAHSSF",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ab2 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleAHSSF_g____gette
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
              Il2CppMethodInitialized_184345ab2 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleAHSSF_g____gette
            ;
            goto label_181fb0c50;
          }
        }
      }
      else if (uVar2 == 0xc0f4f364) {
        bVar1 = System_String__op_Equality(name,"OnWall",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ac2 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__OnWall_g____getter_2
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345ac2 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__OnWall_g____getter_2
          ;
          goto label_181fb0c50;
        }
      }
      else if (uVar2 == 0xc35fd7d3) {
        bVar1 = System_String__op_Equality(name,"EmoteSalute",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345af1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteSalute_g____get
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345af1 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteSalute_g____get
          ;
          goto label_181fb0c50;
        }
      }
    }
    else if (uVar2 < 0xc52547e8) {
      if (uVar2 == 0xc3e1ce03) {
        bVar1 = System_String__op_Equality(name,"SpecialShifter",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345af0 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialShifter_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345af0 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialShifter_g
          ;
          goto label_181fb0c50;
        }
      }
      else if (uVar2 == 0xc52547e7) {
        bVar1 = System_String__op_Equality(name,"HorseMount",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345aab == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseMount_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345aab = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseMount_g____gett
          ;
          goto label_181fb0c50;
        }
      }
    }
    else if (uVar2 == 0xce6417cc) {
      bVar1 = System_String__op_Equality(name,"AirRelease",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ad9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirRelease_g____gett
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          Il2CppMethodInitialized_184345ad9 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirRelease_g____gett
        ;
        goto label_181fb0c50;
      }
    }
    else if (uVar2 == 0xd6910643) {
      bVar1 = System_String__op_Equality(name,"Attack1HookR2",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ae3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookR2_g____g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          Il2CppMethodInitialized_184345ae3 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookR2_g____g
        ;
        goto label_181fb0c50;
      }
    }
    else if (uVar2 == 0xd79107d6) {
      bVar1 = System_String__op_Equality(name,"Attack1HookR1",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ae2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookR1_g____g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          Il2CppMethodInitialized_184345ae2 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookR1_g____g
        ;
        goto label_181fb0c50;
      }
    }
    goto label_181fb0c92;
  }
  if (uVar2 < 0xec4867bb) {
    if (uVar2 < 0xe54a3917) {
      if (uVar2 == 0xdaf9a716) {
        bVar1 = System_String__op_Equality(name,"AHSSShootBoth",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345aca == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootBoth_g____g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345aca = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootBoth_g____g
          ;
          goto label_181fb0c50;
        }
      }
      else if (uVar2 == 0xe54a3916) {
        bVar1 = System_String__op_Equality(name,"Air2Left",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ade == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Left_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
            Il2CppMethodInitialized_184345ade = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Left_g____getter
          ;
          goto label_181fb0c50;
        }
      }
    }
    else if (uVar2 == 0xe6146cb1) {
      bVar1 = System_String__op_Equality(name,"AHSSShootLAir",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345acc == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootLAir_g____g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          Il2CppMethodInitialized_184345acc = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootLAir_g____g
        ;
        goto label_181fb0c50;
      }
    }
    else if (uVar2 == 0xe9e243fb) {
      bVar1 = System_String__op_Equality(name,"HorseDismount",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345aac == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseDismount_g____g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          Il2CppMethodInitialized_184345aac = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseDismount_g____g
        ;
        goto label_181fb0c50;
      }
    }
    else if (uVar2 == 0xec4867ba) {
      bVar1 = System_String__op_Equality(name,"WallRun",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ac1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__WallRun_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          Il2CppMethodInitialized_184345ac1 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__WallRun_g____getter
        ;
        goto label_181fb0c50;
      }
    }
  }
  else if (uVar2 < 0xf2adf85a) {
    if (uVar2 == 0xee1682bc) {
      bVar1 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345abb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_18
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          Il2CppMethodInitialized_184345abb = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_18
        ;
        goto label_181fb0c50;
      }
    }
    else if (uVar2 == 0xf2adf859) {
      bVar1 = System_String__op_Equality(name,"TSShootRAir",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345ad2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootRAir_g____get
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
          Il2CppMethodInitialized_184345ad2 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootRAir_g____get
        ;
        goto label_181fb0c50;
      }
    }
  }
  else if (uVar2 == 0xf526d670) {
    bVar1 = System_String__op_Equality(name,"Dodge",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345aba == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_17
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
        ;
        Il2CppMethodInitialized_184345aba = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_17
      ;
label_181fb0c50:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)0x0,
                 (MethodInfo_12B8EE0 *)
                 MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar2 == 0xfc5e3070) {
    bVar1 = System_String__op_Equality(name,"HorseIdle",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345aad == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseIdle_g____gette
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
        ;
        Il2CppMethodInitialized_184345aad = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseIdle_g____gette
      ;
      goto label_181fb0c50;
    }
  }
  else if (uVar2 == 0xffc7c086) {
    bVar1 = System_String__op_Equality(name,"Slide",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345abc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Slide_g____getter_19
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
        ;
        Il2CppMethodInitialized_184345abc = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Slide_g____getter_19
      ;
      goto label_181fb0c50;
    }
  }
label_181fb0c92:
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHumanAnimationEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseMount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseMount (const MethodInfo* method);
// 0x181fbedf0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseMount(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345aab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseMount_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345aab = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseMount_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseDismount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseDismount (const MethodInfo* method);
// 0x181fbeb70

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseDismount(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345aac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseDismount_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345aac = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseDismount_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseIdle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseIdle (const MethodInfo* method);
// 0x181fbec10

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseIdle(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345aad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseIdle_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345aad = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseIdle_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseRun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseRun (const MethodInfo* method);
// 0x181fbee90

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseRun(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345aae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseRun_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345aae = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseRun_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleF (const MethodInfo* method);
// 0x181fbf430

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleF(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345aaf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleF_g____getter_6
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345aaf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleF_g____getter_6
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleM
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleM (const MethodInfo* method);
// 0x181fbf4d0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleM(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ab0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleM_g____getter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ab0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleM_g____getter_7
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleAHSSM
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleAHSSM (const MethodInfo* method);
// 0x181fbf390

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleAHSSM(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ab1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleAHSSM_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ab1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleAHSSM_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleAHSSF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleAHSSF (const MethodInfo* method);
// 0x181fbf2f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleAHSSF(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ab2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleAHSSF_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ab2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleAHSSF_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleTSF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleTSF (const MethodInfo* method);
// 0x181fbf570

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleTSF(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ab3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleTSF_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ab3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleTSF_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleTSM
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleTSM (const MethodInfo* method);
// 0x181fbf610

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleTSM(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ab4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleTSM_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ab4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleTSM_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x181fbfa70

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ab5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_12
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ab5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_12
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Run
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Run (const MethodInfo* method);
// 0x181fc1af0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Run(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ab6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ab6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_13_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x181fc33f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ab7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_14
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ab7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_14
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__RunTS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__RunTS (const MethodInfo* method);
// 0x181fc1910

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__RunTS(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ab8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__RunTS_g____getter_15
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ab8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__RunTS_g____getter_15
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__RunBuffed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__RunBuffed (const MethodInfo* method);
// 0x181fc1870

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__RunBuffed(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ab9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__RunBuffed_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ab9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__RunBuffed_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Dodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Dodge (const MethodInfo* method);
// 0x181fbd090

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Dodge(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345aba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_17
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345aba = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_17
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x181fbfed0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345abb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_18
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345abb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_18
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Slide
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Slide (const MethodInfo* method);
// 0x181fc1d70

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Slide(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345abc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Slide_g____getter_19
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345abc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Slide_g____getter_19
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Grabbed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Grabbed (const MethodInfo* method);
// 0x181fbdf90

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Grabbed(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345abd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Grabbed_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345abd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Grabbed_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Dash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Dash (const MethodInfo* method);
// 0x181fbca50

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Dash(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345abe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Dash_g____getter_21
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345abe = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Dash_g____getter_21
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Refill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Refill (const MethodInfo* method);
// 0x181fc14b0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Refill(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345abf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Refill_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345abf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Refill_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__ToRoof
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ToRoof (const MethodInfo* method);
// 0x181fc2ef0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ToRoof(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ac0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ToRoof_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ac0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ToRoof_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__WallRun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__WallRun (const MethodInfo* method);
// 0x181fc3490

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__WallRun(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ac1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__WallRun_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ac1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__WallRun_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__OnWall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__OnWall (const MethodInfo* method);
// 0x181fc0830

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__OnWall(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ac2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__OnWall_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ac2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__OnWall_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__ChangeBlade
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ChangeBlade (const MethodInfo* method);
// 0x181fbc4b0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ChangeBlade(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ac3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ChangeBlade_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ac3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ChangeBlade_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__ChangeBladeAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ChangeBladeAir (const MethodInfo* method);
// 0x181fbc410

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ChangeBladeAir
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ac4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ChangeBladeAir_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ac4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ChangeBladeAir_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSHookForwardBoth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardBoth (const MethodInfo* method);
// 0x181fb9210

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardBoth
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ac5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardBoth
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ac5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardBoth
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSHookForwardL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardL (const MethodInfo* method);
// 0x181fb92b0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardL
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ac6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ac6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardL_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSHookForwardR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardR (const MethodInfo* method);
// 0x181fb9350

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardR
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ac7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ac7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardR_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootR (const MethodInfo* method);
// 0x181fb9ad0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootR(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ac8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootR_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ac8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootR_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootL (const MethodInfo* method);
// 0x181fb9990

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootL(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ac9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootL_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ac9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootL_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootBoth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootBoth (const MethodInfo* method);
// 0x181fb9850

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootBoth(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345aca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootBoth_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345aca = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootBoth_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootRAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootRAir (const MethodInfo* method);
// 0x181fb9a30

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootRAir(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345acb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootRAir_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345acb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootRAir_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootLAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootLAir (const MethodInfo* method);
// 0x181fb98f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootLAir(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345acc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootLAir_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345acc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootLAir_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootBothAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootBothAir (const MethodInfo* method);
// 0x181fb97b0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootBothAir
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345acd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootBothAir_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345acd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootBothAir_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSGunReloadBoth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSGunReloadBoth (const MethodInfo* method);
// 0x181fb8db0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSGunReloadBoth
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ace == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSGunReloadBoth_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ace = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSGunReloadBoth_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSGunReloadBothAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSGunReloadBothAir (const MethodInfo* method);
// 0x181fb8d10

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSGunReloadBothAir
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345acf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSGunReloadBothAir
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345acf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSGunReloadBothAir
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootR (const MethodInfo* method);
// 0x181fc2bd0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootR(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ad0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootR_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ad0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootR_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootL (const MethodInfo* method);
// 0x181fc2a90

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootL(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ad1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootL_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ad1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootL_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootRAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootRAir (const MethodInfo* method);
// 0x181fc2b30

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootRAir(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ad2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootRAir_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ad2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootRAir_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootLAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootLAir (const MethodInfo* method);
// 0x181fc29f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootLAir(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ad3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootLAir_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ad3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootLAir_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookLJust
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookLJust (const MethodInfo* method);
// 0x181fba250

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookLJust(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ad4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookLJust_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ad4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookLJust_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookRJust
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookRJust (const MethodInfo* method);
// 0x181fba390

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookRJust(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ad5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookRJust_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ad5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookRJust_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookL (const MethodInfo* method);
// 0x181fba2f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookL(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ad6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookL_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ad6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookL_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookR (const MethodInfo* method);
// 0x181fba430

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookR(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ad7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookR_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ad7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookR_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHook
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHook (const MethodInfo* method);
// 0x181fba4d0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHook(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ad8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHook_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ad8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHook_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirRelease
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirRelease (const MethodInfo* method);
// 0x181fba570

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirRelease(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ad9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirRelease_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ad9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirRelease_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirFall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirFall (const MethodInfo* method);
// 0x181fba1b0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirFall(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ada == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirFall_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ada = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirFall_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirRise
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirRise (const MethodInfo* method);
// 0x181fba610

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirRise(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345adb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirRise_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345adb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirRise_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2 (const MethodInfo* method);
// 0x181fba070

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345adc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2_g____getter_51
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345adc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2_g____getter_51
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Right (const MethodInfo* method);
// 0x181fb9fd0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Right(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345add == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Right_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345add = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Right_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2Left
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Left (const MethodInfo* method);
// 0x181fb9f30

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Left(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ade == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Left_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ade = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Left_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2Backward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Backward (const MethodInfo* method);
// 0x181fb9e90

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Backward(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345adf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Backward_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345adf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Backward_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookL1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookL1 (const MethodInfo* method);
// 0x181fba750

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookL1(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ae0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookL1_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ae0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookL1_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookL2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookL2 (const MethodInfo* method);
// 0x181fba7f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookL2(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ae1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookL2_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ae1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookL2_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookR1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookR1 (const MethodInfo* method);
// 0x181fba890

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookR1(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ae2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookR1_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ae2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookR1_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookR2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookR2 (const MethodInfo* method);
// 0x181fba930

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookR2(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ae3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookR2_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ae3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookR2_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1 (const MethodInfo* method);
// 0x181fba9d0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ae4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ae4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack2 (const MethodInfo* method);
// 0x181fbaa70

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack2(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ae5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack2_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ae5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack2_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack4 (const MethodInfo* method);
// 0x181fbab10

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack4(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ae6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack4_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ae6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack4_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialArmin
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialArmin (const MethodInfo* method);
// 0x181fc1f50

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialArmin(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ae7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialArmin_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ae7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialArmin_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMarco0
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMarco0 (const MethodInfo* method);
// 0x181fc21d0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMarco0(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ae8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMarco0_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ae8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMarco0_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMarco1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMarco1 (const MethodInfo* method);
// 0x181fc2270

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMarco1(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ae9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMarco1_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345ae9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMarco1_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialSasha
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialSasha (const MethodInfo* method);
// 0x181fc24f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialSasha(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345aea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialSasha_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345aea = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialSasha_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMikasa1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMikasa1 (const MethodInfo* method);
// 0x181fc2310

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMikasa1
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345aeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMikasa1_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345aeb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMikasa1_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMikasa2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMikasa2 (const MethodInfo* method);
// 0x181fc23b0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMikasa2
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345aec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMikasa2_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345aec = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMikasa2_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialLevi
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialLevi (const MethodInfo* method);
// 0x181fc2130

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialLevi(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345aed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialLevi_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345aed = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialLevi_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialPetra
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialPetra (const MethodInfo* method);
// 0x181fc2450

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialPetra(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345aee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialPetra_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345aee = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialPetra_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialJean
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialJean (const MethodInfo* method);
// 0x181fc2090

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialJean(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345aef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialJean_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345aef = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialJean_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialShifter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialShifter (const MethodInfo* method);
// 0x181fc2590

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialShifter
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345af0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialShifter_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345af0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialShifter_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteSalute
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteSalute (const MethodInfo* method);
// 0x181fbd3b0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteSalute(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345af1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteSalute_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345af1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteSalute_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteNo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteNo (const MethodInfo* method);
// 0x181fbd310

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteNo(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345af2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteNo_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345af2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteNo_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteYes
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteYes (const MethodInfo* method);
// 0x181fbd4f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteYes(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345af3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteYes_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345af3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteYes_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteWave
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteWave (const MethodInfo* method);
// 0x181fbd450

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteWave(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345af4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteWave_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345af4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteWave_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HoodPull
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HoodPull (const MethodInfo* method);
// 0x181fbe5d0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HoodPull(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345af5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HoodPull_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345af5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HoodPull_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HoodPullAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HoodPullAir (const MethodInfo* method);
// 0x181fbe530

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HoodPullAir(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345af6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HoodPullAir_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_184345af6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HoodPullAir_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fc44e0

void CustomLogic_CustomLogicHumanAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345af7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialMarco0");
    il2cpp_codegen_initialize_runtime_metadata(&"Run");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteWave");
    il2cpp_codegen_initialize_runtime_metadata(&"IdleTSF");
    il2cpp_codegen_initialize_runtime_metadata(&"AirRelease");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack1HookR1");
    il2cpp_codegen_initialize_runtime_metadata(&"HoodPullAir");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialPetra");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialMikasa1");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSShootLAir");
    il2cpp_codegen_initialize_runtime_metadata(&"RunTS");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialMarco1");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseDismount");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack1HookL1");
    il2cpp_codegen_initialize_runtime_metadata(&"IdleM");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialSasha");
    il2cpp_codegen_initialize_runtime_metadata(&"AirRise");
    il2cpp_codegen_initialize_runtime_metadata(&"ChangeBladeAir");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialMikasa2");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack4");
    il2cpp_codegen_initialize_runtime_metadata(&"AirHookRJust");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialArmin");
    il2cpp_codegen_initialize_runtime_metadata(&"TSShootR");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSHookForwardR");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseRun");
    il2cpp_codegen_initialize_runtime_metadata(&"IdleTSM");
    il2cpp_codegen_initialize_runtime_metadata(&"TSShootRAir");
    il2cpp_codegen_initialize_runtime_metadata(&"TSShootL");
    il2cpp_codegen_initialize_runtime_metadata(&"TSShootLAir");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSShootRAir");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteYes");
    il2cpp_codegen_initialize_runtime_metadata(&"Land");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack1HookR2");
    il2cpp_codegen_initialize_runtime_metadata(&"Air2Left");
    il2cpp_codegen_initialize_runtime_metadata(&"AirHookLJust");
    il2cpp_codegen_initialize_runtime_metadata(&"AirHook");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"HoodPull");
    il2cpp_codegen_initialize_runtime_metadata(&"Dash");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSShootBothAir");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseIdle");
    il2cpp_codegen_initialize_runtime_metadata(&"OnWall");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialLevi");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteSalute");
    il2cpp_codegen_initialize_runtime_metadata(&"IdleAHSSF");
    il2cpp_codegen_initialize_runtime_metadata(&"Air2Backward");
    il2cpp_codegen_initialize_runtime_metadata(&"Dodge");
    il2cpp_codegen_initialize_runtime_metadata(&"Grabbed");
    il2cpp_codegen_initialize_runtime_metadata(&"Air2");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialJean");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunReloadBoth");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack1");
    il2cpp_codegen_initialize_runtime_metadata(&"Refill");
    il2cpp_codegen_initialize_runtime_metadata(&"Slide");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSShootR");
    il2cpp_codegen_initialize_runtime_metadata(&"ChangeBlade");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialShifter");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSHookForwardL");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack1HookL2");
    il2cpp_codegen_initialize_runtime_metadata(&"IdleF");
    il2cpp_codegen_initialize_runtime_metadata(&"AirHookR");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSShootBoth");
    il2cpp_codegen_initialize_runtime_metadata(&"IdleAHSSM");
    il2cpp_codegen_initialize_runtime_metadata(&"AirFall");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSHookForwardBoth");
    il2cpp_codegen_initialize_runtime_metadata(&"WallRun");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteNo");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunReloadBothAir");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSShootL");
    il2cpp_codegen_initialize_runtime_metadata(&"AirHookL");
    il2cpp_codegen_initialize_runtime_metadata(&"ToRoof");
    il2cpp_codegen_initialize_runtime_metadata(&"RunBuffed");
    il2cpp_codegen_initialize_runtime_metadata(&"Air2Right");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseMount");
    Il2CppMethodInitialized_184345af7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseMount",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseDismount",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseIdle",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseRun",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IdleF",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IdleM",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IdleAHSSM",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IdleAHSSF",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IdleTSF",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IdleTSM",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jump",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Run",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Walk",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RunTS",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RunBuffed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dodge",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Land",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Slide",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grabbed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dash",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Refill",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToRoof",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WallRun",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OnWall",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ChangeBlade",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ChangeBladeAir",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSHookForwardBoth",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSHookForwardL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSHookForwardR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSShootR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSShootL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSShootBoth",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSShootRAir",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSShootLAir",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSShootBothAir",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSGunReloadBoth",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSGunReloadBothAir",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TSShootR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TSShootL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TSShootRAir",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TSShootLAir",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AirHookLJust",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AirHookRJust",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AirHookL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AirHookR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AirHook",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AirRelease",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AirFall",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AirRise",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Air2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Air2Right",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Air2Left",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Air2Backward",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack1HookL1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack1HookL2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack1HookR1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack1HookR2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack4",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialArmin",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialMarco0",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialMarco1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialSasha",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialMikasa1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialMikasa2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialLevi",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialPetra",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialJean",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialShifter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteSalute",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteNo",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteYes",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteWave",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HoodPull",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HoodPullAir",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->static_fields->MemberNames,__this
              );
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseMount>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseMount_g____getter_2_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb5980

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseMount_g____getter_2_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d08 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->HorseMount;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseDismount>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseDismount_g____getter_3_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb57c0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseDismount_g____getter_3_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d09 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->HorseDismount;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseIdle>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseIdle_g____getter_4_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb5810

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseIdle_g____getter_4_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d0a = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->HorseIdle;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseRun>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseRun_g____getter_5_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb59d0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseRun_g____getter_5_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d0b = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->HorseRun;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleF>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleF_g____getter_6_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb5cc0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleF_g____getter_6_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d0c = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->IdleF;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleM>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleM_g____getter_7_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb5d10

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleM_g____getter_7_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d0d = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->IdleM;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleAHSSM>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleAHSSM_g____getter_8_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb5c70

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleAHSSM_g____getter_8_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d0e = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->IdleAHSSM;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleAHSSF>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleAHSSF_g____getter_9_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb5c20

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleAHSSF_g____getter_9_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d0f = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->IdleAHSSF;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleTSF>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleTSF_g____getter_10_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb5d60

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleTSF_g____getter_10_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d10 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->IdleTSF;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleTSM>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleTSM_g____getter_11_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb5db0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleTSM_g____getter_11_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d11 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->IdleTSM;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_12_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb6190

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_12_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d12 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Jump;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_13_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb78a0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_13_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d13 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Run;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_14_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb8840

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_14_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d14 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Walk;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunTS>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__RunTS_g____getter_15_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb7850

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__RunTS_g____getter_15_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d15 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->RunTS;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunBuffed>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__RunBuffed_g____getter_16_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb7800

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__RunBuffed_g____getter_16_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d16 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->RunBuffed;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Dodge>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_17_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb45c0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_17_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d17 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Dodge;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_18_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb6510

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_18_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d18 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Land;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Slide>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_19_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb7af0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_19_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d19 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Slide;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Grabbed>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Grabbed_g____getter_20_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb4fc0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Grabbed_g____getter_20_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d1a = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Grabbed;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Dash>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Dash_g____getter_21_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb40f0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Dash_g____getter_21_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d1b = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Dash;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Refill>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_22_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb73e0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_22_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d1c = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Refill;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__ToRoof>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ToRoof_g____getter_23_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb8630

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ToRoof_g____getter_23_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d1d = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->ToRoof;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__WallRun>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__WallRun_g____getter_24_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb8aa0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__WallRun_g____getter_24_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d1e = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->WallRun;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__OnWall>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__OnWall_g____getter_25_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb6ae0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__OnWall_g____getter_25_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d1f = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->OnWall;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__ChangeBlade>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ChangeBlade_g____getter_26_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb3dd0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ChangeBlade_g____getter_26_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d20 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->ChangeBlade;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__ChangeBladeAir>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ChangeBladeAir_g____getter_27_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb3d70

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ChangeBladeAir_g____getter_27_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d21 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->ChangeBladeAir;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSHookForwardBoth>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardBoth_g____getter_28_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb1cf0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardBoth_g____getter_28_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d22 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSHookForwardBoth;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSHookForwardL>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardL_g____getter_29_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb1d50

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardL_g____getter_29_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d23 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSHookForwardL;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSHookForwardR>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardR_g____getter_30_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb1db0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardR_g____getter_30_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d24 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSHookForwardR;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootR>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootR_g____getter_31_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb2230

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootR_g____getter_31_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d25 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootR;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootL>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootL_g____getter_32_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb2170

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootL_g____getter_32_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d26 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootL;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootBoth>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootBoth_g____getter_33_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb20b0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootBoth_g____getter_33_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d27 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootBoth;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootRAir>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootRAir_g____getter_34_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb21d0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootRAir_g____getter_34_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d28 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootRAir;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootLAir>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootLAir_g____getter_35_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb2110

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootLAir_g____getter_35_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d29 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootLAir;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootBothAir>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootBothAir_g____getter_36_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb2050

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootBothAir_g____getter_36_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d2a = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootBothAir;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSGunReloadBoth>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSGunReloadBoth_g____getter_37_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb1a50

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSGunReloadBoth_g____getter_37_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d2b = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSGunReloadBoth;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSGunReloadBothAir>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSGunReloadBothAir_g____getter_38_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb19f0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSGunReloadBothAir_g____getter_38_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d2c = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSGunReloadBothAir;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootR>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootR_g____getter_39_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb8480

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootR_g____getter_39_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d2d = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->TSShootR;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootL>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootL_g____getter_40_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb83c0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootL_g____getter_40_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d2e = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->TSShootL;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootRAir>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootRAir_g____getter_41_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb8420

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootRAir_g____getter_41_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d2f = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->TSShootRAir;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootLAir>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootLAir_g____getter_42_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb8360

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootLAir_g____getter_42_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d30 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->TSShootLAir;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookLJust>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookLJust_g____getter_43_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb2710

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookLJust_g____getter_43_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d31 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AirHookLJust;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookRJust>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookRJust_g____getter_44_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb27d0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookRJust_g____getter_44_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d32 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AirHookRJust;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookL>g____getter|45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookL_g____getter_45_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb2770

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookL_g____getter_45_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d33 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AirHookL;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookR>g____getter|46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookR_g____getter_46_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb2830

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookR_g____getter_46_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d34 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AirHookR;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHook>g____getter|47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHook_g____getter_47_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb2890

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHook_g____getter_47_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d35 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AirHook;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirRelease>g____getter|48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirRelease_g____getter_48_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb28f0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirRelease_g____getter_48_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d36 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AirRelease;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirFall>g____getter|49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirFall_g____getter_49_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb26b0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirFall_g____getter_49_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d37 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AirFall;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirRise>g____getter|50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirRise_g____getter_50_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb2950

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirRise_g____getter_50_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d38 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AirRise;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2>g____getter|51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2_g____getter_51_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb25c0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2_g____getter_51_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d39 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Air2;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2Right>g____getter|52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Right_g____getter_52_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb2560

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Right_g____getter_52_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d3a = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Air2Right;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2Left>g____getter|53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Left_g____getter_53_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb2500

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Left_g____getter_53_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d3b = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Air2Left;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2Backward>g____getter|54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Backward_g____getter_54_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb24a0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Backward_g____getter_54_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d3c = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Air2Backward;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookL1>g____getter|55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookL1_g____getter_55_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb29e0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookL1_g____getter_55_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d3d = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Attack1HookL1;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookL2>g____getter|56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookL2_g____getter_56_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb2a40

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookL2_g____getter_56_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d3e = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Attack1HookL2;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookR1>g____getter|57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookR1_g____getter_57_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb2aa0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookR1_g____getter_57_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d3f = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Attack1HookR1;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookR2>g____getter|58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookR2_g____getter_58_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb2b00

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookR2_g____getter_58_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d40 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Attack1HookR2;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1>g____getter|59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1_g____getter_59_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb2b60

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1_g____getter_59_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d41 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Attack1;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack2>g____getter|60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack2_g____getter_60_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb2bc0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack2_g____getter_60_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d42 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Attack2;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack4>g____getter|61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack4_g____getter_61_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb2c20

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack4_g____getter_61_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d43 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Attack4;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialArmin>g____getter|62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialArmin_g____getter_62_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb7c40

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialArmin_g____getter_62_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d44 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialArmin;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMarco0>g____getter|63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMarco0_g____getter_63_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb7df0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMarco0_g____getter_63_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d45 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialMarco0;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMarco1>g____getter|64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMarco1_g____getter_64_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb7e50

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMarco1_g____getter_64_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d46 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialMarco1;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialSasha>g____getter|65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialSasha_g____getter_65_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb7fd0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialSasha_g____getter_65_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d47 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialSasha;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMikasa1>g____getter|66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMikasa1_g____getter_66_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb7eb0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMikasa1_g____getter_66_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d48 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialMikasa1;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMikasa2>g____getter|67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMikasa2_g____getter_67_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb7f10

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMikasa2_g____getter_67_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d49 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialMikasa2;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialLevi>g____getter|68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialLevi_g____getter_68_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb7d90

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialLevi_g____getter_68_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d4a = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialPetra>g____getter|69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialPetra_g____getter_69_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb7f70

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialPetra_g____getter_69_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d4b = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialPetra;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialJean>g____getter|70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialJean_g____getter_70_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb7d30

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialJean_g____getter_70_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d4c = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialJean;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialShifter>g____getter|71_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialShifter_g____getter_71_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb8030

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialShifter_g____getter_71_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d4d = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialShifter;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteSalute>g____getter|72_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteSalute_g____getter_72_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb4820

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteSalute_g____getter_72_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d4e = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->EmoteSalute;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteNo>g____getter|73_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNo_g____getter_73_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb47c0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNo_g____getter_73_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d4f = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->EmoteNo;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteYes>g____getter|74_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteYes_g____getter_74_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb48e0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteYes_g____getter_74_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d50 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->EmoteYes;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteWave>g____getter|75_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteWave_g____getter_75_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb4880

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteWave_g____getter_75_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d51 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->EmoteWave;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HoodPull>g____getter|76_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HoodPull_g____getter_76_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb53d0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HoodPull_g____getter_76_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d52 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->HoodPull;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HoodPullAir>g____getter|77_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HoodPullAir_g____getter_77_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x181fb5370

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HoodPullAir_g____getter_77_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345d53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345d53 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->HoodPullAir;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanAnimationEnum___ctor (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x181fc6720

void CustomLogic_CustomLogicHumanAnimationEnum___ctor
               (CustomLogic_CustomLogicHumanAnimationEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345a5b = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseMount
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HorseMount (const MethodInfo* method);
// 0x181fc7790

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HorseMount(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a5c = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->HorseMount;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseDismount
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HorseDismount (const MethodInfo* method);
// 0x181fc76f0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HorseDismount(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a5d = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->HorseDismount;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseIdle
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HorseIdle (const MethodInfo* method);
// 0x181fc7740

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HorseIdle(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a5e = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->HorseIdle;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseRun
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HorseRun (const MethodInfo* method);
// 0x181fc77e0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HorseRun(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a5f = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->HorseRun;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleF
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleF (const MethodInfo* method);
// 0x181fc78d0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleF(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a60 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->IdleF;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleM
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleM (const MethodInfo* method);
// 0x181fc7920

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleM(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a61 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->IdleM;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleAHSSM
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleAHSSM (const MethodInfo* method);
// 0x181fc7880

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleAHSSM(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a62 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->IdleAHSSM;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleAHSSF
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleAHSSF (const MethodInfo* method);
// 0x181fc7830

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleAHSSF(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a63 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->IdleAHSSF;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleTSF
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleTSF (const MethodInfo* method);
// 0x181fc7970

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleTSF(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a64 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->IdleTSF;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleTSM
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleTSM (const MethodInfo* method);
// 0x181fc79c0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleTSM(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a65 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->IdleTSM;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Jump (const MethodInfo* method);
// 0x181fc7a10

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Jump(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a66 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Jump;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Run
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Run (const MethodInfo* method);
// 0x181fc7c10

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Run(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a67 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Run;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Walk (const MethodInfo* method);
// 0x181fc8260

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Walk(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a68 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Walk;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_RunTS
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_RunTS (const MethodInfo* method);
// 0x181fc7bc0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_RunTS(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a69 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->RunTS;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_RunBuffed
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_RunBuffed (const MethodInfo* method);
// 0x181fc7b70

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_RunBuffed(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a6a = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->RunBuffed;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Dodge
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Dodge (const MethodInfo* method);
// 0x181fc7400

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Dodge(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a6b = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Dodge;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Land (const MethodInfo* method);
// 0x181fc7a60

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Land(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a6c = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Land;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Slide
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Slide (const MethodInfo* method);
// 0x181fc7c60

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Slide(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a6d = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Slide;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Grabbed
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Grabbed (const MethodInfo* method);
// 0x181fc75d0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Grabbed(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a6e = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Grabbed;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Dash
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Dash (const MethodInfo* method);
// 0x181fc73a0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Dash(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a6f = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Dash;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Refill
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Refill (const MethodInfo* method);
// 0x181fc7b10

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Refill(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a70 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Refill;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_ToRoof
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_ToRoof (const MethodInfo* method);
// 0x181fc8200

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_ToRoof(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a71 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->ToRoof;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_WallRun
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_WallRun (const MethodInfo* method);
// 0x181fc82c0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_WallRun(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a72 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->WallRun;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_OnWall
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_OnWall (const MethodInfo* method);
// 0x181fc7ab0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_OnWall(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a73 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->OnWall;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_ChangeBlade
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_ChangeBlade (const MethodInfo* method);
// 0x181fc7310

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_ChangeBlade(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a74 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->ChangeBlade;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_ChangeBladeAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_ChangeBladeAir (const MethodInfo* method);
// 0x181fc72b0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_ChangeBladeAir(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a75 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->ChangeBladeAir;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSHookForwardBoth
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardBoth (const MethodInfo* method);
// 0x181fc6830

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardBoth(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a76 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->AHSSHookForwardBoth;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSHookForwardL
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardL (const MethodInfo* method);
// 0x181fc6890

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a77 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->AHSSHookForwardL;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSHookForwardR
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardR (const MethodInfo* method);
// 0x181fc68f0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a78 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->AHSSHookForwardR;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootR
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootR (const MethodInfo* method);
// 0x181fc6b30

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a79 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootR;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootL
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootL (const MethodInfo* method);
// 0x181fc6a70

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a7a = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootL;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootBoth
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootBoth (const MethodInfo* method);
// 0x181fc69b0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootBoth(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a7b = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootBoth;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootRAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootRAir (const MethodInfo* method);
// 0x181fc6ad0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootRAir(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a7c = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootRAir;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootLAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootLAir (const MethodInfo* method);
// 0x181fc6a10

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootLAir(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a7d = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootLAir;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootBothAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootBothAir (const MethodInfo* method);
// 0x181fc6950

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootBothAir(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a7e = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootBothAir;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSGunReloadBoth
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSGunReloadBoth (const MethodInfo* method);
// 0x181fc67d0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSGunReloadBoth(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a7f = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->AHSSGunReloadBoth;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSGunReloadBothAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSGunReloadBothAir (const MethodInfo* method);
// 0x181fc6770

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSGunReloadBothAir(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a80 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->AHSSGunReloadBothAir;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootR
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootR (const MethodInfo* method);
// 0x181fc81a0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a81 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->TSShootR;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootL
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootL (const MethodInfo* method);
// 0x181fc80e0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a82 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->TSShootL;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootRAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootRAir (const MethodInfo* method);
// 0x181fc8140

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootRAir(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a83 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->TSShootRAir;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootLAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootLAir (const MethodInfo* method);
// 0x181fc8080

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootLAir(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a84 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->TSShootLAir;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookLJust
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookLJust (const MethodInfo* method);
// 0x181fc6d70

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookLJust(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a85 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->AirHookLJust;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookRJust
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookRJust (const MethodInfo* method);
// 0x181fc6e30

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookRJust(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a86 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->AirHookRJust;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookL
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookL (const MethodInfo* method);
// 0x181fc6dd0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a87 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->AirHookL;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookR
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookR (const MethodInfo* method);
// 0x181fc6e90

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a88 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->AirHookR;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHook
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHook (const MethodInfo* method);
// 0x181fc6ef0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHook(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a89 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->AirHook;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirRelease
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirRelease (const MethodInfo* method);
// 0x181fc6f50

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirRelease(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a8a = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->AirRelease;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirFall
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirFall (const MethodInfo* method);
// 0x181fc6d10

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirFall(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a8b = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->AirFall;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirRise
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirRise (const MethodInfo* method);
// 0x181fc6fb0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirRise(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a8c = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->AirRise;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Air2 (const MethodInfo* method);
// 0x181fc6cb0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Air2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a8d = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Air2;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2Right
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Right (const MethodInfo* method);
// 0x181fc6c50

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Right(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a8e = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Air2Right;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2Left
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Left (const MethodInfo* method);
// 0x181fc6bf0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Left(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a8f = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Air2Left;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2Backward
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Backward (const MethodInfo* method);
// 0x181fc6b90

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Backward(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a90 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Air2Backward;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookL1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookL1 (const MethodInfo* method);
// 0x181fc7010

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookL1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a91 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Attack1HookL1;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookL2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookL2 (const MethodInfo* method);
// 0x181fc7070

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookL2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a92 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Attack1HookL2;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookR1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookR1 (const MethodInfo* method);
// 0x181fc70d0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookR1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a93 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Attack1HookR1;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookR2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookR2 (const MethodInfo* method);
// 0x181fc7130

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookR2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a94 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Attack1HookR2;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1 (const MethodInfo* method);
// 0x181fc7190

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a95 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Attack1;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack2 (const MethodInfo* method);
// 0x181fc71f0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a96 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Attack2;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack4 (const MethodInfo* method);
// 0x181fc7250

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack4(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a97 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->Attack4;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialArmin
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialArmin (const MethodInfo* method);
// 0x181fc7cc0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialArmin(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a98 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->SpecialArmin;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMarco0
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMarco0 (const MethodInfo* method);
// 0x181fc7de0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMarco0(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a99 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->SpecialMarco0;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMarco1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMarco1 (const MethodInfo* method);
// 0x181fc7e40

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMarco1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a9a = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->SpecialMarco1;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialSasha
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialSasha (const MethodInfo* method);
// 0x181fc7fc0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialSasha(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a9b = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->SpecialSasha;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMikasa1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMikasa1 (const MethodInfo* method);
// 0x181fc7ea0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMikasa1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a9c = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->SpecialMikasa1;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMikasa2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMikasa2 (const MethodInfo* method);
// 0x181fc7f00

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMikasa2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a9d = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->SpecialMikasa2;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialLevi
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialLevi (const MethodInfo* method);
// 0x181fc7d80

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialLevi(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a9e = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialPetra
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialPetra (const MethodInfo* method);
// 0x181fc7f60

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialPetra(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345a9f = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->SpecialPetra;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialJean
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialJean (const MethodInfo* method);
// 0x181fc7d20

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialJean(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345aa0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345aa0 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->SpecialJean;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialShifter
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialShifter (const MethodInfo* method);
// 0x181fc8020

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialShifter(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345aa1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345aa1 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->SpecialShifter;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteSalute
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteSalute (const MethodInfo* method);
// 0x181fc74b0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteSalute(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345aa2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345aa2 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->EmoteSalute;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteNo
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteNo (const MethodInfo* method);
// 0x181fc7450

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteNo(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345aa3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345aa3 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->EmoteNo;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteYes
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteYes (const MethodInfo* method);
// 0x181fc7570

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteYes(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345aa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345aa4 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->EmoteYes;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteWave
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteWave (const MethodInfo* method);
// 0x181fc7510

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteWave(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345aa5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345aa5 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->EmoteWave;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HoodPull
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HoodPull (const MethodInfo* method);
// 0x181fc7690

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HoodPull(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345aa6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345aa6 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->HoodPull;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HoodPullAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HoodPullAir (const MethodInfo* method);
// 0x181fc7630

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HoodPullAir(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345aa7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_184345aa7 = '\x01';
  }
  if ((TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
  }
  return TypeInfo_Characters_HumanAnimations->static_fields->HoodPullAir;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_ClassName (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x181fc7370

System_String_o *
CustomLogic_CustomLogicHumanAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345aa8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"HumanAnimationEnum");
    Il2CppMethodInitialized_184345aa8 = '\x01';
  }
  return "HumanAnimationEnum";
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHumanAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicHumanAnimationEnum__get_IsAbstract(CustomLogic_CustomLogicHumanAnimationEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHumanAnimationEnum__get_IsStatic (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicHumanAnimationEnum__get_IsStatic(CustomLogic_CustomLogicHumanAnimationEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHumanAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicHumanAnimationEnum__get_InheritBaseMembers(CustomLogic_CustomLogicHumanAnimationEnum_o* __this, MethodInfo* method)

{
  return true;
}


