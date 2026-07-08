// Type: CustomLogic.CustomLogicHumanSoundEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHumanSoundEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicHumanSoundEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHumanSoundEnum_o* CustomLogic_CustomLogicHumanSoundEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e5de40

CustomLogic_CustomLogicHumanSoundEnum_o *
CustomLogic_CustomLogicHumanSoundEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_057030ac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanSoundEnum);
    DAT_057030ac = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicHumanSoundEnum);
      if (DAT_0570305d == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_0570305d = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicHumanSoundEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicHumanSoundEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicHumanSoundEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHumanSoundEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e5df60

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  undefined8 uVar4;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar5;
  CustomLogic_CLPropertyBinding_T__o *pCVar6;
  
  if (DAT_057030ad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Death4");
    il2cpp_init_method_metadata(&"AHSSGunShotDouble2");
    il2cpp_init_method_metadata(&"AHSSNape2Var1");
    il2cpp_init_method_metadata(&"TSLaunch2");
    il2cpp_init_method_metadata(&"AHSSNape1Var1");
    il2cpp_init_method_metadata(&"BladeNape1Var2");
    il2cpp_init_method_metadata(&"BladeNape3Var1");
    il2cpp_init_method_metadata(&"BladeNape4Var1");
    il2cpp_init_method_metadata(&"ThunderspearLaunch");
    il2cpp_init_method_metadata(&"GasEnd");
    il2cpp_init_method_metadata(&"NoGas");
    il2cpp_init_method_metadata(&"NapeHit");
    il2cpp_init_method_metadata(&"Footstep1");
    il2cpp_init_method_metadata(&"GunExplode");
    il2cpp_init_method_metadata(&"GasStart");
    il2cpp_init_method_metadata(&"BladeSwing2");
    il2cpp_init_method_metadata(&"AHSSNape3Var1");
    il2cpp_init_method_metadata(&"BladeHit");
    il2cpp_init_method_metadata(&"HookImpact");
    il2cpp_init_method_metadata(&"AHSSGunShot1");
    il2cpp_init_method_metadata(&"Death3");
    il2cpp_init_method_metadata(&"Death1");
    il2cpp_init_method_metadata(&"BladeSwing3");
    il2cpp_init_method_metadata(&"BladeBreak");
    il2cpp_init_method_metadata(&"AHSSNape1Var2");
    il2cpp_init_method_metadata(&"LimbHit");
    il2cpp_init_method_metadata(&"APGShot1");
    il2cpp_init_method_metadata(&"BladeNape2Var2");
    il2cpp_init_method_metadata(&"Death5");
    il2cpp_init_method_metadata(&"HookRetractRight");
    il2cpp_init_method_metadata(&"BladeSwing1");
    il2cpp_init_method_metadata(&"OldBladeHit");
    il2cpp_init_method_metadata(&"Land");
    il2cpp_init_method_metadata(&"APGShot2");
    il2cpp_init_method_metadata(&"BladeNape1Var1");
    il2cpp_init_method_metadata(&"AHSSGunShotDouble1");
    il2cpp_init_method_metadata(&"BladeSwing4");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"BladeNape1Var3");
    il2cpp_init_method_metadata(&"CrashLand");
    il2cpp_init_method_metadata(&"HookImpactLoud");
    il2cpp_init_method_metadata(&"AHSSGunShot4");
    il2cpp_init_method_metadata(&"Dodge");
    il2cpp_init_method_metadata(&"HookRetractLeft");
    il2cpp_init_method_metadata(&"GunExplodeLoud");
    il2cpp_init_method_metadata(&"AHSSNape3Var2");
    il2cpp_init_method_metadata(&"ReelOut");
    il2cpp_init_method_metadata(&"Refill");
    il2cpp_init_method_metadata(&"Slide");
    il2cpp_init_method_metadata(&"BladeNape2Var1");
    il2cpp_init_method_metadata(&"BladeNape2Var3");
    il2cpp_init_method_metadata(&"BladeNape3Var3");
    il2cpp_init_method_metadata(&"HookLaunch");
    il2cpp_init_method_metadata(&"GasLoop");
    il2cpp_init_method_metadata(&"FlareLaunch");
    il2cpp_init_method_metadata(&"AHSSNape2Var2");
    il2cpp_init_method_metadata(&"Footstep2");
    il2cpp_init_method_metadata(&"Switchback");
    il2cpp_init_method_metadata(&"APGShot4");
    il2cpp_init_method_metadata(&"BladeReloadGround");
    il2cpp_init_method_metadata(&"Death2");
    il2cpp_init_method_metadata(&"APGShot3");
    il2cpp_init_method_metadata(&"BladeNape4Var3");
    il2cpp_init_method_metadata(&"BladeNape4Var2");
    il2cpp_init_method_metadata(&"AHSSGunShot2");
    il2cpp_init_method_metadata(&"GunReload");
    il2cpp_init_method_metadata(&"Checkpoint");
    il2cpp_init_method_metadata(&"BladeReloadAir");
    il2cpp_init_method_metadata(&"OldNapeHit");
    il2cpp_init_method_metadata(&"AHSSGunShot3");
    il2cpp_init_method_metadata(&"WaterSplash");
    il2cpp_init_method_metadata(&"OldBladeSwing");
    il2cpp_init_method_metadata(&"BladeNape3Var2");
    il2cpp_init_method_metadata(&"GasBurst");
    il2cpp_init_method_metadata(&"ReelIn");
    il2cpp_init_method_metadata(&"OldHookLaunch");
    il2cpp_init_method_metadata(&"TSLaunch1");
    DAT_057030ad = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x6c198db2) {
    if (uVar1 < 0x40f909fc) {
      if (uVar1 < 0x1bab3e7b) {
        if (uVar1 < 0x16ab369c) {
          if (uVar1 < 0xe1ef32e) {
            if (uVar1 == 0x6d9263a) {
              bVar2 = System_String__op_Equality(name,"GasStart",(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                if (DAT_057030c6 == '\0') {
                  il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GasStart_g____g);
                  il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                  il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                  il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
                  DAT_057030c6 = '\x01';
                }
                pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
                System_Func<object__object>___ctor();
                pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                CustomLogic_CLPropertyBinding<object>___ctor
                          (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                return (CustomLogic_ICLMemberBinding_o *)pCVar6;
              }
            }
            else if (uVar1 == 0xe1ef32d) {
              bVar2 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                if (DAT_057030cc == '\0') {
                  il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jump_g____gette);
                  il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                  il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                  il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
                  DAT_057030cc = '\x01';
                }
                pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
                System_Func<object__object>___ctor();
                pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                CustomLogic_CLPropertyBinding<object>___ctor
                          (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                return (CustomLogic_ICLMemberBinding_o *)pCVar6;
              }
            }
          }
          else if (uVar1 == 0x15ab3508) {
            bVar2 = System_String__op_Equality(name,"Death5",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057030d7 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Death5_g____get);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
                DAT_057030d7 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0x16ab369b) {
            bVar2 = System_String__op_Equality(name,"Death4",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057030d6 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Death4_g____get);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
                DAT_057030d6 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
        }
        else if (uVar1 < 0x19ab3b55) {
          if (uVar1 == 0x16ed547a) {
            bVar2 = System_String__op_Equality(name,"ReelIn",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057030c9 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ReelIn_g____get);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
                DAT_057030c9 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0x19ab3b54) {
            bVar2 = System_String__op_Equality(name,"Death1",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057030d3 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Death1_g____get);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
                DAT_057030d3 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
        }
        else if (uVar1 == 0x19de4ccf) {
          bVar2 = System_String__op_Equality(name,"GasEnd",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030c8 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GasEnd_g____get);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030c8 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x1a4a6571) {
          bVar2 = System_String__op_Equality(name,"OldNapeHit",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030b3 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OldNapeHit_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030b3 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x1bab3e7a) {
          bVar2 = System_String__op_Equality(name,"Death3",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030d5 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Death3_g____get);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030d5 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 < 0x2ce556a4) {
        if (uVar1 < 0x1cab400e) {
          if (uVar1 == 0x1be90ac3) {
            bVar2 = System_String__op_Equality(name,"Footstep2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057030d2 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Footstep2_g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
                DAT_057030d2 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0x1cab400d) {
            bVar2 = System_String__op_Equality(name,"Death2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057030d4 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Death2_g____get);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
                DAT_057030d4 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
        }
        else if (uVar1 == 0x1ce90c56) {
          bVar2 = System_String__op_Equality(name,"Footstep1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030d1 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Footstep1_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030d1 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x24424353) {
          bVar2 = System_String__op_Equality(name,"BladeReloadGround",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030b5 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeReloadGrou);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030b5 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x2ce556a3) {
          bVar2 = System_String__op_Equality(name,"TSLaunch2",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030fa == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TSLaunch2_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030fa = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 < 0x31598f8f) {
        if (uVar1 == 0x2de55836) {
          bVar2 = System_String__op_Equality(name,"TSLaunch1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030f9 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TSLaunch1_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030f9 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x31598f8e) {
          bVar2 = System_String__op_Equality(name,"LimbHit",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030b2 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LimbHit_g____ge);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030b2 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x322726f4) {
        bVar2 = System_String__op_Equality(name,"BladeBreak",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030ae == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeBreak_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030ae = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x39c5bbac) {
        bVar2 = System_String__op_Equality(name,"GunReload",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030b6 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GunReload_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030b6 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x40f909fb) {
        bVar2 = System_String__op_Equality(name,"AHSSGunShot1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030ed == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSGunShot1_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030ed = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x548b671f) {
      if (uVar1 < 0x474347a4) {
        if (uVar1 < 0x42f90d22) {
          if (uVar1 == 0x41f90b8e) {
            bVar2 = System_String__op_Equality(name,"AHSSGunShot2",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057030ee == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSGunShot2_g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
                DAT_057030ee = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0x42f90d21) {
            bVar2 = System_String__op_Equality(name,"AHSSGunShot3",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057030ef == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSGunShot3_g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
                DAT_057030ef = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
        }
        else if (uVar1 == 0x43f90eb4) {
          bVar2 = System_String__op_Equality(name,"AHSSGunShot4",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030f0 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSGunShot4_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030f0 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x474347a3) {
          bVar2 = System_String__op_Equality(name,"BladeNape2Var1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030e4 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape2Var1);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030e4 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 < 0x49434aca) {
        if (uVar1 == 0x48434936) {
          bVar2 = System_String__op_Equality(name,"BladeNape2Var2",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030e5 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape2Var2);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030e5 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x49434ac9) {
          bVar2 = System_String__op_Equality(name,"BladeNape2Var3",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030e6 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape2Var3);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030e6 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x4bbbd0ac) {
        bVar2 = System_String__op_Equality(name,"AHSSGunShotDouble1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030f1 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSGunShotDoub);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030f1 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x4ebbd565) {
        bVar2 = System_String__op_Equality(name,"AHSSGunShotDouble2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030f2 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSGunShotDoub);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030f2 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x548b671e) {
        bVar2 = System_String__op_Equality(name,"Switchback",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030dc == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Switchback_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030dc = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x5c39b690) {
      if (uVar1 < 0x5722e904) {
        if (uVar1 == 0x55c3fbee) {
          bVar2 = System_String__op_Equality(name,"HookRetractLeft",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030c2 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HookRetractLeft);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030c2 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x5722e903) {
          bVar2 = System_String__op_Equality(name,"AHSSNape2Var2",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030f6 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSNape2Var2_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030f6 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x5822ea96) {
        bVar2 = System_String__op_Equality(name,"AHSSNape2Var1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030f5 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSNape2Var1_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030f5 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x5b39b4fc) {
        bVar2 = System_String__op_Equality(name,"BladeNape4Var2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030eb == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape4Var2);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030eb = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x5c39b68f) {
        bVar2 = System_String__op_Equality(name,"BladeNape4Var3",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030ec == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape4Var3);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030ec = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x6082b447) {
      if (uVar1 == 0x5e39b9b5) {
        bVar2 = System_String__op_Equality(name,"BladeNape4Var1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030ea == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape4Var1);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030ea = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x6082b446) {
        bVar2 = System_String__op_Equality(name,"BladeHit",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030af == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeHit_g____g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030af = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x6083d558) {
      bVar2 = System_String__op_Equality(name,"GasBurst",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057030bf == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GasBurst_g____g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          DAT_057030bf = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x66052020) {
      bVar2 = System_String__op_Equality(name,"NapeHit",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057030b1 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NapeHit_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          DAT_057030b1 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x6c198db1) {
      bVar2 = System_String__op_Equality(name,"Refill",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057030cf == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Refill_g____get);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          DAT_057030cf = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xa114d214) {
    if (uVar1 < 0x9460855f) {
      if (uVar1 < 0x733d2586) {
        if (uVar1 < 0x703d20cd) {
          if (uVar1 == 0x6d3d1c13) {
            bVar2 = System_String__op_Equality(name,"BladeSwing4",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057030ba == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeSwing4_g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
                DAT_057030ba = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
          else if (uVar1 == 0x703d20cc) {
            bVar2 = System_String__op_Equality(name,"BladeSwing1",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_057030b7 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeSwing1_g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
                DAT_057030b7 = '\x01';
              }
              pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              System_Func<object__object>___ctor();
              pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              return (CustomLogic_ICLMemberBinding_o *)pCVar6;
            }
          }
        }
        else if (uVar1 == 0x723d23f2) {
          bVar2 = System_String__op_Equality(name,"BladeSwing3",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030b9 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeSwing3_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030b9 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x733d2585) {
          bVar2 = System_String__op_Equality(name,"BladeSwing2",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030b8 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeSwing2_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030b8 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 < 0x8cd14bae) {
        if (uVar1 == 0x8cd14bad) {
          bVar2 = System_String__op_Equality(name,"HookLaunch",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030c0 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HookLaunch_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030c0 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x799ccc7d) {
          bVar2 = System_String__op_Equality(name,"ThunderspearLaunch",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030be == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ThunderspearLau);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030be = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x8eeafb7d) {
        bVar2 = System_String__op_Equality(name,"CrashLand",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030cb == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CrashLand_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030cb = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x936083cb) {
        bVar2 = System_String__op_Equality(name,"AHSSNape1Var1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030f3 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSNape1Var1_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030f3 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x9460855e) {
        bVar2 = System_String__op_Equality(name,"AHSSNape1Var2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030f4 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSNape1Var2_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030f4 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x9cadf10f) {
      if (uVar1 < 0x9a1b4679) {
        if (uVar1 == 0x99b7f232) {
          bVar2 = System_String__op_Equality(name,"GunExplodeLoud",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030da == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GunExplodeLoud);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030da = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0x9a1b4678) {
          bVar2 = System_String__op_Equality(name,"BladeNape3Var1",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030e7 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape3Var1);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030e7 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0x9aadede8) {
        bVar2 = System_String__op_Equality(name,"APGShot1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030dd == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__APGShot1_g____g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030dd = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x9c1b499e) {
        bVar2 = System_String__op_Equality(name,"BladeNape3Var3",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030e9 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape3Var3);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030e9 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x9cadf10e) {
        bVar2 = System_String__op_Equality(name,"APGShot3",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030df == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__APGShot3_g____g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030df = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0x9dadf2a2) {
      if (uVar1 == 0x9d1b4b31) {
        bVar2 = System_String__op_Equality(name,"BladeNape3Var2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030e8 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape3Var2);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030e8 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x9dadf2a1) {
        bVar2 = System_String__op_Equality(name,"APGShot2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030de == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__APGShot2_g____g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030de = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0x9f3e662c) {
      bVar2 = System_String__op_Equality(name,"BladeReloadAir",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057030b4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeReloadAir);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          DAT_057030b4 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x9fadf5c7) {
      bVar2 = System_String__op_Equality(name,"APGShot4",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057030e0 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__APGShot4_g____g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          DAT_057030e0 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xa114d213) {
      bVar2 = System_String__op_Equality(name,"ReelOut",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057030ca == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ReelOut_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          DAT_057030ca = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xe2620ba0) {
    if (uVar1 < 0xcd507f81) {
      if (uVar1 < 0xbd9f8bfb) {
        if (uVar1 == 0xbb51b893) {
          bVar2 = System_String__op_Equality(name,"NoGas",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030ce == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NoGas_g____gett);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030ce = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
        else if (uVar1 == 0xbd9f8bfa) {
          bVar2 = System_String__op_Equality(name,"OldHookLaunch",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057030c1 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OldHookLaunch_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
              DAT_057030c1 = '\x01';
            }
            pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            System_Func<object__object>___ctor();
            pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            return (CustomLogic_ICLMemberBinding_o *)pCVar6;
          }
        }
      }
      else if (uVar1 == 0xc30f2900) {
        bVar2 = System_String__op_Equality(name,"GasLoop",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030c7 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GasLoop_g____ge);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030c7 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xcb990166) {
        bVar2 = System_String__op_Equality(name,"GunExplode",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030d9 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GunExplode_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030d9 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xcd507f80) {
        bVar2 = System_String__op_Equality(name,"AHSSNape3Var2",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030f8 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSNape3Var2_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030f8 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 < 0xd9202fa7) {
      if (uVar1 == 0xd0508439) {
        bVar2 = System_String__op_Equality(name,"AHSSNape3Var1",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030f7 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSNape3Var1_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030f7 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xd9202fa6) {
        bVar2 = System_String__op_Equality(name,"OldBladeSwing",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030bb == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OldBladeSwing_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030bb = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0xdb968bd5) {
      bVar2 = System_String__op_Equality(name,"OldBladeHit",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057030b0 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OldBladeHit_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          DAT_057030b0 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xdbdf1f18) {
      bVar2 = System_String__op_Equality(name,"HookImpactLoud",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057030c5 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HookImpactLoud);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          DAT_057030c5 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xe2620b9f) {
      bVar2 = System_String__op_Equality(name,"Checkpoint",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057030d8 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Checkpoint_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          DAT_057030d8 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xf5697c89) {
    if (uVar1 < 0xee1682bd) {
      if (uVar1 == 0xea62a4c3) {
        bVar2 = System_String__op_Equality(name,"HookRetractRight",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030c3 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HookRetractRigh);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030c3 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0xee1682bc) {
        bVar2 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057030cd == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Land_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
            DAT_057030cd = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
    }
    else if (uVar1 == 0xf3dfd300) {
      bVar2 = System_String__op_Equality(name,"HookImpact",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057030c4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HookImpact_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          DAT_057030c4 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xf526d670) {
      bVar2 = System_String__op_Equality(name,"Dodge",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057030bc == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Dodge_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          DAT_057030bc = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xf5697c88) {
      bVar2 = System_String__op_Equality(name,"FlareLaunch",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057030bd == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FlareLaunch_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          DAT_057030bd = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 < 0xfbb7b789) {
    if (uVar1 == 0xf7aaccdf) {
      bVar2 = System_String__op_Equality(name,"WaterSplash",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057030db == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WaterSplash_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          DAT_057030db = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0xfbb7b788) {
      bVar2 = System_String__op_Equality(name,"BladeNape1Var3",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057030e3 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape1Var3);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
          DAT_057030e3 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
  }
  else if (uVar1 == 0xfcb7b91b) {
    bVar2 = System_String__op_Equality(name,"BladeNape1Var2",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057030e2 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape1Var2);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
        DAT_057030e2 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xfdb7baae) {
    bVar2 = System_String__op_Equality(name,"BladeNape1Var1",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057030e1 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape1Var1);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
        DAT_057030e1 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xffc7c086) {
    bVar2 = System_String__op_Equality(name,"Slide",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057030d0 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Slide_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
        DAT_057030d0 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicHumanSoundEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeBreak
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeBreak (const MethodInfo* method);
// 0x3e5fb70

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeBreak
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030ae == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeBreak_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030ae = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeHit (const MethodInfo* method);
// 0x3e5fc10

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeHit
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030af == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeHit_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030af = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldBladeHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldBladeHit (const MethodInfo* method);
// 0x3e5fcb0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldBladeHit
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030b0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OldBladeHit_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030b0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__NapeHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__NapeHit (const MethodInfo* method);
// 0x3e5fd50

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__NapeHit(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030b1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NapeHit_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030b1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__LimbHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__LimbHit (const MethodInfo* method);
// 0x3e5fdf0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__LimbHit(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030b2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LimbHit_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030b2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldNapeHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldNapeHit (const MethodInfo* method);
// 0x3e5fe90

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldNapeHit
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030b3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OldNapeHit_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030b3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeReloadAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeReloadAir (const MethodInfo* method);
// 0x3e5ff30

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeReloadAir
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030b4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeReloadAir);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030b4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeReloadGround
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeReloadGround (const MethodInfo* method);
// 0x3e5ffd0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeReloadGround
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030b5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeReloadGrou);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030b5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GunReload
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunReload (const MethodInfo* method);
// 0x3e60070

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunReload
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030b6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GunReload_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030b6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing1 (const MethodInfo* method);
// 0x3e60110

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030b7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeSwing1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030b7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing2 (const MethodInfo* method);
// 0x3e601b0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030b8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeSwing2_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030b8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing3 (const MethodInfo* method);
// 0x3e60250

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing3
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030b9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeSwing3_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030b9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeSwing4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing4 (const MethodInfo* method);
// 0x3e602f0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeSwing4
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030ba == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeSwing4_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030ba = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldBladeSwing
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldBladeSwing (const MethodInfo* method);
// 0x3e60390

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldBladeSwing
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030bb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OldBladeSwing_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030bb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Dodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Dodge (const MethodInfo* method);
// 0x3e60430

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Dodge(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030bc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Dodge_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030bc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__FlareLaunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__FlareLaunch (const MethodInfo* method);
// 0x3e604d0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__FlareLaunch
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030bd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FlareLaunch_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030bd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__ThunderspearLaunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ThunderspearLaunch (const MethodInfo* method);
// 0x3e60570

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ThunderspearLaunch
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030be == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ThunderspearLau);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030be = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasBurst
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasBurst (const MethodInfo* method);
// 0x3e60610

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasBurst
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030bf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GasBurst_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030bf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookLaunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookLaunch (const MethodInfo* method);
// 0x3e606b0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookLaunch
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030c0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HookLaunch_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030c0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__OldHookLaunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldHookLaunch (const MethodInfo* method);
// 0x3e60750

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__OldHookLaunch
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030c1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__OldHookLaunch_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030c1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookRetractLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookRetractLeft (const MethodInfo* method);
// 0x3e607f0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookRetractLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030c2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HookRetractLeft);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030c2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookRetractRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookRetractRight (const MethodInfo* method);
// 0x3e60890

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookRetractRight
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030c3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HookRetractRigh);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030c3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookImpact
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookImpact (const MethodInfo* method);
// 0x3e60930

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookImpact
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030c4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HookImpact_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030c4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__HookImpactLoud
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookImpactLoud (const MethodInfo* method);
// 0x3e609d0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__HookImpactLoud
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030c5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HookImpactLoud);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030c5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasStart
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasStart (const MethodInfo* method);
// 0x3e60a70

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasStart
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030c6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GasStart_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030c6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasLoop
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasLoop (const MethodInfo* method);
// 0x3e60b10

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasLoop(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030c7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GasLoop_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030c7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GasEnd
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasEnd (const MethodInfo* method);
// 0x3e60bb0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GasEnd(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030c8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GasEnd_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030c8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__ReelIn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ReelIn (const MethodInfo* method);
// 0x3e60c50

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ReelIn(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030c9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ReelIn_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030c9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__ReelOut
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ReelOut (const MethodInfo* method);
// 0x3e60cf0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__ReelOut(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030ca == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ReelOut_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030ca = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__CrashLand
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__CrashLand (const MethodInfo* method);
// 0x3e60d90

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__CrashLand
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030cb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CrashLand_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030cb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x3e60e30

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030cc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jump_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030cc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x3e60ed0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030cd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Land_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030cd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__NoGas
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__NoGas (const MethodInfo* method);
// 0x3e60f70

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__NoGas(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030ce == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NoGas_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030ce = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Refill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Refill (const MethodInfo* method);
// 0x3e61010

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Refill(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030cf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Refill_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030cf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Slide
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Slide (const MethodInfo* method);
// 0x3e610b0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Slide(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030d0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Slide_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030d0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Footstep1 (const MethodInfo* method);
// 0x3e61150

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Footstep1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030d1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Footstep1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030d1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Footstep2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Footstep2 (const MethodInfo* method);
// 0x3e611f0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Footstep2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030d2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Footstep2_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030d2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death1 (const MethodInfo* method);
// 0x3e61290

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030d3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Death1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030d3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death2 (const MethodInfo* method);
// 0x3e61330

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030d4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Death2_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030d4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death3 (const MethodInfo* method);
// 0x3e613d0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030d5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Death3_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030d5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death4 (const MethodInfo* method);
// 0x3e61470

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030d6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Death4_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030d6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Death5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death5 (const MethodInfo* method);
// 0x3e61510

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Death5(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Death5_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030d7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Checkpoint
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Checkpoint (const MethodInfo* method);
// 0x3e615b0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Checkpoint
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030d8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Checkpoint_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030d8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GunExplode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunExplode (const MethodInfo* method);
// 0x3e61650

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunExplode
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030d9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GunExplode_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030d9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__GunExplodeLoud
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunExplodeLoud (const MethodInfo* method);
// 0x3e616f0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__GunExplodeLoud
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030da == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__GunExplodeLoud);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030da = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__WaterSplash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__WaterSplash (const MethodInfo* method);
// 0x3e61790

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__WaterSplash
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030db == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WaterSplash_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030db = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__Switchback
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Switchback (const MethodInfo* method);
// 0x3e61830

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__Switchback
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030dc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Switchback_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030dc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot1 (const MethodInfo* method);
// 0x3e618d0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030dd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__APGShot1_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030dd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot2 (const MethodInfo* method);
// 0x3e61970

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030de == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__APGShot2_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030de = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot3 (const MethodInfo* method);
// 0x3e61a10

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot3
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030df == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__APGShot3_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030df = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__APGShot4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot4 (const MethodInfo* method);
// 0x3e61ab0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__APGShot4
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030e0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__APGShot4_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030e0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape1Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var1 (const MethodInfo* method);
// 0x3e61b50

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030e1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape1Var1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030e1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape1Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var2 (const MethodInfo* method);
// 0x3e61bf0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030e2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape1Var2);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030e2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape1Var3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var3 (const MethodInfo* method);
// 0x3e61c90

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape1Var3
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030e3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape1Var3);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030e3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape2Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var1 (const MethodInfo* method);
// 0x3e61d30

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030e4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape2Var1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030e4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape2Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var2 (const MethodInfo* method);
// 0x3e61dd0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030e5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape2Var2);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030e5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape2Var3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var3 (const MethodInfo* method);
// 0x3e61e70

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape2Var3
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape2Var3);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030e6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape3Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var1 (const MethodInfo* method);
// 0x3e61f10

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030e7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape3Var1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030e7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape3Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var2 (const MethodInfo* method);
// 0x3e61fb0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030e8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape3Var2);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030e8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape3Var3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var3 (const MethodInfo* method);
// 0x3e62050

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape3Var3
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030e9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape3Var3);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030e9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape4Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var1 (const MethodInfo* method);
// 0x3e620f0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030ea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape4Var1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030ea = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape4Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var2 (const MethodInfo* method);
// 0x3e62190

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030eb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape4Var2);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030eb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__BladeNape4Var3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var3 (const MethodInfo* method);
// 0x3e62230

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__BladeNape4Var3
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030ec == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__BladeNape4Var3);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030ec = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot1 (const MethodInfo* method);
// 0x3e622d0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030ed == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSGunShot1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030ed = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot2 (const MethodInfo* method);
// 0x3e62370

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030ee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSGunShot2_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030ee = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot3 (const MethodInfo* method);
// 0x3e62410

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot3
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030ef == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSGunShot3_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030ef = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShot4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot4 (const MethodInfo* method);
// 0x3e624b0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShot4
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030f0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSGunShot4_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030f0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShotDouble1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShotDouble1 (const MethodInfo* method);
// 0x3e62550

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShotDouble1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030f1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSGunShotDoub);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030f1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSGunShotDouble2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShotDouble2 (const MethodInfo* method);
// 0x3e625f0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSGunShotDouble2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030f2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSGunShotDoub);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030f2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape1Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape1Var1 (const MethodInfo* method);
// 0x3e62690

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape1Var1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030f3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSNape1Var1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030f3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape1Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape1Var2 (const MethodInfo* method);
// 0x3e62730

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape1Var2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030f4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSNape1Var2_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030f4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape2Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape2Var1 (const MethodInfo* method);
// 0x3e627d0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape2Var1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030f5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSNape2Var1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030f5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape2Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape2Var2 (const MethodInfo* method);
// 0x3e62870

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape2Var2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030f6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSNape2Var2_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030f6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape3Var1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape3Var1 (const MethodInfo* method);
// 0x3e62910

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape3Var1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030f7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSNape3Var1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030f7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__AHSSNape3Var2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape3Var2 (const MethodInfo* method);
// 0x3e629b0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__AHSSNape3Var2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030f8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AHSSNape3Var2_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030f8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__TSLaunch1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TSLaunch1 (const MethodInfo* method);
// 0x3e62a50

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TSLaunch1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030f9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TSLaunch1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030f9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$__CreatePropertyBinding__TSLaunch2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o* CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TSLaunch2 (const MethodInfo* method);
// 0x3e62af0

CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *
CustomLogic_CustomLogicHumanSoundEnum_Bindings____CreatePropertyBinding__TSLaunch2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *__this;
  
  if (DAT_057030fa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TSLaunch2_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicHumanSoundEnum__object);
    DAT_057030fa = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicHumanSoundEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanSoundEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicHumanSoundEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanSoundEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e62b90

void CustomLogic_CustomLogicHumanSoundEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057030fb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Death4");
    il2cpp_init_method_metadata(&"AHSSGunShotDouble2");
    il2cpp_init_method_metadata(&"AHSSNape2Var1");
    il2cpp_init_method_metadata(&"TSLaunch2");
    il2cpp_init_method_metadata(&"AHSSNape1Var1");
    il2cpp_init_method_metadata(&"BladeNape1Var2");
    il2cpp_init_method_metadata(&"BladeNape3Var1");
    il2cpp_init_method_metadata(&"BladeNape4Var1");
    il2cpp_init_method_metadata(&"ThunderspearLaunch");
    il2cpp_init_method_metadata(&"GasEnd");
    il2cpp_init_method_metadata(&"NoGas");
    il2cpp_init_method_metadata(&"NapeHit");
    il2cpp_init_method_metadata(&"Footstep1");
    il2cpp_init_method_metadata(&"GunExplode");
    il2cpp_init_method_metadata(&"GasStart");
    il2cpp_init_method_metadata(&"BladeSwing2");
    il2cpp_init_method_metadata(&"AHSSNape3Var1");
    il2cpp_init_method_metadata(&"BladeHit");
    il2cpp_init_method_metadata(&"HookImpact");
    il2cpp_init_method_metadata(&"AHSSGunShot1");
    il2cpp_init_method_metadata(&"Death3");
    il2cpp_init_method_metadata(&"Death1");
    il2cpp_init_method_metadata(&"BladeSwing3");
    il2cpp_init_method_metadata(&"BladeBreak");
    il2cpp_init_method_metadata(&"AHSSNape1Var2");
    il2cpp_init_method_metadata(&"LimbHit");
    il2cpp_init_method_metadata(&"APGShot1");
    il2cpp_init_method_metadata(&"BladeNape2Var2");
    il2cpp_init_method_metadata(&"Death5");
    il2cpp_init_method_metadata(&"HookRetractRight");
    il2cpp_init_method_metadata(&"BladeSwing1");
    il2cpp_init_method_metadata(&"OldBladeHit");
    il2cpp_init_method_metadata(&"Land");
    il2cpp_init_method_metadata(&"APGShot2");
    il2cpp_init_method_metadata(&"BladeNape1Var1");
    il2cpp_init_method_metadata(&"AHSSGunShotDouble1");
    il2cpp_init_method_metadata(&"BladeSwing4");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"BladeNape1Var3");
    il2cpp_init_method_metadata(&"CrashLand");
    il2cpp_init_method_metadata(&"HookImpactLoud");
    il2cpp_init_method_metadata(&"AHSSGunShot4");
    il2cpp_init_method_metadata(&"Dodge");
    il2cpp_init_method_metadata(&"HookRetractLeft");
    il2cpp_init_method_metadata(&"GunExplodeLoud");
    il2cpp_init_method_metadata(&"AHSSNape3Var2");
    il2cpp_init_method_metadata(&"ReelOut");
    il2cpp_init_method_metadata(&"Refill");
    il2cpp_init_method_metadata(&"Slide");
    il2cpp_init_method_metadata(&"BladeNape2Var1");
    il2cpp_init_method_metadata(&"BladeNape2Var3");
    il2cpp_init_method_metadata(&"BladeNape3Var3");
    il2cpp_init_method_metadata(&"HookLaunch");
    il2cpp_init_method_metadata(&"GasLoop");
    il2cpp_init_method_metadata(&"FlareLaunch");
    il2cpp_init_method_metadata(&"AHSSNape2Var2");
    il2cpp_init_method_metadata(&"Footstep2");
    il2cpp_init_method_metadata(&"Switchback");
    il2cpp_init_method_metadata(&"APGShot4");
    il2cpp_init_method_metadata(&"BladeReloadGround");
    il2cpp_init_method_metadata(&"Death2");
    il2cpp_init_method_metadata(&"APGShot3");
    il2cpp_init_method_metadata(&"BladeNape4Var3");
    il2cpp_init_method_metadata(&"BladeNape4Var2");
    il2cpp_init_method_metadata(&"AHSSGunShot2");
    il2cpp_init_method_metadata(&"GunReload");
    il2cpp_init_method_metadata(&"Checkpoint");
    il2cpp_init_method_metadata(&"BladeReloadAir");
    il2cpp_init_method_metadata(&"OldNapeHit");
    il2cpp_init_method_metadata(&"AHSSGunShot3");
    il2cpp_init_method_metadata(&"WaterSplash");
    il2cpp_init_method_metadata(&"OldBladeSwing");
    il2cpp_init_method_metadata(&"BladeNape3Var2");
    il2cpp_init_method_metadata(&"GasBurst");
    il2cpp_init_method_metadata(&"ReelIn");
    il2cpp_init_method_metadata(&"OldHookLaunch");
    il2cpp_init_method_metadata(&"TSLaunch1");
    DAT_057030fb = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeBreak",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeHit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"OldBladeHit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"NapeHit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LimbHit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"OldNapeHit",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeReloadAir",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeReloadGround",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GunReload",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeSwing1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeSwing2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeSwing3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeSwing4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"OldBladeSwing",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Dodge",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FlareLaunch",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ThunderspearLaunch",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GasBurst",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HookLaunch",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"OldHookLaunch",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HookRetractLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HookRetractRight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HookImpact",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HookImpactLoud",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GasStart",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GasLoop",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GasEnd",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ReelIn",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ReelOut",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CrashLand",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Jump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Land",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"NoGas",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Refill",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Slide",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Footstep1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Footstep2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Death1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Death2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Death3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Death4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Death5",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Checkpoint",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GunExplode",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GunExplodeLoud",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"WaterSplash",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Switchback",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"APGShot1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"APGShot2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"APGShot3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"APGShot4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeNape1Var1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeNape1Var2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeNape1Var3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeNape2Var1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeNape2Var2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeNape2Var3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeNape3Var1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeNape3Var2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeNape3Var3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeNape4Var1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeNape4Var2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BladeNape4Var3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSGunShot1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSGunShot2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSGunShot3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSGunShot4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSGunShotDouble1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSGunShotDouble2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSNape1Var1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSNape1Var2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSNape2Var1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSNape2Var2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSNape3Var1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AHSSNape3Var2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TSLaunch1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TSLaunch2",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeBreak>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeBreak_g____getter_2_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e63630

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeBreak>g____getter_2_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570317e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570317e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanSounds + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanSounds + 0xb8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeHit>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeHit_g____getter_3_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e636a0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeHit>g____getter_3_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570317f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570317f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldBladeHit>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldBladeHit_g____getter_4_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e63710

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__OldBladeHit>g____getter_4_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703180 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703180 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__NapeHit>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__NapeHit_g____getter_5_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e63780

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__NapeHit>g____getter_5_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703181 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703181 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__LimbHit>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__LimbHit_g____getter_6_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e637f0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__LimbHit>g____getter_6_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703182 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703182 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldNapeHit>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldNapeHit_g____getter_7_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e63860

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__OldNapeHit>g____getter_7_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703183 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703183 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeReloadAir>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeReloadAir_g____getter_8_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e638d0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeReloadAir>g____getter_8_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703184 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703184 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeReloadGround>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeReloadGround_g____getter_9_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e63940

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeReloadGround>g____getter_9_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703185 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703185 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GunReload>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunReload_g____getter_10_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e639b0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__GunReload>g____getter_10_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703186 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703186 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing1>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing1_g____getter_11_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e63a20

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeSwing1>g____getter_11_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703187 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703187 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing2>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing2_g____getter_12_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e63a90

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeSwing2>g____getter_12_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703188 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703188 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing3>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing3_g____getter_13_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e63b00

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeSwing3>g____getter_13_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703189 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703189 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeSwing4>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeSwing4_g____getter_14_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e63b70

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeSwing4>g____getter_14_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570318a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570318a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldBladeSwing>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldBladeSwing_g____getter_15_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e63be0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__OldBladeSwing>g____getter_15_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570318b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570318b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Dodge>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_16_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e63c50

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__Dodge>g____getter_16_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570318c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570318c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x70);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__FlareLaunch>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__FlareLaunch_g____getter_17_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e63cc0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__FlareLaunch>g____getter_17_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570318d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570318d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x78);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__ThunderspearLaunch>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ThunderspearLaunch_g____getter_18_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e63d30

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__ThunderspearLaunch>g____getter_18_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570318e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570318e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x80);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasBurst>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasBurst_g____getter_19_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e63da0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__GasBurst>g____getter_19_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570318f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570318f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x88);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookLaunch>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookLaunch_g____getter_20_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e63e10

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__HookLaunch>g____getter_20_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703190 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703190 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x90);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__OldHookLaunch>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__OldHookLaunch_g____getter_21_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e63e80

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__OldHookLaunch>g____getter_21_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703191 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703191 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x98);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookRetractLeft>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookRetractLeft_g____getter_22_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e63ef0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__HookRetractLeft>g____getter_22_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703192 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703192 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xa0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookRetractRight>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookRetractRight_g____getter_23_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e63f60

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__HookRetractRight>g____getter_23_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703193 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703193 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xa8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookImpact>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookImpact_g____getter_24_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e63fd0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__HookImpact>g____getter_24_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703194 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703194 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xb0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__HookImpactLoud>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__HookImpactLoud_g____getter_25_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64040

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__HookImpactLoud>g____getter_25_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703195 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703195 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xb8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasStart>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasStart_g____getter_26_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e640b0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__GasStart>g____getter_26_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703196 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703196 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xc0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasLoop>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasLoop_g____getter_27_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64120

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__GasLoop>g____getter_27_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703197 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703197 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 200);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 200);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GasEnd>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GasEnd_g____getter_28_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64190

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__GasEnd>g____getter_28_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703198 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703198 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xd0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__ReelIn>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ReelIn_g____getter_29_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64200

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__ReelIn>g____getter_29_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703199 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703199 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xd8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__ReelOut>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__ReelOut_g____getter_30_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64270

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__ReelOut>g____getter_30_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570319a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570319a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xe0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__CrashLand>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__CrashLand_g____getter_31_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e642e0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__CrashLand>g____getter_31_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570319b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570319b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xe8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_32_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64350

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__Jump>g____getter_32_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570319c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570319c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xf0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Land_g____getter_33_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e643c0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__Land>g____getter_33_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570319d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570319d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xf8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xf8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__NoGas>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__NoGas_g____getter_34_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64430

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__NoGas>g____getter_34_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570319e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570319e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x100);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x100);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Refill>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_35_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e644a0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__Refill>g____getter_35_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570319f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570319f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x108);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x108);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Slide>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_36_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64510

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__Slide>g____getter_36_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031a0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031a0 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x110);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x110);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep1>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Footstep1_g____getter_37_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64580

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__Footstep1>g____getter_37_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031a1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031a1 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x118);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x118);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Footstep2>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Footstep2_g____getter_38_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e645f0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__Footstep2>g____getter_38_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031a2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031a2 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x120);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x120);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death1>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death1_g____getter_39_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64660

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__Death1>g____getter_39_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031a3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031a3 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x128);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x128);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death2>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death2_g____getter_40_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e646d0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__Death2>g____getter_40_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031a4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031a4 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x130);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x130);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death3>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death3_g____getter_41_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64740

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__Death3>g____getter_41_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031a5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031a5 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x138);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x138);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death4>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death4_g____getter_42_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e647b0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__Death4>g____getter_42_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031a6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031a6 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x140);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x140);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Death5>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Death5_g____getter_43_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64820

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__Death5>g____getter_43_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031a7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031a7 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x148);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x148);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Checkpoint>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Checkpoint_g____getter_44_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64890

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__Checkpoint>g____getter_44_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031a8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031a8 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x150);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x150);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GunExplode>g____getter|45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunExplode_g____getter_45_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64900

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__GunExplode>g____getter_45_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031a9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031a9 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x158);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x158);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__GunExplodeLoud>g____getter|46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__GunExplodeLoud_g____getter_46_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64970

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__GunExplodeLoud>g____getter_46_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031aa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031aa = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x160);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x160);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__WaterSplash>g____getter|47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__WaterSplash_g____getter_47_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e649e0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__WaterSplash>g____getter_47_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031ab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031ab = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x168);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x168);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__Switchback>g____getter|48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__Switchback_g____getter_48_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64a50

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__Switchback>g____getter_48_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031ac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031ac = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x170);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x170);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot1>g____getter|49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot1_g____getter_49_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64ac0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__APGShot1>g____getter_49_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031ad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031ad = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x178);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x178);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot2>g____getter|50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot2_g____getter_50_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64b30

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__APGShot2>g____getter_50_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031ae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031ae = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x180);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x180);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot3>g____getter|51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot3_g____getter_51_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64ba0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__APGShot3>g____getter_51_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031af == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031af = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x188);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x188);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__APGShot4>g____getter|52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__APGShot4_g____getter_52_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64c10

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__APGShot4>g____getter_52_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031b0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031b0 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 400);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 400);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape1Var1>g____getter|53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var1_g____getter_53_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64c80

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeNape1Var1>g____getter_53_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031b1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031b1 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x198);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x198);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape1Var2>g____getter|54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var2_g____getter_54_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64cf0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeNape1Var2>g____getter_54_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031b2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031b2 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1a0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1a0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape1Var3>g____getter|55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape1Var3_g____getter_55_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64d60

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeNape1Var3>g____getter_55_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031b3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031b3 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1a8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1a8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape2Var1>g____getter|56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var1_g____getter_56_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64dd0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeNape2Var1>g____getter_56_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031b4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031b4 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1b0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1b0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape2Var2>g____getter|57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var2_g____getter_57_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64e40

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeNape2Var2>g____getter_57_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031b5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031b5 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1b8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1b8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape2Var3>g____getter|58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape2Var3_g____getter_58_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64eb0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeNape2Var3>g____getter_58_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031b6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031b6 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1c0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1c0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape3Var1>g____getter|59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var1_g____getter_59_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64f20

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeNape3Var1>g____getter_59_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031b7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031b7 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1c8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1c8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape3Var2>g____getter|60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var2_g____getter_60_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e64f90

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeNape3Var2>g____getter_60_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031b8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031b8 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1d0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1d0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape3Var3>g____getter|61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape3Var3_g____getter_61_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e65000

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeNape3Var3>g____getter_61_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031b9 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1d8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1d8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape4Var1>g____getter|62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var1_g____getter_62_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e65070

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeNape4Var1>g____getter_62_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031ba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031ba = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1e0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1e0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape4Var2>g____getter|63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var2_g____getter_63_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e650e0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeNape4Var2>g____getter_63_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031bb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031bb = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1e8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1e8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__BladeNape4Var3>g____getter|64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__BladeNape4Var3_g____getter_64_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e65150

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__BladeNape4Var3>g____getter_64_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031bc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031bc = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1f0);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1f0);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot1>g____getter|65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot1_g____getter_65_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e651c0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__AHSSGunShot1>g____getter_65_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031bd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031bd = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1f8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1f8);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot2>g____getter|66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot2_g____getter_66_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e65230

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__AHSSGunShot2>g____getter_66_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031be == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031be = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x200);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x200);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot3>g____getter|67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot3_g____getter_67_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e652a0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__AHSSGunShot3>g____getter_67_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031bf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031bf = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x208);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x208);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShot4>g____getter|68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShot4_g____getter_68_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e65310

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__AHSSGunShot4>g____getter_68_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031c0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031c0 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x210);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x210);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShotDouble1>g____getter|69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShotDouble1_g____getter_69_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e65380

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__AHSSGunShotDouble1>g____getter_69_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031c1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031c1 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x218);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x218);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSGunShotDouble2>g____getter|70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSGunShotDouble2_g____getter_70_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e653f0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__AHSSGunShotDouble2>g____getter_70_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031c2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031c2 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x220);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x220);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape1Var1>g____getter|71_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape1Var1_g____getter_71_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e65460

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__AHSSNape1Var1>g____getter_71_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031c3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031c3 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x228);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x228);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape1Var2>g____getter|72_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape1Var2_g____getter_72_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e654d0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__AHSSNape1Var2>g____getter_72_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031c4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031c4 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x230);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x230);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape2Var1>g____getter|73_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape2Var1_g____getter_73_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e65540

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__AHSSNape2Var1>g____getter_73_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031c5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031c5 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x238);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x238);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape2Var2>g____getter|74_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape2Var2_g____getter_74_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e655b0

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__AHSSNape2Var2>g____getter_74_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031c6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031c6 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x240);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x240);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape3Var1>g____getter|75_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape3Var1_g____getter_75_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e65620

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__AHSSNape3Var1>g____getter_75_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031c7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031c7 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x248);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x248);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__AHSSNape3Var2>g____getter|76_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__AHSSNape3Var2_g____getter_76_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e65690

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__AHSSNape3Var2>g____getter_76_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031c8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031c8 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x250);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x250);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__TSLaunch1>g____getter|77_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TSLaunch1_g____getter_77_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e65700

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__TSLaunch1>g____getter_77_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031c9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031c9 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 600);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 600);
}


