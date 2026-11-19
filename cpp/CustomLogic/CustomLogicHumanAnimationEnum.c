// Type: CustomLogic.CustomLogicHumanAnimationEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHumanAnimationEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicHumanAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHumanAnimationEnum_o* CustomLogic_CustomLogicHumanAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a694d0

CustomLogic_CustomLogicHumanAnimationEnum_o *
CustomLogic_CustomLogicHumanAnimationEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_0754642f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum);
    Il2CppMethodInitialized_0754642f = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHumanAnimationEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum);
  if (Il2CppMethodInitialized_075463e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075463e1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicHumanAnimationEnum_o *)__this;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a695f0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicHumanAnimationEnum_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546430 == '\0') {
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
    Il2CppMethodInitialized_07546430 = '\x01';
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
                pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
                if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
                }
                pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Right
                                   ((MethodInfo *)pCVar5);
                return (CustomLogic_ICLMemberBinding_o *)pCVar3;
              }
            }
            else if (uVar2 == 0x45b898b) {
              bVar1 = System_String__op_Equality(name,"Attack4",(MethodInfo *)0x0);
              if (bVar1) {
                pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
                if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
                }
                pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack4
                                   ((MethodInfo *)pCVar5);
                return (CustomLogic_ICLMemberBinding_o *)pCVar3;
              }
            }
          }
          else if (uVar2 == 0x520dc57) {
            bVar1 = System_String__op_Equality(name,"TSShootR",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootR
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x75b8e44) {
            bVar1 = System_String__op_Equality(name,"Attack1",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 < 0xb20e5ca) {
          if (uVar2 == 0xa5b92fd) {
            bVar1 = System_String__op_Equality(name,"Attack2",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack2
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0xb20e5c9) {
            bVar1 = System_String__op_Equality(name,"TSShootL",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootL
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0xc43456b) {
          bVar1 = System_String__op_Equality(name,"RunTS",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__RunTS
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0xcb32b76) {
          bVar1 = System_String__op_Equality(name,"SpecialMarco0",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMarco0
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0xdb32d09) {
          bVar1 = System_String__op_Equality(name,"SpecialMarco1",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMarco1
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x1eea5c97) {
        if (uVar2 < 0x11ff6d0c) {
          if (uVar2 == 0xe1ef32d) {
            bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Jump
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x11ff6d0b) {
            bVar1 = System_String__op_Equality(name,"AHSSShootRAir",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootRAir
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x18ea5324) {
          bVar1 = System_String__op_Equality(name,"AirHookL",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookL
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1ddf2a11) {
          bVar1 = System_String__op_Equality(name,"AHSSShootR",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootR
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1eea5c96) {
          bVar1 = System_String__op_Equality(name,"AirHookR",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookR
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x27df39d0) {
        if (uVar2 == 0x22ccd730) {
          bVar1 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Walk
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x27df39cf) {
          bVar1 = System_String__op_Equality(name,"AHSSShootL",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootL
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x2ea8c1d5) {
        bVar1 = System_String__op_Equality(name,"SpecialArmin",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialArmin
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x324d8372) {
        bVar1 = System_String__op_Equality(name,"EmoteWave",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteWave
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x3c73ce12) {
        bVar1 = System_String__op_Equality(name,"AHSSShootBothAir",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootBothAir
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x502d6444) {
      if (uVar2 < 0x43ea2092) {
        if (uVar2 < 0x40ea1bd9) {
          if (uVar2 == 0x3d57045f) {
            bVar1 = System_String__op_Equality(name,"Air2",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x40ea1bd8) {
            bVar1 = System_String__op_Equality(name,"SpecialMikasa2",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMikasa2
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x42bf6b8e) {
          bVar1 = System_String__op_Equality(name,"AHSSGunReloadBothAir",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSGunReloadBothAir
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x43ea2091) {
          bVar1 = System_String__op_Equality(name,"SpecialMikasa1",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMikasa1
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x48d20264) {
        if (uVar2 == 0x47ae9c66) {
          bVar1 = System_String__op_Equality(name,"EmoteYes",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteYes
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x48d20263) {
          bVar1 = System_String__op_Equality(name,"ChangeBladeAir",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ChangeBladeAir
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x4928501c) {
        bVar1 = System_String__op_Equality(name,"AirHookRJust",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookRJust
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x4a4b98a8) {
        bVar1 = System_String__op_Equality(name,"EmoteNo",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteNo
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x502d6443) {
        bVar1 = System_String__op_Equality(name,"TSShootLAir",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootLAir
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x5e0c8deb) {
      if (uVar2 < 0x5a18e72b) {
        if (uVar2 == 0x569fee3e) {
          bVar1 = System_String__op_Equality(name,"SpecialSasha",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialSasha
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x5a18e72a) {
          bVar1 = System_String__op_Equality(name,"ToRoof",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ToRoof
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x5a234b86) {
        bVar1 = System_String__op_Equality(name,"Grabbed",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Grabbed
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x5a8567fe) {
        bVar1 = System_String__op_Equality(name,"RunBuffed",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__RunBuffed
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x5e0c8dea) {
        bVar1 = System_String__op_Equality(name,"AHSSGunReloadBoth",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSGunReloadBoth
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x68597616) {
      if (uVar2 == 0x6153e692) {
        bVar1 = System_String__op_Equality(name,"AirRise",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirRise
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x68597615) {
        bVar1 = System_String__op_Equality(name,"Dash",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Dash
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x6b8be0a4) {
      bVar1 = System_String__op_Equality(name,"Attack1HookL1",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookL1
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x6c198db1) {
      bVar1 = System_String__op_Equality(name,"Refill",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Refill
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x6e8be55d) {
      bVar1 = System_String__op_Equality(name,"Attack1HookL2",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookL2
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xade67049) {
    if (uVar2 < 0x95a8311d) {
      if (uVar2 < 0x82a65fa0) {
        if (uVar2 < 0x76a54823) {
          if (uVar2 == 0x71e5e680) {
            bVar1 = System_String__op_Equality(name,"AirHook",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHook
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x76a54822) {
            bVar1 = System_String__op_Equality(name,"Air2Backward",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Backward
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x8149ffda) {
          bVar1 = System_String__op_Equality(name,"SpecialJean",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialJean
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x82a65f9f) {
          bVar1 = System_String__op_Equality(name,"HorseRun",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseRun
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x897c9be9) {
        if (uVar2 == 0x89394d92) {
          bVar1 = System_String__op_Equality(name,"SpecialLevi",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialLevi
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x897c9be8) {
          bVar1 = System_String__op_Equality(name,"HoodPullAir",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HoodPullAir
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x8bdddf4c) {
        bVar1 = System_String__op_Equality(name,"IdleTSF",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleTSF
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x8d57e66a) {
        bVar1 = System_String__op_Equality(name,"Run",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Run
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x95a8311c) {
        bVar1 = System_String__op_Equality(name,"HoodPull",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HoodPull
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0xa7c39be9) {
      if (uVar2 < 0x9be653f3) {
        if (uVar2 == 0x96ddf09d) {
          bVar1 = System_String__op_Equality(name,"IdleTSM",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleTSM
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x9be653f2) {
          bVar1 = System_String__op_Equality(name,"AHSSHookForwardL",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardL
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x9dce8fa9) {
        bVar1 = System_String__op_Equality(name,"ChangeBlade",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ChangeBlade
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x9fc3b6af) {
        bVar1 = System_String__op_Equality(name,"IdleF",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleF
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xa7c39be8) {
        bVar1 = System_String__op_Equality(name,"SpecialPetra",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialPetra
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0xa8c3c4db) {
      if (uVar2 == 0xa80c6d01) {
        bVar1 = System_String__op_Equality(name,"AHSSHookForwardBoth",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardBoth
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xa8c3c4da) {
        bVar1 = System_String__op_Equality(name,"IdleM",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleM
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xa97fed56) {
      bVar1 = System_String__op_Equality(name,"AirFall",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirFall
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xa9da7dea) {
      bVar1 = System_String__op_Equality(name,"AirHookLJust",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookLJust
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xade67048) {
      bVar1 = System_String__op_Equality(name,"AHSSHookForwardR",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardR
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xd79107d7) {
    if (uVar2 < 0xc35fd7d4) {
      if (uVar2 < 0xbe4185ab) {
        if (uVar2 == 0xb541777f) {
          bVar1 = System_String__op_Equality(name,"IdleAHSSM",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleAHSSM
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0xbe4185aa) {
          bVar1 = System_String__op_Equality(name,"IdleAHSSF",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleAHSSF
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0xc0f4f364) {
        bVar1 = System_String__op_Equality(name,"OnWall",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__OnWall
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xc35fd7d3) {
        bVar1 = System_String__op_Equality(name,"EmoteSalute",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteSalute
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0xc52547e8) {
      if (uVar2 == 0xc3e1ce03) {
        bVar1 = System_String__op_Equality(name,"SpecialShifter",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialShifter
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xc52547e7) {
        bVar1 = System_String__op_Equality(name,"HorseMount",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseMount
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xce6417cc) {
      bVar1 = System_String__op_Equality(name,"AirRelease",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirRelease
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xd6910643) {
      bVar1 = System_String__op_Equality(name,"Attack1HookR2",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookR2
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xd79107d6) {
      bVar1 = System_String__op_Equality(name,"Attack1HookR1",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookR1
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xec4867bb) {
    if (uVar2 < 0xe54a3917) {
      if (uVar2 == 0xdaf9a716) {
        bVar1 = System_String__op_Equality(name,"AHSSShootBoth",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootBoth
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xe54a3916) {
        bVar1 = System_String__op_Equality(name,"Air2Left",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Left
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xe6146cb1) {
      bVar1 = System_String__op_Equality(name,"AHSSShootLAir",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootLAir
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe9e243fb) {
      bVar1 = System_String__op_Equality(name,"HorseDismount",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseDismount
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xec4867ba) {
      bVar1 = System_String__op_Equality(name,"WallRun",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__WallRun
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xf2adf85a) {
    if (uVar2 == 0xee1682bc) {
      bVar1 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Land
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xf2adf859) {
      bVar1 = System_String__op_Equality(name,"TSShootRAir",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootRAir
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xf526d670) {
    bVar1 = System_String__op_Equality(name,"Dodge",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Dodge
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xfc5e3070) {
    bVar1 = System_String__op_Equality(name,"HorseIdle",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseIdle
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xffc7c086) {
    bVar1 = System_String__op_Equality(name,"Slide",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Slide
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHumanAnimationEnum not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseMount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseMount (const MethodInfo* method);
// 0x5a6b1b0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseMount(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546431 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseMount_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546431 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseMount_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseDismount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseDismount (const MethodInfo* method);
// 0x5a6b250

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseDismount(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546432 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseDismount_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546432 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseDismount_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseIdle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseIdle (const MethodInfo* method);
// 0x5a6b2f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseIdle(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546433 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseIdle_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546433 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseIdle_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HorseRun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseRun (const MethodInfo* method);
// 0x5a6b390

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HorseRun(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546434 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseRun_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546434 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HorseRun_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleF (const MethodInfo* method);
// 0x5a6b430

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleF(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546435 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleF_g____getter_6
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546435 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleF_g____getter_6
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleM
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleM (const MethodInfo* method);
// 0x5a6b4d0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleM(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546436 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleM_g____getter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546436 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleM_g____getter_7
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleAHSSM
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleAHSSM (const MethodInfo* method);
// 0x5a6b570

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleAHSSM(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546437 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleAHSSM_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546437 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleAHSSM_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleAHSSF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleAHSSF (const MethodInfo* method);
// 0x5a6b610

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleAHSSF(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546438 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleAHSSF_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546438 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleAHSSF_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleTSF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleTSF (const MethodInfo* method);
// 0x5a6b6b0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleTSF(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546439 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleTSF_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546439 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleTSF_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__IdleTSM
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleTSM (const MethodInfo* method);
// 0x5a6b750

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__IdleTSM(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754643a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleTSM_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754643a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__IdleTSM_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x5a6b7f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754643b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_12
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754643b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_12
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Run
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Run (const MethodInfo* method);
// 0x5a6b890

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Run(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754643c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754643c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_13_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x5a6b930

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754643d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_14
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754643d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_14
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__RunTS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__RunTS (const MethodInfo* method);
// 0x5a6b9d0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__RunTS(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754643e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__RunTS_g____getter_15
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754643e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__RunTS_g____getter_15
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__RunBuffed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__RunBuffed (const MethodInfo* method);
// 0x5a6ba70

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__RunBuffed(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754643f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__RunBuffed_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754643f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__RunBuffed_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Dodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Dodge (const MethodInfo* method);
// 0x5a6bb10

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Dodge(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546440 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_17
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546440 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_17
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x5a6bbb0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546441 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_18
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546441 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_18
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Slide
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Slide (const MethodInfo* method);
// 0x5a6bc50

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Slide(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546442 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Slide_g____getter_19
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546442 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Slide_g____getter_19
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Grabbed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Grabbed (const MethodInfo* method);
// 0x5a6bcf0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Grabbed(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546443 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Grabbed_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546443 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Grabbed_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Dash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Dash (const MethodInfo* method);
// 0x5a6bd90

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Dash(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546444 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Dash_g____getter_21
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546444 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Dash_g____getter_21
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Refill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Refill (const MethodInfo* method);
// 0x5a6be30

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Refill(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546445 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Refill_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546445 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Refill_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__ToRoof
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ToRoof (const MethodInfo* method);
// 0x5a6bed0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ToRoof(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546446 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ToRoof_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546446 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ToRoof_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__WallRun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__WallRun (const MethodInfo* method);
// 0x5a6bf70

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__WallRun(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546447 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__WallRun_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546447 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__WallRun_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__OnWall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__OnWall (const MethodInfo* method);
// 0x5a6c010

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__OnWall(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546448 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__OnWall_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546448 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__OnWall_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__ChangeBlade
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ChangeBlade (const MethodInfo* method);
// 0x5a6c0b0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ChangeBlade(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546449 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ChangeBlade_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546449 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ChangeBlade_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__ChangeBladeAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ChangeBladeAir (const MethodInfo* method);
// 0x5a6c150

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__ChangeBladeAir
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754644a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ChangeBladeAir_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754644a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__ChangeBladeAir_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSHookForwardBoth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardBoth (const MethodInfo* method);
// 0x5a6c1f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardBoth
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754644b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardBoth
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754644b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardBoth
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSHookForwardL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardL (const MethodInfo* method);
// 0x5a6c290

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardL
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754644c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardL_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754644c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardL_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSHookForwardR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardR (const MethodInfo* method);
// 0x5a6c330

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSHookForwardR
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754644d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardR_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754644d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSHookForwardR_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootR (const MethodInfo* method);
// 0x5a6c3d0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootR(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754644e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootR_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754644e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootR_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootL (const MethodInfo* method);
// 0x5a6c470

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootL(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754644f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootL_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754644f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootL_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootBoth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootBoth (const MethodInfo* method);
// 0x5a6c510

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootBoth(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546450 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootBoth_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546450 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootBoth_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootRAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootRAir (const MethodInfo* method);
// 0x5a6c5b0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootRAir(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546451 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootRAir_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546451 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootRAir_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootLAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootLAir (const MethodInfo* method);
// 0x5a6c650

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootLAir(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546452 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootLAir_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546452 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootLAir_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSShootBothAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootBothAir (const MethodInfo* method);
// 0x5a6c6f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSShootBothAir
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546453 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootBothAir_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546453 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSShootBothAir_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSGunReloadBoth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSGunReloadBoth (const MethodInfo* method);
// 0x5a6c790

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSGunReloadBoth
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546454 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSGunReloadBoth_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546454 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSGunReloadBoth_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AHSSGunReloadBothAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSGunReloadBothAir (const MethodInfo* method);
// 0x5a6c830

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AHSSGunReloadBothAir
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546455 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSGunReloadBothAir
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546455 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AHSSGunReloadBothAir
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootR (const MethodInfo* method);
// 0x5a6c8d0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootR(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546456 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootR_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546456 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootR_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootL (const MethodInfo* method);
// 0x5a6c970

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootL(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546457 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootL_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546457 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootL_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootRAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootRAir (const MethodInfo* method);
// 0x5a6ca10

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootRAir(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546458 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootRAir_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546458 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootRAir_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__TSShootLAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootLAir (const MethodInfo* method);
// 0x5a6cab0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__TSShootLAir(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546459 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootLAir_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546459 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__TSShootLAir_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookLJust
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookLJust (const MethodInfo* method);
// 0x5a6cb50

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookLJust(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754645a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookLJust_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754645a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookLJust_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookRJust
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookRJust (const MethodInfo* method);
// 0x5a6cbf0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookRJust(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754645b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookRJust_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754645b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookRJust_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookL (const MethodInfo* method);
// 0x5a6cc90

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookL(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754645c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookL_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754645c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookL_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHookR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookR (const MethodInfo* method);
// 0x5a6cd30

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHookR(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754645d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookR_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754645d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHookR_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirHook
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHook (const MethodInfo* method);
// 0x5a6cdd0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirHook(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754645e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHook_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754645e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirHook_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirRelease
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirRelease (const MethodInfo* method);
// 0x5a6ce70

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirRelease(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754645f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirRelease_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754645f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirRelease_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirFall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirFall (const MethodInfo* method);
// 0x5a6cf10

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirFall(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546460 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirFall_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546460 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirFall_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__AirRise
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirRise (const MethodInfo* method);
// 0x5a6cfb0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__AirRise(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546461 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirRise_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546461 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__AirRise_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2 (const MethodInfo* method);
// 0x5a6d050

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546462 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2_g____getter_51
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546462 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2_g____getter_51
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Right (const MethodInfo* method);
// 0x5a6d0f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Right(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546463 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Right_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546463 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Right_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2Left
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Left (const MethodInfo* method);
// 0x5a6d190

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Left(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546464 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Left_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546464 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Left_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Air2Backward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Backward (const MethodInfo* method);
// 0x5a6d230

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Air2Backward(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546465 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Backward_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546465 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Air2Backward_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookL1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookL1 (const MethodInfo* method);
// 0x5a6d2d0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookL1(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546466 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookL1_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546466 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookL1_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookL2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookL2 (const MethodInfo* method);
// 0x5a6d370

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookL2(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546467 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookL2_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546467 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookL2_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookR1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookR1 (const MethodInfo* method);
// 0x5a6d410

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookR1(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546468 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookR1_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546468 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookR1_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1HookR2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookR2 (const MethodInfo* method);
// 0x5a6d4b0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1HookR2(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546469 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookR2_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546469 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1HookR2_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1 (const MethodInfo* method);
// 0x5a6d550

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack1(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754646a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754646a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack1_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack2 (const MethodInfo* method);
// 0x5a6d5f0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack2(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754646b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack2_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754646b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack2_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__Attack4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack4 (const MethodInfo* method);
// 0x5a6d690

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__Attack4(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754646c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack4_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754646c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__Attack4_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialArmin
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialArmin (const MethodInfo* method);
// 0x5a6d730

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialArmin(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754646d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialArmin_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754646d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialArmin_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMarco0
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMarco0 (const MethodInfo* method);
// 0x5a6d7d0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMarco0(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754646e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMarco0_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754646e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMarco0_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMarco1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMarco1 (const MethodInfo* method);
// 0x5a6d870

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMarco1(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754646f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMarco1_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754646f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMarco1_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialSasha
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialSasha (const MethodInfo* method);
// 0x5a6d910

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialSasha(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546470 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialSasha_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546470 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialSasha_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMikasa1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMikasa1 (const MethodInfo* method);
// 0x5a6d9b0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMikasa1
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546471 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMikasa1_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546471 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMikasa1_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialMikasa2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMikasa2 (const MethodInfo* method);
// 0x5a6da50

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialMikasa2
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546472 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMikasa2_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546472 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialMikasa2_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialLevi
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialLevi (const MethodInfo* method);
// 0x5a6daf0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialLevi(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546473 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialLevi_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546473 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialLevi_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialPetra
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialPetra (const MethodInfo* method);
// 0x5a6db90

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialPetra(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546474 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialPetra_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546474 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialPetra_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialJean
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialJean (const MethodInfo* method);
// 0x5a6dc30

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialJean(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546475 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialJean_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546475 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialJean_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__SpecialShifter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialShifter (const MethodInfo* method);
// 0x5a6dcd0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__SpecialShifter
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546476 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialShifter_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546476 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__SpecialShifter_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteSalute
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteSalute (const MethodInfo* method);
// 0x5a6dd70

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteSalute(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546477 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteSalute_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546477 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteSalute_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteNo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteNo (const MethodInfo* method);
// 0x5a6de10

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteNo(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546478 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteNo_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546478 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteNo_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteYes
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteYes (const MethodInfo* method);
// 0x5a6deb0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteYes(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546479 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteYes_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_07546479 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteYes_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteWave
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteWave (const MethodInfo* method);
// 0x5a6df50

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__EmoteWave(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754647a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteWave_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754647a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__EmoteWave_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HoodPull
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HoodPull (const MethodInfo* method);
// 0x5a6dff0

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HoodPull(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754647b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HoodPull_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754647b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HoodPull_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$__CreatePropertyBinding__HoodPullAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o* CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HoodPullAir (const MethodInfo* method);
// 0x5a6e090

CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings____CreatePropertyBinding__HoodPullAir(MethodInfo *method)

{
  System_Func_CustomLogicHumanAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754647c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HoodPullAir_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object);
    Il2CppMethodInitialized_0754647c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanAnimationEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings___CreatePropertyBinding__HoodPullAir_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanAnimationEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a6e130

void CustomLogic_CustomLogicHumanAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_0754647d == '\0') {
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
    Il2CppMethodInitialized_0754647d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseMount",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseDismount",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseIdle",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseRun",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IdleF",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IdleM",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IdleAHSSM",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IdleAHSSF",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IdleTSF",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IdleTSM",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jump",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Run",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Walk",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RunTS",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RunBuffed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dodge",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Land",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Slide",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grabbed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dash",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Refill",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToRoof",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WallRun",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OnWall",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ChangeBlade",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ChangeBladeAir",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSHookForwardBoth",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSHookForwardL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSHookForwardR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSShootR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSShootL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSShootBoth",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSShootRAir",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSShootLAir",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSShootBothAir",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSGunReloadBoth",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSGunReloadBothAir",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TSShootR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TSShootL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TSShootRAir",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TSShootLAir",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AirHookLJust",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AirHookRJust",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AirHookL",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AirHookR",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AirHook",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AirRelease",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AirFall",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AirRise",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Air2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Air2Right",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Air2Left",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Air2Backward",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack1HookL1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack1HookL2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack1HookR1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack1HookR2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack4",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialArmin",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialMarco0",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialMarco1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialSasha",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialMikasa1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialMikasa2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialLevi",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialPetra",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialJean",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialShifter",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteSalute",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteNo",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteYes",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteWave",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HoodPull",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HoodPullAir",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHumanAnimationEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseMount>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseMount_g____getter_2_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6ebb0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseMount_g____getter_2_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465b0 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->HorseMount;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseDismount>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseDismount_g____getter_3_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6ec20

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseDismount_g____getter_3_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465b1 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->HorseDismount;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseIdle>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseIdle_g____getter_4_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6ec90

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseIdle_g____getter_4_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465b2 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->HorseIdle;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x10);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HorseRun>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseRun_g____getter_5_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6ed00

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HorseRun_g____getter_5_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465b3 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->HorseRun;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x18);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleF>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleF_g____getter_6_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6ed70

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleF_g____getter_6_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465b4 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->IdleF;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x20);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleM>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleM_g____getter_7_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6ede0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleM_g____getter_7_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465b5 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->IdleM;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x28);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleAHSSM>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleAHSSM_g____getter_8_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6ee50

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleAHSSM_g____getter_8_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465b6 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->IdleAHSSM;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x30);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleAHSSF>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleAHSSF_g____getter_9_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6eec0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleAHSSF_g____getter_9_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465b7 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->IdleAHSSF;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x38);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleTSF>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleTSF_g____getter_10_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6ef30

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleTSF_g____getter_10_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465b8 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->IdleTSF;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x40);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__IdleTSM>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleTSM_g____getter_11_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6efa0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__IdleTSM_g____getter_11_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465b9 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->IdleTSM;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x48);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_12_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f010

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_12_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465ba = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Jump;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x50);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_13_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f080

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_13_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465bb = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Run;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x58);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_14_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f0f0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_14_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465bc = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Walk;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x248)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunTS>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__RunTS_g____getter_15_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f160

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__RunTS_g____getter_15_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465bd = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->RunTS;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x60);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__RunBuffed>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__RunBuffed_g____getter_16_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f1d0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__RunBuffed_g____getter_16_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465be = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->RunBuffed;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x68);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Dodge>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_17_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f240

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_17_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465bf = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Dodge;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x70);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_18_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f2b0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_18_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465c0 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Land;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x78);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Slide>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_19_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f320

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_19_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465c1 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Slide;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x80);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Grabbed>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Grabbed_g____getter_20_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f390

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Grabbed_g____getter_20_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465c2 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Grabbed;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x88);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Dash>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Dash_g____getter_21_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f400

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Dash_g____getter_21_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465c3 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Dash;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x90);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Refill>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_22_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f470

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_22_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465c4 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Refill;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x98);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__ToRoof>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ToRoof_g____getter_23_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f4e0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ToRoof_g____getter_23_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465c5 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->ToRoof;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xa0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__WallRun>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__WallRun_g____getter_24_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f550

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__WallRun_g____getter_24_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465c6 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->WallRun;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xa8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__OnWall>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__OnWall_g____getter_25_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f5c0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__OnWall_g____getter_25_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465c7 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->OnWall;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xb0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__ChangeBlade>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ChangeBlade_g____getter_26_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f630

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ChangeBlade_g____getter_26_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465c8 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->ChangeBlade;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xb8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__ChangeBladeAir>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ChangeBladeAir_g____getter_27_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f6a0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__ChangeBladeAir_g____getter_27_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465c9 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->ChangeBladeAir;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xc0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSHookForwardBoth>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardBoth_g____getter_28_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f710

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardBoth_g____getter_28_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465ca = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSHookForwardBoth;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 200);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSHookForwardL>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardL_g____getter_29_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f780

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardL_g____getter_29_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465cb = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSHookForwardL;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xd0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSHookForwardR>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardR_g____getter_30_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f7f0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSHookForwardR_g____getter_30_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465cc = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSHookForwardR;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xd8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootR>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootR_g____getter_31_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f860

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootR_g____getter_31_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465cd = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootR;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xe0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootL>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootL_g____getter_32_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f8d0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootL_g____getter_32_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465ce = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootL;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xe8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootBoth>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootBoth_g____getter_33_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f940

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootBoth_g____getter_33_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465cf = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootBoth;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xf0);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootRAir>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootRAir_g____getter_34_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6f9b0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootRAir_g____getter_34_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465d0 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootRAir;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xf8);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootLAir>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootLAir_g____getter_35_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6fa20

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootLAir_g____getter_35_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465d1 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootLAir;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x100)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSShootBothAir>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootBothAir_g____getter_36_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6fa90

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSShootBothAir_g____getter_36_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465d2 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootBothAir;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x108)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSGunReloadBoth>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSGunReloadBoth_g____getter_37_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6fb00

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSGunReloadBoth_g____getter_37_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465d3 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSGunReloadBoth;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x110)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AHSSGunReloadBothAir>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSGunReloadBothAir_g____getter_38_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6fb70

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AHSSGunReloadBothAir_g____getter_38_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465d4 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AHSSGunReloadBothAir;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x118)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootR>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootR_g____getter_39_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6fbe0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootR_g____getter_39_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465d5 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->TSShootR;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x120)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootL>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootL_g____getter_40_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6fc50

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootL_g____getter_40_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465d6 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->TSShootL;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x128)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootRAir>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootRAir_g____getter_41_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6fcc0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootRAir_g____getter_41_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465d7 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->TSShootRAir;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x130)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__TSShootLAir>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootLAir_g____getter_42_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6fd30

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__TSShootLAir_g____getter_42_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465d8 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->TSShootLAir;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x138)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookLJust>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookLJust_g____getter_43_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6fda0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookLJust_g____getter_43_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465d9 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AirHookLJust;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x140)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookRJust>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookRJust_g____getter_44_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6fe10

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookRJust_g____getter_44_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465da = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AirHookRJust;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x148)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookL>g____getter|45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookL_g____getter_45_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6fe80

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookL_g____getter_45_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465db = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AirHookL;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x150)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHookR>g____getter|46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookR_g____getter_46_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6fef0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHookR_g____getter_46_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465dc = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AirHookR;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x158)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirHook>g____getter|47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHook_g____getter_47_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6ff60

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirHook_g____getter_47_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465dd = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AirHook;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x160)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirRelease>g____getter|48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirRelease_g____getter_48_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a6ffd0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirRelease_g____getter_48_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465de = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AirRelease;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x168)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirFall>g____getter|49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirFall_g____getter_49_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70040

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirFall_g____getter_49_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465df = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AirFall;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x170)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__AirRise>g____getter|50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirRise_g____getter_50_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a700b0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__AirRise_g____getter_50_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465e0 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->AirRise;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x178)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2>g____getter|51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2_g____getter_51_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70120

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2_g____getter_51_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465e1 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Air2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x180)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2Right>g____getter|52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Right_g____getter_52_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70190

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Right_g____getter_52_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465e2 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Air2Right;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x188)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2Left>g____getter|53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Left_g____getter_53_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70200

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Left_g____getter_53_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465e3 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Air2Left;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 400);
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Air2Backward>g____getter|54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Backward_g____getter_54_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70270

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Air2Backward_g____getter_54_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465e4 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Air2Backward;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x198)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookL1>g____getter|55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookL1_g____getter_55_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a702e0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookL1_g____getter_55_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465e5 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Attack1HookL1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1a0)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookL2>g____getter|56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookL2_g____getter_56_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70350

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookL2_g____getter_56_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465e6 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Attack1HookL2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1a8)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookR1>g____getter|57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookR1_g____getter_57_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a703c0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookR1_g____getter_57_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465e7 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Attack1HookR1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1b0)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1HookR2>g____getter|58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookR2_g____getter_58_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70430

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1HookR2_g____getter_58_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465e8 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Attack1HookR2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1b8)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack1>g____getter|59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1_g____getter_59_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a704a0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack1_g____getter_59_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465e9 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Attack1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1c0)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack2>g____getter|60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack2_g____getter_60_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70510

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack2_g____getter_60_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465ea = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Attack2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1c8)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__Attack4>g____getter|61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack4_g____getter_61_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70580

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__Attack4_g____getter_61_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465eb = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->Attack4;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1d0)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialArmin>g____getter|62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialArmin_g____getter_62_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a705f0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialArmin_g____getter_62_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465ec = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialArmin;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1d8)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMarco0>g____getter|63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMarco0_g____getter_63_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70660

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMarco0_g____getter_63_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465ed = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialMarco0;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1e0)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMarco1>g____getter|64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMarco1_g____getter_64_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a706d0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMarco1_g____getter_64_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465ee = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialMarco1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1e8)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialSasha>g____getter|65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialSasha_g____getter_65_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70740

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialSasha_g____getter_65_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465ef = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialSasha;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1f0)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMikasa1>g____getter|66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMikasa1_g____getter_66_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a707b0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMikasa1_g____getter_66_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465f0 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialMikasa1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1f8)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialMikasa2>g____getter|67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMikasa2_g____getter_67_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70820

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialMikasa2_g____getter_67_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465f1 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialMikasa2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x200)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialLevi>g____getter|68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialLevi_g____getter_68_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70890

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialLevi_g____getter_68_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465f2 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x208)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialPetra>g____getter|69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialPetra_g____getter_69_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70900

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialPetra_g____getter_69_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465f3 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialPetra;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x210)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialJean>g____getter|70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialJean_g____getter_70_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70970

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialJean_g____getter_70_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465f4 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialJean;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x218)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__SpecialShifter>g____getter|71_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialShifter_g____getter_71_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a709e0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__SpecialShifter_g____getter_71_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465f5 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->SpecialShifter;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x220)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteSalute>g____getter|72_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteSalute_g____getter_72_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70a50

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteSalute_g____getter_72_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465f6 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->EmoteSalute;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x228)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteNo>g____getter|73_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNo_g____getter_73_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70ac0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNo_g____getter_73_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465f7 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->EmoteNo;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x230)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteYes>g____getter|74_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteYes_g____getter_74_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70b30

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteYes_g____getter_74_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465f8 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->EmoteYes;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x238)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteWave>g____getter|75_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteWave_g____getter_75_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70ba0

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__EmoteWave_g____getter_75_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465f9 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->EmoteWave;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x240)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HoodPull>g____getter|76_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HoodPull_g____getter_76_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70c10

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HoodPull_g____getter_76_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465fa = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->HoodPull;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x250)
  ;
}


// CustomLogic.CustomLogicHumanAnimationEnum.Bindings$$<__CreatePropertyBinding__HoodPullAir>g____getter|77_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HoodPullAir_g____getter_77_0 (CustomLogic_CustomLogicHumanAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a70c80

Il2CppObject *
CustomLogic_CustomLogicHumanAnimationEnum_Bindings_____CreatePropertyBinding__HoodPullAir_g____getter_77_0
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075465fb = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return (Il2CppObject *)TypeInfo_Characters_HumanAnimations->static_fields->HoodPullAir;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 600);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanAnimationEnum___ctor (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x5a672c0

void CustomLogic_CustomLogicHumanAnimationEnum___ctor
               (CustomLogic_CustomLogicHumanAnimationEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075463e1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseMount
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HorseMount (const MethodInfo* method);
// 0x5a67330

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HorseMount(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463e2 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->HorseMount;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseDismount
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HorseDismount (const MethodInfo* method);
// 0x5a673a0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HorseDismount(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463e3 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->HorseDismount;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseIdle
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HorseIdle (const MethodInfo* method);
// 0x5a67410

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HorseIdle(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463e4 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->HorseIdle;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x10);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HorseRun
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HorseRun (const MethodInfo* method);
// 0x5a67480

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HorseRun(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463e5 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->HorseRun;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x18);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleF
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleF (const MethodInfo* method);
// 0x5a674f0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleF(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463e6 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->IdleF;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x20);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleM
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleM (const MethodInfo* method);
// 0x5a67560

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleM(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463e7 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->IdleM;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x28);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleAHSSM
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleAHSSM (const MethodInfo* method);
// 0x5a675d0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleAHSSM(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463e8 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->IdleAHSSM;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x30);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleAHSSF
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleAHSSF (const MethodInfo* method);
// 0x5a67640

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleAHSSF(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463e9 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->IdleAHSSF;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x38);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleTSF
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleTSF (const MethodInfo* method);
// 0x5a676b0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleTSF(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463ea = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->IdleTSF;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x40);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IdleTSM
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_IdleTSM (const MethodInfo* method);
// 0x5a67720

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_IdleTSM(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463eb = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->IdleTSM;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x48);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Jump (const MethodInfo* method);
// 0x5a67790

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Jump(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463ec = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Jump;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x50);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Run
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Run (const MethodInfo* method);
// 0x5a67800

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Run(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463ed = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Run;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x58);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Walk (const MethodInfo* method);
// 0x5a67870

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Walk(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463ee = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Walk;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x248);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_RunTS
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_RunTS (const MethodInfo* method);
// 0x5a678e0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_RunTS(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463ef = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->RunTS;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x60);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_RunBuffed
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_RunBuffed (const MethodInfo* method);
// 0x5a67950

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_RunBuffed(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463f0 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->RunBuffed;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x68);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Dodge
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Dodge (const MethodInfo* method);
// 0x5a679c0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Dodge(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463f1 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Dodge;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x70);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Land (const MethodInfo* method);
// 0x5a67a30

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Land(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463f2 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Land;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x78);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Slide
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Slide (const MethodInfo* method);
// 0x5a67aa0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Slide(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463f3 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Slide;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x80);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Grabbed
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Grabbed (const MethodInfo* method);
// 0x5a67b10

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Grabbed(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463f4 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Grabbed;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x88);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Dash
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Dash (const MethodInfo* method);
// 0x5a67b80

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Dash(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463f5 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Dash;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x90);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Refill
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Refill (const MethodInfo* method);
// 0x5a67bf0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Refill(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463f6 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Refill;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x98);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_ToRoof
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_ToRoof (const MethodInfo* method);
// 0x5a67c60

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_ToRoof(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463f7 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->ToRoof;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xa0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_WallRun
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_WallRun (const MethodInfo* method);
// 0x5a67cd0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_WallRun(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463f8 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->WallRun;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xa8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_OnWall
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_OnWall (const MethodInfo* method);
// 0x5a67d40

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_OnWall(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463f9 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->OnWall;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xb0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_ChangeBlade
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_ChangeBlade (const MethodInfo* method);
// 0x5a67db0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_ChangeBlade(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463fa = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->ChangeBlade;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xb8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_ChangeBladeAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_ChangeBladeAir (const MethodInfo* method);
// 0x5a67e20

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_ChangeBladeAir(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463fb = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->ChangeBladeAir;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xc0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSHookForwardBoth
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardBoth (const MethodInfo* method);
// 0x5a67e90

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardBoth(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463fc = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->AHSSHookForwardBoth;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 200);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSHookForwardL
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardL (const MethodInfo* method);
// 0x5a67f00

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardL(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463fd = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->AHSSHookForwardL;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xd0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSHookForwardR
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardR (const MethodInfo* method);
// 0x5a67f70

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSHookForwardR(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463fe = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->AHSSHookForwardR;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xd8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootR
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootR (const MethodInfo* method);
// 0x5a67fe0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootR(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_075463ff = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootR;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xe0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootL
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootL (const MethodInfo* method);
// 0x5a68050

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootL(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546400 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546400 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootL;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xe8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootBoth
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootBoth (const MethodInfo* method);
// 0x5a680c0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootBoth(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546401 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546401 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootBoth;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xf0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootRAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootRAir (const MethodInfo* method);
// 0x5a68130

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootRAir(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546402 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546402 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootRAir;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0xf8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootLAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootLAir (const MethodInfo* method);
// 0x5a681a0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootLAir(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546403 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546403 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootLAir;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x100);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSShootBothAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootBothAir (const MethodInfo* method);
// 0x5a68210

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSShootBothAir(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546404 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546404 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->AHSSShootBothAir;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x108);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSGunReloadBoth
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSGunReloadBoth (const MethodInfo* method);
// 0x5a68280

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSGunReloadBoth(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546405 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546405 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->AHSSGunReloadBoth;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x110);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AHSSGunReloadBothAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSGunReloadBothAir (const MethodInfo* method);
// 0x5a682f0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AHSSGunReloadBothAir(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546406 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546406 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->AHSSGunReloadBothAir;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x118);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootR
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootR (const MethodInfo* method);
// 0x5a68360

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootR(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546407 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546407 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->TSShootR;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x120);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootL
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootL (const MethodInfo* method);
// 0x5a683d0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootL(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546408 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546408 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->TSShootL;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x128);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootRAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootRAir (const MethodInfo* method);
// 0x5a68440

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootRAir(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546409 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546409 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->TSShootRAir;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x130);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_TSShootLAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootLAir (const MethodInfo* method);
// 0x5a684b0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_TSShootLAir(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754640a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_0754640a = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->TSShootLAir;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x138);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookLJust
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookLJust (const MethodInfo* method);
// 0x5a68520

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookLJust(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754640b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_0754640b = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->AirHookLJust;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x140);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookRJust
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookRJust (const MethodInfo* method);
// 0x5a68590

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookRJust(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754640c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_0754640c = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->AirHookRJust;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x148);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookL
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookL (const MethodInfo* method);
// 0x5a68600

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookL(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754640d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_0754640d = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->AirHookL;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x150);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHookR
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookR (const MethodInfo* method);
// 0x5a68670

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHookR(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754640e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_0754640e = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->AirHookR;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x158);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirHook
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirHook (const MethodInfo* method);
// 0x5a686e0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirHook(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754640f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_0754640f = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->AirHook;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x160);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirRelease
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirRelease (const MethodInfo* method);
// 0x5a68750

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirRelease(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546410 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546410 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->AirRelease;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x168);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirFall
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirFall (const MethodInfo* method);
// 0x5a687c0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirFall(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546411 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546411 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->AirFall;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x170);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_AirRise
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_AirRise (const MethodInfo* method);
// 0x5a68830

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_AirRise(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546412 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546412 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->AirRise;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x178);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Air2 (const MethodInfo* method);
// 0x5a688a0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Air2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546413 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546413 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Air2;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x180);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2Right
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Right (const MethodInfo* method);
// 0x5a68910

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Right(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546414 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546414 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Air2Right;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x188);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2Left
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Left (const MethodInfo* method);
// 0x5a68980

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Left(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546415 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546415 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Air2Left;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 400);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Air2Backward
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Backward (const MethodInfo* method);
// 0x5a689f0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Air2Backward(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546416 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546416 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Air2Backward;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x198);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookL1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookL1 (const MethodInfo* method);
// 0x5a68a60

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookL1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546417 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546417 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Attack1HookL1;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1a0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookL2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookL2 (const MethodInfo* method);
// 0x5a68ad0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookL2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546418 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546418 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Attack1HookL2;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1a8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookR1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookR1 (const MethodInfo* method);
// 0x5a68b40

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookR1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546419 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546419 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Attack1HookR1;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1b0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1HookR2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookR2 (const MethodInfo* method);
// 0x5a68bb0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1HookR2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754641a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_0754641a = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Attack1HookR2;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1b8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1 (const MethodInfo* method);
// 0x5a68c20

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754641b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_0754641b = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Attack1;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1c0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack2 (const MethodInfo* method);
// 0x5a68c90

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754641c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_0754641c = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Attack2;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1c8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_Attack4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_Attack4 (const MethodInfo* method);
// 0x5a68d00

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_Attack4(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754641d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_0754641d = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->Attack4;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1d0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialArmin
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialArmin (const MethodInfo* method);
// 0x5a68d70

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialArmin(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754641e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_0754641e = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->SpecialArmin;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1d8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMarco0
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMarco0 (const MethodInfo* method);
// 0x5a68de0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMarco0(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754641f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_0754641f = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->SpecialMarco0;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1e0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMarco1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMarco1 (const MethodInfo* method);
// 0x5a68e50

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMarco1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546420 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546420 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->SpecialMarco1;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1e8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialSasha
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialSasha (const MethodInfo* method);
// 0x5a68ec0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialSasha(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546421 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546421 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->SpecialSasha;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1f0);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMikasa1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMikasa1 (const MethodInfo* method);
// 0x5a68f30

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMikasa1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546422 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546422 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->SpecialMikasa1;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x1f8);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialMikasa2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMikasa2 (const MethodInfo* method);
// 0x5a68fa0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialMikasa2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546423 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546423 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->SpecialMikasa2;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x200);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialLevi
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialLevi (const MethodInfo* method);
// 0x5a69010

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialLevi(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546424 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546424 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->SpecialLevi;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x208);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialPetra
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialPetra (const MethodInfo* method);
// 0x5a69080

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialPetra(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546425 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546425 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->SpecialPetra;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x210);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialJean
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialJean (const MethodInfo* method);
// 0x5a690f0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialJean(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546426 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546426 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->SpecialJean;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x218);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_SpecialShifter
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialShifter (const MethodInfo* method);
// 0x5a69160

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_SpecialShifter(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546427 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546427 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->SpecialShifter;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x220);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteSalute
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteSalute (const MethodInfo* method);
// 0x5a691d0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteSalute(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546428 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546428 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->EmoteSalute;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x228);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteNo
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteNo (const MethodInfo* method);
// 0x5a69240

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteNo(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546429 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_07546429 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->EmoteNo;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x230);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteYes
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteYes (const MethodInfo* method);
// 0x5a692b0

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteYes(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754642a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_0754642a = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->EmoteYes;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x238);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_EmoteWave
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteWave (const MethodInfo* method);
// 0x5a69320

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_EmoteWave(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754642b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_0754642b = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->EmoteWave;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x240);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HoodPull
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HoodPull (const MethodInfo* method);
// 0x5a69390

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HoodPull(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754642c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_0754642c = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->HoodPull;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 0x250);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_HoodPullAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_HoodPullAir (const MethodInfo* method);
// 0x5a69400

System_String_o * CustomLogic_CustomLogicHumanAnimationEnum__get_HoodPullAir(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754642d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanAnimations);
    Il2CppMethodInitialized_0754642d = '\x01';
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanAnimations->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanAnimations);
    return TypeInfo_Characters_HumanAnimations->static_fields->HoodPullAir;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Characters_HumanAnimations)->static_fields + 600);
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanAnimationEnum__get_ClassName (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x5a69470

System_String_o *
CustomLogic_CustomLogicHumanAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicHumanAnimationEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754642e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"HumanAnimationEnum");
    Il2CppMethodInitialized_0754642e = '\x01';
  }
  return "HumanAnimationEnum";
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHumanAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x5a694a0

bool CustomLogic_CustomLogicHumanAnimationEnum__get_IsAbstract
               (CustomLogic_CustomLogicHumanAnimationEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHumanAnimationEnum__get_IsStatic (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x5a694b0

bool CustomLogic_CustomLogicHumanAnimationEnum__get_IsStatic
               (CustomLogic_CustomLogicHumanAnimationEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicHumanAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHumanAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHumanAnimationEnum_o* __this, const MethodInfo* method);
// 0x5a694c0

bool CustomLogic_CustomLogicHumanAnimationEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicHumanAnimationEnum_o *__this,MethodInfo *method)

{
  return true;
}


