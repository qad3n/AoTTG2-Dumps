// Type: CustomLogic.CustomLogicHumanSoundEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicHumanSoundEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicHumanSoundEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHumanSoundEnum_o* CustomLogic_CustomLogicHumanSoundEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a737e0

CustomLogic_CustomLogicHumanSoundEnum_o *
CustomLogic_CustomLogicHumanSoundEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_075464da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanSoundEnum);
    Il2CppMethodInitialized_075464da = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHumanSoundEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum);
  if (Il2CppMethodInitialized_07546489 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546489 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicHumanSoundEnum_o *)__this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHumanSoundEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a73900

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicHumanSoundEnum_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_075464db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Death4");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShotDouble2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape2Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"TimerTick");
    il2cpp_codegen_initialize_runtime_metadata(&"TSLaunch2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape1Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape1Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"TimerGo");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape3Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape4Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"ThunderspearLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"GasEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"NoGas");
    il2cpp_codegen_initialize_runtime_metadata(&"NapeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep1");
    il2cpp_codegen_initialize_runtime_metadata(&"GunExplode");
    il2cpp_codegen_initialize_runtime_metadata(&"GasStart");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape3Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"HookImpact");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot1");
    il2cpp_codegen_initialize_runtime_metadata(&"Death3");
    il2cpp_codegen_initialize_runtime_metadata(&"Death1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeBreak");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape1Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"LimbHit");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape2Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"Death5");
    il2cpp_codegen_initialize_runtime_metadata(&"HookRetractRight");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing1");
    il2cpp_codegen_initialize_runtime_metadata(&"OldBladeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"Land");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot2");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape1Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShotDouble1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing4");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape1Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"CrashLand");
    il2cpp_codegen_initialize_runtime_metadata(&"HookImpactLoud");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot4");
    il2cpp_codegen_initialize_runtime_metadata(&"Dodge");
    il2cpp_codegen_initialize_runtime_metadata(&"HookRetractLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"GunExplodeLoud");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape3Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOut");
    il2cpp_codegen_initialize_runtime_metadata(&"Refill");
    il2cpp_codegen_initialize_runtime_metadata(&"Slide");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape2Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape2Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape3Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"HookLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"GasLoop");
    il2cpp_codegen_initialize_runtime_metadata(&"FlareLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape2Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep2");
    il2cpp_codegen_initialize_runtime_metadata(&"Switchback");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot4");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeReloadGround");
    il2cpp_codegen_initialize_runtime_metadata(&"Death2");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape4Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape4Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot2");
    il2cpp_codegen_initialize_runtime_metadata(&"GunReload");
    il2cpp_codegen_initialize_runtime_metadata(&"Checkpoint");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeReloadAir");
    il2cpp_codegen_initialize_runtime_metadata(&"OldNapeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot3");
    il2cpp_codegen_initialize_runtime_metadata(&"WaterSplash");
    il2cpp_codegen_initialize_runtime_metadata(&"OldBladeSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape3Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"GasBurst");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelIn");
    il2cpp_codegen_initialize_runtime_metadata(&"OldHookLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"TSLaunch1");
    Il2CppMethodInitialized_075464db = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x6c198db2) {
    if (uVar2 < 0x3c39fb91) {
      if (uVar2 < 0x1bab3e7b) {
        if (uVar2 < 0x16ab369c) {
          if (uVar2 < 0xe1ef32e) {
            if (uVar2 == 0x6d9263a) {
              bVar1 = System_String__op_Equality(name,"GasStart",(MethodInfo *)0x0);
              if (bVar1) {
                pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
                if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
                }
                pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasStart
                                   ((MethodInfo *)pCVar5);
                return (CustomLogic_ICLMemberBinding_o *)pCVar3;
              }
            }
            else if (uVar2 == 0xe1ef32d) {
              bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
              if (bVar1) {
                pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
                if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
                }
                pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Jump
                                   ((MethodInfo *)pCVar5);
                return (CustomLogic_ICLMemberBinding_o *)pCVar3;
              }
            }
          }
          else if (uVar2 == 0x15ab3508) {
            bVar1 = System_String__op_Equality(name,"Death5",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death5
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x16ab369b) {
            bVar1 = System_String__op_Equality(name,"Death4",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death4
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 < 0x19ab3b55) {
          if (uVar2 == 0x16ed547a) {
            bVar1 = System_String__op_Equality(name,"ReelIn",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ReelIn
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x19ab3b54) {
            bVar1 = System_String__op_Equality(name,"Death1",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death1
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x19de4ccf) {
          bVar1 = System_String__op_Equality(name,"GasEnd",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasEnd
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1a4a6571) {
          bVar1 = System_String__op_Equality(name,"OldNapeHit",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldNapeHit
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1bab3e7a) {
          bVar1 = System_String__op_Equality(name,"Death3",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death3
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x2ce556a4) {
        if (uVar2 < 0x1cab400e) {
          if (uVar2 == 0x1be90ac3) {
            bVar1 = System_String__op_Equality(name,"Footstep2",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Footstep2
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x1cab400d) {
            bVar1 = System_String__op_Equality(name,"Death2",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death2
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x1ce90c56) {
          bVar1 = System_String__op_Equality(name,"Footstep1",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Footstep1
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x24424353) {
          bVar1 = System_String__op_Equality(name,"BladeReloadGround",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeReloadGround
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x2ce556a3) {
          bVar1 = System_String__op_Equality(name,"TSLaunch2",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TSLaunch2
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x31598f8f) {
        if (uVar2 == 0x2de55836) {
          bVar1 = System_String__op_Equality(name,"TSLaunch1",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TSLaunch1
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x31598f8e) {
          bVar1 = System_String__op_Equality(name,"LimbHit",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__LimbHit
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x322726f4) {
        bVar1 = System_String__op_Equality(name,"BladeBreak",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeBreak
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x39c5bbac) {
        bVar1 = System_String__op_Equality(name,"GunReload",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunReload
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x3c39fb90) {
        bVar1 = System_String__op_Equality(name,"TimerGo",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TimerGo
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x548b671f) {
      if (uVar2 < 0x474347a4) {
        if (uVar2 < 0x41f90b8f) {
          if (uVar2 == 0x40f909fb) {
            bVar1 = System_String__op_Equality(name,"AHSSGunShot1",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot1
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x41f90b8e) {
            bVar1 = System_String__op_Equality(name,"AHSSGunShot2",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot2
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x42f90d21) {
          bVar1 = System_String__op_Equality(name,"AHSSGunShot3",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot3
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x43f90eb4) {
          bVar1 = System_String__op_Equality(name,"AHSSGunShot4",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot4
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x474347a3) {
          bVar1 = System_String__op_Equality(name,"BladeNape2Var1",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var1
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x49434aca) {
        if (uVar2 == 0x48434936) {
          bVar1 = System_String__op_Equality(name,"BladeNape2Var2",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var2
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x49434ac9) {
          bVar1 = System_String__op_Equality(name,"BladeNape2Var3",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var3
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x4bbbd0ac) {
        bVar1 = System_String__op_Equality(name,"AHSSGunShotDouble1",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShotDouble1
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x4ebbd565) {
        bVar1 = System_String__op_Equality(name,"AHSSGunShotDouble2",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShotDouble2
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x548b671e) {
        bVar1 = System_String__op_Equality(name,"Switchback",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Switchback
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x5c39b690) {
      if (uVar2 < 0x5722e904) {
        if (uVar2 == 0x55c3fbee) {
          bVar1 = System_String__op_Equality(name,"HookRetractLeft",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookRetractLeft
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x5722e903) {
          bVar1 = System_String__op_Equality(name,"AHSSNape2Var2",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape2Var2
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x5822ea96) {
        bVar1 = System_String__op_Equality(name,"AHSSNape2Var1",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape2Var1
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x5b39b4fc) {
        bVar1 = System_String__op_Equality(name,"BladeNape4Var2",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var2
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x5c39b68f) {
        bVar1 = System_String__op_Equality(name,"BladeNape4Var3",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var3
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x6082b447) {
      if (uVar2 == 0x5e39b9b5) {
        bVar1 = System_String__op_Equality(name,"BladeNape4Var1",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var1
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x6082b446) {
        bVar1 = System_String__op_Equality(name,"BladeHit",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeHit
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x6083d558) {
      bVar1 = System_String__op_Equality(name,"GasBurst",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasBurst
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x66052020) {
      bVar1 = System_String__op_Equality(name,"NapeHit",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__NapeHit
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x6c198db1) {
      bVar1 = System_String__op_Equality(name,"Refill",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Refill
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xacf875a8) {
    if (uVar2 < 0x99b7f233) {
      if (uVar2 < 0x799ccc7e) {
        if (uVar2 < 0x703d20cd) {
          if (uVar2 == 0x6d3d1c13) {
            bVar1 = System_String__op_Equality(name,"BladeSwing4",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing4
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x703d20cc) {
            bVar1 = System_String__op_Equality(name,"BladeSwing1",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing1
                                 ((MethodInfo *)pCVar5);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x723d23f2) {
          bVar1 = System_String__op_Equality(name,"BladeSwing3",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing3
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x733d2585) {
          bVar1 = System_String__op_Equality(name,"BladeSwing2",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing2
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x799ccc7d) {
          bVar1 = System_String__op_Equality(name,"ThunderspearLaunch",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ThunderspearLaunch
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x8eeafb7e) {
        if (uVar2 == 0x8cd14bad) {
          bVar1 = System_String__op_Equality(name,"HookLaunch",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookLaunch
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x8eeafb7d) {
          bVar1 = System_String__op_Equality(name,"CrashLand",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__CrashLand
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x936083cb) {
        bVar1 = System_String__op_Equality(name,"AHSSNape1Var1",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape1Var1
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x9460855e) {
        bVar1 = System_String__op_Equality(name,"AHSSNape1Var2",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape1Var2
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x99b7f232) {
        bVar1 = System_String__op_Equality(name,"GunExplodeLoud",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunExplodeLoud
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x9d1b4b32) {
      if (uVar2 < 0x9aadede9) {
        if (uVar2 == 0x9a1b4678) {
          bVar1 = System_String__op_Equality(name,"BladeNape3Var1",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var1
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x9aadede8) {
          bVar1 = System_String__op_Equality(name,"APGShot1",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot1
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x9c1b499e) {
        bVar1 = System_String__op_Equality(name,"BladeNape3Var3",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var3
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x9cadf10e) {
        bVar1 = System_String__op_Equality(name,"APGShot3",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot3
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x9d1b4b31) {
        bVar1 = System_String__op_Equality(name,"BladeNape3Var2",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var2
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x9f3e662d) {
      if (uVar2 == 0x9dadf2a1) {
        bVar1 = System_String__op_Equality(name,"APGShot2",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot2
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x9f3e662c) {
        bVar1 = System_String__op_Equality(name,"BladeReloadAir",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeReloadAir
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x9fadf5c7) {
      bVar1 = System_String__op_Equality(name,"APGShot4",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot4
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xa114d213) {
      bVar1 = System_String__op_Equality(name,"ReelOut",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ReelOut
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xacf875a7) {
      bVar1 = System_String__op_Equality(name,"TimerTick",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TimerTick
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xe2620ba0) {
    if (uVar2 < 0xcd507f81) {
      if (uVar2 < 0xbd9f8bfb) {
        if (uVar2 == 0xbb51b893) {
          bVar1 = System_String__op_Equality(name,"NoGas",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__NoGas
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0xbd9f8bfa) {
          bVar1 = System_String__op_Equality(name,"OldHookLaunch",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldHookLaunch
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0xc30f2900) {
        bVar1 = System_String__op_Equality(name,"GasLoop",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasLoop
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xcb990166) {
        bVar1 = System_String__op_Equality(name,"GunExplode",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunExplode
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xcd507f80) {
        bVar1 = System_String__op_Equality(name,"AHSSNape3Var2",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape3Var2
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0xd9202fa7) {
      if (uVar2 == 0xd0508439) {
        bVar1 = System_String__op_Equality(name,"AHSSNape3Var1",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape3Var1
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xd9202fa6) {
        bVar1 = System_String__op_Equality(name,"OldBladeSwing",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldBladeSwing
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xdb968bd5) {
      bVar1 = System_String__op_Equality(name,"OldBladeHit",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldBladeHit
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xdbdf1f18) {
      bVar1 = System_String__op_Equality(name,"HookImpactLoud",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookImpactLoud
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe2620b9f) {
      bVar1 = System_String__op_Equality(name,"Checkpoint",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Checkpoint
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xf5697c89) {
    if (uVar2 < 0xee1682bd) {
      if (uVar2 == 0xea62a4c3) {
        bVar1 = System_String__op_Equality(name,"HookRetractRight",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookRetractRight
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xee1682bc) {
        bVar1 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Land
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xf3dfd300) {
      bVar1 = System_String__op_Equality(name,"HookImpact",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookImpact
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xf526d670) {
      bVar1 = System_String__op_Equality(name,"Dodge",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Dodge
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xf5697c88) {
      bVar1 = System_String__op_Equality(name,"FlareLaunch",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__FlareLaunch
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xfbb7b789) {
    if (uVar2 == 0xf7aaccdf) {
      bVar1 = System_String__op_Equality(name,"WaterSplash",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__WaterSplash
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xfbb7b788) {
      bVar1 = System_String__op_Equality(name,"BladeNape1Var3",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var3
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xfcb7b91b) {
    bVar1 = System_String__op_Equality(name,"BladeNape1Var2",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var2
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xfdb7baae) {
    bVar1 = System_String__op_Equality(name,"BladeNape1Var1",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var1
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xffc7c086) {
    bVar1 = System_String__op_Equality(name,"Slide",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Slide
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHumanSoundEnum not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeBreak
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeBreak (const MethodInfo* method);
// 0x5a755c0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeBreak(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeBreak_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464dc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeBreak_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeHit (const MethodInfo* method);
// 0x5a75660

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeHit(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeHit_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464dd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeHit_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldBladeHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldBladeHit (const MethodInfo* method);
// 0x5a75700

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldBladeHit(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldBladeHit_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464de = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldBladeHit_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__NapeHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__NapeHit (const MethodInfo* method);
// 0x5a757a0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__NapeHit(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__NapeHit_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464df = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__NapeHit_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__LimbHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__LimbHit (const MethodInfo* method);
// 0x5a75840

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__LimbHit(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__LimbHit_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464e0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__LimbHit_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldNapeHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldNapeHit (const MethodInfo* method);
// 0x5a758e0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldNapeHit(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldNapeHit_g____getter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464e1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldNapeHit_g____getter_7
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeReloadAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeReloadAir (const MethodInfo* method);
// 0x5a75980

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeReloadAir(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeReloadAir_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464e2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeReloadAir_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeReloadGround
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeReloadGround (const MethodInfo* method);
// 0x5a75a20

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeReloadGround(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeReloadGround_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464e3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeReloadGround_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GunReload
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunReload (const MethodInfo* method);
// 0x5a75ac0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunReload(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunReload_g____getter_10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464e4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunReload_g____getter_10
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing1 (const MethodInfo* method);
// 0x5a75b60

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing1_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464e5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing1_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing2 (const MethodInfo* method);
// 0x5a75c00

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing2_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464e6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing2_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing3 (const MethodInfo* method);
// 0x5a75ca0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing3(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing3_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464e7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing3_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing4 (const MethodInfo* method);
// 0x5a75d40

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing4(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing4_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464e8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeSwing4_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldBladeSwing
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldBladeSwing (const MethodInfo* method);
// 0x5a75de0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldBladeSwing(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldBladeSwing_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464e9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldBladeSwing_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Dodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Dodge (const MethodInfo* method);
// 0x5a75e80

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Dodge(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_16_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464ea = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_16_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__FlareLaunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__FlareLaunch (const MethodInfo* method);
// 0x5a75f20

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__FlareLaunch(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__FlareLaunch_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464eb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__FlareLaunch_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__ThunderspearLaunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ThunderspearLaunch (const MethodInfo* method);
// 0x5a75fc0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ThunderspearLaunch
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ThunderspearLaunch_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464ec = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ThunderspearLaunch_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasBurst
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasBurst (const MethodInfo* method);
// 0x5a76060

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasBurst(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasBurst_g____getter_19
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464ed = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasBurst_g____getter_19
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookLaunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookLaunch (const MethodInfo* method);
// 0x5a76100

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookLaunch(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookLaunch_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464ee = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookLaunch_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldHookLaunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldHookLaunch (const MethodInfo* method);
// 0x5a761a0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldHookLaunch(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldHookLaunch_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464ef = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__OldHookLaunch_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookRetractLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookRetractLeft (const MethodInfo* method);
// 0x5a76240

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookRetractLeft(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookRetractLeft_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464f0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookRetractLeft_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookRetractRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookRetractRight (const MethodInfo* method);
// 0x5a762e0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookRetractRight(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookRetractRight_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464f1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookRetractRight_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookImpact
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookImpact (const MethodInfo* method);
// 0x5a76380

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookImpact(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookImpact_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464f2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookImpact_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookImpactLoud
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookImpactLoud (const MethodInfo* method);
// 0x5a76420

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookImpactLoud(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookImpactLoud_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464f3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__HookImpactLoud_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasStart
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasStart (const MethodInfo* method);
// 0x5a764c0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasStart(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasStart_g____getter_26
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464f4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasStart_g____getter_26
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasLoop
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasLoop (const MethodInfo* method);
// 0x5a76560

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasLoop(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasLoop_g____getter_27_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464f5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasLoop_g____getter_27_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasEnd
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasEnd (const MethodInfo* method);
// 0x5a76600

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasEnd(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasEnd_g____getter_28_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464f6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GasEnd_g____getter_28_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__ReelIn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ReelIn (const MethodInfo* method);
// 0x5a766a0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ReelIn(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ReelIn_g____getter_29_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464f7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ReelIn_g____getter_29_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__ReelOut
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ReelOut (const MethodInfo* method);
// 0x5a76740

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ReelOut(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ReelOut_g____getter_30_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464f8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__ReelOut_g____getter_30_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__CrashLand
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__CrashLand (const MethodInfo* method);
// 0x5a767e0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__CrashLand(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__CrashLand_g____getter_31
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464f9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__CrashLand_g____getter_31
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x5a76880

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Jump_g____getter_32_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464fa = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Jump_g____getter_32_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x5a76920

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Land_g____getter_33_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464fb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Land_g____getter_33_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__NoGas
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__NoGas (const MethodInfo* method);
// 0x5a769c0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__NoGas(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__NoGas_g____getter_34_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464fc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__NoGas_g____getter_34_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Refill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Refill (const MethodInfo* method);
// 0x5a76a60

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Refill(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Refill_g____getter_35_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464fd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Refill_g____getter_35_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Slide
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Slide (const MethodInfo* method);
// 0x5a76b00

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Slide(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Slide_g____getter_36_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464fe = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Slide_g____getter_36_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Footstep1 (const MethodInfo* method);
// 0x5a76ba0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Footstep1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075464ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Footstep1_g____getter_37
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_075464ff = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Footstep1_g____getter_37
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Footstep2 (const MethodInfo* method);
// 0x5a76c40

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Footstep2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546500 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Footstep2_g____getter_38
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546500 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Footstep2_g____getter_38
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death1 (const MethodInfo* method);
// 0x5a76ce0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546501 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death1_g____getter_39_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546501 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death1_g____getter_39_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death2 (const MethodInfo* method);
// 0x5a76d80

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546502 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death2_g____getter_40_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546502 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death2_g____getter_40_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death3 (const MethodInfo* method);
// 0x5a76e20

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death3(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546503 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death3_g____getter_41_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546503 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death3_g____getter_41_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death4 (const MethodInfo* method);
// 0x5a76ec0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death4(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546504 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death4_g____getter_42_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546504 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death4_g____getter_42_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death5 (const MethodInfo* method);
// 0x5a76f60

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death5(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546505 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death5_g____getter_43_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546505 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Death5_g____getter_43_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Checkpoint
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Checkpoint (const MethodInfo* method);
// 0x5a77000

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Checkpoint(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546506 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Checkpoint_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546506 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Checkpoint_g____getter_4
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__TimerTick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TimerTick (const MethodInfo* method);
// 0x5a770a0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TimerTick(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546507 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TimerTick_g____getter_45
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546507 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TimerTick_g____getter_45
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__TimerGo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TimerGo (const MethodInfo* method);
// 0x5a77140

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TimerGo(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546508 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TimerGo_g____getter_46_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546508 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TimerGo_g____getter_46_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GunExplode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunExplode (const MethodInfo* method);
// 0x5a771e0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunExplode(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546509 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunExplode_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546509 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunExplode_g____getter_4
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GunExplodeLoud
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunExplodeLoud (const MethodInfo* method);
// 0x5a77280

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunExplodeLoud(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754650a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunExplodeLoud_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_0754650a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__GunExplodeLoud_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__WaterSplash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__WaterSplash (const MethodInfo* method);
// 0x5a77320

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__WaterSplash(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754650b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__WaterSplash_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_0754650b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__WaterSplash_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Switchback
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Switchback (const MethodInfo* method);
// 0x5a773c0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Switchback(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754650c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Switchback_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_0754650c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__Switchback_g____getter_5
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot1 (const MethodInfo* method);
// 0x5a77460

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754650d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot1_g____getter_51
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_0754650d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot1_g____getter_51
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot2 (const MethodInfo* method);
// 0x5a77500

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754650e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot2_g____getter_52
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_0754650e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot2_g____getter_52
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot3 (const MethodInfo* method);
// 0x5a775a0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot3(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754650f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot3_g____getter_53
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_0754650f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot3_g____getter_53
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot4 (const MethodInfo* method);
// 0x5a77640

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot4(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546510 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot4_g____getter_54
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546510 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__APGShot4_g____getter_54
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape1Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var1 (const MethodInfo* method);
// 0x5a776e0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546511 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var1_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546511 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var1_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape1Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var2 (const MethodInfo* method);
// 0x5a77780

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546512 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var2_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546512 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var2_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape1Var3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var3 (const MethodInfo* method);
// 0x5a77820

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var3(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546513 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var3_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546513 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape1Var3_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape2Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var1 (const MethodInfo* method);
// 0x5a778c0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546514 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var1_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546514 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var1_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape2Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var2 (const MethodInfo* method);
// 0x5a77960

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546515 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var2_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546515 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var2_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape2Var3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var3 (const MethodInfo* method);
// 0x5a77a00

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var3(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546516 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var3_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546516 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape2Var3_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape3Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var1 (const MethodInfo* method);
// 0x5a77aa0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546517 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var1_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546517 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var1_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape3Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var2 (const MethodInfo* method);
// 0x5a77b40

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546518 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var2_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546518 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var2_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape3Var3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var3 (const MethodInfo* method);
// 0x5a77be0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var3(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546519 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var3_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546519 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape3Var3_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape4Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var1 (const MethodInfo* method);
// 0x5a77c80

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754651a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var1_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_0754651a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var1_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape4Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var2 (const MethodInfo* method);
// 0x5a77d20

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754651b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var2_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_0754651b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var2_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape4Var3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var3 (const MethodInfo* method);
// 0x5a77dc0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var3(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754651c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var3_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_0754651c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__BladeNape4Var3_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot1 (const MethodInfo* method);
// 0x5a77e60

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754651d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot1_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_0754651d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot1_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot2 (const MethodInfo* method);
// 0x5a77f00

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754651e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot2_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_0754651e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot2_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot3 (const MethodInfo* method);
// 0x5a77fa0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot3(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754651f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot3_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_0754651f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot3_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot4 (const MethodInfo* method);
// 0x5a78040

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot4(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546520 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot4_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546520 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShot4_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShotDouble1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShotDouble1 (const MethodInfo* method);
// 0x5a780e0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShotDouble1
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546521 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShotDouble1_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546521 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShotDouble1_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShotDouble2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShotDouble2 (const MethodInfo* method);
// 0x5a78180

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShotDouble2
          (MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546522 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShotDouble2_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546522 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSGunShotDouble2_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape1Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape1Var1 (const MethodInfo* method);
// 0x5a78220

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape1Var1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546523 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape1Var1_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546523 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape1Var1_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape1Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape1Var2 (const MethodInfo* method);
// 0x5a782c0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape1Var2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546524 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape1Var2_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546524 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape1Var2_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape2Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape2Var1 (const MethodInfo* method);
// 0x5a78360

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape2Var1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546525 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape2Var1_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546525 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape2Var1_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape2Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape2Var2 (const MethodInfo* method);
// 0x5a78400

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape2Var2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546526 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape2Var2_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546526 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape2Var2_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape3Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape3Var1 (const MethodInfo* method);
// 0x5a784a0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape3Var1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546527 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape3Var1_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546527 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape3Var1_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape3Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape3Var2 (const MethodInfo* method);
// 0x5a78540

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape3Var2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546528 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape3Var2_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546528 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__AHSSNape3Var2_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__TSLaunch1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TSLaunch1 (const MethodInfo* method);
// 0x5a785e0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TSLaunch1(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546529 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TSLaunch1_g____getter_79
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_07546529 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TSLaunch1_g____getter_79
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__TSLaunch2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TSLaunch2 (const MethodInfo* method);
// 0x5a78680

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TSLaunch2(MethodInfo *method)

{
  System_Func_CustomLogicHumanSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754652a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TSLaunch2_g____getter_80
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
    Il2CppMethodInitialized_0754652a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings___CreatePropertyBinding__TSLaunch2_g____getter_80
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanSoundEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a78720

void CustomLogic_CustomLogicHumanSoundEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_0754652b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Death4");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShotDouble2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape2Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"TimerTick");
    il2cpp_codegen_initialize_runtime_metadata(&"TSLaunch2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape1Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape1Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"TimerGo");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape3Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape4Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"ThunderspearLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"GasEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"NoGas");
    il2cpp_codegen_initialize_runtime_metadata(&"NapeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep1");
    il2cpp_codegen_initialize_runtime_metadata(&"GunExplode");
    il2cpp_codegen_initialize_runtime_metadata(&"GasStart");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape3Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"HookImpact");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot1");
    il2cpp_codegen_initialize_runtime_metadata(&"Death3");
    il2cpp_codegen_initialize_runtime_metadata(&"Death1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeBreak");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape1Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"LimbHit");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape2Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"Death5");
    il2cpp_codegen_initialize_runtime_metadata(&"HookRetractRight");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing1");
    il2cpp_codegen_initialize_runtime_metadata(&"OldBladeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"Land");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot2");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape1Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShotDouble1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSwing4");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape1Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"CrashLand");
    il2cpp_codegen_initialize_runtime_metadata(&"HookImpactLoud");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot4");
    il2cpp_codegen_initialize_runtime_metadata(&"Dodge");
    il2cpp_codegen_initialize_runtime_metadata(&"HookRetractLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"GunExplodeLoud");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape3Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOut");
    il2cpp_codegen_initialize_runtime_metadata(&"Refill");
    il2cpp_codegen_initialize_runtime_metadata(&"Slide");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape2Var1");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape2Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape3Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"HookLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"GasLoop");
    il2cpp_codegen_initialize_runtime_metadata(&"FlareLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSNape2Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"Footstep2");
    il2cpp_codegen_initialize_runtime_metadata(&"Switchback");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot4");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeReloadGround");
    il2cpp_codegen_initialize_runtime_metadata(&"Death2");
    il2cpp_codegen_initialize_runtime_metadata(&"APGShot3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape4Var3");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape4Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot2");
    il2cpp_codegen_initialize_runtime_metadata(&"GunReload");
    il2cpp_codegen_initialize_runtime_metadata(&"Checkpoint");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeReloadAir");
    il2cpp_codegen_initialize_runtime_metadata(&"OldNapeHit");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSGunShot3");
    il2cpp_codegen_initialize_runtime_metadata(&"WaterSplash");
    il2cpp_codegen_initialize_runtime_metadata(&"OldBladeSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeNape3Var2");
    il2cpp_codegen_initialize_runtime_metadata(&"GasBurst");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelIn");
    il2cpp_codegen_initialize_runtime_metadata(&"OldHookLaunch");
    il2cpp_codegen_initialize_runtime_metadata(&"TSLaunch1");
    Il2CppMethodInitialized_0754652b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeBreak",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeHit",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OldBladeHit",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NapeHit",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LimbHit",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OldNapeHit",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeReloadAir",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeReloadGround",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GunReload",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeSwing1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeSwing2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeSwing3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeSwing4",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OldBladeSwing",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dodge",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FlareLaunch",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ThunderspearLaunch",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GasBurst",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HookLaunch",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OldHookLaunch",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HookRetractLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HookRetractRight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HookImpact",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HookImpactLoud",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GasStart",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GasLoop",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GasEnd",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ReelIn",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ReelOut",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CrashLand",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jump",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Land",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NoGas",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Refill",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Slide",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Footstep1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Footstep2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Death1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Death2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Death3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Death4",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Death5",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Checkpoint",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TimerTick",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TimerGo",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GunExplode",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GunExplodeLoud",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WaterSplash",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Switchback",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"APGShot1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"APGShot2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"APGShot3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"APGShot4",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape1Var1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape1Var2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape1Var3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape2Var1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape2Var2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape2Var3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape3Var1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape3Var2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape3Var3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape4Var1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape4Var2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeNape4Var3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSGunShot1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSGunShot2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSGunShot3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSGunShot4",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSGunShotDouble1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSGunShotDouble2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSNape1Var1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSNape1Var2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSNape2Var1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSNape2Var2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSNape3Var1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSNape3Var2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TSLaunch1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TSLaunch2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHumanSoundEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeBreak>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeBreak_g____getter_2_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79200

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeBreak_g____getter_2_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075465fc = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeBreak;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeHit>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeHit_g____getter_3_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79270

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeHit_g____getter_3_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075465fd = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeHit;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldBladeHit>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldBladeHit_g____getter_4_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a792e0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldBladeHit_g____getter_4_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075465fe = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->OldBladeHit;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x10);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__NapeHit>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__NapeHit_g____getter_5_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79350

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__NapeHit_g____getter_5_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075465ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075465ff = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->NapeHit;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x18);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__LimbHit>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__LimbHit_g____getter_6_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a793c0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__LimbHit_g____getter_6_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546600 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546600 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->LimbHit;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x20);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldNapeHit>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldNapeHit_g____getter_7_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79430

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldNapeHit_g____getter_7_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546601 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546601 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->OldNapeHit;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x28);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeReloadAir>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeReloadAir_g____getter_8_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a794a0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeReloadAir_g____getter_8_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546602 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546602 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeReloadAir;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x30);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeReloadGround>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeReloadGround_g____getter_9_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79510

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeReloadGround_g____getter_9_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546603 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546603 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeReloadGround;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x38);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GunReload>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunReload_g____getter_10_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79580

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunReload_g____getter_10_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546604 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546604 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->GunReload;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x40);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing1>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing1_g____getter_11_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a795f0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing1_g____getter_11_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546605 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546605 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeSwing1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x48);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing2>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing2_g____getter_12_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79660

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing2_g____getter_12_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546606 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546606 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeSwing2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x50);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing3>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing3_g____getter_13_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a796d0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing3_g____getter_13_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546607 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546607 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeSwing3;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x58);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing4>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing4_g____getter_14_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79740

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing4_g____getter_14_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546608 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546608 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeSwing4;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x60);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldBladeSwing>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldBladeSwing_g____getter_15_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a797b0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldBladeSwing_g____getter_15_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546609 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546609 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->OldBladeSwing;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x68);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Dodge>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_16_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79820

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_16_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754660a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754660a = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Dodge;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x70);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__FlareLaunch>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__FlareLaunch_g____getter_17_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79890

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__FlareLaunch_g____getter_17_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754660b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754660b = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->FlareLaunch;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x78);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__ThunderspearLaunch>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ThunderspearLaunch_g____getter_18_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79900

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ThunderspearLaunch_g____getter_18_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754660c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754660c = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->ThunderspearLaunch;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x80);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasBurst>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasBurst_g____getter_19_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79970

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasBurst_g____getter_19_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754660d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754660d = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->GasBurst;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x88);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookLaunch>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookLaunch_g____getter_20_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a799e0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookLaunch_g____getter_20_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754660e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754660e = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->HookLaunch;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x90);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldHookLaunch>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldHookLaunch_g____getter_21_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79a50

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldHookLaunch_g____getter_21_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754660f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754660f = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->OldHookLaunch;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x98);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookRetractLeft>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookRetractLeft_g____getter_22_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79ac0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookRetractLeft_g____getter_22_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546610 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546610 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->HookRetractLeft;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xa0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookRetractRight>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookRetractRight_g____getter_23_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79b30

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookRetractRight_g____getter_23_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546611 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546611 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->HookRetractRight;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xa8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookImpact>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookImpact_g____getter_24_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79ba0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookImpact_g____getter_24_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546612 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546612 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->HookImpact;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xb0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookImpactLoud>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookImpactLoud_g____getter_25_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79c10

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookImpactLoud_g____getter_25_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546613 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546613 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->HookImpactLoud;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xb8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasStart>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasStart_g____getter_26_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79c80

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasStart_g____getter_26_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546614 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546614 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->GasStart;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xc0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasLoop>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasLoop_g____getter_27_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79cf0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasLoop_g____getter_27_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546615 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546615 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->GasLoop;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 200);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasEnd>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasEnd_g____getter_28_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79d60

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasEnd_g____getter_28_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546616 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546616 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->GasEnd;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xd0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__ReelIn>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ReelIn_g____getter_29_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79dd0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ReelIn_g____getter_29_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546617 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546617 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->ReelIn;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xd8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__ReelOut>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ReelOut_g____getter_30_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79e40

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ReelOut_g____getter_30_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546618 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546618 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->ReelOut;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xe0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__CrashLand>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__CrashLand_g____getter_31_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79eb0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__CrashLand_g____getter_31_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546619 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546619 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->CrashLand;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xe8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_32_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79f20

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_32_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754661a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754661a = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Jump;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xf0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Land_g____getter_33_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a79f90

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Land_g____getter_33_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754661b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754661b = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Land;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xf8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__NoGas>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__NoGas_g____getter_34_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a000

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__NoGas_g____getter_34_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754661c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754661c = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->NoGas;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x100);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Refill>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_35_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a070

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_35_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754661d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754661d = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Refill;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x108);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Slide>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_36_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a0e0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_36_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754661e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754661e = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Slide;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x110);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep1>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Footstep1_g____getter_37_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a150

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Footstep1_g____getter_37_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754661f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754661f = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Footstep1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x118);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep2>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Footstep2_g____getter_38_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a1c0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Footstep2_g____getter_38_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546620 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546620 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Footstep2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x120);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death1>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death1_g____getter_39_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a230

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death1_g____getter_39_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546621 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546621 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Death1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x128);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death2>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death2_g____getter_40_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a2a0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death2_g____getter_40_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546622 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546622 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Death2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x130);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death3>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death3_g____getter_41_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a310

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death3_g____getter_41_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546623 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546623 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Death3;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x138);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death4>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death4_g____getter_42_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a380

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death4_g____getter_42_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546624 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546624 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Death4;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x140);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death5>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death5_g____getter_43_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a3f0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death5_g____getter_43_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546625 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546625 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Death5;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x148);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Checkpoint>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Checkpoint_g____getter_44_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a460

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Checkpoint_g____getter_44_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546626 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546626 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Checkpoint;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x150);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__TimerTick>g____getter|45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TimerTick_g____getter_45_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a4d0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TimerTick_g____getter_45_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546627 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546627 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->TimerTick;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x158);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__TimerGo>g____getter|46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TimerGo_g____getter_46_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a540

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TimerGo_g____getter_46_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546628 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546628 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->TimerGo;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x160);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GunExplode>g____getter|47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunExplode_g____getter_47_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a5b0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunExplode_g____getter_47_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546629 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546629 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->GunExplode;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x168);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GunExplodeLoud>g____getter|48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunExplodeLoud_g____getter_48_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a620

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunExplodeLoud_g____getter_48_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754662a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754662a = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->GunExplodeLoud;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x170);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__WaterSplash>g____getter|49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__WaterSplash_g____getter_49_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a690

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__WaterSplash_g____getter_49_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754662b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754662b = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->WaterSplash;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x178);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Switchback>g____getter|50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Switchback_g____getter_50_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a700

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Switchback_g____getter_50_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754662c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754662c = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->Switchback;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x180);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot1>g____getter|51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot1_g____getter_51_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a770

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot1_g____getter_51_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754662d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754662d = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->APGShot1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x188);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot2>g____getter|52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot2_g____getter_52_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a7e0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot2_g____getter_52_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754662e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754662e = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->APGShot2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 400);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot3>g____getter|53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot3_g____getter_53_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a850

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot3_g____getter_53_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754662f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754662f = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->APGShot3;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x198);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot4>g____getter|54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot4_g____getter_54_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a8c0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot4_g____getter_54_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546630 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546630 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->APGShot4;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1a0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape1Var1>g____getter|55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var1_g____getter_55_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a930

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var1_g____getter_55_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546631 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546631 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1a8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape1Var2>g____getter|56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var2_g____getter_56_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7a9a0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var2_g____getter_56_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546632 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546632 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1b0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape1Var3>g____getter|57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var3_g____getter_57_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7aa10

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var3_g____getter_57_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546633 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546633 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var3;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1b8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape2Var1>g____getter|58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var1_g____getter_58_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7aa80

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var1_g____getter_58_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546634 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546634 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1c0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape2Var2>g____getter|59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var2_g____getter_59_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7aaf0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var2_g____getter_59_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546635 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546635 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1c8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape2Var3>g____getter|60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var3_g____getter_60_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7ab60

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var3_g____getter_60_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546636 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546636 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var3;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1d0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape3Var1>g____getter|61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var1_g____getter_61_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7abd0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var1_g____getter_61_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546637 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546637 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1d8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape3Var2>g____getter|62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var2_g____getter_62_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7ac40

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var2_g____getter_62_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546638 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546638 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1e0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape3Var3>g____getter|63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var3_g____getter_63_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7acb0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var3_g____getter_63_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546639 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546639 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var3;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1e8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape4Var1>g____getter|64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var1_g____getter_64_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7ad20

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var1_g____getter_64_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754663a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754663a = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1f0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape4Var2>g____getter|65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var2_g____getter_65_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7ad90

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var2_g____getter_65_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754663b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754663b = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1f8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape4Var3>g____getter|66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var3_g____getter_66_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7ae00

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var3_g____getter_66_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754663c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754663c = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var3;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x200);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot1>g____getter|67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot1_g____getter_67_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7ae70

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot1_g____getter_67_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754663d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754663d = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x208);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot2>g____getter|68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot2_g____getter_68_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7aee0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot2_g____getter_68_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754663e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754663e = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x210);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot3>g____getter|69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot3_g____getter_69_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7af50

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot3_g____getter_69_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754663f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754663f = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot3;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x218);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot4>g____getter|70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot4_g____getter_70_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7afc0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot4_g____getter_70_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546640 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546640 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot4;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x220);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShotDouble1>g____getter|71_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShotDouble1_g____getter_71_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7b030

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShotDouble1_g____getter_71_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546641 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546641 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShotDouble1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x228);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShotDouble2>g____getter|72_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShotDouble2_g____getter_72_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7b0a0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShotDouble2_g____getter_72_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546642 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546642 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShotDouble2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x230);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape1Var1>g____getter|73_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape1Var1_g____getter_73_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7b110

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape1Var1_g____getter_73_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546643 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546643 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape1Var1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x238);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape1Var2>g____getter|74_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape1Var2_g____getter_74_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7b180

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape1Var2_g____getter_74_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546644 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546644 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape1Var2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x240);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape2Var1>g____getter|75_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape2Var1_g____getter_75_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7b1f0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape2Var1_g____getter_75_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546645 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546645 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape2Var1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x248);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape2Var2>g____getter|76_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape2Var2_g____getter_76_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7b260

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape2Var2_g____getter_76_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546646 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546646 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape2Var2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x250);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape3Var1>g____getter|77_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape3Var1_g____getter_77_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7b2d0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape3Var1_g____getter_77_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546647 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546647 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape3Var1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 600);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape3Var2>g____getter|78_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape3Var2_g____getter_78_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7b340

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape3Var2_g____getter_78_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546648 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546648 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->AHSSNape3Var2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x260);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__TSLaunch1>g____getter|79_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TSLaunch1_g____getter_79_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7b3b0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TSLaunch1_g____getter_79_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546649 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546649 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->TSLaunch1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x268);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__TSLaunch2>g____getter|80_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TSLaunch2_g____getter_80_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x5a7b420

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TSLaunch2_g____getter_80_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754664a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754664a = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return (Il2CppObject *)TypeInfo_Characters_HumanSounds->static_fields->TSLaunch2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x270);
}


// CustomLogic.CustomLogicHumanSoundEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanSoundEnum___ctor (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x5a71480

void CustomLogic_CustomLogicHumanSoundEnum___ctor
               (CustomLogic_CustomLogicHumanSoundEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546489 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546489 = '\x01';
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


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeBreak
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeBreak (const MethodInfo* method);
// 0x5a714f0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeBreak(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754648a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754648a = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeBreak;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeHit (const MethodInfo* method);
// 0x5a71560

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeHit(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754648b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754648b = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeHit;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_OldBladeHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_OldBladeHit (const MethodInfo* method);
// 0x5a715d0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_OldBladeHit(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754648c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754648c = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->OldBladeHit;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x10);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_NapeHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_NapeHit (const MethodInfo* method);
// 0x5a71640

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_NapeHit(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754648d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754648d = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->NapeHit;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x18);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_LimbHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_LimbHit (const MethodInfo* method);
// 0x5a716b0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_LimbHit(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754648e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754648e = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->LimbHit;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x20);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_OldNapeHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_OldNapeHit (const MethodInfo* method);
// 0x5a71720

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_OldNapeHit(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754648f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754648f = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->OldNapeHit;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x28);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeReloadAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeReloadAir (const MethodInfo* method);
// 0x5a71790

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeReloadAir(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546490 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546490 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeReloadAir;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x30);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeReloadGround
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeReloadGround (const MethodInfo* method);
// 0x5a71800

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeReloadGround(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546491 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546491 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeReloadGround;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x38);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GunReload
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GunReload (const MethodInfo* method);
// 0x5a71870

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GunReload(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546492 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->GunReload;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x40);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing1 (const MethodInfo* method);
// 0x5a718e0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546493 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546493 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeSwing1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x48);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing2 (const MethodInfo* method);
// 0x5a71950

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546494 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546494 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeSwing2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x50);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing3 (const MethodInfo* method);
// 0x5a719c0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing3(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546495 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546495 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeSwing3;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x58);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing4 (const MethodInfo* method);
// 0x5a71a30

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing4(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546496 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546496 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeSwing4;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x60);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_OldBladeSwing
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_OldBladeSwing (const MethodInfo* method);
// 0x5a71aa0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_OldBladeSwing(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546497 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546497 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->OldBladeSwing;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x68);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Dodge
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Dodge (const MethodInfo* method);
// 0x5a71b10

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Dodge(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546498 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546498 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->Dodge;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x70);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_FlareLaunch
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_FlareLaunch (const MethodInfo* method);
// 0x5a71b80

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_FlareLaunch(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546499 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_07546499 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->FlareLaunch;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x78);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_ThunderspearLaunch
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_ThunderspearLaunch (const MethodInfo* method);
// 0x5a71bf0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_ThunderspearLaunch(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754649a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754649a = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->ThunderspearLaunch;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x80);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GasBurst
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GasBurst (const MethodInfo* method);
// 0x5a71c60

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GasBurst(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754649b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754649b = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->GasBurst;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x88);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookLaunch
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookLaunch (const MethodInfo* method);
// 0x5a71cd0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookLaunch(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754649c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754649c = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->HookLaunch;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x90);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_OldHookLaunch
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_OldHookLaunch (const MethodInfo* method);
// 0x5a71d40

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_OldHookLaunch(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754649d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754649d = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->OldHookLaunch;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x98);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookRetractLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookRetractLeft (const MethodInfo* method);
// 0x5a71db0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookRetractLeft(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754649e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754649e = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->HookRetractLeft;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xa0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookRetractRight
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookRetractRight (const MethodInfo* method);
// 0x5a71e20

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookRetractRight(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754649f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_0754649f = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->HookRetractRight;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xa8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookImpact
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookImpact (const MethodInfo* method);
// 0x5a71e90

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookImpact(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464a0 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->HookImpact;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xb0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookImpactLoud
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookImpactLoud (const MethodInfo* method);
// 0x5a71f00

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookImpactLoud(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464a1 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->HookImpactLoud;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xb8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GasStart
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GasStart (const MethodInfo* method);
// 0x5a71f70

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GasStart(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464a2 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->GasStart;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xc0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GasLoop
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GasLoop (const MethodInfo* method);
// 0x5a71fe0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GasLoop(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464a3 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->GasLoop;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 200);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GasEnd
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GasEnd (const MethodInfo* method);
// 0x5a72050

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GasEnd(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464a4 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->GasEnd;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xd0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_ReelIn
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_ReelIn (const MethodInfo* method);
// 0x5a720c0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_ReelIn(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464a5 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->ReelIn;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xd8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_ReelOut
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_ReelOut (const MethodInfo* method);
// 0x5a72130

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_ReelOut(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464a6 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->ReelOut;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xe0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_CrashLand
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_CrashLand (const MethodInfo* method);
// 0x5a721a0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_CrashLand(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464a7 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->CrashLand;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xe8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Jump (const MethodInfo* method);
// 0x5a72210

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Jump(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464a8 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->Jump;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xf0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Land (const MethodInfo* method);
// 0x5a72280

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Land(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464a9 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->Land;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0xf8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_NoGas
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_NoGas (const MethodInfo* method);
// 0x5a722f0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_NoGas(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464aa = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->NoGas;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x100);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Refill
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Refill (const MethodInfo* method);
// 0x5a72360

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Refill(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464ab = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->Refill;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x108);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Slide
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Slide (const MethodInfo* method);
// 0x5a723d0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Slide(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464ac = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->Slide;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x110);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Footstep1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Footstep1 (const MethodInfo* method);
// 0x5a72440

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Footstep1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464ad = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->Footstep1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x118);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Footstep2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Footstep2 (const MethodInfo* method);
// 0x5a724b0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Footstep2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464ae = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->Footstep2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x120);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death1 (const MethodInfo* method);
// 0x5a72520

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464af = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->Death1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x128);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death2 (const MethodInfo* method);
// 0x5a72590

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464b0 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->Death2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x130);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death3 (const MethodInfo* method);
// 0x5a72600

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death3(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464b1 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->Death3;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x138);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death4 (const MethodInfo* method);
// 0x5a72670

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death4(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464b2 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->Death4;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x140);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death5
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death5 (const MethodInfo* method);
// 0x5a726e0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death5(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464b3 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->Death5;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x148);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Checkpoint
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Checkpoint (const MethodInfo* method);
// 0x5a72750

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Checkpoint(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464b4 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->Checkpoint;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x150);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_TimerTick
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_TimerTick (const MethodInfo* method);
// 0x5a727c0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_TimerTick(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464b5 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->TimerTick;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x158);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_TimerGo
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_TimerGo (const MethodInfo* method);
// 0x5a72830

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_TimerGo(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464b6 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->TimerGo;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x160);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GunExplode
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GunExplode (const MethodInfo* method);
// 0x5a728a0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GunExplode(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464b7 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->GunExplode;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x168);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GunExplodeLoud
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GunExplodeLoud (const MethodInfo* method);
// 0x5a72910

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GunExplodeLoud(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464b8 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->GunExplodeLoud;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x170);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_WaterSplash
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_WaterSplash (const MethodInfo* method);
// 0x5a72980

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_WaterSplash(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464b9 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->WaterSplash;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x178);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Switchback
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Switchback (const MethodInfo* method);
// 0x5a729f0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Switchback(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464ba = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->Switchback;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x180);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_APGShot1 (const MethodInfo* method);
// 0x5a72a60

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_APGShot1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464bb = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->APGShot1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x188);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_APGShot2 (const MethodInfo* method);
// 0x5a72ad0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_APGShot2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464bc = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->APGShot2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 400);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_APGShot3 (const MethodInfo* method);
// 0x5a72b40

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_APGShot3(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464bd = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->APGShot3;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x198);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_APGShot4 (const MethodInfo* method);
// 0x5a72bb0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_APGShot4(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464be = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->APGShot4;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1a0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape1Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var1 (const MethodInfo* method);
// 0x5a72c20

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464bf = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1a8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape1Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var2 (const MethodInfo* method);
// 0x5a72c90

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464c0 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1b0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape1Var3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var3 (const MethodInfo* method);
// 0x5a72d00

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var3(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464c1 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeNape1Var3;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1b8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape2Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var1 (const MethodInfo* method);
// 0x5a72d70

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464c2 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1c0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape2Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var2 (const MethodInfo* method);
// 0x5a72de0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464c3 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1c8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape2Var3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var3 (const MethodInfo* method);
// 0x5a72e50

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var3(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464c4 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeNape2Var3;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1d0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape3Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var1 (const MethodInfo* method);
// 0x5a72ec0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464c5 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1d8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape3Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var2 (const MethodInfo* method);
// 0x5a72f30

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464c6 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1e0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape3Var3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var3 (const MethodInfo* method);
// 0x5a72fa0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var3(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464c7 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeNape3Var3;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1e8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape4Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var1 (const MethodInfo* method);
// 0x5a73010

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464c8 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1f0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape4Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var2 (const MethodInfo* method);
// 0x5a73080

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464c9 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x1f8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape4Var3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var3 (const MethodInfo* method);
// 0x5a730f0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var3(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464ca = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->BladeNape4Var3;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x200);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot1 (const MethodInfo* method);
// 0x5a73160

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464cb = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x208);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot2 (const MethodInfo* method);
// 0x5a731d0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464cc = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x210);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot3 (const MethodInfo* method);
// 0x5a73240

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot3(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464cd = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot3;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x218);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot4 (const MethodInfo* method);
// 0x5a732b0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot4(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464ce = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShot4;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x220);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShotDouble1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShotDouble1 (const MethodInfo* method);
// 0x5a73320

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShotDouble1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464cf = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShotDouble1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x228);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShotDouble2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShotDouble2 (const MethodInfo* method);
// 0x5a73390

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShotDouble2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464d0 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->AHSSGunShotDouble2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x230);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape1Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape1Var1 (const MethodInfo* method);
// 0x5a73400

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape1Var1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464d1 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->AHSSNape1Var1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x238);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape1Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape1Var2 (const MethodInfo* method);
// 0x5a73470

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape1Var2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464d2 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->AHSSNape1Var2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x240);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape2Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape2Var1 (const MethodInfo* method);
// 0x5a734e0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape2Var1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464d3 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->AHSSNape2Var1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x248);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape2Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape2Var2 (const MethodInfo* method);
// 0x5a73550

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape2Var2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464d4 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->AHSSNape2Var2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x250);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape3Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape3Var1 (const MethodInfo* method);
// 0x5a735c0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape3Var1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464d5 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->AHSSNape3Var1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 600);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape3Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape3Var2 (const MethodInfo* method);
// 0x5a73630

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape3Var2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464d6 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->AHSSNape3Var2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x260);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_TSLaunch1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_TSLaunch1 (const MethodInfo* method);
// 0x5a736a0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_TSLaunch1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464d7 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->TSLaunch1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x268);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_TSLaunch2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_TSLaunch2 (const MethodInfo* method);
// 0x5a73710

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_TSLaunch2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075464d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSounds);
    Il2CppMethodInitialized_075464d8 = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSounds);
    return TypeInfo_Characters_HumanSounds->static_fields->TSLaunch2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_HumanSounds)->static_fields + 0x270);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_ClassName (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x5a73780

System_String_o *
CustomLogic_CustomLogicHumanSoundEnum__get_ClassName
          (CustomLogic_CustomLogicHumanSoundEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075464d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"HumanSoundEnum");
    Il2CppMethodInitialized_075464d9 = '\x01';
  }
  return "HumanSoundEnum";
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHumanSoundEnum__get_IsAbstract (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x5a737b0

bool CustomLogic_CustomLogicHumanSoundEnum__get_IsAbstract
               (CustomLogic_CustomLogicHumanSoundEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHumanSoundEnum__get_IsStatic (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x5a737c0

bool CustomLogic_CustomLogicHumanSoundEnum__get_IsStatic
               (CustomLogic_CustomLogicHumanSoundEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHumanSoundEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x5a737d0

bool CustomLogic_CustomLogicHumanSoundEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicHumanSoundEnum_o *__this,MethodInfo *method)

{
  return true;
}