// CustomLogic.CustomLogicHumanSoundEnum.Bindings$$<__CreatePropertyBinding__TSLaunch2>g____getter|78_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanSoundEnum_Bindings_____CreatePropertyBinding__TSLaunch2_g____getter_78_0 (CustomLogic_CustomLogicHumanSoundEnum_o* __i, const MethodInfo* method);
// 0x3e65770

Il2CppObject *
CustomLogic_CustomLogicHumanSoundEnum_Bindings__<__CreatePropertyBinding__TSLaunch2>g____getter_78_0
          (CustomLogic_CustomLogicHumanSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057031ca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057031ca = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x260);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x260);
}


// CustomLogic.CustomLogicHumanSoundEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanSoundEnum___ctor (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x3e5bbc0

void CustomLogic_CustomLogicHumanSoundEnum___ctor
               (CustomLogic_CustomLogicHumanSoundEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570305d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_0570305d = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeBreak
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeBreak (const MethodInfo* method);
// 0x3e5bc30

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeBreak(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570305e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570305e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_HumanSounds + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_HumanSounds + 0xb8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeHit (const MethodInfo* method);
// 0x3e5bca0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeHit(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570305f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570305f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_OldBladeHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_OldBladeHit (const MethodInfo* method);
// 0x3e5bd10

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_OldBladeHit(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703060 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703060 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_NapeHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_NapeHit (const MethodInfo* method);
// 0x3e5bd80

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_NapeHit(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703061 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703061 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_LimbHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_LimbHit (const MethodInfo* method);
// 0x3e5bdf0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_LimbHit(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703062 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703062 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_OldNapeHit
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_OldNapeHit (const MethodInfo* method);
// 0x3e5be60

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_OldNapeHit(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703063 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703063 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeReloadAir
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeReloadAir (const MethodInfo* method);
// 0x3e5bed0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeReloadAir(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703064 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703064 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeReloadGround
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeReloadGround (const MethodInfo* method);
// 0x3e5bf40

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeReloadGround(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703065 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703065 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GunReload
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GunReload (const MethodInfo* method);
// 0x3e5bfb0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GunReload(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703066 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703066 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing1 (const MethodInfo* method);
// 0x3e5c020

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703067 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703067 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x48);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing2 (const MethodInfo* method);
// 0x3e5c090

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703068 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703068 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x50);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing3 (const MethodInfo* method);
// 0x3e5c100

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing3(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703069 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703069 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x58);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeSwing4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing4 (const MethodInfo* method);
// 0x3e5c170

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeSwing4(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570306a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570306a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x60);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_OldBladeSwing
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_OldBladeSwing (const MethodInfo* method);
// 0x3e5c1e0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_OldBladeSwing(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570306b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570306b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Dodge
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Dodge (const MethodInfo* method);
// 0x3e5c250

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Dodge(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570306c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570306c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x70);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x70);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_FlareLaunch
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_FlareLaunch (const MethodInfo* method);
// 0x3e5c2c0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_FlareLaunch(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570306d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570306d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x78);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x78);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_ThunderspearLaunch
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_ThunderspearLaunch (const MethodInfo* method);
// 0x3e5c330

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_ThunderspearLaunch(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570306e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570306e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x80);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x80);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GasBurst
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GasBurst (const MethodInfo* method);
// 0x3e5c3a0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GasBurst(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570306f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570306f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x88);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x88);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookLaunch
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookLaunch (const MethodInfo* method);
// 0x3e5c410

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookLaunch(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703070 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703070 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x90);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x90);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_OldHookLaunch
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_OldHookLaunch (const MethodInfo* method);
// 0x3e5c480

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_OldHookLaunch(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703071 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703071 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x98);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x98);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookRetractLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookRetractLeft (const MethodInfo* method);
// 0x3e5c4f0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookRetractLeft(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703072 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703072 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xa0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xa0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookRetractRight
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookRetractRight (const MethodInfo* method);
// 0x3e5c560

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookRetractRight(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703073 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703073 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xa8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xa8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookImpact
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookImpact (const MethodInfo* method);
// 0x3e5c5d0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookImpact(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703074 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703074 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xb0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xb0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_HookImpactLoud
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_HookImpactLoud (const MethodInfo* method);
// 0x3e5c640

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_HookImpactLoud(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703075 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703075 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xb8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xb8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GasStart
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GasStart (const MethodInfo* method);
// 0x3e5c6b0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GasStart(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703076 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703076 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xc0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xc0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GasLoop
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GasLoop (const MethodInfo* method);
// 0x3e5c720

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GasLoop(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703077 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703077 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 200);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 200);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GasEnd
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GasEnd (const MethodInfo* method);
// 0x3e5c790

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GasEnd(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703078 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703078 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xd0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xd0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_ReelIn
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_ReelIn (const MethodInfo* method);
// 0x3e5c800

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_ReelIn(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703079 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703079 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xd8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xd8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_ReelOut
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_ReelOut (const MethodInfo* method);
// 0x3e5c870

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_ReelOut(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570307a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570307a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xe0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xe0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_CrashLand
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_CrashLand (const MethodInfo* method);
// 0x3e5c8e0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_CrashLand(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570307b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570307b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xe8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xe8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Jump (const MethodInfo* method);
// 0x3e5c950

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Jump(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570307c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570307c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xf0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xf0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Land (const MethodInfo* method);
// 0x3e5c9c0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Land(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570307d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570307d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xf8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0xf8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_NoGas
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_NoGas (const MethodInfo* method);
// 0x3e5ca30

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_NoGas(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570307e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570307e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x100);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x100);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Refill
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Refill (const MethodInfo* method);
// 0x3e5caa0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Refill(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570307f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570307f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x108);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x108);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Slide
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Slide (const MethodInfo* method);
// 0x3e5cb10

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Slide(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703080 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703080 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x110);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x110);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Footstep1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Footstep1 (const MethodInfo* method);
// 0x3e5cb80

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Footstep1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703081 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703081 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x118);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x118);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Footstep2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Footstep2 (const MethodInfo* method);
// 0x3e5cbf0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Footstep2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703082 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703082 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x120);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x120);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death1 (const MethodInfo* method);
// 0x3e5cc60

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703083 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703083 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x128);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x128);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death2 (const MethodInfo* method);
// 0x3e5ccd0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703084 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703084 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x130);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x130);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death3 (const MethodInfo* method);
// 0x3e5cd40

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death3(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703085 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703085 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x138);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x138);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death4 (const MethodInfo* method);
// 0x3e5cdb0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death4(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703086 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703086 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x140);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x140);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Death5
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Death5 (const MethodInfo* method);
// 0x3e5ce20

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Death5(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703087 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703087 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x148);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x148);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Checkpoint
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Checkpoint (const MethodInfo* method);
// 0x3e5ce90

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Checkpoint(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703088 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703088 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x150);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x150);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GunExplode
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GunExplode (const MethodInfo* method);
// 0x3e5cf00

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GunExplode(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703089 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703089 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x158);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x158);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_GunExplodeLoud
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_GunExplodeLoud (const MethodInfo* method);
// 0x3e5cf70

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_GunExplodeLoud(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570308a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570308a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x160);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x160);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_WaterSplash
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_WaterSplash (const MethodInfo* method);
// 0x3e5cfe0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_WaterSplash(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570308b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570308b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x168);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x168);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_Switchback
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_Switchback (const MethodInfo* method);
// 0x3e5d050

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_Switchback(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570308c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570308c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x170);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x170);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_APGShot1 (const MethodInfo* method);
// 0x3e5d0c0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_APGShot1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570308d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570308d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x178);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x178);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_APGShot2 (const MethodInfo* method);
// 0x3e5d130

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_APGShot2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570308e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570308e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x180);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x180);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_APGShot3 (const MethodInfo* method);
// 0x3e5d1a0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_APGShot3(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570308f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570308f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x188);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x188);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_APGShot4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_APGShot4 (const MethodInfo* method);
// 0x3e5d210

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_APGShot4(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703090 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703090 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 400);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 400);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape1Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var1 (const MethodInfo* method);
// 0x3e5d280

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703091 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703091 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x198);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x198);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape1Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var2 (const MethodInfo* method);
// 0x3e5d2f0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703092 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703092 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1a0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1a0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape1Var3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var3 (const MethodInfo* method);
// 0x3e5d360

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape1Var3(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703093 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1a8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1a8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape2Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var1 (const MethodInfo* method);
// 0x3e5d3d0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703094 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703094 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1b0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1b0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape2Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var2 (const MethodInfo* method);
// 0x3e5d440

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703095 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703095 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1b8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1b8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape2Var3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var3 (const MethodInfo* method);
// 0x3e5d4b0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape2Var3(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703096 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703096 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1c0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1c0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape3Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var1 (const MethodInfo* method);
// 0x3e5d520

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703097 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703097 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1c8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1c8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape3Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var2 (const MethodInfo* method);
// 0x3e5d590

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703098 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703098 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1d0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1d0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape3Var3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var3 (const MethodInfo* method);
// 0x3e5d600

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape3Var3(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703099 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_05703099 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1d8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1d8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape4Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var1 (const MethodInfo* method);
// 0x3e5d670

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570309a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570309a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1e0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1e0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape4Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var2 (const MethodInfo* method);
// 0x3e5d6e0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570309b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570309b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1e8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1e8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_BladeNape4Var3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var3 (const MethodInfo* method);
// 0x3e5d750

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_BladeNape4Var3(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570309c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570309c = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1f0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1f0);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot1 (const MethodInfo* method);
// 0x3e5d7c0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570309d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570309d = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1f8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x1f8);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot2 (const MethodInfo* method);
// 0x3e5d830

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570309e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570309e = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x200);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x200);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot3
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot3 (const MethodInfo* method);
// 0x3e5d8a0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot3(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570309f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_0570309f = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x208);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x208);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShot4
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot4 (const MethodInfo* method);
// 0x3e5d910

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShot4(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057030a0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057030a0 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x210);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x210);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShotDouble1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShotDouble1 (const MethodInfo* method);
// 0x3e5d980

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShotDouble1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057030a1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057030a1 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x218);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x218);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSGunShotDouble2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShotDouble2 (const MethodInfo* method);
// 0x3e5d9f0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSGunShotDouble2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057030a2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057030a2 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x220);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x220);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape1Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape1Var1 (const MethodInfo* method);
// 0x3e5da60

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape1Var1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057030a3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057030a3 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x228);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x228);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape1Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape1Var2 (const MethodInfo* method);
// 0x3e5dad0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape1Var2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057030a4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057030a4 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x230);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x230);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape2Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape2Var1 (const MethodInfo* method);
// 0x3e5db40

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape2Var1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057030a5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057030a5 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x238);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x238);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape2Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape2Var2 (const MethodInfo* method);
// 0x3e5dbb0

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape2Var2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057030a6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057030a6 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x240);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x240);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape3Var1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape3Var1 (const MethodInfo* method);
// 0x3e5dc20

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape3Var1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057030a7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057030a7 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x248);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x248);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_AHSSNape3Var2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape3Var2 (const MethodInfo* method);
// 0x3e5dc90

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_AHSSNape3Var2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057030a8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057030a8 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x250);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x250);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_TSLaunch1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_TSLaunch1 (const MethodInfo* method);
// 0x3e5dd00

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_TSLaunch1(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057030a9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057030a9 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 600);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 600);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_TSLaunch2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_TSLaunch2 (const MethodInfo* method);
// 0x3e5dd70

System_String_o * CustomLogic_CustomLogicHumanSoundEnum__get_TSLaunch2(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057030aa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    DAT_057030aa = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x260);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x260);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanSoundEnum__get_ClassName (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x3e5dde0

System_String_o *
CustomLogic_CustomLogicHumanSoundEnum__get_ClassName
          (CustomLogic_CustomLogicHumanSoundEnum_o *__this,MethodInfo *method)

{
  if (DAT_057030ab == '\0') {
    il2cpp_init_method_metadata(&"HumanSoundEnum");
    DAT_057030ab = '\x01';
  }
  return "HumanSoundEnum";
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHumanSoundEnum__get_IsAbstract (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x3e5de10

bool_conflict
CustomLogic_CustomLogicHumanSoundEnum__get_IsAbstract
          (CustomLogic_CustomLogicHumanSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHumanSoundEnum__get_IsStatic (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x3e5de20

bool_conflict
CustomLogic_CustomLogicHumanSoundEnum__get_IsStatic
          (CustomLogic_CustomLogicHumanSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHumanSoundEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHumanSoundEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHumanSoundEnum_o* __this, const MethodInfo* method);
// 0x3e5de30

bool_conflict
CustomLogic_CustomLogicHumanSoundEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicHumanSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


